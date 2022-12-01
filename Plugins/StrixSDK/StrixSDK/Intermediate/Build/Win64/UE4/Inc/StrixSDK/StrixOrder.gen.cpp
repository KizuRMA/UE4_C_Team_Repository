// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StrixSDK/Public/Adapter/StrixOrder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStrixOrder() {}
// Cross Module References
	STRIXSDK_API UScriptStruct* Z_Construct_UScriptStruct_FStrixOrder();
	UPackage* Z_Construct_UPackage__Script_StrixSDK();
// End Cross Module References
class UScriptStruct* FStrixOrder::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STRIXSDK_API uint32 Get_Z_Construct_UScriptStruct_FStrixOrder_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStrixOrder, Z_Construct_UPackage__Script_StrixSDK(), TEXT("StrixOrder"), sizeof(FStrixOrder), Get_Z_Construct_UScriptStruct_FStrixOrder_Hash());
	}
	return Singleton;
}
template<> STRIXSDK_API UScriptStruct* StaticStruct<FStrixOrder>()
{
	return FStrixOrder::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStrixOrder(FStrixOrder::StaticStruct, TEXT("/Script/StrixSDK"), TEXT("StrixOrder"), false, nullptr, nullptr);
static struct FScriptStruct_StrixSDK_StaticRegisterNativesFStrixOrder
{
	FScriptStruct_StrixSDK_StaticRegisterNativesFStrixOrder()
	{
		UScriptStruct::DeferCppStructOps<FStrixOrder>(FName(TEXT("StrixOrder")));
	}
} ScriptStruct_StrixSDK_StaticRegisterNativesFStrixOrder;
	struct Z_Construct_UScriptStruct_FStrixOrder_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStrixOrder_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Wrapper class for the internal order object, used by Strix libraries.\n */" },
		{ "ModuleRelativePath", "Public/Adapter/StrixOrder.h" },
		{ "ToolTip", "Wrapper class for the internal order object, used by Strix libraries." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStrixOrder_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStrixOrder>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStrixOrder_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StrixSDK,
		nullptr,
		&NewStructOps,
		"StrixOrder",
		sizeof(FStrixOrder),
		alignof(FStrixOrder),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStrixOrder_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStrixOrder_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStrixOrder()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStrixOrder_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_StrixSDK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StrixOrder"), sizeof(FStrixOrder), Get_Z_Construct_UScriptStruct_FStrixOrder_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStrixOrder_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStrixOrder_Hash() { return 3077702654U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
