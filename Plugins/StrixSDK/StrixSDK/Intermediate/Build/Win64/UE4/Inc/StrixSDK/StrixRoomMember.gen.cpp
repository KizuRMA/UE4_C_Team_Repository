// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StrixSDK/Public/Adapter/StrixRoomMember.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStrixRoomMember() {}
// Cross Module References
	STRIXSDK_API UScriptStruct* Z_Construct_UScriptStruct_FStrixRoomMember();
	UPackage* Z_Construct_UPackage__Script_StrixSDK();
	STRIXSDK_API UScriptStruct* Z_Construct_UScriptStruct_FStrixPropertyMap();
// End Cross Module References
class UScriptStruct* FStrixRoomMember::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STRIXSDK_API uint32 Get_Z_Construct_UScriptStruct_FStrixRoomMember_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStrixRoomMember, Z_Construct_UPackage__Script_StrixSDK(), TEXT("StrixRoomMember"), sizeof(FStrixRoomMember), Get_Z_Construct_UScriptStruct_FStrixRoomMember_Hash());
	}
	return Singleton;
}
template<> STRIXSDK_API UScriptStruct* StaticStruct<FStrixRoomMember>()
{
	return FStrixRoomMember::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStrixRoomMember(FStrixRoomMember::StaticStruct, TEXT("/Script/StrixSDK"), TEXT("StrixRoomMember"), false, nullptr, nullptr);
static struct FScriptStruct_StrixSDK_StaticRegisterNativesFStrixRoomMember
{
	FScriptStruct_StrixSDK_StaticRegisterNativesFStrixRoomMember()
	{
		UScriptStruct::DeferCppStructOps<FStrixRoomMember>(FName(TEXT("StrixRoomMember")));
	}
} ScriptStruct_StrixSDK_StaticRegisterNativesFStrixRoomMember;
	struct Z_Construct_UScriptStruct_FStrixRoomMember_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoomId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RoomId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Properties;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStrixRoomMember_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Wrapper class for the internal room member object, used by Strix libraries.\n *  Room member represents a client connected to the specified room.\n */" },
		{ "ModuleRelativePath", "Public/Adapter/StrixRoomMember.h" },
		{ "ToolTip", "Wrapper class for the internal room member object, used by Strix libraries.\nRoom member represents a client connected to the specified room." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStrixRoomMember_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStrixRoomMember>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStrixRoomMember_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "StrixRoomMember" },
		{ "Comment", "/** Member Id */" },
		{ "ModuleRelativePath", "Public/Adapter/StrixRoomMember.h" },
		{ "ToolTip", "Member Id" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStrixRoomMember_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStrixRoomMember, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FStrixRoomMember_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStrixRoomMember_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStrixRoomMember_Statics::NewProp_RoomId_MetaData[] = {
		{ "Category", "StrixRoomMember" },
		{ "Comment", "/** Room Id */" },
		{ "ModuleRelativePath", "Public/Adapter/StrixRoomMember.h" },
		{ "ToolTip", "Room Id" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStrixRoomMember_Statics::NewProp_RoomId = { "RoomId", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStrixRoomMember, RoomId), METADATA_PARAMS(Z_Construct_UScriptStruct_FStrixRoomMember_Statics::NewProp_RoomId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStrixRoomMember_Statics::NewProp_RoomId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStrixRoomMember_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "StrixRoomMember" },
		{ "Comment", "/** Name of this member */" },
		{ "ModuleRelativePath", "Public/Adapter/StrixRoomMember.h" },
		{ "ToolTip", "Name of this member" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStrixRoomMember_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStrixRoomMember, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FStrixRoomMember_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStrixRoomMember_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStrixRoomMember_Statics::NewProp_Properties_MetaData[] = {
		{ "Category", "StrixRoomMember" },
		{ "Comment", "/** Customizable properties of this room.\n\x09 *  Note: it's not possible to create conditions using those.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Adapter/StrixRoomMember.h" },
		{ "ToolTip", "Customizable properties of this room.\nNote: it's not possible to create conditions using those." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStrixRoomMember_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStrixRoomMember, Properties), Z_Construct_UScriptStruct_FStrixPropertyMap, METADATA_PARAMS(Z_Construct_UScriptStruct_FStrixRoomMember_Statics::NewProp_Properties_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStrixRoomMember_Statics::NewProp_Properties_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStrixRoomMember_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStrixRoomMember_Statics::NewProp_Id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStrixRoomMember_Statics::NewProp_RoomId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStrixRoomMember_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStrixRoomMember_Statics::NewProp_Properties,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStrixRoomMember_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StrixSDK,
		nullptr,
		&NewStructOps,
		"StrixRoomMember",
		sizeof(FStrixRoomMember),
		alignof(FStrixRoomMember),
		Z_Construct_UScriptStruct_FStrixRoomMember_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStrixRoomMember_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStrixRoomMember_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStrixRoomMember_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStrixRoomMember()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStrixRoomMember_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_StrixSDK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StrixRoomMember"), sizeof(FStrixRoomMember), Get_Z_Construct_UScriptStruct_FStrixRoomMember_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStrixRoomMember_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStrixRoomMember_Hash() { return 3040675761U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
