// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Effekseer/Public/EffekseerEffect.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEffekseerEffect() {}
// Cross Module References
	EFFEKSEER_API UScriptStruct* Z_Construct_UScriptStruct_FSoftParticleParameter();
	UPackage* Z_Construct_UPackage__Script_Effekseer();
	EFFEKSEER_API UScriptStruct* Z_Construct_UScriptStruct_FFalloffParameter();
	EFFEKSEER_API UScriptStruct* Z_Construct_UScriptStruct_FEdgeParameters();
	EFFEKSEER_API UScriptStruct* Z_Construct_UScriptStruct_FFlipbookParameters();
	EFFEKSEER_API UClass* Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_NoRegister();
	EFFEKSEER_API UClass* Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	EFFEKSEER_API UEnum* Z_Construct_UEnum_Effekseer_EEffekseerAlphaBlendType();
	EFFEKSEER_API UClass* Z_Construct_UClass_UEffekseerMaterial_NoRegister();
	EFFEKSEER_API UClass* Z_Construct_UClass_UEffekseerEffect_NoRegister();
	EFFEKSEER_API UClass* Z_Construct_UClass_UEffekseerEffect();
	EFFEKSEER_API UClass* Z_Construct_UClass_UEFfekseerProceduralModel_NoRegister();
	EFFEKSEER_API UClass* Z_Construct_UClass_UEffekseerModel_NoRegister();
	EFFEKSEER_API UClass* Z_Construct_UClass_UEffekseerCurve_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
// End Cross Module References
class UScriptStruct* FSoftParticleParameter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EFFEKSEER_API uint32 Get_Z_Construct_UScriptStruct_FSoftParticleParameter_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoftParticleParameter, Z_Construct_UPackage__Script_Effekseer(), TEXT("SoftParticleParameter"), sizeof(FSoftParticleParameter), Get_Z_Construct_UScriptStruct_FSoftParticleParameter_Hash());
	}
	return Singleton;
}
template<> EFFEKSEER_API UScriptStruct* StaticStruct<FSoftParticleParameter>()
{
	return FSoftParticleParameter::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSoftParticleParameter(FSoftParticleParameter::StaticStruct, TEXT("/Script/Effekseer"), TEXT("SoftParticleParameter"), false, nullptr, nullptr);
static struct FScriptStruct_Effekseer_StaticRegisterNativesFSoftParticleParameter
{
	FScriptStruct_Effekseer_StaticRegisterNativesFSoftParticleParameter()
	{
		UScriptStruct::DeferCppStructOps<FSoftParticleParameter>(FName(TEXT("SoftParticleParameter")));
	}
} ScriptStruct_Effekseer_StaticRegisterNativesFSoftParticleParameter;
	struct Z_Construct_UScriptStruct_FSoftParticleParameter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoftParticleParameter_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EffekseerEffect.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSoftParticleParameter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoftParticleParameter>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoftParticleParameter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Effekseer,
		nullptr,
		&NewStructOps,
		"SoftParticleParameter",
		sizeof(FSoftParticleParameter),
		alignof(FSoftParticleParameter),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSoftParticleParameter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoftParticleParameter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSoftParticleParameter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSoftParticleParameter_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Effekseer();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SoftParticleParameter"), sizeof(FSoftParticleParameter), Get_Z_Construct_UScriptStruct_FSoftParticleParameter_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSoftParticleParameter_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSoftParticleParameter_Hash() { return 2497631740U; }
class UScriptStruct* FFalloffParameter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EFFEKSEER_API uint32 Get_Z_Construct_UScriptStruct_FFalloffParameter_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFalloffParameter, Z_Construct_UPackage__Script_Effekseer(), TEXT("FalloffParameter"), sizeof(FFalloffParameter), Get_Z_Construct_UScriptStruct_FFalloffParameter_Hash());
	}
	return Singleton;
}
template<> EFFEKSEER_API UScriptStruct* StaticStruct<FFalloffParameter>()
{
	return FFalloffParameter::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFalloffParameter(FFalloffParameter::StaticStruct, TEXT("/Script/Effekseer"), TEXT("FalloffParameter"), false, nullptr, nullptr);
static struct FScriptStruct_Effekseer_StaticRegisterNativesFFalloffParameter
{
	FScriptStruct_Effekseer_StaticRegisterNativesFFalloffParameter()
	{
		UScriptStruct::DeferCppStructOps<FFalloffParameter>(FName(TEXT("FalloffParameter")));
	}
} ScriptStruct_Effekseer_StaticRegisterNativesFFalloffParameter;
	struct Z_Construct_UScriptStruct_FFalloffParameter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFalloffParameter_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EffekseerEffect.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFalloffParameter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFalloffParameter>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFalloffParameter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Effekseer,
		nullptr,
		&NewStructOps,
		"FalloffParameter",
		sizeof(FFalloffParameter),
		alignof(FFalloffParameter),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFalloffParameter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFalloffParameter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFalloffParameter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFalloffParameter_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Effekseer();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FalloffParameter"), sizeof(FFalloffParameter), Get_Z_Construct_UScriptStruct_FFalloffParameter_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFalloffParameter_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFalloffParameter_Hash() { return 4284680715U; }
class UScriptStruct* FEdgeParameters::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EFFEKSEER_API uint32 Get_Z_Construct_UScriptStruct_FEdgeParameters_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEdgeParameters, Z_Construct_UPackage__Script_Effekseer(), TEXT("EdgeParameters"), sizeof(FEdgeParameters), Get_Z_Construct_UScriptStruct_FEdgeParameters_Hash());
	}
	return Singleton;
}
template<> EFFEKSEER_API UScriptStruct* StaticStruct<FEdgeParameters>()
{
	return FEdgeParameters::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEdgeParameters(FEdgeParameters::StaticStruct, TEXT("/Script/Effekseer"), TEXT("EdgeParameters"), false, nullptr, nullptr);
static struct FScriptStruct_Effekseer_StaticRegisterNativesFEdgeParameters
{
	FScriptStruct_Effekseer_StaticRegisterNativesFEdgeParameters()
	{
		UScriptStruct::DeferCppStructOps<FEdgeParameters>(FName(TEXT("EdgeParameters")));
	}
} ScriptStruct_Effekseer_StaticRegisterNativesFEdgeParameters;
	struct Z_Construct_UScriptStruct_FEdgeParameters_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdgeParameters_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EffekseerEffect.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEdgeParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEdgeParameters>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEdgeParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Effekseer,
		nullptr,
		&NewStructOps,
		"EdgeParameters",
		sizeof(FEdgeParameters),
		alignof(FEdgeParameters),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEdgeParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdgeParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEdgeParameters()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEdgeParameters_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Effekseer();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EdgeParameters"), sizeof(FEdgeParameters), Get_Z_Construct_UScriptStruct_FEdgeParameters_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEdgeParameters_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEdgeParameters_Hash() { return 2770324115U; }
class UScriptStruct* FFlipbookParameters::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EFFEKSEER_API uint32 Get_Z_Construct_UScriptStruct_FFlipbookParameters_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFlipbookParameters, Z_Construct_UPackage__Script_Effekseer(), TEXT("FlipbookParameters"), sizeof(FFlipbookParameters), Get_Z_Construct_UScriptStruct_FFlipbookParameters_Hash());
	}
	return Singleton;
}
template<> EFFEKSEER_API UScriptStruct* StaticStruct<FFlipbookParameters>()
{
	return FFlipbookParameters::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFlipbookParameters(FFlipbookParameters::StaticStruct, TEXT("/Script/Effekseer"), TEXT("FlipbookParameters"), false, nullptr, nullptr);
static struct FScriptStruct_Effekseer_StaticRegisterNativesFFlipbookParameters
{
	FScriptStruct_Effekseer_StaticRegisterNativesFFlipbookParameters()
	{
		UScriptStruct::DeferCppStructOps<FFlipbookParameters>(FName(TEXT("FlipbookParameters")));
	}
} ScriptStruct_Effekseer_StaticRegisterNativesFFlipbookParameters;
	struct Z_Construct_UScriptStruct_FFlipbookParameters_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlipbookParameters_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EffekseerEffect.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFlipbookParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFlipbookParameters>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFlipbookParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Effekseer,
		nullptr,
		&NewStructOps,
		"FlipbookParameters",
		sizeof(FFlipbookParameters),
		alignof(FFlipbookParameters),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFlipbookParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlipbookParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFlipbookParameters()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFlipbookParameters_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Effekseer();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FlipbookParameters"), sizeof(FFlipbookParameters), Get_Z_Construct_UScriptStruct_FFlipbookParameters_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFlipbookParameters_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFlipbookParameters_Hash() { return 3196244117U; }
	void UEffekseerEffectMaterialParameterHolder::StaticRegisterNativesUEffekseerEffectMaterialParameterHolder()
	{
	}
	UClass* Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_NoRegister()
	{
		return UEffekseerEffectMaterialParameterHolder::StaticClass();
	}
	struct Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureAddressType_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TextureAddressType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlphaTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AlphaTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlphaTextureAddressType_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AlphaTextureAddressType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UVDistortionTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UVDistortionTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UVDistortionTextureAddressType_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UVDistortionTextureAddressType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlendTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendTextureAddress_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BlendTextureAddress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendAlphaTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlendAlphaTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendAlphaTextureAddress_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BlendAlphaTextureAddress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendUVDistortionTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlendUVDistortionTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendUVDistortionTextureAddress_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BlendUVDistortionTextureAddress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlipbookParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FlipbookParams;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UVDistortionIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UVDistortionIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureBlendType_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TextureBlendType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendUVDistortionIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendUVDistortionIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableFalloff_MetaData[];
#endif
		static void NewProp_EnableFalloff_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableFalloff;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FalloffParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FalloffParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmissiveScaling_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EmissiveScaling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EdgeParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EdgeParams;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoftParticleParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SoftParticleParam;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AlphaBlend_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlphaBlend_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AlphaBlend;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsDepthTestDisabled_MetaData[];
#endif
		static void NewProp_IsDepthTestDisabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsDepthTestDisabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsLighting_MetaData[];
#endif
		static void NewProp_IsLighting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsLighting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsDistorted_MetaData[];
#endif
		static void NewProp_IsDistorted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsDistorted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Effekseer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EffekseerEffect.h" },
		{ "ModuleRelativePath", "Public/EffekseerEffect.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_Texture_MetaData[] = {
		{ "ModuleRelativePath", "Public/EffekseerEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerEffectMaterialParameterHolder, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_Texture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_TextureAddressType_MetaData[] = {
		{ "ModuleRelativePath", "Public/EffekseerEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_TextureAddressType = { "TextureAddressType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerEffectMaterialParameterHolder, TextureAddressType), METADATA_PARAMS(Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_TextureAddressType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_TextureAddressType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_AlphaTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/EffekseerEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_AlphaTexture = { "AlphaTexture", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerEffectMaterialParameterHolder, AlphaTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_AlphaTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_AlphaTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_AlphaTextureAddressType_MetaData[] = {
		{ "ModuleRelativePath", "Public/EffekseerEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_AlphaTextureAddressType = { "AlphaTextureAddressType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerEffectMaterialParameterHolder, AlphaTextureAddressType), METADATA_PARAMS(Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_AlphaTextureAddressType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_AlphaTextureAddressType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_UVDistortionTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/EffekseerEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_UVDistortionTexture = { "UVDistortionTexture", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerEffectMaterialParameterHolder, UVDistortionTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_UVDistortionTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_UVDistortionTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_UVDistortionTextureAddressType_MetaData[] = {
		{ "ModuleRelativePath", "Public/EffekseerEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_UVDistortionTextureAddressType = { "UVDistortionTextureAddressType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerEffectMaterialParameterHolder, UVDistortionTextureAddressType), METADATA_PARAMS(Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_UVDistortionTextureAddressType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_UVDistortionTextureAddressType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_BlendTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/EffekseerEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_BlendTexture = { "BlendTexture", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerEffectMaterialParameterHolder, BlendTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_BlendTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_BlendTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_BlendTextureAddress_MetaData[] = {
		{ "ModuleRelativePath", "Public/EffekseerEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_BlendTextureAddress = { "BlendTextureAddress", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerEffectMaterialParameterHolder, BlendTextureAddress), METADATA_PARAMS(Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_BlendTextureAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_BlendTextureAddress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_BlendAlphaTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/EffekseerEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_BlendAlphaTexture = { "BlendAlphaTexture", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerEffectMaterialParameterHolder, BlendAlphaTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_BlendAlphaTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_BlendAlphaTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_BlendAlphaTextureAddress_MetaData[] = {
		{ "ModuleRelativePath", "Public/EffekseerEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_BlendAlphaTextureAddress = { "BlendAlphaTextureAddress", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerEffectMaterialParameterHolder, BlendAlphaTextureAddress), METADATA_PARAMS(Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_BlendAlphaTextureAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_BlendAlphaTextureAddress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_BlendUVDistortionTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/EffekseerEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_BlendUVDistortionTexture = { "BlendUVDistortionTexture", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerEffectMaterialParameterHolder, BlendUVDistortionTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_BlendUVDistortionTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_BlendUVDistortionTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_BlendUVDistortionTextureAddress_MetaData[] = {
		{ "ModuleRelativePath", "Public/EffekseerEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_BlendUVDistortionTextureAddress = { "BlendUVDistortionTextureAddress", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerEffectMaterialParameterHolder, BlendUVDistortionTextureAddress), METADATA_PARAMS(Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_BlendUVDistortionTextureAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_BlendUVDistortionTextureAddress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_FlipbookParams_MetaData[] = {
		{ "ModuleRelativePath", "Public/EffekseerEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_FlipbookParams = { "FlipbookParams", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerEffectMaterialParameterHolder, FlipbookParams), Z_Construct_UScriptStruct_FFlipbookParameters, METADATA_PARAMS(Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_FlipbookParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_FlipbookParams_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_UVDistortionIntensity_MetaData[] = {
		{ "ModuleRelativePath", "Public/EffekseerEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_UVDistortionIntensity = { "UVDistortionIntensity", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerEffectMaterialParameterHolder, UVDistortionIntensity), METADATA_PARAMS(Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_UVDistortionIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_UVDistortionIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_TextureBlendType_MetaData[] = {
		{ "ModuleRelativePath", "Public/EffekseerEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_TextureBlendType = { "TextureBlendType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerEffectMaterialParameterHolder, TextureBlendType), METADATA_PARAMS(Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_TextureBlendType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_TextureBlendType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_BlendUVDistortionIntensity_MetaData[] = {
		{ "ModuleRelativePath", "Public/EffekseerEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_BlendUVDistortionIntensity = { "BlendUVDistortionIntensity", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerEffectMaterialParameterHolder, BlendUVDistortionIntensity), METADATA_PARAMS(Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_BlendUVDistortionIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_BlendUVDistortionIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_EnableFalloff_MetaData[] = {
		{ "ModuleRelativePath", "Public/EffekseerEffect.h" },
	};
#endif
	void Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_EnableFalloff_SetBit(void* Obj)
	{
		((UEffekseerEffectMaterialParameterHolder*)Obj)->EnableFalloff = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_EnableFalloff = { "EnableFalloff", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEffekseerEffectMaterialParameterHolder), &Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_EnableFalloff_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_EnableFalloff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_EnableFalloff_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_FalloffParam_MetaData[] = {
		{ "ModuleRelativePath", "Public/EffekseerEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_FalloffParam = { "FalloffParam", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerEffectMaterialParameterHolder, FalloffParam), Z_Construct_UScriptStruct_FFalloffParameter, METADATA_PARAMS(Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_FalloffParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_FalloffParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_EmissiveScaling_MetaData[] = {
		{ "ModuleRelativePath", "Public/EffekseerEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_EmissiveScaling = { "EmissiveScaling", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerEffectMaterialParameterHolder, EmissiveScaling), METADATA_PARAMS(Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_EmissiveScaling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_EmissiveScaling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_EdgeParams_MetaData[] = {
		{ "ModuleRelativePath", "Public/EffekseerEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_EdgeParams = { "EdgeParams", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerEffectMaterialParameterHolder, EdgeParams), Z_Construct_UScriptStruct_FEdgeParameters, METADATA_PARAMS(Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_EdgeParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_EdgeParams_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_SoftParticleParam_MetaData[] = {
		{ "ModuleRelativePath", "Public/EffekseerEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_SoftParticleParam = { "SoftParticleParam", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerEffectMaterialParameterHolder, SoftParticleParam), Z_Construct_UScriptStruct_FSoftParticleParameter, METADATA_PARAMS(Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_SoftParticleParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_SoftParticleParam_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_AlphaBlend_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_AlphaBlend_MetaData[] = {
		{ "ModuleRelativePath", "Public/EffekseerEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_AlphaBlend = { "AlphaBlend", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerEffectMaterialParameterHolder, AlphaBlend), Z_Construct_UEnum_Effekseer_EEffekseerAlphaBlendType, METADATA_PARAMS(Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_AlphaBlend_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_AlphaBlend_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_IsDepthTestDisabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/EffekseerEffect.h" },
	};
#endif
	void Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_IsDepthTestDisabled_SetBit(void* Obj)
	{
		((UEffekseerEffectMaterialParameterHolder*)Obj)->IsDepthTestDisabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_IsDepthTestDisabled = { "IsDepthTestDisabled", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEffekseerEffectMaterialParameterHolder), &Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_IsDepthTestDisabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_IsDepthTestDisabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_IsDepthTestDisabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_IsLighting_MetaData[] = {
		{ "ModuleRelativePath", "Public/EffekseerEffect.h" },
	};
#endif
	void Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_IsLighting_SetBit(void* Obj)
	{
		((UEffekseerEffectMaterialParameterHolder*)Obj)->IsLighting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_IsLighting = { "IsLighting", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEffekseerEffectMaterialParameterHolder), &Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_IsLighting_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_IsLighting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_IsLighting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_IsDistorted_MetaData[] = {
		{ "ModuleRelativePath", "Public/EffekseerEffect.h" },
	};
#endif
	void Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_IsDistorted_SetBit(void* Obj)
	{
		((UEffekseerEffectMaterialParameterHolder*)Obj)->IsDistorted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_IsDistorted = { "IsDistorted", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEffekseerEffectMaterialParameterHolder), &Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_IsDistorted_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_IsDistorted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_IsDistorted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_Material_MetaData[] = {
		{ "ModuleRelativePath", "Public/EffekseerEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerEffectMaterialParameterHolder, Material), Z_Construct_UClass_UEffekseerMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_Material_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_Texture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_TextureAddressType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_AlphaTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_AlphaTextureAddressType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_UVDistortionTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_UVDistortionTextureAddressType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_BlendTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_BlendTextureAddress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_BlendAlphaTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_BlendAlphaTextureAddress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_BlendUVDistortionTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_BlendUVDistortionTextureAddress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_FlipbookParams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_UVDistortionIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_TextureBlendType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_BlendUVDistortionIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_EnableFalloff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_FalloffParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_EmissiveScaling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_EdgeParams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_SoftParticleParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_AlphaBlend_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_AlphaBlend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_IsDepthTestDisabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_IsLighting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_IsDistorted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::NewProp_Material,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEffekseerEffectMaterialParameterHolder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::ClassParams = {
		&UEffekseerEffectMaterialParameterHolder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEffekseerEffectMaterialParameterHolder, 216445213);
	template<> EFFEKSEER_API UClass* StaticClass<UEffekseerEffectMaterialParameterHolder>()
	{
		return UEffekseerEffectMaterialParameterHolder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEffekseerEffectMaterialParameterHolder(Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder, &UEffekseerEffectMaterialParameterHolder::StaticClass, TEXT("/Script/Effekseer"), TEXT("UEffekseerEffectMaterialParameterHolder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEffekseerEffectMaterialParameterHolder);
	void UEffekseerEffect::StaticRegisterNativesUEffekseerEffect()
	{
	}
	UClass* Z_Construct_UClass_UEffekseerEffect_NoRegister()
	{
		return UEffekseerEffect::StaticClass();
	}
	struct Z_Construct_UClass_UEffekseerEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProceduralModels_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProceduralModels_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ProceduralModels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Version;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ColorTextures_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorTextures_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ColorTextures;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DistortionTextures_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistortionTextures_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DistortionTextures;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Models_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Models_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Models;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Materials_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Materials;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Curves_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Curves_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Curves;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EffekseerMaterials_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffekseerMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EffekseerMaterials;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetImportData;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEffekseerEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Effekseer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerEffect_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EffekseerEffect.h" },
		{ "ModuleRelativePath", "Public/EffekseerEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_ProceduralModels_Inner = { "ProceduralModels", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UEFfekseerProceduralModel_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_ProceduralModels_MetaData[] = {
		{ "ModuleRelativePath", "Public/EffekseerEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_ProceduralModels = { "ProceduralModels", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerEffect, ProceduralModels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_ProceduralModels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_ProceduralModels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_Version_MetaData[] = {
		{ "ModuleRelativePath", "Public/EffekseerEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerEffect, Version), METADATA_PARAMS(Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_Version_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_Version_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "EffekseerEffect" },
		{ "ModuleRelativePath", "Public/EffekseerEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerEffect, Scale), METADATA_PARAMS(Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "EffekseerEffect" },
		{ "ModuleRelativePath", "Public/EffekseerEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerEffect, Name), METADATA_PARAMS(Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_ColorTextures_Inner = { "ColorTextures", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_ColorTextures_MetaData[] = {
		{ "Category", "EffekseerEffect" },
		{ "ModuleRelativePath", "Public/EffekseerEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_ColorTextures = { "ColorTextures", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerEffect, ColorTextures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_ColorTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_ColorTextures_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_DistortionTextures_Inner = { "DistortionTextures", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_DistortionTextures_MetaData[] = {
		{ "Category", "EffekseerEffect" },
		{ "ModuleRelativePath", "Public/EffekseerEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_DistortionTextures = { "DistortionTextures", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerEffect, DistortionTextures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_DistortionTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_DistortionTextures_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_Models_Inner = { "Models", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UEffekseerModel_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_Models_MetaData[] = {
		{ "Category", "EffekseerEffect" },
		{ "ModuleRelativePath", "Public/EffekseerEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_Models = { "Models", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerEffect, Models), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_Models_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_Models_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UEffekseerMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_Materials_MetaData[] = {
		{ "Category", "EffekseerEffect" },
		{ "ModuleRelativePath", "Public/EffekseerEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerEffect, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_Materials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_Materials_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_Curves_Inner = { "Curves", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UEffekseerCurve_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_Curves_MetaData[] = {
		{ "Category", "EffekseerEffect" },
		{ "ModuleRelativePath", "Public/EffekseerEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_Curves = { "Curves", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerEffect, Curves), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_Curves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_Curves_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_EffekseerMaterials_Inner = { "EffekseerMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_EffekseerMaterials_MetaData[] = {
		{ "ModuleRelativePath", "Public/EffekseerEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_EffekseerMaterials = { "EffekseerMaterials", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerEffect, EffekseerMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_EffekseerMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_EffekseerMaterials_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_AssetImportData_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "ModuleRelativePath", "Public/EffekseerEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x0010000800020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerEffect, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_AssetImportData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_AssetImportData_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEffekseerEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_ProceduralModels_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_ProceduralModels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_Version,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_ColorTextures_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_ColorTextures,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_DistortionTextures_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_DistortionTextures,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_Models_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_Models,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_Materials_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_Materials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_Curves_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_Curves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_EffekseerMaterials_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_EffekseerMaterials,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerEffect_Statics::NewProp_AssetImportData,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEffekseerEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEffekseerEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEffekseerEffect_Statics::ClassParams = {
		&UEffekseerEffect::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEffekseerEffect_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerEffect_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEffekseerEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEffekseerEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEffekseerEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEffekseerEffect, 1002603573);
	template<> EFFEKSEER_API UClass* StaticClass<UEffekseerEffect>()
	{
		return UEffekseerEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEffekseerEffect(Z_Construct_UClass_UEffekseerEffect, &UEffekseerEffect::StaticClass, TEXT("/Script/Effekseer"), TEXT("UEffekseerEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEffekseerEffect);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UEffekseerEffect)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
