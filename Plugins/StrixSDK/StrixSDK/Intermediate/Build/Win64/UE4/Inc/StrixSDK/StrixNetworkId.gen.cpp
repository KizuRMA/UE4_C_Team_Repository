// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StrixSDK/Public/Adapter/StrixNetworkId.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStrixNetworkId() {}
// Cross Module References
	STRIXSDK_API UScriptStruct* Z_Construct_UScriptStruct_FStrixNetworkId();
	UPackage* Z_Construct_UPackage__Script_StrixSDK();
// End Cross Module References
class UScriptStruct* FStrixNetworkId::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STRIXSDK_API uint32 Get_Z_Construct_UScriptStruct_FStrixNetworkId_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStrixNetworkId, Z_Construct_UPackage__Script_StrixSDK(), TEXT("StrixNetworkId"), sizeof(FStrixNetworkId), Get_Z_Construct_UScriptStruct_FStrixNetworkId_Hash());
	}
	return Singleton;
}
template<> STRIXSDK_API UScriptStruct* StaticStruct<FStrixNetworkId>()
{
	return FStrixNetworkId::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStrixNetworkId(FStrixNetworkId::StaticStruct, TEXT("/Script/StrixSDK"), TEXT("StrixNetworkId"), false, nullptr, nullptr);
static struct FScriptStruct_StrixSDK_StaticRegisterNativesFStrixNetworkId
{
	FScriptStruct_StrixSDK_StaticRegisterNativesFStrixNetworkId()
	{
		UScriptStruct::DeferCppStructOps<FStrixNetworkId>(FName(TEXT("StrixNetworkId")));
	}
} ScriptStruct_StrixSDK_StaticRegisterNativesFStrixNetworkId;
	struct Z_Construct_UScriptStruct_FStrixNetworkId_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StringId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStrixNetworkId_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Wrapper class for the internal network ID object, used by Strix libraries.\n  */" },
		{ "ModuleRelativePath", "Public/Adapter/StrixNetworkId.h" },
		{ "ToolTip", "Wrapper class for the internal network ID object, used by Strix libraries." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStrixNetworkId_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStrixNetworkId>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStrixNetworkId_Statics::NewProp_StringId_MetaData[] = {
		{ "Category", "StrixNetworkId" },
		{ "ModuleRelativePath", "Public/Adapter/StrixNetworkId.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStrixNetworkId_Statics::NewProp_StringId = { "StringId", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStrixNetworkId, StringId), METADATA_PARAMS(Z_Construct_UScriptStruct_FStrixNetworkId_Statics::NewProp_StringId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStrixNetworkId_Statics::NewProp_StringId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStrixNetworkId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStrixNetworkId_Statics::NewProp_StringId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStrixNetworkId_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StrixSDK,
		nullptr,
		&NewStructOps,
		"StrixNetworkId",
		sizeof(FStrixNetworkId),
		alignof(FStrixNetworkId),
		Z_Construct_UScriptStruct_FStrixNetworkId_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStrixNetworkId_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStrixNetworkId_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStrixNetworkId_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStrixNetworkId()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStrixNetworkId_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_StrixSDK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StrixNetworkId"), sizeof(FStrixNetworkId), Get_Z_Construct_UScriptStruct_FStrixNetworkId_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStrixNetworkId_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStrixNetworkId_Hash() { return 1844303598U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
