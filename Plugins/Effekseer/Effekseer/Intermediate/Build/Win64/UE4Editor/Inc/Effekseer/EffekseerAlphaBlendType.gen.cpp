// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Effekseer/Public/EffekseerAlphaBlendType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEffekseerAlphaBlendType() {}
// Cross Module References
	EFFEKSEER_API UEnum* Z_Construct_UEnum_Effekseer_EEffekseerAlphaBlendType();
	UPackage* Z_Construct_UPackage__Script_Effekseer();
// End Cross Module References
	static UEnum* EEffekseerAlphaBlendType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Effekseer_EEffekseerAlphaBlendType, Z_Construct_UPackage__Script_Effekseer(), TEXT("EEffekseerAlphaBlendType"));
		}
		return Singleton;
	}
	template<> EFFEKSEER_API UEnum* StaticEnum<EEffekseerAlphaBlendType>()
	{
		return EEffekseerAlphaBlendType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEffekseerAlphaBlendType(EEffekseerAlphaBlendType_StaticEnum, TEXT("/Script/Effekseer"), TEXT("EEffekseerAlphaBlendType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Effekseer_EEffekseerAlphaBlendType_Hash() { return 4019806774U; }
	UEnum* Z_Construct_UEnum_Effekseer_EEffekseerAlphaBlendType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Effekseer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEffekseerAlphaBlendType"), 0, Get_Z_Construct_UEnum_Effekseer_EEffekseerAlphaBlendType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEffekseerAlphaBlendType::Opacity", (int64)EEffekseerAlphaBlendType::Opacity },
				{ "EEffekseerAlphaBlendType::Blend", (int64)EEffekseerAlphaBlendType::Blend },
				{ "EEffekseerAlphaBlendType::Add", (int64)EEffekseerAlphaBlendType::Add },
				{ "EEffekseerAlphaBlendType::Sub", (int64)EEffekseerAlphaBlendType::Sub },
				{ "EEffekseerAlphaBlendType::Mul", (int64)EEffekseerAlphaBlendType::Mul },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Add.Name", "EEffekseerAlphaBlendType::Add" },
				{ "Blend.Name", "EEffekseerAlphaBlendType::Blend" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EffekseerAlphaBlendType.h" },
				{ "Mul.Name", "EEffekseerAlphaBlendType::Mul" },
				{ "Opacity.Name", "EEffekseerAlphaBlendType::Opacity" },
				{ "Sub.Name", "EEffekseerAlphaBlendType::Sub" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Effekseer,
				nullptr,
				"EEffekseerAlphaBlendType",
				"EEffekseerAlphaBlendType",
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
