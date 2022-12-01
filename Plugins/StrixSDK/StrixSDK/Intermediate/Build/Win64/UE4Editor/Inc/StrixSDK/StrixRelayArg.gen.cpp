// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StrixSDK/Public/Adapter/StrixRelayArg.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStrixRelayArg() {}
// Cross Module References
	STRIXSDK_API UScriptStruct* Z_Construct_UScriptStruct_FStrixRelayArg();
	UPackage* Z_Construct_UPackage__Script_StrixSDK();
// End Cross Module References
class UScriptStruct* FStrixRelayArg::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STRIXSDK_API uint32 Get_Z_Construct_UScriptStruct_FStrixRelayArg_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStrixRelayArg, Z_Construct_UPackage__Script_StrixSDK(), TEXT("StrixRelayArg"), sizeof(FStrixRelayArg), Get_Z_Construct_UScriptStruct_FStrixRelayArg_Hash());
	}
	return Singleton;
}
template<> STRIXSDK_API UScriptStruct* StaticStruct<FStrixRelayArg>()
{
	return FStrixRelayArg::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStrixRelayArg(FStrixRelayArg::StaticStruct, TEXT("/Script/StrixSDK"), TEXT("StrixRelayArg"), false, nullptr, nullptr);
static struct FScriptStruct_StrixSDK_StaticRegisterNativesFStrixRelayArg
{
	FScriptStruct_StrixSDK_StaticRegisterNativesFStrixRelayArg()
	{
		UScriptStruct::DeferCppStructOps<FStrixRelayArg>(FName(TEXT("StrixRelayArg")));
	}
} ScriptStruct_StrixSDK_StaticRegisterNativesFStrixRelayArg;
	struct Z_Construct_UScriptStruct_FStrixRelayArg_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStrixRelayArg_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Wrapper class for the internal Strix objects, used in relay (e.g. RPC) messages by Strix libraries.\n */" },
		{ "ModuleRelativePath", "Public/Adapter/StrixRelayArg.h" },
		{ "ToolTip", "Wrapper class for the internal Strix objects, used in relay (e.g. RPC) messages by Strix libraries." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStrixRelayArg_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStrixRelayArg>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStrixRelayArg_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StrixSDK,
		nullptr,
		&NewStructOps,
		"StrixRelayArg",
		sizeof(FStrixRelayArg),
		alignof(FStrixRelayArg),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStrixRelayArg_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStrixRelayArg_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStrixRelayArg()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStrixRelayArg_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_StrixSDK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StrixRelayArg"), sizeof(FStrixRelayArg), Get_Z_Construct_UScriptStruct_FStrixRelayArg_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStrixRelayArg_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStrixRelayArg_Hash() { return 473919295U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
