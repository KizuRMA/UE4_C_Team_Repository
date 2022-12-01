// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StrixSDK/Public/StrixNotificationListener.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStrixNotificationListener() {}
// Cross Module References
	STRIXSDK_API UClass* Z_Construct_UClass_UStrixNotificationListener_NoRegister();
	STRIXSDK_API UClass* Z_Construct_UClass_UStrixNotificationListener();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_StrixSDK();
	STRIXSDK_API UFunction* Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomContextOpenDelegate__DelegateSignature();
	STRIXSDK_API UFunction* Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomJoinNotificationDelegate__DelegateSignature();
	STRIXSDK_API UFunction* Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomLeaveNotificationDelegate__DelegateSignature();
	STRIXSDK_API UFunction* Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomSetNotificationDelegate__DelegateSignature();
	STRIXSDK_API UFunction* Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomSetMemberNotificationDelegate__DelegateSignature();
	STRIXSDK_API UFunction* Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomKickNotificationDelegate__DelegateSignature();
	STRIXSDK_API UFunction* Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomDeleteNotificationDelegate__DelegateSignature();
	STRIXSDK_API UFunction* Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomContextClosedDelegate__DelegateSignature();
	STRIXSDK_API UFunction* Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomOwnerChangedNotificationDelegate__DelegateSignature();
	STRIXSDK_API UFunction* Z_Construct_UDelegateFunction_StrixSDK_StrixRoomServerDisconnectedDelegate__DelegateSignature();
	STRIXSDK_API UClass* Z_Construct_UClass_UStrixNotificationListenerObject_NoRegister();
// End Cross Module References
	void UStrixNotificationListener::StaticRegisterNativesUStrixNotificationListener()
	{
	}
	UClass* Z_Construct_UClass_UStrixNotificationListener_NoRegister()
	{
		return UStrixNotificationListener::StaticClass();
	}
	struct Z_Construct_UClass_UStrixNotificationListener_Statics
	{
		static UObject* (*const DependentSingletons[])();
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChannelId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ChannelId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Listener_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Listener;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStrixNotificationListener_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_StrixSDK,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStrixNotificationListener_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Strix" },
		{ "Comment", "/** Component used for easy management of the callbacks (functions)\n *  executed when a notification arrives on the specified channel.\n *\n *  Does not have to be attached to a replicator for use.\n *//// \\cond\n" },
		{ "IncludePath", "StrixNotificationListener.h" },
		{ "ModuleRelativePath", "Public/StrixNotificationListener.h" },
		{ "ToolTip", "Component used for easy management of the callbacks (functions)\nexecuted when a notification arrives on the specified channel.\n\nDoes not have to be attached to a replicator for use.\n/// \\cond" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStrixNotificationListener_Statics::NewProp_StrixRoomContextOpen_MetaData[] = {
		{ "Category", "Strix|Notifications" },
		{ "Comment", "/** Delegate called when room context was opened\n\x09 */" },
		{ "ModuleRelativePath", "Public/StrixNotificationListener.h" },
		{ "ToolTip", "Delegate called when room context was opened" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStrixNotificationListener_Statics::NewProp_StrixRoomContextOpen = { "StrixRoomContextOpen", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStrixNotificationListener, StrixRoomContextOpen), Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomContextOpenDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UStrixNotificationListener_Statics::NewProp_StrixRoomContextOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStrixNotificationListener_Statics::NewProp_StrixRoomContextOpen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStrixNotificationListener_Statics::NewProp_StrixRoomJoinNotificationArrived_MetaData[] = {
		{ "Category", "Strix|Notifications" },
		{ "Comment", "/** Delegate called when room join notification was received\n\x09 */" },
		{ "ModuleRelativePath", "Public/StrixNotificationListener.h" },
		{ "ToolTip", "Delegate called when room join notification was received" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStrixNotificationListener_Statics::NewProp_StrixRoomJoinNotificationArrived = { "StrixRoomJoinNotificationArrived", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStrixNotificationListener, StrixRoomJoinNotificationArrived), Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomJoinNotificationDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UStrixNotificationListener_Statics::NewProp_StrixRoomJoinNotificationArrived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStrixNotificationListener_Statics::NewProp_StrixRoomJoinNotificationArrived_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStrixNotificationListener_Statics::NewProp_StrixRoomLeaveNotificationArrived_MetaData[] = {
		{ "Category", "Strix|Notifications" },
		{ "Comment", "/** Delegate called when room leave notification was received\n\x09 */" },
		{ "ModuleRelativePath", "Public/StrixNotificationListener.h" },
		{ "ToolTip", "Delegate called when room leave notification was received" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStrixNotificationListener_Statics::NewProp_StrixRoomLeaveNotificationArrived = { "StrixRoomLeaveNotificationArrived", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStrixNotificationListener, StrixRoomLeaveNotificationArrived), Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomLeaveNotificationDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UStrixNotificationListener_Statics::NewProp_StrixRoomLeaveNotificationArrived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStrixNotificationListener_Statics::NewProp_StrixRoomLeaveNotificationArrived_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStrixNotificationListener_Statics::NewProp_StrixRoomSetNotificationArrived_MetaData[] = {
		{ "Category", "Strix|Notifications" },
		{ "Comment", "/** Delegate called when room set notification was received\n\x09 */" },
		{ "ModuleRelativePath", "Public/StrixNotificationListener.h" },
		{ "ToolTip", "Delegate called when room set notification was received" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStrixNotificationListener_Statics::NewProp_StrixRoomSetNotificationArrived = { "StrixRoomSetNotificationArrived", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStrixNotificationListener, StrixRoomSetNotificationArrived), Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomSetNotificationDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UStrixNotificationListener_Statics::NewProp_StrixRoomSetNotificationArrived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStrixNotificationListener_Statics::NewProp_StrixRoomSetNotificationArrived_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStrixNotificationListener_Statics::NewProp_StrixRoomSetMemberNotificationArrived_MetaData[] = {
		{ "Category", "Strix|Notifications" },
		{ "Comment", "/** Delegate called when room set member notification was received\n\x09 */" },
		{ "ModuleRelativePath", "Public/StrixNotificationListener.h" },
		{ "ToolTip", "Delegate called when room set member notification was received" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStrixNotificationListener_Statics::NewProp_StrixRoomSetMemberNotificationArrived = { "StrixRoomSetMemberNotificationArrived", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStrixNotificationListener, StrixRoomSetMemberNotificationArrived), Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomSetMemberNotificationDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UStrixNotificationListener_Statics::NewProp_StrixRoomSetMemberNotificationArrived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStrixNotificationListener_Statics::NewProp_StrixRoomSetMemberNotificationArrived_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStrixNotificationListener_Statics::NewProp_StrixRoomKickNotificationArrived_MetaData[] = {
		{ "Category", "Strix|Notifications" },
		{ "Comment", "/** Delegate called when room kick notification was received\n\x09 */" },
		{ "ModuleRelativePath", "Public/StrixNotificationListener.h" },
		{ "ToolTip", "Delegate called when room kick notification was received" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStrixNotificationListener_Statics::NewProp_StrixRoomKickNotificationArrived = { "StrixRoomKickNotificationArrived", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStrixNotificationListener, StrixRoomKickNotificationArrived), Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomKickNotificationDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UStrixNotificationListener_Statics::NewProp_StrixRoomKickNotificationArrived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStrixNotificationListener_Statics::NewProp_StrixRoomKickNotificationArrived_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStrixNotificationListener_Statics::NewProp_StrixRoomDeleteNotificationArrived_MetaData[] = {
		{ "Category", "Strix|Notifications" },
		{ "Comment", "/** Delegate called when room delete notification was received\n\x09 */" },
		{ "ModuleRelativePath", "Public/StrixNotificationListener.h" },
		{ "ToolTip", "Delegate called when room delete notification was received" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStrixNotificationListener_Statics::NewProp_StrixRoomDeleteNotificationArrived = { "StrixRoomDeleteNotificationArrived", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStrixNotificationListener, StrixRoomDeleteNotificationArrived), Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomDeleteNotificationDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UStrixNotificationListener_Statics::NewProp_StrixRoomDeleteNotificationArrived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStrixNotificationListener_Statics::NewProp_StrixRoomDeleteNotificationArrived_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStrixNotificationListener_Statics::NewProp_StrixRoomContextClosed_MetaData[] = {
		{ "Category", "Strix|Notifications" },
		{ "Comment", "/** Delegate called when room context was closed\n\x09 */" },
		{ "ModuleRelativePath", "Public/StrixNotificationListener.h" },
		{ "ToolTip", "Delegate called when room context was closed" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStrixNotificationListener_Statics::NewProp_StrixRoomContextClosed = { "StrixRoomContextClosed", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStrixNotificationListener, StrixRoomContextClosed), Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomContextClosedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UStrixNotificationListener_Statics::NewProp_StrixRoomContextClosed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStrixNotificationListener_Statics::NewProp_StrixRoomContextClosed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStrixNotificationListener_Statics::NewProp_StrixRoomOwnerChanged_MetaData[] = {
		{ "Category", "Strix|Notifications" },
		{ "Comment", "/** Delegate called when the room owner changes\n\x09 */" },
		{ "ModuleRelativePath", "Public/StrixNotificationListener.h" },
		{ "ToolTip", "Delegate called when the room owner changes" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStrixNotificationListener_Statics::NewProp_StrixRoomOwnerChanged = { "StrixRoomOwnerChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStrixNotificationListener, StrixRoomOwnerChanged), Z_Construct_UDelegateFunction_StrixSDK_StrixNotifierRoomOwnerChangedNotificationDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UStrixNotificationListener_Statics::NewProp_StrixRoomOwnerChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStrixNotificationListener_Statics::NewProp_StrixRoomOwnerChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStrixNotificationListener_Statics::NewProp_StrixRoomServerDisconnected_MetaData[] = {
		{ "Category", "Strix|Notifications" },
		{ "Comment", "/** Delegate called when room server disconnects\n\x09 */" },
		{ "ModuleRelativePath", "Public/StrixNotificationListener.h" },
		{ "ToolTip", "Delegate called when room server disconnects" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStrixNotificationListener_Statics::NewProp_StrixRoomServerDisconnected = { "StrixRoomServerDisconnected", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStrixNotificationListener, StrixRoomServerDisconnected), Z_Construct_UDelegateFunction_StrixSDK_StrixRoomServerDisconnectedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UStrixNotificationListener_Statics::NewProp_StrixRoomServerDisconnected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStrixNotificationListener_Statics::NewProp_StrixRoomServerDisconnected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStrixNotificationListener_Statics::NewProp_ChannelId_MetaData[] = {
		{ "Category", "Strix Notifier" },
		{ "Comment", "/** Channel Id to use\n\x09 */" },
		{ "ModuleRelativePath", "Public/StrixNotificationListener.h" },
		{ "ToolTip", "Channel Id to use" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStrixNotificationListener_Statics::NewProp_ChannelId = { "ChannelId", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStrixNotificationListener, ChannelId), METADATA_PARAMS(Z_Construct_UClass_UStrixNotificationListener_Statics::NewProp_ChannelId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStrixNotificationListener_Statics::NewProp_ChannelId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStrixNotificationListener_Statics::NewProp_Listener_MetaData[] = {
		{ "ModuleRelativePath", "Public/StrixNotificationListener.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStrixNotificationListener_Statics::NewProp_Listener = { "Listener", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStrixNotificationListener, Listener), Z_Construct_UClass_UStrixNotificationListenerObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStrixNotificationListener_Statics::NewProp_Listener_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStrixNotificationListener_Statics::NewProp_Listener_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStrixNotificationListener_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStrixNotificationListener_Statics::NewProp_StrixRoomContextOpen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStrixNotificationListener_Statics::NewProp_StrixRoomJoinNotificationArrived,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStrixNotificationListener_Statics::NewProp_StrixRoomLeaveNotificationArrived,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStrixNotificationListener_Statics::NewProp_StrixRoomSetNotificationArrived,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStrixNotificationListener_Statics::NewProp_StrixRoomSetMemberNotificationArrived,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStrixNotificationListener_Statics::NewProp_StrixRoomKickNotificationArrived,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStrixNotificationListener_Statics::NewProp_StrixRoomDeleteNotificationArrived,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStrixNotificationListener_Statics::NewProp_StrixRoomContextClosed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStrixNotificationListener_Statics::NewProp_StrixRoomOwnerChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStrixNotificationListener_Statics::NewProp_StrixRoomServerDisconnected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStrixNotificationListener_Statics::NewProp_ChannelId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStrixNotificationListener_Statics::NewProp_Listener,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStrixNotificationListener_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStrixNotificationListener>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStrixNotificationListener_Statics::ClassParams = {
		&UStrixNotificationListener::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStrixNotificationListener_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStrixNotificationListener_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UStrixNotificationListener_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStrixNotificationListener_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStrixNotificationListener()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStrixNotificationListener_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStrixNotificationListener, 3860778957);
	template<> STRIXSDK_API UClass* StaticClass<UStrixNotificationListener>()
	{
		return UStrixNotificationListener::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStrixNotificationListener(Z_Construct_UClass_UStrixNotificationListener, &UStrixNotificationListener::StaticClass, TEXT("/Script/StrixSDK"), TEXT("UStrixNotificationListener"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStrixNotificationListener);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
