// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StrixSDK/Public/Adapter/StrixRPCContext.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStrixRPCContext() {}
// Cross Module References
	STRIXSDK_API UScriptStruct* Z_Construct_UScriptStruct_FStrixRpcContext();
	UPackage* Z_Construct_UPackage__Script_StrixSDK();
// End Cross Module References
class UScriptStruct* FStrixRpcContext::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STRIXSDK_API uint32 Get_Z_Construct_UScriptStruct_FStrixRpcContext_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStrixRpcContext, Z_Construct_UPackage__Script_StrixSDK(), TEXT("StrixRpcContext"), sizeof(FStrixRpcContext), Get_Z_Construct_UScriptStruct_FStrixRpcContext_Hash());
	}
	return Singleton;
}
template<> STRIXSDK_API UScriptStruct* StaticStruct<FStrixRpcContext>()
{
	return FStrixRpcContext::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStrixRpcContext(FStrixRpcContext::StaticStruct, TEXT("/Script/StrixSDK"), TEXT("StrixRpcContext"), false, nullptr, nullptr);
static struct FScriptStruct_StrixSDK_StaticRegisterNativesFStrixRpcContext
{
	FScriptStruct_StrixSDK_StaticRegisterNativesFStrixRpcContext()
	{
		UScriptStruct::DeferCppStructOps<FStrixRpcContext>(FName(TEXT("StrixRpcContext")));
	}
} ScriptStruct_StrixSDK_StaticRegisterNativesFStrixRpcContext;
	struct Z_Construct_UScriptStruct_FStrixRpcContext_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SenderMemberId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SenderMemberId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoomId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RoomId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStrixRpcContext_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Wrapper class for the RPC context object.\n  */" },
		{ "ModuleRelativePath", "Public/Adapter/StrixRPCContext.h" },
		{ "ToolTip", "Wrapper class for the RPC context object." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStrixRpcContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStrixRpcContext>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStrixRpcContext_Statics::NewProp_SenderMemberId_MetaData[] = {
		{ "Category", "StrixRPCContext" },
		{ "ModuleRelativePath", "Public/Adapter/StrixRPCContext.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStrixRpcContext_Statics::NewProp_SenderMemberId = { "SenderMemberId", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStrixRpcContext, SenderMemberId), METADATA_PARAMS(Z_Construct_UScriptStruct_FStrixRpcContext_Statics::NewProp_SenderMemberId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStrixRpcContext_Statics::NewProp_SenderMemberId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStrixRpcContext_Statics::NewProp_RoomId_MetaData[] = {
		{ "Category", "StrixRPCContext" },
		{ "ModuleRelativePath", "Public/Adapter/StrixRPCContext.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStrixRpcContext_Statics::NewProp_RoomId = { "RoomId", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStrixRpcContext, RoomId), METADATA_PARAMS(Z_Construct_UScriptStruct_FStrixRpcContext_Statics::NewProp_RoomId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStrixRpcContext_Statics::NewProp_RoomId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStrixRpcContext_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStrixRpcContext_Statics::NewProp_SenderMemberId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStrixRpcContext_Statics::NewProp_RoomId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStrixRpcContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StrixSDK,
		nullptr,
		&NewStructOps,
		"StrixRpcContext",
		sizeof(FStrixRpcContext),
		alignof(FStrixRpcContext),
		Z_Construct_UScriptStruct_FStrixRpcContext_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStrixRpcContext_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStrixRpcContext_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStrixRpcContext_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStrixRpcContext()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStrixRpcContext_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_StrixSDK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StrixRpcContext"), sizeof(FStrixRpcContext), Get_Z_Construct_UScriptStruct_FStrixRpcContext_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStrixRpcContext_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStrixRpcContext_Hash() { return 3502053101U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
