// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Effekseer/Public/EffekseerMaterial.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEffekseerMaterial() {}
// Cross Module References
	EFFEKSEER_API UScriptStruct* Z_Construct_UScriptStruct_FEffekseerMaterialElement();
	UPackage* Z_Construct_UPackage__Script_Effekseer();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	EFFEKSEER_API UEnum* Z_Construct_UEnum_Effekseer_EEffekseerAlphaBlendType();
	EFFEKSEER_API UScriptStruct* Z_Construct_UScriptStruct_FEffekseerGradientProperty();
	EFFEKSEER_API UScriptStruct* Z_Construct_UScriptStruct_FEffekseerUniformProperty();
	EFFEKSEER_API UScriptStruct* Z_Construct_UScriptStruct_FEffekseerTextureProperty();
	EFFEKSEER_API UClass* Z_Construct_UClass_UEffekseerMaterial_NoRegister();
	EFFEKSEER_API UClass* Z_Construct_UClass_UEffekseerMaterial();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
// End Cross Module References
class UScriptStruct* FEffekseerMaterialElement::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EFFEKSEER_API uint32 Get_Z_Construct_UScriptStruct_FEffekseerMaterialElement_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEffekseerMaterialElement, Z_Construct_UPackage__Script_Effekseer(), TEXT("EffekseerMaterialElement"), sizeof(FEffekseerMaterialElement), Get_Z_Construct_UScriptStruct_FEffekseerMaterialElement_Hash());
	}
	return Singleton;
}
template<> EFFEKSEER_API UScriptStruct* StaticStruct<FEffekseerMaterialElement>()
{
	return FEffekseerMaterialElement::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEffekseerMaterialElement(FEffekseerMaterialElement::StaticStruct, TEXT("/Script/Effekseer"), TEXT("EffekseerMaterialElement"), false, nullptr, nullptr);
static struct FScriptStruct_Effekseer_StaticRegisterNativesFEffekseerMaterialElement
{
	FScriptStruct_Effekseer_StaticRegisterNativesFEffekseerMaterialElement()
	{
		UScriptStruct::DeferCppStructOps<FEffekseerMaterialElement>(FName(TEXT("EffekseerMaterialElement")));
	}
} ScriptStruct_Effekseer_StaticRegisterNativesFEffekseerMaterialElement;
	struct Z_Construct_UScriptStruct_FEffekseerMaterialElement_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AlphaBlend_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlphaBlend_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AlphaBlend;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffekseerMaterialElement_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EffekseerMaterial.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEffekseerMaterialElement_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEffekseerMaterialElement>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffekseerMaterialElement_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "EffekseerMaterialElement" },
		{ "ModuleRelativePath", "Public/EffekseerMaterial.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffekseerMaterialElement_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEffekseerMaterialElement, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEffekseerMaterialElement_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffekseerMaterialElement_Statics::NewProp_Material_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEffekseerMaterialElement_Statics::NewProp_AlphaBlend_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffekseerMaterialElement_Statics::NewProp_AlphaBlend_MetaData[] = {
		{ "Category", "EffekseerMaterialElement" },
		{ "ModuleRelativePath", "Public/EffekseerMaterial.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEffekseerMaterialElement_Statics::NewProp_AlphaBlend = { "AlphaBlend", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEffekseerMaterialElement, AlphaBlend), Z_Construct_UEnum_Effekseer_EEffekseerAlphaBlendType, METADATA_PARAMS(Z_Construct_UScriptStruct_FEffekseerMaterialElement_Statics::NewProp_AlphaBlend_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffekseerMaterialElement_Statics::NewProp_AlphaBlend_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEffekseerMaterialElement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffekseerMaterialElement_Statics::NewProp_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffekseerMaterialElement_Statics::NewProp_AlphaBlend_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffekseerMaterialElement_Statics::NewProp_AlphaBlend,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEffekseerMaterialElement_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Effekseer,
		nullptr,
		&NewStructOps,
		"EffekseerMaterialElement",
		sizeof(FEffekseerMaterialElement),
		alignof(FEffekseerMaterialElement),
		Z_Construct_UScriptStruct_FEffekseerMaterialElement_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffekseerMaterialElement_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEffekseerMaterialElement_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffekseerMaterialElement_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEffekseerMaterialElement()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEffekseerMaterialElement_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Effekseer();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EffekseerMaterialElement"), sizeof(FEffekseerMaterialElement), Get_Z_Construct_UScriptStruct_FEffekseerMaterialElement_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEffekseerMaterialElement_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEffekseerMaterialElement_Hash() { return 4036358435U; }
class UScriptStruct* FEffekseerGradientProperty::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EFFEKSEER_API uint32 Get_Z_Construct_UScriptStruct_FEffekseerGradientProperty_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEffekseerGradientProperty, Z_Construct_UPackage__Script_Effekseer(), TEXT("EffekseerGradientProperty"), sizeof(FEffekseerGradientProperty), Get_Z_Construct_UScriptStruct_FEffekseerGradientProperty_Hash());
	}
	return Singleton;
}
template<> EFFEKSEER_API UScriptStruct* StaticStruct<FEffekseerGradientProperty>()
{
	return FEffekseerGradientProperty::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEffekseerGradientProperty(FEffekseerGradientProperty::StaticStruct, TEXT("/Script/Effekseer"), TEXT("EffekseerGradientProperty"), false, nullptr, nullptr);
static struct FScriptStruct_Effekseer_StaticRegisterNativesFEffekseerGradientProperty
{
	FScriptStruct_Effekseer_StaticRegisterNativesFEffekseerGradientProperty()
	{
		UScriptStruct::DeferCppStructOps<FEffekseerGradientProperty>(FName(TEXT("EffekseerGradientProperty")));
	}
} ScriptStruct_Effekseer_StaticRegisterNativesFEffekseerGradientProperty;
	struct Z_Construct_UScriptStruct_FEffekseerGradientProperty_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffekseerGradientProperty_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EffekseerMaterial.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEffekseerGradientProperty_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEffekseerGradientProperty>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffekseerGradientProperty_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "EffekseerGradientProperty" },
		{ "ModuleRelativePath", "Public/EffekseerMaterial.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEffekseerGradientProperty_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEffekseerGradientProperty, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FEffekseerGradientProperty_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffekseerGradientProperty_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEffekseerGradientProperty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffekseerGradientProperty_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEffekseerGradientProperty_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Effekseer,
		nullptr,
		&NewStructOps,
		"EffekseerGradientProperty",
		sizeof(FEffekseerGradientProperty),
		alignof(FEffekseerGradientProperty),
		Z_Construct_UScriptStruct_FEffekseerGradientProperty_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffekseerGradientProperty_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEffekseerGradientProperty_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffekseerGradientProperty_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEffekseerGradientProperty()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEffekseerGradientProperty_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Effekseer();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EffekseerGradientProperty"), sizeof(FEffekseerGradientProperty), Get_Z_Construct_UScriptStruct_FEffekseerGradientProperty_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEffekseerGradientProperty_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEffekseerGradientProperty_Hash() { return 807394911U; }
class UScriptStruct* FEffekseerUniformProperty::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EFFEKSEER_API uint32 Get_Z_Construct_UScriptStruct_FEffekseerUniformProperty_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEffekseerUniformProperty, Z_Construct_UPackage__Script_Effekseer(), TEXT("EffekseerUniformProperty"), sizeof(FEffekseerUniformProperty), Get_Z_Construct_UScriptStruct_FEffekseerUniformProperty_Hash());
	}
	return Singleton;
}
template<> EFFEKSEER_API UScriptStruct* StaticStruct<FEffekseerUniformProperty>()
{
	return FEffekseerUniformProperty::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEffekseerUniformProperty(FEffekseerUniformProperty::StaticStruct, TEXT("/Script/Effekseer"), TEXT("EffekseerUniformProperty"), false, nullptr, nullptr);
static struct FScriptStruct_Effekseer_StaticRegisterNativesFEffekseerUniformProperty
{
	FScriptStruct_Effekseer_StaticRegisterNativesFEffekseerUniformProperty()
	{
		UScriptStruct::DeferCppStructOps<FEffekseerUniformProperty>(FName(TEXT("EffekseerUniformProperty")));
	}
} ScriptStruct_Effekseer_StaticRegisterNativesFEffekseerUniformProperty;
	struct Z_Construct_UScriptStruct_FEffekseerUniformProperty_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Count;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffekseerUniformProperty_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EffekseerMaterial.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEffekseerUniformProperty_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEffekseerUniformProperty>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffekseerUniformProperty_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "EffekseerUniformProperty" },
		{ "ModuleRelativePath", "Public/EffekseerMaterial.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEffekseerUniformProperty_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEffekseerUniformProperty, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FEffekseerUniformProperty_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffekseerUniformProperty_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffekseerUniformProperty_Statics::NewProp_Count_MetaData[] = {
		{ "Category", "EffekseerUniformProperty" },
		{ "ModuleRelativePath", "Public/EffekseerMaterial.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FEffekseerUniformProperty_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEffekseerUniformProperty, Count), METADATA_PARAMS(Z_Construct_UScriptStruct_FEffekseerUniformProperty_Statics::NewProp_Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffekseerUniformProperty_Statics::NewProp_Count_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEffekseerUniformProperty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffekseerUniformProperty_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffekseerUniformProperty_Statics::NewProp_Count,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEffekseerUniformProperty_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Effekseer,
		nullptr,
		&NewStructOps,
		"EffekseerUniformProperty",
		sizeof(FEffekseerUniformProperty),
		alignof(FEffekseerUniformProperty),
		Z_Construct_UScriptStruct_FEffekseerUniformProperty_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffekseerUniformProperty_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEffekseerUniformProperty_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffekseerUniformProperty_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEffekseerUniformProperty()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEffekseerUniformProperty_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Effekseer();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EffekseerUniformProperty"), sizeof(FEffekseerUniformProperty), Get_Z_Construct_UScriptStruct_FEffekseerUniformProperty_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEffekseerUniformProperty_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEffekseerUniformProperty_Hash() { return 1678871060U; }
class UScriptStruct* FEffekseerTextureProperty::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EFFEKSEER_API uint32 Get_Z_Construct_UScriptStruct_FEffekseerTextureProperty_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEffekseerTextureProperty, Z_Construct_UPackage__Script_Effekseer(), TEXT("EffekseerTextureProperty"), sizeof(FEffekseerTextureProperty), Get_Z_Construct_UScriptStruct_FEffekseerTextureProperty_Hash());
	}
	return Singleton;
}
template<> EFFEKSEER_API UScriptStruct* StaticStruct<FEffekseerTextureProperty>()
{
	return FEffekseerTextureProperty::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEffekseerTextureProperty(FEffekseerTextureProperty::StaticStruct, TEXT("/Script/Effekseer"), TEXT("EffekseerTextureProperty"), false, nullptr, nullptr);
static struct FScriptStruct_Effekseer_StaticRegisterNativesFEffekseerTextureProperty
{
	FScriptStruct_Effekseer_StaticRegisterNativesFEffekseerTextureProperty()
	{
		UScriptStruct::DeferCppStructOps<FEffekseerTextureProperty>(FName(TEXT("EffekseerTextureProperty")));
	}
} ScriptStruct_Effekseer_StaticRegisterNativesFEffekseerTextureProperty;
	struct Z_Construct_UScriptStruct_FEffekseerTextureProperty_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffekseerTextureProperty_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EffekseerMaterial.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEffekseerTextureProperty_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEffekseerTextureProperty>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffekseerTextureProperty_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "EffekseerTextureProperty" },
		{ "ModuleRelativePath", "Public/EffekseerMaterial.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEffekseerTextureProperty_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEffekseerTextureProperty, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FEffekseerTextureProperty_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffekseerTextureProperty_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEffekseerTextureProperty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffekseerTextureProperty_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEffekseerTextureProperty_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Effekseer,
		nullptr,
		&NewStructOps,
		"EffekseerTextureProperty",
		sizeof(FEffekseerTextureProperty),
		alignof(FEffekseerTextureProperty),
		Z_Construct_UScriptStruct_FEffekseerTextureProperty_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffekseerTextureProperty_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEffekseerTextureProperty_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffekseerTextureProperty_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEffekseerTextureProperty()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEffekseerTextureProperty_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Effekseer();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EffekseerTextureProperty"), sizeof(FEffekseerTextureProperty), Get_Z_Construct_UScriptStruct_FEffekseerTextureProperty_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEffekseerTextureProperty_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEffekseerTextureProperty_Hash() { return 2192992056U; }
	void UEffekseerMaterial::StaticRegisterNativesUEffekseerMaterial()
	{
	}
	UClass* Z_Construct_UClass_UEffekseerMaterial_NoRegister()
	{
		return UEffekseerMaterial::StaticClass();
	}
	struct Z_Construct_UClass_UEffekseerMaterial_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaterialElements_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialElements_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MaterialElements;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Uniforms_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Uniforms_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Uniforms;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Gradients_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gradients_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Gradients;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_UniformNameToIndex_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UniformNameToIndex_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniformNameToIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_UniformNameToIndex;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Textures_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Textures_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Textures;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_TextureNameToIndex_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TextureNameToIndex_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureNameToIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_TextureNameToIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ColorSpaceMaterials_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ColorSpaceMaterials_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ColorSpaceMaterials_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorSpaceMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ColorSpaceMaterials;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsEffectScaleRequired_MetaData[];
#endif
		static void NewProp_IsEffectScaleRequired_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsEffectScaleRequired;
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
	UObject* (*const Z_Construct_UClass_UEffekseerMaterial_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Effekseer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerMaterial_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EffekseerMaterial.h" },
		{ "ModuleRelativePath", "Public/EffekseerMaterial.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "EffekseerMaterial" },
		{ "ModuleRelativePath", "Public/EffekseerMaterial.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerMaterial, Material), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_Material_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_MaterialElements_Inner = { "MaterialElements", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEffekseerMaterialElement, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_MaterialElements_MetaData[] = {
		{ "Category", "EffekseerMaterial" },
		{ "ModuleRelativePath", "Public/EffekseerMaterial.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_MaterialElements = { "MaterialElements", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerMaterial, MaterialElements), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_MaterialElements_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_MaterialElements_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_Uniforms_Inner = { "Uniforms", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEffekseerUniformProperty, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_Uniforms_MetaData[] = {
		{ "Category", "EffekseerMaterial" },
		{ "ModuleRelativePath", "Public/EffekseerMaterial.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_Uniforms = { "Uniforms", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerMaterial, Uniforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_Uniforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_Uniforms_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_Gradients_Inner = { "Gradients", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEffekseerGradientProperty, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_Gradients_MetaData[] = {
		{ "Category", "EffekseerMaterial" },
		{ "ModuleRelativePath", "Public/EffekseerMaterial.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_Gradients = { "Gradients", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerMaterial, Gradients), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_Gradients_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_Gradients_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_UniformNameToIndex_ValueProp = { "UniformNameToIndex", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_UniformNameToIndex_Key_KeyProp = { "UniformNameToIndex_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_UniformNameToIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/EffekseerMaterial.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_UniformNameToIndex = { "UniformNameToIndex", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerMaterial, UniformNameToIndex), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_UniformNameToIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_UniformNameToIndex_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_Textures_Inner = { "Textures", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEffekseerTextureProperty, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_Textures_MetaData[] = {
		{ "Category", "EffekseerMaterial" },
		{ "ModuleRelativePath", "Public/EffekseerMaterial.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_Textures = { "Textures", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerMaterial, Textures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_Textures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_Textures_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_TextureNameToIndex_ValueProp = { "TextureNameToIndex", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_TextureNameToIndex_Key_KeyProp = { "TextureNameToIndex_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_TextureNameToIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/EffekseerMaterial.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_TextureNameToIndex = { "TextureNameToIndex", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerMaterial, TextureNameToIndex), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_TextureNameToIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_TextureNameToIndex_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_ColorSpaceMaterials_ValueProp = { "ColorSpaceMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_ColorSpaceMaterials_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_ColorSpaceMaterials_Key_KeyProp = { "ColorSpaceMaterials_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Effekseer_EEffekseerAlphaBlendType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_ColorSpaceMaterials_MetaData[] = {
		{ "ModuleRelativePath", "Public/EffekseerMaterial.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_ColorSpaceMaterials = { "ColorSpaceMaterials", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerMaterial, ColorSpaceMaterials), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_ColorSpaceMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_ColorSpaceMaterials_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_IsEffectScaleRequired_MetaData[] = {
		{ "ModuleRelativePath", "Public/EffekseerMaterial.h" },
	};
#endif
	void Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_IsEffectScaleRequired_SetBit(void* Obj)
	{
		((UEffekseerMaterial*)Obj)->IsEffectScaleRequired = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_IsEffectScaleRequired = { "IsEffectScaleRequired", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEffekseerMaterial), &Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_IsEffectScaleRequired_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_IsEffectScaleRequired_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_IsEffectScaleRequired_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_AssetImportData_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "ModuleRelativePath", "Public/EffekseerMaterial.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x0010000800020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerMaterial, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_AssetImportData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_AssetImportData_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEffekseerMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_MaterialElements_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_MaterialElements,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_Uniforms_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_Uniforms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_Gradients_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_Gradients,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_UniformNameToIndex_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_UniformNameToIndex_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_UniformNameToIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_Textures_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_Textures,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_TextureNameToIndex_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_TextureNameToIndex_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_TextureNameToIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_ColorSpaceMaterials_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_ColorSpaceMaterials_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_ColorSpaceMaterials_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_ColorSpaceMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_IsEffectScaleRequired,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_AssetImportData,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEffekseerMaterial_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEffekseerMaterial>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEffekseerMaterial_Statics::ClassParams = {
		&UEffekseerMaterial::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEffekseerMaterial_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerMaterial_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEffekseerMaterial_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerMaterial_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEffekseerMaterial()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEffekseerMaterial_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEffekseerMaterial, 606943754);
	template<> EFFEKSEER_API UClass* StaticClass<UEffekseerMaterial>()
	{
		return UEffekseerMaterial::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEffekseerMaterial(Z_Construct_UClass_UEffekseerMaterial, &UEffekseerMaterial::StaticClass, TEXT("/Script/Effekseer"), TEXT("UEffekseerMaterial"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEffekseerMaterial);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UEffekseerMaterial)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
