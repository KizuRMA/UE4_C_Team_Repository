// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StrixSDK/Public/Adapter/StrixNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStrixNode() {}
// Cross Module References
	STRIXSDK_API UScriptStruct* Z_Construct_UScriptStruct_FStrixNode();
	UPackage* Z_Construct_UPackage__Script_StrixSDK();
	STRIXSDK_API UScriptStruct* Z_Construct_UScriptStruct_FStrixPropertyMap();
// End Cross Module References
class UScriptStruct* FStrixNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STRIXSDK_API uint32 Get_Z_Construct_UScriptStruct_FStrixNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStrixNode, Z_Construct_UPackage__Script_StrixSDK(), TEXT("StrixNode"), sizeof(FStrixNode), Get_Z_Construct_UScriptStruct_FStrixNode_Hash());
	}
	return Singleton;
}
template<> STRIXSDK_API UScriptStruct* StaticStruct<FStrixNode>()
{
	return FStrixNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStrixNode(FStrixNode::StaticStruct, TEXT("/Script/StrixSDK"), TEXT("StrixNode"), false, nullptr, nullptr);
static struct FScriptStruct_StrixSDK_StaticRegisterNativesFStrixNode
{
	FScriptStruct_StrixSDK_StaticRegisterNativesFStrixNode()
	{
		UScriptStruct::DeferCppStructOps<FStrixNode>(FName(TEXT("StrixNode")));
	}
} ScriptStruct_StrixSDK_StaticRegisterNativesFStrixNode;
	struct Z_Construct_UScriptStruct_FStrixNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Host_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Host;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Port;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Protocol_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Protocol;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Properties;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStrixNode_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Wrapper class for the internal node object, used by Strix libraries.\n *  Node represents a server (master/room) in the Strix network.\n */" },
		{ "ModuleRelativePath", "Public/Adapter/StrixNode.h" },
		{ "ToolTip", "Wrapper class for the internal node object, used by Strix libraries.\nNode represents a server (master/room) in the Strix network." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStrixNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStrixNode>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStrixNode_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "StrixNode" },
		{ "Comment", "/** Id */" },
		{ "ModuleRelativePath", "Public/Adapter/StrixNode.h" },
		{ "ToolTip", "Id" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStrixNode_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStrixNode, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FStrixNode_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStrixNode_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStrixNode_Statics::NewProp_Host_MetaData[] = {
		{ "Category", "StrixNode" },
		{ "Comment", "/** Address of this node */" },
		{ "ModuleRelativePath", "Public/Adapter/StrixNode.h" },
		{ "ToolTip", "Address of this node" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStrixNode_Statics::NewProp_Host = { "Host", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStrixNode, Host), METADATA_PARAMS(Z_Construct_UScriptStruct_FStrixNode_Statics::NewProp_Host_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStrixNode_Statics::NewProp_Host_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStrixNode_Statics::NewProp_Port_MetaData[] = {
		{ "Category", "StrixNode" },
		{ "Comment", "/** Port */" },
		{ "ModuleRelativePath", "Public/Adapter/StrixNode.h" },
		{ "ToolTip", "Port" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStrixNode_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStrixNode, Port), METADATA_PARAMS(Z_Construct_UScriptStruct_FStrixNode_Statics::NewProp_Port_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStrixNode_Statics::NewProp_Port_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStrixNode_Statics::NewProp_Protocol_MetaData[] = {
		{ "Category", "StrixNode" },
		{ "Comment", "/** Type of protocol used (TCP, UDP) */" },
		{ "ModuleRelativePath", "Public/Adapter/StrixNode.h" },
		{ "ToolTip", "Type of protocol used (TCP, UDP)" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStrixNode_Statics::NewProp_Protocol = { "Protocol", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStrixNode, Protocol), METADATA_PARAMS(Z_Construct_UScriptStruct_FStrixNode_Statics::NewProp_Protocol_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStrixNode_Statics::NewProp_Protocol_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStrixNode_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "StrixNode" },
		{ "Comment", "/** Node type */" },
		{ "ModuleRelativePath", "Public/Adapter/StrixNode.h" },
		{ "ToolTip", "Node type" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStrixNode_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStrixNode, Type), METADATA_PARAMS(Z_Construct_UScriptStruct_FStrixNode_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStrixNode_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStrixNode_Statics::NewProp_Properties_MetaData[] = {
		{ "Category", "StrixNode" },
		{ "Comment", "/** Customizable properties of this node.\n\x09 *  Note: it's not possible to create conditions using those.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Adapter/StrixNode.h" },
		{ "ToolTip", "Customizable properties of this node.\nNote: it's not possible to create conditions using those." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStrixNode_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStrixNode, Properties), Z_Construct_UScriptStruct_FStrixPropertyMap, METADATA_PARAMS(Z_Construct_UScriptStruct_FStrixNode_Statics::NewProp_Properties_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStrixNode_Statics::NewProp_Properties_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStrixNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStrixNode_Statics::NewProp_Id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStrixNode_Statics::NewProp_Host,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStrixNode_Statics::NewProp_Port,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStrixNode_Statics::NewProp_Protocol,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStrixNode_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStrixNode_Statics::NewProp_Properties,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStrixNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StrixSDK,
		nullptr,
		&NewStructOps,
		"StrixNode",
		sizeof(FStrixNode),
		alignof(FStrixNode),
		Z_Construct_UScriptStruct_FStrixNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStrixNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStrixNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStrixNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStrixNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStrixNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_StrixSDK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StrixNode"), sizeof(FStrixNode), Get_Z_Construct_UScriptStruct_FStrixNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStrixNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStrixNode_Hash() { return 2939100942U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
