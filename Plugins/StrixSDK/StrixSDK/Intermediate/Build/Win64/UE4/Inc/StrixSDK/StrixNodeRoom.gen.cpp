// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StrixSDK/Public/Adapter/StrixNodeRoom.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStrixNodeRoom() {}
// Cross Module References
	STRIXSDK_API UScriptStruct* Z_Construct_UScriptStruct_FStrixNodeRoom();
	UPackage* Z_Construct_UPackage__Script_StrixSDK();
	STRIXSDK_API UScriptStruct* Z_Construct_UScriptStruct_FStrixPropertyMap();
// End Cross Module References
class UScriptStruct* FStrixNodeRoom::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STRIXSDK_API uint32 Get_Z_Construct_UScriptStruct_FStrixNodeRoom_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStrixNodeRoom, Z_Construct_UPackage__Script_StrixSDK(), TEXT("StrixNodeRoom"), sizeof(FStrixNodeRoom), Get_Z_Construct_UScriptStruct_FStrixNodeRoom_Hash());
	}
	return Singleton;
}
template<> STRIXSDK_API UScriptStruct* StaticStruct<FStrixNodeRoom>()
{
	return FStrixNodeRoom::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStrixNodeRoom(FStrixNodeRoom::StaticStruct, TEXT("/Script/StrixSDK"), TEXT("StrixNodeRoom"), false, nullptr, nullptr);
static struct FScriptStruct_StrixSDK_StaticRegisterNativesFStrixNodeRoom
{
	FScriptStruct_StrixSDK_StaticRegisterNativesFStrixNodeRoom()
	{
		UScriptStruct::DeferCppStructOps<FStrixNodeRoom>(FName(TEXT("StrixNodeRoom")));
	}
} ScriptStruct_StrixSDK_StaticRegisterNativesFStrixNodeRoom;
	struct Z_Construct_UScriptStruct_FStrixNodeRoom_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Capacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Capacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemberCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MemberCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsPasswordProtected_MetaData[];
#endif
		static void NewProp_IsPasswordProtected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsPasswordProtected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsJoinable_MetaData[];
#endif
		static void NewProp_IsJoinable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsJoinable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_State;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key1_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Key1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key2_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Key2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key3_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Key3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key4_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Key4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key5_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Key5;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key6_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Key6;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key7_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Key7;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key8_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Key8;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StringKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Properties;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Wrapper class for the internal node room object, used by Strix libraries.\n *  Node room represents room information stored on the node (master) server.\n *  Not to be confused with FStrixRoom, which is the room information stored on the room server.\n */" },
		{ "ModuleRelativePath", "Public/Adapter/StrixNodeRoom.h" },
		{ "ToolTip", "Wrapper class for the internal node room object, used by Strix libraries.\nNode room represents room information stored on the node (master) server.\nNot to be confused with FStrixRoom, which is the room information stored on the room server." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStrixNodeRoom>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "StrixNodeRoom" },
		{ "Comment", "/** Id\n\x09 *  Note: different than room id. This is the unique identifier of the node id - room id pair stored on the node (master) server.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Adapter/StrixNodeRoom.h" },
		{ "ToolTip", "Id\nNote: different than room id. This is the unique identifier of the node id - room id pair stored on the node (master) server." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStrixNodeRoom, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_RoomId_MetaData[] = {
		{ "Category", "StrixNodeRoom" },
		{ "Comment", "/** Room Id */" },
		{ "ModuleRelativePath", "Public/Adapter/StrixNodeRoom.h" },
		{ "ToolTip", "Room Id" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_RoomId = { "RoomId", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStrixNodeRoom, RoomId), METADATA_PARAMS(Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_RoomId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_RoomId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_Capacity_MetaData[] = {
		{ "Category", "StrixNodeRoom" },
		{ "Comment", "/** Capacity of this room */" },
		{ "ModuleRelativePath", "Public/Adapter/StrixNodeRoom.h" },
		{ "ToolTip", "Capacity of this room" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_Capacity = { "Capacity", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStrixNodeRoom, Capacity), METADATA_PARAMS(Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_Capacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_Capacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_MemberCount_MetaData[] = {
		{ "Category", "StrixNodeRoom" },
		{ "Comment", "/** Current member count of this room */" },
		{ "ModuleRelativePath", "Public/Adapter/StrixNodeRoom.h" },
		{ "ToolTip", "Current member count of this room" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_MemberCount = { "MemberCount", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStrixNodeRoom, MemberCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_MemberCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_MemberCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_IsPasswordProtected_MetaData[] = {
		{ "Category", "StrixNodeRoom" },
		{ "Comment", "/** Whether or not this room is password protected */" },
		{ "ModuleRelativePath", "Public/Adapter/StrixNodeRoom.h" },
		{ "ToolTip", "Whether or not this room is password protected" },
	};
#endif
	void Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_IsPasswordProtected_SetBit(void* Obj)
	{
		((FStrixNodeRoom*)Obj)->IsPasswordProtected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_IsPasswordProtected = { "IsPasswordProtected", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStrixNodeRoom), &Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_IsPasswordProtected_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_IsPasswordProtected_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_IsPasswordProtected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_IsJoinable_MetaData[] = {
		{ "Category", "StrixNodeRoom" },
		{ "Comment", "/** Whether or not this room is joinable */" },
		{ "ModuleRelativePath", "Public/Adapter/StrixNodeRoom.h" },
		{ "ToolTip", "Whether or not this room is joinable" },
	};
#endif
	void Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_IsJoinable_SetBit(void* Obj)
	{
		((FStrixNodeRoom*)Obj)->IsJoinable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_IsJoinable = { "IsJoinable", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStrixNodeRoom), &Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_IsJoinable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_IsJoinable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_IsJoinable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_State_MetaData[] = {
		{ "Category", "StrixNodeRoom" },
		{ "Comment", "/** Id of the current state on the room (not predefined) */" },
		{ "ModuleRelativePath", "Public/Adapter/StrixNodeRoom.h" },
		{ "ToolTip", "Id of the current state on the room (not predefined)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStrixNodeRoom, State), METADATA_PARAMS(Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_State_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "StrixNodeRoom" },
		{ "Comment", "/** Name of this room */" },
		{ "ModuleRelativePath", "Public/Adapter/StrixNodeRoom.h" },
		{ "ToolTip", "Name of this room" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStrixNodeRoom, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_Key1_MetaData[] = {
		{ "Category", "StrixNodeRoom" },
		{ "Comment", "/** Customizable numeric property that can be used for making conditions */" },
		{ "ModuleRelativePath", "Public/Adapter/StrixNodeRoom.h" },
		{ "ToolTip", "Customizable numeric property that can be used for making conditions" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_Key1 = { "Key1", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStrixNodeRoom, Key1), METADATA_PARAMS(Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_Key1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_Key1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_Key2_MetaData[] = {
		{ "Category", "StrixNodeRoom" },
		{ "Comment", "/** Customizable numeric property that can be used for making conditions */" },
		{ "ModuleRelativePath", "Public/Adapter/StrixNodeRoom.h" },
		{ "ToolTip", "Customizable numeric property that can be used for making conditions" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_Key2 = { "Key2", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStrixNodeRoom, Key2), METADATA_PARAMS(Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_Key2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_Key2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_Key3_MetaData[] = {
		{ "Category", "StrixNodeRoom" },
		{ "Comment", "/** Customizable numeric property that can be used for making conditions */" },
		{ "ModuleRelativePath", "Public/Adapter/StrixNodeRoom.h" },
		{ "ToolTip", "Customizable numeric property that can be used for making conditions" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_Key3 = { "Key3", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStrixNodeRoom, Key3), METADATA_PARAMS(Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_Key3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_Key3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_Key4_MetaData[] = {
		{ "Category", "StrixNodeRoom" },
		{ "Comment", "/** Customizable numeric property that can be used for making conditions */" },
		{ "ModuleRelativePath", "Public/Adapter/StrixNodeRoom.h" },
		{ "ToolTip", "Customizable numeric property that can be used for making conditions" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_Key4 = { "Key4", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStrixNodeRoom, Key4), METADATA_PARAMS(Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_Key4_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_Key4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_Key5_MetaData[] = {
		{ "Category", "StrixNodeRoom" },
		{ "Comment", "/** Customizable numeric property that can be used for making conditions */" },
		{ "ModuleRelativePath", "Public/Adapter/StrixNodeRoom.h" },
		{ "ToolTip", "Customizable numeric property that can be used for making conditions" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_Key5 = { "Key5", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStrixNodeRoom, Key5), METADATA_PARAMS(Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_Key5_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_Key5_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_Key6_MetaData[] = {
		{ "Category", "StrixNodeRoom" },
		{ "Comment", "/** Customizable numeric property that can be used for making conditions */" },
		{ "ModuleRelativePath", "Public/Adapter/StrixNodeRoom.h" },
		{ "ToolTip", "Customizable numeric property that can be used for making conditions" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_Key6 = { "Key6", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStrixNodeRoom, Key6), METADATA_PARAMS(Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_Key6_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_Key6_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_Key7_MetaData[] = {
		{ "Category", "StrixNodeRoom" },
		{ "Comment", "/** Customizable numeric property that can be used for making conditions */" },
		{ "ModuleRelativePath", "Public/Adapter/StrixNodeRoom.h" },
		{ "ToolTip", "Customizable numeric property that can be used for making conditions" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_Key7 = { "Key7", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStrixNodeRoom, Key7), METADATA_PARAMS(Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_Key7_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_Key7_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_Key8_MetaData[] = {
		{ "Category", "StrixNodeRoom" },
		{ "Comment", "/** Customizable numeric property that can be used for making conditions */" },
		{ "ModuleRelativePath", "Public/Adapter/StrixNodeRoom.h" },
		{ "ToolTip", "Customizable numeric property that can be used for making conditions" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_Key8 = { "Key8", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStrixNodeRoom, Key8), METADATA_PARAMS(Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_Key8_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_Key8_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_StringKey_MetaData[] = {
		{ "Category", "StrixNodeRoom" },
		{ "Comment", "/** Customizable string property that can be used for making conditions */" },
		{ "ModuleRelativePath", "Public/Adapter/StrixNodeRoom.h" },
		{ "ToolTip", "Customizable string property that can be used for making conditions" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_StringKey = { "StringKey", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStrixNodeRoom, StringKey), METADATA_PARAMS(Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_StringKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_StringKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_Properties_MetaData[] = {
		{ "Category", "StrixNodeRoom" },
		{ "Comment", "/** Customizable properties of this room.\n\x09 *  Note: it's not possible to create conditions using those.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Adapter/StrixNodeRoom.h" },
		{ "ToolTip", "Customizable properties of this room.\nNote: it's not possible to create conditions using those." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStrixNodeRoom, Properties), Z_Construct_UScriptStruct_FStrixPropertyMap, METADATA_PARAMS(Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_Properties_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_Properties_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_Id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_RoomId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_Capacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_MemberCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_IsPasswordProtected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_IsJoinable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_Key1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_Key2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_Key3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_Key4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_Key5,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_Key6,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_Key7,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_Key8,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_StringKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::NewProp_Properties,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StrixSDK,
		nullptr,
		&NewStructOps,
		"StrixNodeRoom",
		sizeof(FStrixNodeRoom),
		alignof(FStrixNodeRoom),
		Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStrixNodeRoom()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStrixNodeRoom_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_StrixSDK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StrixNodeRoom"), sizeof(FStrixNodeRoom), Get_Z_Construct_UScriptStruct_FStrixNodeRoom_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStrixNodeRoom_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStrixNodeRoom_Hash() { return 544491773U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
