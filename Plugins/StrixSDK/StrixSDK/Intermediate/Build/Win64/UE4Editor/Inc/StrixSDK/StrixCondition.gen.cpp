// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StrixSDK/Public/Adapter/StrixCondition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStrixCondition() {}
// Cross Module References
	STRIXSDK_API UScriptStruct* Z_Construct_UScriptStruct_FStrixCondition();
	UPackage* Z_Construct_UPackage__Script_StrixSDK();
// End Cross Module References
class UScriptStruct* FStrixCondition::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STRIXSDK_API uint32 Get_Z_Construct_UScriptStruct_FStrixCondition_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStrixCondition, Z_Construct_UPackage__Script_StrixSDK(), TEXT("StrixCondition"), sizeof(FStrixCondition), Get_Z_Construct_UScriptStruct_FStrixCondition_Hash());
	}
	return Singleton;
}
template<> STRIXSDK_API UScriptStruct* StaticStruct<FStrixCondition>()
{
	return FStrixCondition::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStrixCondition(FStrixCondition::StaticStruct, TEXT("/Script/StrixSDK"), TEXT("StrixCondition"), false, nullptr, nullptr);
static struct FScriptStruct_StrixSDK_StaticRegisterNativesFStrixCondition
{
	FScriptStruct_StrixSDK_StaticRegisterNativesFStrixCondition()
	{
		UScriptStruct::DeferCppStructOps<FStrixCondition>(FName(TEXT("StrixCondition")));
	}
} ScriptStruct_StrixSDK_StaticRegisterNativesFStrixCondition;
	struct Z_Construct_UScriptStruct_FStrixCondition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStrixCondition_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Wrapper class for the internal condition object, used by Strix libraries.\n */" },
		{ "ModuleRelativePath", "Public/Adapter/StrixCondition.h" },
		{ "ToolTip", "Wrapper class for the internal condition object, used by Strix libraries." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStrixCondition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStrixCondition>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStrixCondition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StrixSDK,
		nullptr,
		&NewStructOps,
		"StrixCondition",
		sizeof(FStrixCondition),
		alignof(FStrixCondition),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStrixCondition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStrixCondition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStrixCondition()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStrixCondition_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_StrixSDK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StrixCondition"), sizeof(FStrixCondition), Get_Z_Construct_UScriptStruct_FStrixCondition_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStrixCondition_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStrixCondition_Hash() { return 58512763U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
