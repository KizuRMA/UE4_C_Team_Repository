// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Effekseer/Public/EffekseerHandle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEffekseerHandle() {}
// Cross Module References
	EFFEKSEER_API UScriptStruct* Z_Construct_UScriptStruct_FEffekseerHandle();
	UPackage* Z_Construct_UPackage__Script_Effekseer();
	EFFEKSEER_API UClass* Z_Construct_UClass_UEffekseerEffect_NoRegister();
	EFFEKSEER_API UClass* Z_Construct_UClass_UEffekseerSystemComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FEffekseerHandle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EFFEKSEER_API uint32 Get_Z_Construct_UScriptStruct_FEffekseerHandle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEffekseerHandle, Z_Construct_UPackage__Script_Effekseer(), TEXT("EffekseerHandle"), sizeof(FEffekseerHandle), Get_Z_Construct_UScriptStruct_FEffekseerHandle_Hash());
	}
	return Singleton;
}
template<> EFFEKSEER_API UScriptStruct* StaticStruct<FEffekseerHandle>()
{
	return FEffekseerHandle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEffekseerHandle(FEffekseerHandle::StaticStruct, TEXT("/Script/Effekseer"), TEXT("EffekseerHandle"), false, nullptr, nullptr);
static struct FScriptStruct_Effekseer_StaticRegisterNativesFEffekseerHandle
{
	FScriptStruct_Effekseer_StaticRegisterNativesFEffekseerHandle()
	{
		UScriptStruct::DeferCppStructOps<FEffekseerHandle>(FName(TEXT("EffekseerHandle")));
	}
} ScriptStruct_Effekseer_StaticRegisterNativesFEffekseerHandle;
	struct Z_Construct_UScriptStruct_FEffekseerHandle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Effect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Effect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_System_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_System;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffekseerHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EffekseerHandle.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEffekseerHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEffekseerHandle>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffekseerHandle_Statics::NewProp_Effect_MetaData[] = {
		{ "ModuleRelativePath", "Public/EffekseerHandle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffekseerHandle_Statics::NewProp_Effect = { "Effect", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEffekseerHandle, Effect), Z_Construct_UClass_UEffekseerEffect_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEffekseerHandle_Statics::NewProp_Effect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffekseerHandle_Statics::NewProp_Effect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffekseerHandle_Statics::NewProp_System_MetaData[] = {
		{ "Category", "EffekseerHandle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EffekseerHandle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffekseerHandle_Statics::NewProp_System = { "System", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEffekseerHandle, System), Z_Construct_UClass_UEffekseerSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEffekseerHandle_Statics::NewProp_System_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffekseerHandle_Statics::NewProp_System_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffekseerHandle_Statics::NewProp_ID_MetaData[] = {
		{ "ModuleRelativePath", "Public/EffekseerHandle.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FEffekseerHandle_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEffekseerHandle, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FEffekseerHandle_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffekseerHandle_Statics::NewProp_ID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEffekseerHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffekseerHandle_Statics::NewProp_Effect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffekseerHandle_Statics::NewProp_System,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffekseerHandle_Statics::NewProp_ID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEffekseerHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Effekseer,
		nullptr,
		&NewStructOps,
		"EffekseerHandle",
		sizeof(FEffekseerHandle),
		alignof(FEffekseerHandle),
		Z_Construct_UScriptStruct_FEffekseerHandle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffekseerHandle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEffekseerHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffekseerHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEffekseerHandle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEffekseerHandle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Effekseer();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EffekseerHandle"), sizeof(FEffekseerHandle), Get_Z_Construct_UScriptStruct_FEffekseerHandle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEffekseerHandle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEffekseerHandle_Hash() { return 2623928292U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
