// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StrixSDK/Public/Adapter/StrixNodeRoomInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStrixNodeRoomInfo() {}
// Cross Module References
	STRIXSDK_API UScriptStruct* Z_Construct_UScriptStruct_FStrixNodeRoomInfo();
	UPackage* Z_Construct_UPackage__Script_StrixSDK();
	STRIXSDK_API UScriptStruct* Z_Construct_UScriptStruct_FStrixNode();
	STRIXSDK_API UScriptStruct* Z_Construct_UScriptStruct_FStrixNodeRoom();
// End Cross Module References
class UScriptStruct* FStrixNodeRoomInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STRIXSDK_API uint32 Get_Z_Construct_UScriptStruct_FStrixNodeRoomInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStrixNodeRoomInfo, Z_Construct_UPackage__Script_StrixSDK(), TEXT("StrixNodeRoomInfo"), sizeof(FStrixNodeRoomInfo), Get_Z_Construct_UScriptStruct_FStrixNodeRoomInfo_Hash());
	}
	return Singleton;
}
template<> STRIXSDK_API UScriptStruct* StaticStruct<FStrixNodeRoomInfo>()
{
	return FStrixNodeRoomInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStrixNodeRoomInfo(FStrixNodeRoomInfo::StaticStruct, TEXT("/Script/StrixSDK"), TEXT("StrixNodeRoomInfo"), false, nullptr, nullptr);
static struct FScriptStruct_StrixSDK_StaticRegisterNativesFStrixNodeRoomInfo
{
	FScriptStruct_StrixSDK_StaticRegisterNativesFStrixNodeRoomInfo()
	{
		UScriptStruct::DeferCppStructOps<FStrixNodeRoomInfo>(FName(TEXT("StrixNodeRoomInfo")));
	}
} ScriptStruct_StrixSDK_StaticRegisterNativesFStrixNodeRoomInfo;
	struct Z_Construct_UScriptStruct_FStrixNodeRoomInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Node;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeRoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NodeRoom;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStrixNodeRoomInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Wrapper class for the internal node-node room object pair, used by Strix libraries.\n *  See the definition of stored structures for more information.\n *  Used for room operations that are executed on the node (master) server,\n *  usually meaning establishing a new connection to the specified node (room server) and executing room operations there.\n */" },
		{ "ModuleRelativePath", "Public/Adapter/StrixNodeRoomInfo.h" },
		{ "ToolTip", "Wrapper class for the internal node-node room object pair, used by Strix libraries.\nSee the definition of stored structures for more information.\nUsed for room operations that are executed on the node (master) server,\nusually meaning establishing a new connection to the specified node (room server) and executing room operations there." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStrixNodeRoomInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStrixNodeRoomInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStrixNodeRoomInfo_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "StrixNodeRoomInfo" },
		{ "Comment", "/** Structure containing the node information */" },
		{ "ModuleRelativePath", "Public/Adapter/StrixNodeRoomInfo.h" },
		{ "ToolTip", "Structure containing the node information" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStrixNodeRoomInfo_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStrixNodeRoomInfo, Node), Z_Construct_UScriptStruct_FStrixNode, METADATA_PARAMS(Z_Construct_UScriptStruct_FStrixNodeRoomInfo_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStrixNodeRoomInfo_Statics::NewProp_Node_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStrixNodeRoomInfo_Statics::NewProp_NodeRoom_MetaData[] = {
		{ "Category", "StrixNodeRoomInfo" },
		{ "Comment", "/** Structure containing the node room information */" },
		{ "ModuleRelativePath", "Public/Adapter/StrixNodeRoomInfo.h" },
		{ "ToolTip", "Structure containing the node room information" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStrixNodeRoomInfo_Statics::NewProp_NodeRoom = { "NodeRoom", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStrixNodeRoomInfo, NodeRoom), Z_Construct_UScriptStruct_FStrixNodeRoom, METADATA_PARAMS(Z_Construct_UScriptStruct_FStrixNodeRoomInfo_Statics::NewProp_NodeRoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStrixNodeRoomInfo_Statics::NewProp_NodeRoom_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStrixNodeRoomInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStrixNodeRoomInfo_Statics::NewProp_Node,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStrixNodeRoomInfo_Statics::NewProp_NodeRoom,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStrixNodeRoomInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StrixSDK,
		nullptr,
		&NewStructOps,
		"StrixNodeRoomInfo",
		sizeof(FStrixNodeRoomInfo),
		alignof(FStrixNodeRoomInfo),
		Z_Construct_UScriptStruct_FStrixNodeRoomInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStrixNodeRoomInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStrixNodeRoomInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStrixNodeRoomInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStrixNodeRoomInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStrixNodeRoomInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_StrixSDK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StrixNodeRoomInfo"), sizeof(FStrixNodeRoomInfo), Get_Z_Construct_UScriptStruct_FStrixNodeRoomInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStrixNodeRoomInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStrixNodeRoomInfo_Hash() { return 1679952806U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
