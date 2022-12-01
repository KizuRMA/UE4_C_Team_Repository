// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StrixSDK/Public/StrixNotificationListenerObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStrixNotificationListenerObject() {}
// Cross Module References
	STRIXSDK_API UFunction* Z_Construct_UDelegateFunction_StrixSDK_StrixRoomServerDisconnectedDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_StrixSDK();
	STRIXSDK_API UFunction* Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomOwnerChangedNotificationDelegate__DelegateSignature();
	STRIXSDK_API UScriptStruct* Z_Construct_UScriptStruct_FStrixRoomMember();
	STRIXSDK_API UFunction* Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomContextClosedDelegate__DelegateSignature();
	STRIXSDK_API UFunction* Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomDeleteNotificationDelegate__DelegateSignature();
	STRIXSDK_API UFunction* Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomKickNotificationDelegate__DelegateSignature();
	STRIXSDK_API UFunction* Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomSetMemberNotificationDelegate__DelegateSignature();
	STRIXSDK_API UFunction* Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomSetNotificationDelegate__DelegateSignature();
	STRIXSDK_API UScriptStruct* Z_Construct_UScriptStruct_FStrixRoom();
	STRIXSDK_API UFunction* Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomLeaveNotificationDelegate__DelegateSignature();
	STRIXSDK_API UFunction* Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomJoinNotificationDelegate__DelegateSignature();
	STRIXSDK_API UFunction* Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomContextOpenDelegate__DelegateSignature();
	STRIXSDK_API UClass* Z_Construct_UClass_UStrixNotificationListenerObject_NoRegister();
	STRIXSDK_API UClass* Z_Construct_UClass_UStrixNotificationListenerObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_StrixSDK_StrixRoomServerDisconnectedDelegate__DelegateSignature_Statics
	{
		struct _Script_StrixSDK_eventStrixRoomServerDisconnectedDelegate_Parms
		{
			int32 ChannelId;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ChannelId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_StrixSDK_StrixRoomServerDisconnectedDelegate__DelegateSignature_Statics::NewProp_ChannelId = { "ChannelId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_StrixSDK_eventStrixRoomServerDisconnectedDelegate_Parms, ChannelId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_StrixSDK_StrixRoomServerDisconnectedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_StrixSDK_StrixRoomServerDisconnectedDelegate__DelegateSignature_Statics::NewProp_ChannelId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_StrixSDK_StrixRoomServerDisconnectedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StrixNotificationListenerObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_StrixSDK_StrixRoomServerDisconnectedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_StrixSDK, nullptr, "StrixRoomServerDisconnectedDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_StrixSDK_eventStrixRoomServerDisconnectedDelegate_Parms), Z_Construct_UDelegateFunction_StrixSDK_StrixRoomServerDisconnectedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StrixSDK_StrixRoomServerDisconnectedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_StrixSDK_StrixRoomServerDisconnectedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StrixSDK_StrixRoomServerDisconnectedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_StrixSDK_StrixRoomServerDisconnectedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_StrixSDK_StrixRoomServerDisconnectedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomOwnerChangedNotificationDelegate__DelegateSignature_Statics
	{
		struct _Script_StrixSDK_eventStrixNotifierRoomOwnerChangedNotificationDelegate_Parms
		{
			int32 channelId;
			FStrixRoomMember newOwner;
			FStrixRoomMember previousOwner;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_channelId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_newOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_newOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_previousOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_previousOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomOwnerChangedNotificationDelegate__DelegateSignature_Statics::NewProp_channelId = { "channelId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_StrixSDK_eventStrixNotifierRoomOwnerChangedNotificationDelegate_Parms, channelId), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomOwnerChangedNotificationDelegate__DelegateSignature_Statics::NewProp_newOwner_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomOwnerChangedNotificationDelegate__DelegateSignature_Statics::NewProp_newOwner = { "newOwner", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_StrixSDK_eventStrixNotifierRoomOwnerChangedNotificationDelegate_Parms, newOwner), Z_Construct_UScriptStruct_FStrixRoomMember, METADATA_PARAMS(Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomOwnerChangedNotificationDelegate__DelegateSignature_Statics::NewProp_newOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomOwnerChangedNotificationDelegate__DelegateSignature_Statics::NewProp_newOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomOwnerChangedNotificationDelegate__DelegateSignature_Statics::NewProp_previousOwner_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomOwnerChangedNotificationDelegate__DelegateSignature_Statics::NewProp_previousOwner = { "previousOwner", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_StrixSDK_eventStrixNotifierRoomOwnerChangedNotificationDelegate_Parms, previousOwner), Z_Construct_UScriptStruct_FStrixRoomMember, METADATA_PARAMS(Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomOwnerChangedNotificationDelegate__DelegateSignature_Statics::NewProp_previousOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomOwnerChangedNotificationDelegate__DelegateSignature_Statics::NewProp_previousOwner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomOwnerChangedNotificationDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomOwnerChangedNotificationDelegate__DelegateSignature_Statics::NewProp_channelId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomOwnerChangedNotificationDelegate__DelegateSignature_Statics::NewProp_newOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomOwnerChangedNotificationDelegate__DelegateSignature_Statics::NewProp_previousOwner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomOwnerChangedNotificationDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StrixNotificationListenerObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomOwnerChangedNotificationDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_StrixSDK, nullptr, "StrixNotifierRoomOwnerChangedNotificationDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_StrixSDK_eventStrixNotifierRoomOwnerChangedNotificationDelegate_Parms), Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomOwnerChangedNotificationDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomOwnerChangedNotificationDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomOwnerChangedNotificationDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomOwnerChangedNotificationDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomOwnerChangedNotificationDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomOwnerChangedNotificationDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomContextClosedDelegate__DelegateSignature_Statics
	{
		struct _Script_StrixSDK_eventStrixNotifierRoomContextClosedDelegate_Parms
		{
			int32 channelId;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_channelId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomContextClosedDelegate__DelegateSignature_Statics::NewProp_channelId = { "channelId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_StrixSDK_eventStrixNotifierRoomContextClosedDelegate_Parms, channelId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomContextClosedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomContextClosedDelegate__DelegateSignature_Statics::NewProp_channelId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomContextClosedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StrixNotificationListenerObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomContextClosedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_StrixSDK, nullptr, "StrixNotifierRoomContextClosedDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_StrixSDK_eventStrixNotifierRoomContextClosedDelegate_Parms), Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomContextClosedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomContextClosedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomContextClosedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomContextClosedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomContextClosedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomContextClosedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomDeleteNotificationDelegate__DelegateSignature_Statics
	{
		struct _Script_StrixSDK_eventStrixNotifierRoomDeleteNotificationDelegate_Parms
		{
			int32 channelId;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_channelId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomDeleteNotificationDelegate__DelegateSignature_Statics::NewProp_channelId = { "channelId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_StrixSDK_eventStrixNotifierRoomDeleteNotificationDelegate_Parms, channelId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomDeleteNotificationDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomDeleteNotificationDelegate__DelegateSignature_Statics::NewProp_channelId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomDeleteNotificationDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StrixNotificationListenerObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomDeleteNotificationDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_StrixSDK, nullptr, "StrixNotifierRoomDeleteNotificationDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_StrixSDK_eventStrixNotifierRoomDeleteNotificationDelegate_Parms), Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomDeleteNotificationDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomDeleteNotificationDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomDeleteNotificationDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomDeleteNotificationDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomDeleteNotificationDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomDeleteNotificationDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomKickNotificationDelegate__DelegateSignature_Statics
	{
		struct _Script_StrixSDK_eventStrixNotifierRoomKickNotificationDelegate_Parms
		{
			int32 channelId;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_channelId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomKickNotificationDelegate__DelegateSignature_Statics::NewProp_channelId = { "channelId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_StrixSDK_eventStrixNotifierRoomKickNotificationDelegate_Parms, channelId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomKickNotificationDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomKickNotificationDelegate__DelegateSignature_Statics::NewProp_channelId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomKickNotificationDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StrixNotificationListenerObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomKickNotificationDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_StrixSDK, nullptr, "StrixNotifierRoomKickNotificationDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_StrixSDK_eventStrixNotifierRoomKickNotificationDelegate_Parms), Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomKickNotificationDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomKickNotificationDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomKickNotificationDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomKickNotificationDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomKickNotificationDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomKickNotificationDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomSetMemberNotificationDelegate__DelegateSignature_Statics
	{
		struct _Script_StrixSDK_eventStrixNotifierRoomSetMemberNotificationDelegate_Parms
		{
			int32 channelId;
			FStrixRoomMember roomMember;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_channelId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_roomMember_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_roomMember;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomSetMemberNotificationDelegate__DelegateSignature_Statics::NewProp_channelId = { "channelId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_StrixSDK_eventStrixNotifierRoomSetMemberNotificationDelegate_Parms, channelId), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomSetMemberNotificationDelegate__DelegateSignature_Statics::NewProp_roomMember_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomSetMemberNotificationDelegate__DelegateSignature_Statics::NewProp_roomMember = { "roomMember", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_StrixSDK_eventStrixNotifierRoomSetMemberNotificationDelegate_Parms, roomMember), Z_Construct_UScriptStruct_FStrixRoomMember, METADATA_PARAMS(Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomSetMemberNotificationDelegate__DelegateSignature_Statics::NewProp_roomMember_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomSetMemberNotificationDelegate__DelegateSignature_Statics::NewProp_roomMember_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomSetMemberNotificationDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomSetMemberNotificationDelegate__DelegateSignature_Statics::NewProp_channelId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomSetMemberNotificationDelegate__DelegateSignature_Statics::NewProp_roomMember,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomSetMemberNotificationDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StrixNotificationListenerObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomSetMemberNotificationDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_StrixSDK, nullptr, "StrixNotifierRoomSetMemberNotificationDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_StrixSDK_eventStrixNotifierRoomSetMemberNotificationDelegate_Parms), Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomSetMemberNotificationDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomSetMemberNotificationDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomSetMemberNotificationDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomSetMemberNotificationDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomSetMemberNotificationDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomSetMemberNotificationDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomSetNotificationDelegate__DelegateSignature_Statics
	{
		struct _Script_StrixSDK_eventStrixNotifierRoomSetNotificationDelegate_Parms
		{
			int32 channelId;
			FStrixRoom roomMember;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_channelId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_roomMember_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_roomMember;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomSetNotificationDelegate__DelegateSignature_Statics::NewProp_channelId = { "channelId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_StrixSDK_eventStrixNotifierRoomSetNotificationDelegate_Parms, channelId), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomSetNotificationDelegate__DelegateSignature_Statics::NewProp_roomMember_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomSetNotificationDelegate__DelegateSignature_Statics::NewProp_roomMember = { "roomMember", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_StrixSDK_eventStrixNotifierRoomSetNotificationDelegate_Parms, roomMember), Z_Construct_UScriptStruct_FStrixRoom, METADATA_PARAMS(Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomSetNotificationDelegate__DelegateSignature_Statics::NewProp_roomMember_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomSetNotificationDelegate__DelegateSignature_Statics::NewProp_roomMember_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomSetNotificationDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomSetNotificationDelegate__DelegateSignature_Statics::NewProp_channelId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomSetNotificationDelegate__DelegateSignature_Statics::NewProp_roomMember,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomSetNotificationDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StrixNotificationListenerObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomSetNotificationDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_StrixSDK, nullptr, "StrixNotifierRoomSetNotificationDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_StrixSDK_eventStrixNotifierRoomSetNotificationDelegate_Parms), Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomSetNotificationDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomSetNotificationDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomSetNotificationDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomSetNotificationDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomSetNotificationDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomSetNotificationDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomLeaveNotificationDelegate__DelegateSignature_Statics
	{
		struct _Script_StrixSDK_eventStrixNotifierRoomLeaveNotificationDelegate_Parms
		{
			int32 channelId;
			FStrixRoomMember roomMember;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_channelId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_roomMember_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_roomMember;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomLeaveNotificationDelegate__DelegateSignature_Statics::NewProp_channelId = { "channelId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_StrixSDK_eventStrixNotifierRoomLeaveNotificationDelegate_Parms, channelId), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomLeaveNotificationDelegate__DelegateSignature_Statics::NewProp_roomMember_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomLeaveNotificationDelegate__DelegateSignature_Statics::NewProp_roomMember = { "roomMember", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_StrixSDK_eventStrixNotifierRoomLeaveNotificationDelegate_Parms, roomMember), Z_Construct_UScriptStruct_FStrixRoomMember, METADATA_PARAMS(Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomLeaveNotificationDelegate__DelegateSignature_Statics::NewProp_roomMember_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomLeaveNotificationDelegate__DelegateSignature_Statics::NewProp_roomMember_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomLeaveNotificationDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomLeaveNotificationDelegate__DelegateSignature_Statics::NewProp_channelId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomLeaveNotificationDelegate__DelegateSignature_Statics::NewProp_roomMember,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomLeaveNotificationDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StrixNotificationListenerObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomLeaveNotificationDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_StrixSDK, nullptr, "StrixNotifierRoomLeaveNotificationDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_StrixSDK_eventStrixNotifierRoomLeaveNotificationDelegate_Parms), Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomLeaveNotificationDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomLeaveNotificationDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomLeaveNotificationDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomLeaveNotificationDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomLeaveNotificationDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomLeaveNotificationDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomJoinNotificationDelegate__DelegateSignature_Statics
	{
		struct _Script_StrixSDK_eventStrixNotifierRoomJoinNotificationDelegate_Parms
		{
			int32 channelId;
			FStrixRoomMember roomMember;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_channelId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_roomMember_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_roomMember;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomJoinNotificationDelegate__DelegateSignature_Statics::NewProp_channelId = { "channelId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_StrixSDK_eventStrixNotifierRoomJoinNotificationDelegate_Parms, channelId), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomJoinNotificationDelegate__DelegateSignature_Statics::NewProp_roomMember_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomJoinNotificationDelegate__DelegateSignature_Statics::NewProp_roomMember = { "roomMember", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_StrixSDK_eventStrixNotifierRoomJoinNotificationDelegate_Parms, roomMember), Z_Construct_UScriptStruct_FStrixRoomMember, METADATA_PARAMS(Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomJoinNotificationDelegate__DelegateSignature_Statics::NewProp_roomMember_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomJoinNotificationDelegate__DelegateSignature_Statics::NewProp_roomMember_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomJoinNotificationDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomJoinNotificationDelegate__DelegateSignature_Statics::NewProp_channelId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomJoinNotificationDelegate__DelegateSignature_Statics::NewProp_roomMember,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomJoinNotificationDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StrixNotificationListenerObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomJoinNotificationDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_StrixSDK, nullptr, "StrixNotifierRoomJoinNotificationDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_StrixSDK_eventStrixNotifierRoomJoinNotificationDelegate_Parms), Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomJoinNotificationDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomJoinNotificationDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomJoinNotificationDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomJoinNotificationDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomJoinNotificationDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomJoinNotificationDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomContextOpenDelegate__DelegateSignature_Statics
	{
		struct _Script_StrixSDK_eventStrixNotifierRoomContextOpenDelegate_Parms
		{
			int32 channelId;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_channelId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomContextOpenDelegate__DelegateSignature_Statics::NewProp_channelId = { "channelId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_StrixSDK_eventStrixNotifierRoomContextOpenDelegate_Parms, channelId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomContextOpenDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomContextOpenDelegate__DelegateSignature_Statics::NewProp_channelId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomContextOpenDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Class used for easy management of the callbacks (functions)\n *  executed when a notification arrives on the specified channel.\n *  \n */" },
		{ "ModuleRelativePath", "Public/StrixNotificationListenerObject.h" },
		{ "ToolTip", "Class used for easy management of the callbacks (functions)\nexecuted when a notification arrives on the specified channel." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomContextOpenDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_StrixSDK, nullptr, "StrixNotifierRoomContextOpenDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_StrixSDK_eventStrixNotifierRoomContextOpenDelegate_Parms), Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomContextOpenDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomContextOpenDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomContextOpenDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomContextOpenDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomContextOpenDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomContextOpenDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UStrixNotificationListenerObject::execStopNotificationListener)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopNotificationListener();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStrixNotificationListenerObject::execInit)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ChannelId);
		P_GET_OBJECT(UObject,Z_Param_ContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init(Z_Param_ChannelId,Z_Param_ContextObject);
		P_NATIVE_END;
	}
	void UStrixNotificationListenerObject::StaticRegisterNativesUStrixNotificationListenerObject()
	{
		UClass* Class = UStrixNotificationListenerObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Init", &UStrixNotificationListenerObject::execInit },
			{ "StopNotificationListener", &UStrixNotificationListenerObject::execStopNotificationListener },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStrixNotificationListenerObject_Init_Statics
	{
		struct StrixNotificationListenerObject_eventInit_Parms
		{
			int32 ChannelId;
			UObject* ContextObject;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ChannelId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStrixNotificationListenerObject_Init_Statics::NewProp_ChannelId = { "ChannelId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StrixNotificationListenerObject_eventInit_Parms, ChannelId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStrixNotificationListenerObject_Init_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StrixNotificationListenerObject_eventInit_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStrixNotificationListenerObject_Init_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStrixNotificationListenerObject_Init_Statics::NewProp_ChannelId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStrixNotificationListenerObject_Init_Statics::NewProp_ContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStrixNotificationListenerObject_Init_Statics::Function_MetaDataParams[] = {
		{ "Category", "Strix|Notifications" },
		{ "Comment", "/** Initializes the listener.\n     *\n     *  @param ChannelId  The channel ID of the connection to listen on.\n     *  @param  ContextObject An object within the game world to access the correct PIE window for use in editor.\n     */" },
		{ "ModuleRelativePath", "Public/StrixNotificationListenerObject.h" },
		{ "ToolTip", "Initializes the listener.\n\n@param ChannelId  The channel ID of the connection to listen on.\n@param  ContextObject An object within the game world to access the correct PIE window for use in editor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStrixNotificationListenerObject_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStrixNotificationListenerObject, nullptr, "Init", nullptr, nullptr, sizeof(StrixNotificationListenerObject_eventInit_Parms), Z_Construct_UFunction_UStrixNotificationListenerObject_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStrixNotificationListenerObject_Init_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStrixNotificationListenerObject_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStrixNotificationListenerObject_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStrixNotificationListenerObject_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStrixNotificationListenerObject_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStrixNotificationListenerObject_StopNotificationListener_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStrixNotificationListenerObject_StopNotificationListener_Statics::Function_MetaDataParams[] = {
		{ "Category", "Strix|Notifications" },
		{ "Comment", "/** Stops this notification listener, removing the registered callbacks\n     *  so that the delegates won't be called.\n     *  Called on destruction of this object.\n     */" },
		{ "ModuleRelativePath", "Public/StrixNotificationListenerObject.h" },
		{ "ToolTip", "Stops this notification listener, removing the registered callbacks\nso that the delegates won't be called.\nCalled on destruction of this object." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStrixNotificationListenerObject_StopNotificationListener_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStrixNotificationListenerObject, nullptr, "StopNotificationListener", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStrixNotificationListenerObject_StopNotificationListener_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStrixNotificationListenerObject_StopNotificationListener_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStrixNotificationListenerObject_StopNotificationListener()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStrixNotificationListenerObject_StopNotificationListener_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStrixNotificationListenerObject_NoRegister()
	{
		return UStrixNotificationListenerObject::StaticClass();
	}
	struct Z_Construct_UClass_UStrixNotificationListenerObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrixRoomContextOpen_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_StrixRoomContextOpen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrixRoomJoinNotificationArrived_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_StrixRoomJoinNotificationArrived;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrixRoomLeaveNotificationArrived_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_StrixRoomLeaveNotificationArrived;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrixRoomSetNotificationArrived_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_StrixRoomSetNotificationArrived;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrixRoomSetMemberNotificationArrived_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_StrixRoomSetMemberNotificationArrived;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrixRoomKickNotificationArrived_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_StrixRoomKickNotificationArrived;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrixRoomDeleteNotificationArrived_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_StrixRoomDeleteNotificationArrived;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrixRoomContextClosed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_StrixRoomContextClosed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrixRoomOwnerChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_StrixRoomOwnerChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrixRoomServerDisconnected_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_StrixRoomServerDisconnected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStrixNotificationListenerObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_StrixSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStrixNotificationListenerObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStrixNotificationListenerObject_Init, "Init" }, // 789687289
		{ &Z_Construct_UFunction_UStrixNotificationListenerObject_StopNotificationListener, "StopNotificationListener" }, // 1618738796
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStrixNotificationListenerObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Strix" },
		{ "IncludePath", "StrixNotificationListenerObject.h" },
		{ "ModuleRelativePath", "Public/StrixNotificationListenerObject.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStrixNotificationListenerObject_Statics::NewProp_StrixRoomContextOpen_MetaData[] = {
		{ "Category", "Strix|Notifications" },
		{ "Comment", "/** Delegate called when room context was opened\n     */" },
		{ "ModuleRelativePath", "Public/StrixNotificationListenerObject.h" },
		{ "ToolTip", "Delegate called when room context was opened" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStrixNotificationListenerObject_Statics::NewProp_StrixRoomContextOpen = { "StrixRoomContextOpen", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStrixNotificationListenerObject, StrixRoomContextOpen), Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomContextOpenDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UStrixNotificationListenerObject_Statics::NewProp_StrixRoomContextOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStrixNotificationListenerObject_Statics::NewProp_StrixRoomContextOpen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStrixNotificationListenerObject_Statics::NewProp_StrixRoomJoinNotificationArrived_MetaData[] = {
		{ "Category", "Strix|Notifications" },
		{ "Comment", "/** Delegate called when room join notification was received\n     */" },
		{ "ModuleRelativePath", "Public/StrixNotificationListenerObject.h" },
		{ "ToolTip", "Delegate called when room join notification was received" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStrixNotificationListenerObject_Statics::NewProp_StrixRoomJoinNotificationArrived = { "StrixRoomJoinNotificationArrived", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStrixNotificationListenerObject, StrixRoomJoinNotificationArrived), Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomJoinNotificationDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UStrixNotificationListenerObject_Statics::NewProp_StrixRoomJoinNotificationArrived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStrixNotificationListenerObject_Statics::NewProp_StrixRoomJoinNotificationArrived_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStrixNotificationListenerObject_Statics::NewProp_StrixRoomLeaveNotificationArrived_MetaData[] = {
		{ "Category", "Strix|Notifications" },
		{ "Comment", "/** Delegate called when room leave notification was received\n     */" },
		{ "ModuleRelativePath", "Public/StrixNotificationListenerObject.h" },
		{ "ToolTip", "Delegate called when room leave notification was received" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStrixNotificationListenerObject_Statics::NewProp_StrixRoomLeaveNotificationArrived = { "StrixRoomLeaveNotificationArrived", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStrixNotificationListenerObject, StrixRoomLeaveNotificationArrived), Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomLeaveNotificationDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UStrixNotificationListenerObject_Statics::NewProp_StrixRoomLeaveNotificationArrived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStrixNotificationListenerObject_Statics::NewProp_StrixRoomLeaveNotificationArrived_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStrixNotificationListenerObject_Statics::NewProp_StrixRoomSetNotificationArrived_MetaData[] = {
		{ "Category", "Strix|Notifications" },
		{ "Comment", "/** Delegate called when room set notification was received\n     */" },
		{ "ModuleRelativePath", "Public/StrixNotificationListenerObject.h" },
		{ "ToolTip", "Delegate called when room set notification was received" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStrixNotificationListenerObject_Statics::NewProp_StrixRoomSetNotificationArrived = { "StrixRoomSetNotificationArrived", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStrixNotificationListenerObject, StrixRoomSetNotificationArrived), Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomSetNotificationDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UStrixNotificationListenerObject_Statics::NewProp_StrixRoomSetNotificationArrived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStrixNotificationListenerObject_Statics::NewProp_StrixRoomSetNotificationArrived_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStrixNotificationListenerObject_Statics::NewProp_StrixRoomSetMemberNotificationArrived_MetaData[] = {
		{ "Category", "Strix|Notifications" },
		{ "Comment", "/** Delegate called when room set member notification was received\n     */" },
		{ "ModuleRelativePath", "Public/StrixNotificationListenerObject.h" },
		{ "ToolTip", "Delegate called when room set member notification was received" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStrixNotificationListenerObject_Statics::NewProp_StrixRoomSetMemberNotificationArrived = { "StrixRoomSetMemberNotificationArrived", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStrixNotificationListenerObject, StrixRoomSetMemberNotificationArrived), Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomSetMemberNotificationDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UStrixNotificationListenerObject_Statics::NewProp_StrixRoomSetMemberNotificationArrived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStrixNotificationListenerObject_Statics::NewProp_StrixRoomSetMemberNotificationArrived_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStrixNotificationListenerObject_Statics::NewProp_StrixRoomKickNotificationArrived_MetaData[] = {
		{ "Category", "Strix|Notifications" },
		{ "Comment", "/** Delegate called when room kick notification was received\n     */" },
		{ "ModuleRelativePath", "Public/StrixNotificationListenerObject.h" },
		{ "ToolTip", "Delegate called when room kick notification was received" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStrixNotificationListenerObject_Statics::NewProp_StrixRoomKickNotificationArrived = { "StrixRoomKickNotificationArrived", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStrixNotificationListenerObject, StrixRoomKickNotificationArrived), Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomKickNotificationDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UStrixNotificationListenerObject_Statics::NewProp_StrixRoomKickNotificationArrived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStrixNotificationListenerObject_Statics::NewProp_StrixRoomKickNotificationArrived_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStrixNotificationListenerObject_Statics::NewProp_StrixRoomDeleteNotificationArrived_MetaData[] = {
		{ "Category", "Strix|Notifications" },
		{ "Comment", "/** Delegate called when room delete notification was received\n     */" },
		{ "ModuleRelativePath", "Public/StrixNotificationListenerObject.h" },
		{ "ToolTip", "Delegate called when room delete notification was received" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStrixNotificationListenerObject_Statics::NewProp_StrixRoomDeleteNotificationArrived = { "StrixRoomDeleteNotificationArrived", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStrixNotificationListenerObject, StrixRoomDeleteNotificationArrived), Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomDeleteNotificationDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UStrixNotificationListenerObject_Statics::NewProp_StrixRoomDeleteNotificationArrived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStrixNotificationListenerObject_Statics::NewProp_StrixRoomDeleteNotificationArrived_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStrixNotificationListenerObject_Statics::NewProp_StrixRoomContextClosed_MetaData[] = {
		{ "Category", "Strix|Notifications" },
		{ "Comment", "/** Delegate called when room context was closed\n     */" },
		{ "ModuleRelativePath", "Public/StrixNotificationListenerObject.h" },
		{ "ToolTip", "Delegate called when room context was closed" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStrixNotificationListenerObject_Statics::NewProp_StrixRoomContextClosed = { "StrixRoomContextClosed", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStrixNotificationListenerObject, StrixRoomContextClosed), Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomContextClosedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UStrixNotificationListenerObject_Statics::NewProp_StrixRoomContextClosed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStrixNotificationListenerObject_Statics::NewProp_StrixRoomContextClosed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStrixNotificationListenerObject_Statics::NewProp_StrixRoomOwnerChanged_MetaData[] = {
		{ "Category", "Strix|Notifications" },
		{ "Comment", "/** Delegate called when the room owner changes\n     */" },
		{ "ModuleRelativePath", "Public/StrixNotificationListenerObject.h" },
		{ "ToolTip", "Delegate called when the room owner changes" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStrixNotificationListenerObject_Statics::NewProp_StrixRoomOwnerChanged = { "StrixRoomOwnerChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStrixNotificationListenerObject, StrixRoomOwnerChanged), Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomOwnerChangedNotificationDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UStrixNotificationListenerObject_Statics::NewProp_StrixRoomOwnerChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStrixNotificationListenerObject_Statics::NewProp_StrixRoomOwnerChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStrixNotificationListenerObject_Statics::NewProp_StrixRoomServerDisconnected_MetaData[] = {
		{ "Category", "Strix|Notifications" },
		{ "Comment", "/** Delegate called when room server disconnects\n     */" },
		{ "ModuleRelativePath", "Public/StrixNotificationListenerObject.h" },
		{ "ToolTip", "Delegate called when room server disconnects" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStrixNotificationListenerObject_Statics::NewProp_StrixRoomServerDisconnected = { "StrixRoomServerDisconnected", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStrixNotificationListenerObject, StrixRoomServerDisconnected), Z_Construct_UDelegateFunction_StrixSDK_StrixRoomServerDisconnectedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UStrixNotificationListenerObject_Statics::NewProp_StrixRoomServerDisconnected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStrixNotificationListenerObject_Statics::NewProp_StrixRoomServerDisconnected_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStrixNotificationListenerObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStrixNotificationListenerObject_Statics::NewProp_StrixRoomContextOpen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStrixNotificationListenerObject_Statics::NewProp_StrixRoomJoinNotificationArrived,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStrixNotificationListenerObject_Statics::NewProp_StrixRoomLeaveNotificationArrived,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStrixNotificationListenerObject_Statics::NewProp_StrixRoomSetNotificationArrived,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStrixNotificationListenerObject_Statics::NewProp_StrixRoomSetMemberNotificationArrived,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStrixNotificationListenerObject_Statics::NewProp_StrixRoomKickNotificationArrived,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStrixNotificationListenerObject_Statics::NewProp_StrixRoomDeleteNotificationArrived,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStrixNotificationListenerObject_Statics::NewProp_StrixRoomContextClosed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStrixNotificationListenerObject_Statics::NewProp_StrixRoomOwnerChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStrixNotificationListenerObject_Statics::NewProp_StrixRoomServerDisconnected,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStrixNotificationListenerObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStrixNotificationListenerObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStrixNotificationListenerObject_Statics::ClassParams = {
		&UStrixNotificationListenerObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UStrixNotificationListenerObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UStrixNotificationListenerObject_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStrixNotificationListenerObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStrixNotificationListenerObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStrixNotificationListenerObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStrixNotificationListenerObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStrixNotificationListenerObject, 839203134);
	template<> STRIXSDK_API UClass* StaticClass<UStrixNotificationListenerObject>()
	{
		return UStrixNotificationListenerObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStrixNotificationListenerObject(Z_Construct_UClass_UStrixNotificationListenerObject, &UStrixNotificationListenerObject::StaticClass, TEXT("/Script/StrixSDK"), TEXT("UStrixNotificationListenerObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStrixNotificationListenerObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
