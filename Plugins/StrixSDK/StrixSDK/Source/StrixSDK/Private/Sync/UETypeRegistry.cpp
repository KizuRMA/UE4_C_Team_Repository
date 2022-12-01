/*
 * Copyright 2019 Soft Gear Co., Ltd. All Rights Reserved.
 *
 * See https://strixengine.com/en/terms-of-use/ for full license details.
 */
#include "Sync/UETypeRegistry.h"

#include "CoreUObject.h"
#include "UELogHandler.h"

const FString UETypeRegistry::ConfigSectionName = "Strix.Replicator.GameTypes";
const FString UETypeRegistry::OldConfigSectionName = "Strix.Replicator.Types";
const FString UETypeRegistry::DefaultConfigFilename = "DefaultGameStrixTypes.ini";
const FString UETypeRegistry::BackwardsCompatibleConfigFilename = "DefaultGame.ini";
const FString UETypeRegistry::MaxStoredIdConfigKey = "MaxStoredId";

void UETypeRegistry::Init(UGameInstance* gameInstance)
{
	int maxStoredId = 0;
	FString projectConfig = FPaths::Combine(FPaths::ProjectConfigDir(), DefaultConfigFilename);
	if (GConfig->GetInt(*(ConfigSectionName), *(MaxStoredIdConfigKey), maxStoredId, projectConfig))
	{
		for (int i = 1; i <= maxStoredId; ++i)
		{
			FString configLine;
			if (GConfig->GetString(*(ConfigSectionName), *(FString::FromInt(i)), configLine, projectConfig))
			{
				UEClassNetworkObjectSpawnerPtr spawner = CreateClassSpawner(i, gameInstance, configLine);

				if (spawner)
				{
					m_registeredSpawners.insert(std::make_pair(i, spawner));

					if (m_typeIdByPath.Contains(configLine))
					{
						UE_LOG(LogStrix, Warning, TEXT("UETypeRegistry::Init - Duplicate type paths. Replication will not work properly, check the config files!"));
						continue;
					}
					m_typeIdByPath.Add(configLine, i);
				}
			}
		}
	}
	else
	{
		FString oldProjectConfig = FPaths::Combine(FPaths::ProjectConfigDir(), BackwardsCompatibleConfigFilename);
		if (GConfig->GetInt(*(OldConfigSectionName), *(MaxStoredIdConfigKey), maxStoredId, oldProjectConfig))
		{
			UE_LOG(LogStrix, Warning, TEXT("UETypeRegistry::Init - This project uses an older version of the Type ID configuration system"))
			// Loop over old type ID values (deprecated)
			for (int i = 1; i <= maxStoredId; ++i)
			{
				FString configLine;
				if (GConfig->GetString(*(OldConfigSectionName), *(FString::FromInt(i)), configLine, oldProjectConfig))
				{
					UEClassNetworkObjectSpawnerPtr spawner = CreateClassSpawner(i, gameInstance, configLine);

					if (spawner)
					{
						m_registeredSpawners.insert(std::make_pair(i, spawner));

						if (m_typeIdByPath.Contains(configLine))
						{
							UE_LOG(LogStrix, Warning, TEXT("UETypeRegistry::Init - Duplicate type paths. Replication will not work properly, check the config files!"));
							continue;
						}
						m_typeIdByPath.Add(configLine, i);
						WriteSpawnerInformationToConfigs(configLine, i);
					}
				}
			}
		}
	}
	m_maxStoredId = maxStoredId;
}

int UETypeRegistry::AddClassSpawner(std::shared_ptr<UEClassNetworkObjectSpawner> spawner)
{
	if (spawner)
	{
		FString path = spawner->GetActorClass()->GetPathName();

		int typeId = ++m_maxStoredId;
		WriteSpawnerInformationToConfigs(path, typeId);
		spawner->SetTypeId(typeId);

		m_registeredSpawners.insert(std::make_pair(typeId, spawner));
		m_typeIdByPath.Add(path, typeId);
		return typeId;
	}
	return -1;
}

UEClassNetworkObjectSpawnerPtr UETypeRegistry::CreateClassSpawner(int typeId, UGameInstance *gameInstance, const FString& path)
{
	UClass* loadedClass = LoadObject<UClass>(nullptr, *path);

	if (loadedClass && IsValid(loadedClass))
		return std::make_shared<UEClassNetworkObjectSpawner>(typeId, gameInstance, loadedClass);
	else
		return nullptr;
}

strix::client::ingame::object::NetworkObjectSpawnerPtr UETypeRegistry::GetSpawnerByTypeId(int typeId)
{
	auto spawnerIt = m_registeredSpawners.find(typeId);

	if (spawnerIt != m_registeredSpawners.end())
	{
		return spawnerIt->second;
	}
	return nullptr;
}

bool UETypeRegistry::TryGetTypeIdByClassSpawnerPath(FString path, int& result)
{
	FString mapKey = path;
	if (m_typeIdByPath.Contains(mapKey))
	{
		result = m_typeIdByPath[mapKey];
		return true;
	}
	return false;
}

int UETypeRegistry::GetOrStoreTypeIdBySpawnerPathInConfigFile(FString path)
{
	int returnId = 0;
	int maxStoredId = 0;
	// GetConfigFile
	FString projectConfig = FPaths::Combine(FPaths::ProjectConfigDir(), DefaultConfigFilename);
	// Check newConfigFile having any typeid
	if (GConfig->GetInt(*(ConfigSectionName), *(MaxStoredIdConfigKey), maxStoredId, projectConfig))
	{
		FConfigSection* sectionPtr = GConfig->FindConfigFile(projectConfig)->FindOrAddSection(ConfigSectionName);
		if (sectionPtr != nullptr)
		{
			TArray<FName> keys;
			sectionPtr->GetKeys(keys);
			TArray<FString> duplicatedIds;
			int prevId = 0;
			for (int i = 0; i < keys.Num(); i++)
			{
				int currentTypeId = FCString::Atoi(*(keys[i].ToString()));
				if (currentTypeId > 0)
				{
					TArray<FString> values;
					// Get path array which has same typeid
					sectionPtr->MultiFind(keys[i], values);
					if (values.Num() > 0)
					{
						for (int j = 0; j < values.Num(); j++)
						{
							if (currentTypeId != prevId)
							{
								if (j > 0)
								{
									// Add duplicatedIds array.
									UE_LOG(LogStrix, Warning, TEXT("UETypeRegistry::GetOrStoreTypeIdBySpawnerPathInConfigFile it is registered duplicated TypeId. path = %s"), *values[j]);
									duplicatedIds.Add(values[j]);
									sectionPtr->RemoveSingle(keys[i], values[j]);
									continue;
								}
								if (values[j].Equals(path))
								{
									returnId = currentTypeId;
								}
							}
						}

					}
					if (currentTypeId > maxStoredId)
					{
						maxStoredId = currentTypeId;
						UE_LOG(LogStrix, Warning, TEXT("UETypeRegistry::GetOrStoreTypeIdBySpawnerPathInConfigFile CheckNewConfigFile storedId is invalid. Rewrite to %d"), currentTypeId);
					}
					prevId = currentTypeId;
				}
			}
			// Resave duplicatedIds
			for (int i = 0; i < duplicatedIds.Num(); i++)
			{
				UE_LOG(LogStrix, Warning, TEXT("UETypeRegistry::GetOrStoreTypeIdBySpawnerPathInConfigFile WriteSpawnerInformationToConfigs assets : %s"), *duplicatedIds[i]);
				WriteSpawnerInformationToConfigs(duplicatedIds[i], ++maxStoredId);
				if (duplicatedIds[i].Equals(path))
				{
					returnId = maxStoredId;
				}
			}
		}
		if (returnId != 0)
		{
			return returnId;
		}
	}
	else
	{
		//GetOldConfigFile
		int oldStoredId = 0;
		FString oldProjectConfig = FPaths::Combine(FPaths::ProjectConfigDir(), BackwardsCompatibleConfigFilename);
		// Check old config for backwards compatibility (deprecated)
		if (GConfig->GetInt(*(OldConfigSectionName), *(MaxStoredIdConfigKey), oldStoredId, oldProjectConfig))
		{
			FConfigSection* sectionPtr = GConfig->FindConfigFile(oldProjectConfig)->FindOrAddSection(OldConfigSectionName);
			if (sectionPtr != nullptr)
			{
				TArray<FName> keys;
				sectionPtr->GetKeys(keys);
				TArray<FString> duplicatedIds;
				int prevId = 0;
				for (int i = 0; i < keys.Num(); i++)
				{
					UE_LOG(LogStrix, Warning, TEXT("UETypeRegistry::GetOrStoreTypeIdBySpawnerPathInConfigFile CheckOldConfigFile key index = %d"), i);
					int currentTypeId = FCString::Atoi(*keys[i].ToString());
					UE_LOG(LogStrix, Warning, TEXT("UETypeRegistry::GetOrStoreTypeIdBySpawnerPathInConfigFile currentTypeId = %d"), currentTypeId);
					if (currentTypeId > 0)
					{
						TArray<FString> values;
						// Get path array which has same typeid
						sectionPtr->MultiFind(keys[i], values);
						if (values.Num() > 0)
						{
							for (int j = 0; j < values.Num(); j++)
							{
								if (currentTypeId != prevId)
								{
									if (j > 0)
									{
										// Add duplicatedIds array.
										UE_LOG(LogStrix, Warning, TEXT("UETypeRegistry::GetOrStoreTypeIdBySpawnerPathInConfigFile it is registered duplicated TypeId. path = %s"), *values[j]);
										duplicatedIds.Add(values[j]);
										sectionPtr->RemoveSingle(keys[i], values[j]);
										continue;
									}
									WriteSpawnerInformationToConfigs(values[j], currentTypeId);
									if (values[j].Equals(path))
									{
										returnId = currentTypeId;
									}
								}
							}
						}
						if (currentTypeId > oldStoredId)
						{
							oldStoredId = currentTypeId;
							UE_LOG(LogStrix, Warning, TEXT("UETypeRegistry::GetOrStoreTypeIdBySpawnerPathInConfigFile CheckOldConfigFile storedId is invalid. Rewrite to %d"), currentTypeId);
						}
						prevId = currentTypeId;
					}
				}
				// Resave duplicatedIds
				for (int i = 0; i < duplicatedIds.Num(); i++)
				{
					UE_LOG(LogStrix, Warning, TEXT("UETypeRegistry::GetOrStoreTypeIdBySpawnerPathInConfigFile WriteSpawnerInformationToConfigs assets : %s"), *duplicatedIds[i]);
					WriteSpawnerInformationToConfigs(duplicatedIds[i], ++oldStoredId);
					if (duplicatedIds[i].Equals(path))
					{
						returnId = oldStoredId;
					}
				}
			}
		}
		if (returnId != 0)
		{
			return returnId;
		}
		else
		{
			maxStoredId = oldStoredId;
		}
	}

	WriteSpawnerInformationToConfigs(path, ++maxStoredId);
	UE_LOG(LogStrix, Warning, TEXT("UETypeRegistry::GetOrStoreTypeIdBySpawnerPathInConfigFile there are no saved typeId and return %d"), maxStoredId);
	return maxStoredId;
}

void UETypeRegistry::WriteSpawnerInformationToConfigs(const FString& path, int currentId)
{
	FString projectConfig = FPaths::Combine(FPaths::ProjectConfigDir(), DefaultConfigFilename);

	GConfig->SetInt(*(ConfigSectionName), *(MaxStoredIdConfigKey), currentId, projectConfig);
	GConfig->SetString(*(ConfigSectionName), *(FString::FromInt(currentId)), *(path), projectConfig);
	GConfig->Flush(false, projectConfig);
}
