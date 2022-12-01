// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StrixSDK/Public/StrixErrors.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStrixErrors() {}
// Cross Module References
	STRIXSDK_API UEnum* Z_Construct_UEnum_StrixSDK_EStrixErrorCategory();
	UPackage* Z_Construct_UPackage__Script_StrixSDK();
// End Cross Module References
	static UEnum* EStrixErrorCategory_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_StrixSDK_EStrixErrorCategory, Z_Construct_UPackage__Script_StrixSDK(), TEXT("EStrixErrorCategory"));
		}
		return Singleton;
	}
	template<> STRIXSDK_API UEnum* StaticEnum<EStrixErrorCategory>()
	{
		return EStrixErrorCategory_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EStrixErrorCategory(EStrixErrorCategory_StaticEnum, TEXT("/Script/StrixSDK"), TEXT("EStrixErrorCategory"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_StrixSDK_EStrixErrorCategory_Hash() { return 3745139923U; }
	UEnum* Z_Construct_UEnum_StrixSDK_EStrixErrorCategory()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_StrixSDK();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EStrixErrorCategory"), 0, Get_Z_Construct_UEnum_StrixSDK_EStrixErrorCategory_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EStrixErrorCategory::StrixNet", (int64)EStrixErrorCategory::StrixNet },
				{ "EStrixErrorCategory::StrixClient", (int64)EStrixErrorCategory::StrixClient },
				{ "EStrixErrorCategory::External", (int64)EStrixErrorCategory::External },
				{ "EStrixErrorCategory::StrixUESDK", (int64)EStrixErrorCategory::StrixUESDK },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "External.DisplayName", "External" },
				{ "External.Name", "EStrixErrorCategory::External" },
				{ "ModuleRelativePath", "Public/StrixErrors.h" },
				{ "StrixClient.DisplayName", "StrixClient" },
				{ "StrixClient.Name", "EStrixErrorCategory::StrixClient" },
				{ "StrixNet.DisplayName", "StrixNet" },
				{ "StrixNet.Name", "EStrixErrorCategory::StrixNet" },
				{ "StrixUESDK.DisplayName", "StrixUESDK" },
				{ "StrixUESDK.Name", "EStrixErrorCategory::StrixUESDK" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_StrixSDK,
				nullptr,
				"EStrixErrorCategory",
				"EStrixErrorCategory",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
