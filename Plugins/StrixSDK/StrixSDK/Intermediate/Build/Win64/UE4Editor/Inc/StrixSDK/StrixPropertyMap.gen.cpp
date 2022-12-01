// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StrixSDK/Public/Adapter/StrixPropertyMap.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStrixPropertyMap() {}
// Cross Module References
	STRIXSDK_API UScriptStruct* Z_Construct_UScriptStruct_FStrixPropertyMap();
	UPackage* Z_Construct_UPackage__Script_StrixSDK();
// End Cross Module References
class UScriptStruct* FStrixPropertyMap::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STRIXSDK_API uint32 Get_Z_Construct_UScriptStruct_FStrixPropertyMap_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStrixPropertyMap, Z_Construct_UPackage__Script_StrixSDK(), TEXT("StrixPropertyMap"), sizeof(FStrixPropertyMap), Get_Z_Construct_UScriptStruct_FStrixPropertyMap_Hash());
	}
	return Singleton;
}
template<> STRIXSDK_API UScriptStruct* StaticStruct<FStrixPropertyMap>()
{
	return FStrixPropertyMap::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStrixPropertyMap(FStrixPropertyMap::StaticStruct, TEXT("/Script/StrixSDK"), TEXT("StrixPropertyMap"), false, nullptr, nullptr);
static struct FScriptStruct_StrixSDK_StaticRegisterNativesFStrixPropertyMap
{
	FScriptStruct_StrixSDK_StaticRegisterNativesFStrixPropertyMap()
	{
		UScriptStruct::DeferCppStructOps<FStrixPropertyMap>(FName(TEXT("StrixPropertyMap")));
	}
} ScriptStruct_StrixSDK_StaticRegisterNativesFStrixPropertyMap;
	struct Z_Construct_UScriptStruct_FStrixPropertyMap_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStrixPropertyMap_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Wrapper class for the internal string-object property map, used by Strix libraries.\n *  Used extensively in Customizable... models.\n */" },
		{ "ModuleRelativePath", "Public/Adapter/StrixPropertyMap.h" },
		{ "ToolTip", "Wrapper class for the internal string-object property map, used by Strix libraries.\nUsed extensively in Customizable... models." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStrixPropertyMap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStrixPropertyMap>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStrixPropertyMap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StrixSDK,
		nullptr,
		&NewStructOps,
		"StrixPropertyMap",
		sizeof(FStrixPropertyMap),
		alignof(FStrixPropertyMap),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStrixPropertyMap_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStrixPropertyMap_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStrixPropertyMap()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStrixPropertyMap_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_StrixSDK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StrixPropertyMap"), sizeof(FStrixPropertyMap), Get_Z_Construct_UScriptStruct_FStrixPropertyMap_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStrixPropertyMap_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStrixPropertyMap_Hash() { return 3849579546U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
