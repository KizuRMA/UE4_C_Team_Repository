// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FStrixRoomMember;
struct FStrixRoom;
class UObject;
#ifdef STRIXSDK_StrixNotificationListenerObject_generated_h
#error "StrixNotificationListenerObject.generated.h already included, missing '#pragma once' in StrixNotificationListenerObject.h"
#endif
#define STRIXSDK_StrixNotificationListenerObject_generated_h

#define matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNotificationListenerObject_h_63_DELEGATE \
struct _Script_StrixSDK_eventStrixRoomServerDisconnectedDelegate_Parms \
{ \
	int32 ChannelId; \
}; \
static inline void FStrixRoomServerDisconnectedDelegate_DelegateWrapper(const FMulticastScriptDelegate& StrixRoomServerDisconnectedDelegate, int32 ChannelId) \
{ \
	_Script_StrixSDK_eventStrixRoomServerDisconnectedDelegate_Parms Parms; \
	Parms.ChannelId=ChannelId; \
	StrixRoomServerDisconnectedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNotificationListenerObject_h_61_DELEGATE \
struct _Script_StrixSDK_eventStrixNotifierRoomOwnerChangedNotificationDelegate_Parms \
{ \
	int32 channelId; \
	FStrixRoomMember newOwner; \
	FStrixRoomMember previousOwner; \
}; \
static inline void FStrixNotifierRoomOwnerChangedNotificationDelegate_DelegateWrapper(const FMulticastScriptDelegate& StrixNotifierRoomOwnerChangedNotificationDelegate, int32 channelId, FStrixRoomMember const& newOwner, FStrixRoomMember const& previousOwner) \
{ \
	_Script_StrixSDK_eventStrixNotifierRoomOwnerChangedNotificationDelegate_Parms Parms; \
	Parms.channelId=channelId; \
	Parms.newOwner=newOwner; \
	Parms.previousOwner=previousOwner; \
	StrixNotifierRoomOwnerChangedNotificationDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNotificationListenerObject_h_60_DELEGATE \
struct _Script_StrixSDK_eventStrixNotifierRoomContextClosedDelegate_Parms \
{ \
	int32 channelId; \
}; \
static inline void FStrixNotifierRoomContextClosedDelegate_DelegateWrapper(const FMulticastScriptDelegate& StrixNotifierRoomContextClosedDelegate, int32 channelId) \
{ \
	_Script_StrixSDK_eventStrixNotifierRoomContextClosedDelegate_Parms Parms; \
	Parms.channelId=channelId; \
	StrixNotifierRoomContextClosedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNotificationListenerObject_h_59_DELEGATE \
struct _Script_StrixSDK_eventStrixNotifierRoomDeleteNotificationDelegate_Parms \
{ \
	int32 channelId; \
}; \
static inline void FStrixNotifierRoomDeleteNotificationDelegate_DelegateWrapper(const FMulticastScriptDelegate& StrixNotifierRoomDeleteNotificationDelegate, int32 channelId) \
{ \
	_Script_StrixSDK_eventStrixNotifierRoomDeleteNotificationDelegate_Parms Parms; \
	Parms.channelId=channelId; \
	StrixNotifierRoomDeleteNotificationDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNotificationListenerObject_h_58_DELEGATE \
struct _Script_StrixSDK_eventStrixNotifierRoomKickNotificationDelegate_Parms \
{ \
	int32 channelId; \
}; \
static inline void FStrixNotifierRoomKickNotificationDelegate_DelegateWrapper(const FMulticastScriptDelegate& StrixNotifierRoomKickNotificationDelegate, int32 channelId) \
{ \
	_Script_StrixSDK_eventStrixNotifierRoomKickNotificationDelegate_Parms Parms; \
	Parms.channelId=channelId; \
	StrixNotifierRoomKickNotificationDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNotificationListenerObject_h_57_DELEGATE \
struct _Script_StrixSDK_eventStrixNotifierRoomSetMemberNotificationDelegate_Parms \
{ \
	int32 channelId; \
	FStrixRoomMember roomMember; \
}; \
static inline void FStrixNotifierRoomSetMemberNotificationDelegate_DelegateWrapper(const FMulticastScriptDelegate& StrixNotifierRoomSetMemberNotificationDelegate, int32 channelId, FStrixRoomMember const& roomMember) \
{ \
	_Script_StrixSDK_eventStrixNotifierRoomSetMemberNotificationDelegate_Parms Parms; \
	Parms.channelId=channelId; \
	Parms.roomMember=roomMember; \
	StrixNotifierRoomSetMemberNotificationDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNotificationListenerObject_h_56_DELEGATE \
struct _Script_StrixSDK_eventStrixNotifierRoomSetNotificationDelegate_Parms \
{ \
	int32 channelId; \
	FStrixRoom roomMember; \
}; \
static inline void FStrixNotifierRoomSetNotificationDelegate_DelegateWrapper(const FMulticastScriptDelegate& StrixNotifierRoomSetNotificationDelegate, int32 channelId, FStrixRoom const& roomMember) \
{ \
	_Script_StrixSDK_eventStrixNotifierRoomSetNotificationDelegate_Parms Parms; \
	Parms.channelId=channelId; \
	Parms.roomMember=roomMember; \
	StrixNotifierRoomSetNotificationDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNotificationListenerObject_h_55_DELEGATE \
struct _Script_StrixSDK_eventStrixNotifierRoomLeaveNotificationDelegate_Parms \
{ \
	int32 channelId; \
	FStrixRoomMember roomMember; \
}; \
static inline void FStrixNotifierRoomLeaveNotificationDelegate_DelegateWrapper(const FMulticastScriptDelegate& StrixNotifierRoomLeaveNotificationDelegate, int32 channelId, FStrixRoomMember const& roomMember) \
{ \
	_Script_StrixSDK_eventStrixNotifierRoomLeaveNotificationDelegate_Parms Parms; \
	Parms.channelId=channelId; \
	Parms.roomMember=roomMember; \
	StrixNotifierRoomLeaveNotificationDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNotificationListenerObject_h_54_DELEGATE \
struct _Script_StrixSDK_eventStrixNotifierRoomJoinNotificationDelegate_Parms \
{ \
	int32 channelId; \
	FStrixRoomMember roomMember; \
}; \
static inline void FStrixNotifierRoomJoinNotificationDelegate_DelegateWrapper(const FMulticastScriptDelegate& StrixNotifierRoomJoinNotificationDelegate, int32 channelId, FStrixRoomMember const& roomMember) \
{ \
	_Script_StrixSDK_eventStrixNotifierRoomJoinNotificationDelegate_Parms Parms; \
	Parms.channelId=channelId; \
	Parms.roomMember=roomMember; \
	StrixNotifierRoomJoinNotificationDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNotificationListenerObject_h_53_DELEGATE \
struct _Script_StrixSDK_eventStrixNotifierRoomContextOpenDelegate_Parms \
{ \
	int32 channelId; \
}; \
static inline void FStrixNotifierRoomContextOpenDelegate_DelegateWrapper(const FMulticastScriptDelegate& StrixNotifierRoomContextOpenDelegate, int32 channelId) \
{ \
	_Script_StrixSDK_eventStrixNotifierRoomContextOpenDelegate_Parms Parms; \
	Parms.channelId=channelId; \
	StrixNotifierRoomContextOpenDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNotificationListenerObject_h_68_SPARSE_DATA
#define matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNotificationListenerObject_h_68_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStopNotificationListener); \
	DECLARE_FUNCTION(execInit);


#define matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNotificationListenerObject_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStopNotificationListener); \
	DECLARE_FUNCTION(execInit);


#define matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNotificationListenerObject_h_68_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStrixNotificationListenerObject(); \
	friend struct Z_Construct_UClass_UStrixNotificationListenerObject_Statics; \
public: \
	DECLARE_CLASS(UStrixNotificationListenerObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StrixSDK"), NO_API) \
	DECLARE_SERIALIZER(UStrixNotificationListenerObject)


#define matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNotificationListenerObject_h_68_INCLASS \
private: \
	static void StaticRegisterNativesUStrixNotificationListenerObject(); \
	friend struct Z_Construct_UClass_UStrixNotificationListenerObject_Statics; \
public: \
	DECLARE_CLASS(UStrixNotificationListenerObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StrixSDK"), NO_API) \
	DECLARE_SERIALIZER(UStrixNotificationListenerObject)


#define matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNotificationListenerObject_h_68_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStrixNotificationListenerObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStrixNotificationListenerObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStrixNotificationListenerObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStrixNotificationListenerObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStrixNotificationListenerObject(UStrixNotificationListenerObject&&); \
	NO_API UStrixNotificationListenerObject(const UStrixNotificationListenerObject&); \
public:


#define matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNotificationListenerObject_h_68_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStrixNotificationListenerObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStrixNotificationListenerObject(UStrixNotificationListenerObject&&); \
	NO_API UStrixNotificationListenerObject(const UStrixNotificationListenerObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStrixNotificationListenerObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStrixNotificationListenerObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStrixNotificationListenerObject)


#define matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNotificationListenerObject_h_68_PRIVATE_PROPERTY_OFFSET
#define matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNotificationListenerObject_h_65_PROLOG
#define matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNotificationListenerObject_h_68_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNotificationListenerObject_h_68_PRIVATE_PROPERTY_OFFSET \
	matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNotificationListenerObject_h_68_SPARSE_DATA \
	matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNotificationListenerObject_h_68_RPC_WRAPPERS \
	matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNotificationListenerObject_h_68_INCLASS \
	matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNotificationListenerObject_h_68_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNotificationListenerObject_h_68_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNotificationListenerObject_h_68_PRIVATE_PROPERTY_OFFSET \
	matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNotificationListenerObject_h_68_SPARSE_DATA \
	matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNotificationListenerObject_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNotificationListenerObject_h_68_INCLASS_NO_PURE_DECLS \
	matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNotificationListenerObject_h_68_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STRIXSDK_API UClass* StaticClass<class UStrixNotificationListenerObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNotificationListenerObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
