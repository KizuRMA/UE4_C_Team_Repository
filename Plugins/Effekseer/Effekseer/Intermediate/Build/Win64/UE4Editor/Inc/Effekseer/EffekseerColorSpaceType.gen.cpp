// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Effekseer/Public/EffekseerColorSpaceType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEffekseerColorSpaceType() {}
// Cross Module References
	EFFEKSEER_API UEnum* Z_Construct_UEnum_Effekseer_EEffekseerColorSpaceType();
	UPackage* Z_Construct_UPackage__Script_Effekseer();
// End Cross Module References
	static UEnum* EEffekseerColorSpaceType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Effekseer_EEffekseerColorSpaceType, Z_Construct_UPackage__Script_Effekseer(), TEXT("EEffekseerColorSpaceType"));
		}
		return Singleton;
	}
	template<> EFFEKSEER_API UEnum* StaticEnum<EEffekseerColorSpaceType>()
	{
		return EEffekseerColorSpaceType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEffekseerColorSpaceType(EEffekseerColorSpaceType_StaticEnum, TEXT("/Script/Effekseer"), TEXT("EEffekseerColorSpaceType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Effekseer_EEffekseerColorSpaceType_Hash() { return 1472337389U; }
	UEnum* Z_Construct_UEnum_Effekseer_EEffekseerColorSpaceType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Effekseer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEffekseerColorSpaceType"), 0, Get_Z_Construct_UEnum_Effekseer_EEffekseerColorSpaceType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEffekseerColorSpaceType::Gamma", (int64)EEffekseerColorSpaceType::Gamma },
				{ "EEffekseerColorSpaceType::Linear", (int64)EEffekseerColorSpaceType::Linear },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Gamma.Name", "EEffekseerColorSpaceType::Gamma" },
				{ "Linear.Name", "EEffekseerColorSpaceType::Linear" },
				{ "ModuleRelativePath", "Public/EffekseerColorSpaceType.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Effekseer,
				nullptr,
				"EEffekseerColorSpaceType",
				"EEffekseerColorSpaceType",
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
