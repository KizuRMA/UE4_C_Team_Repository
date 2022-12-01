// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FStrixRoom;
struct FStrixNodeRoomInfo;
struct FStrixNode;
enum class EStrixErrorCategory : uint8;
#ifdef STRIXSDK_StrixNetworkFacade_generated_h
#error "StrixNetworkFacade.generated.h already included, missing '#pragma once' in StrixNetworkFacade.h"
#endif
#define STRIXSDK_StrixNetworkFacade_generated_h

#define matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNetworkFacade_h_81_DELEGATE \
struct _Script_StrixSDK_eventStrixRoomDirectRelayDelegate_Parms \
{ \
	int32 ChannelId; \
}; \
static inline void FStrixRoomDirectRelayDelegate_DelegateWrapper(const FScriptDelegate& StrixRoomDirectRelayDelegate, int32 ChannelId) \
{ \
	_Script_StrixSDK_eventStrixRoomDirectRelayDelegate_Parms Parms; \
	Parms.ChannelId=ChannelId; \
	StrixRoomDirectRelayDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNetworkFacade_h_80_DELEGATE \
struct _Script_StrixSDK_eventStrixRoomRelayDelegate_Parms \
{ \
	int32 ChannelId; \
}; \
static inline void FStrixRoomRelayDelegate_DelegateWrapper(const FScriptDelegate& StrixRoomRelayDelegate, int32 ChannelId) \
{ \
	_Script_StrixSDK_eventStrixRoomRelayDelegate_Parms Parms; \
	Parms.ChannelId=ChannelId; \
	StrixRoomRelayDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNetworkFacade_h_79_DELEGATE \
struct _Script_StrixSDK_eventStrixRoomMemberKickDelegate_Parms \
{ \
	int32 ChannelId; \
}; \
static inline void FStrixRoomMemberKickDelegate_DelegateWrapper(const FScriptDelegate& StrixRoomMemberKickDelegate, int32 ChannelId) \
{ \
	_Script_StrixSDK_eventStrixRoomMemberKickDelegate_Parms Parms; \
	Parms.ChannelId=ChannelId; \
	StrixRoomMemberKickDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNetworkFacade_h_78_DELEGATE \
struct _Script_StrixSDK_eventStrixRoomMemberSetDelegate_Parms \
{ \
	int32 ChannelId; \
}; \
static inline void FStrixRoomMemberSetDelegate_DelegateWrapper(const FScriptDelegate& StrixRoomMemberSetDelegate, int32 ChannelId) \
{ \
	_Script_StrixSDK_eventStrixRoomMemberSetDelegate_Parms Parms; \
	Parms.ChannelId=ChannelId; \
	StrixRoomMemberSetDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNetworkFacade_h_77_DELEGATE \
struct _Script_StrixSDK_eventStrixRoomSetDelegate_Parms \
{ \
	int32 ChannelId; \
}; \
static inline void FStrixRoomSetDelegate_DelegateWrapper(const FScriptDelegate& StrixRoomSetDelegate, int32 ChannelId) \
{ \
	_Script_StrixSDK_eventStrixRoomSetDelegate_Parms Parms; \
	Parms.ChannelId=ChannelId; \
	StrixRoomSetDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNetworkFacade_h_76_DELEGATE \
struct _Script_StrixSDK_eventStrixRoomDeleteDelegate_Parms \
{ \
	int32 ChannelId; \
}; \
static inline void FStrixRoomDeleteDelegate_DelegateWrapper(const FScriptDelegate& StrixRoomDeleteDelegate, int32 ChannelId) \
{ \
	_Script_StrixSDK_eventStrixRoomDeleteDelegate_Parms Parms; \
	Parms.ChannelId=ChannelId; \
	StrixRoomDeleteDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNetworkFacade_h_75_DELEGATE \
struct _Script_StrixSDK_eventStrixRoomLeaveDelegate_Parms \
{ \
	int32 ChannelId; \
}; \
static inline void FStrixRoomLeaveDelegate_DelegateWrapper(const FScriptDelegate& StrixRoomLeaveDelegate, int32 ChannelId) \
{ \
	_Script_StrixSDK_eventStrixRoomLeaveDelegate_Parms Parms; \
	Parms.ChannelId=ChannelId; \
	StrixRoomLeaveDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNetworkFacade_h_74_DELEGATE \
struct _Script_StrixSDK_eventStrixRoomContextOpenDelegate_Parms \
{ \
	int32 ChannelId; \
}; \
static inline void FStrixRoomContextOpenDelegate_DelegateWrapper(const FScriptDelegate& StrixRoomContextOpenDelegate, int32 ChannelId) \
{ \
	_Script_StrixSDK_eventStrixRoomContextOpenDelegate_Parms Parms; \
	Parms.ChannelId=ChannelId; \
	StrixRoomContextOpenDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNetworkFacade_h_71_DELEGATE \
struct _Script_StrixSDK_eventStrixRoomSearchDelegate_Parms \
{ \
	TArray<FStrixRoom> Rooms; \
}; \
static inline void FStrixRoomSearchDelegate_DelegateWrapper(const FScriptDelegate& StrixRoomSearchDelegate, TArray<FStrixRoom> const& Rooms) \
{ \
	_Script_StrixSDK_eventStrixRoomSearchDelegate_Parms Parms; \
	Parms.Rooms=Rooms; \
	StrixRoomSearchDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNetworkFacade_h_70_DELEGATE \
struct _Script_StrixSDK_eventStrixRoomServerConnectedDelegate_Parms \
{ \
	int32 ChannelId; \
}; \
static inline void FStrixRoomServerConnectedDelegate_DelegateWrapper(const FScriptDelegate& StrixRoomServerConnectedDelegate, int32 ChannelId) \
{ \
	_Script_StrixSDK_eventStrixRoomServerConnectedDelegate_Parms Parms; \
	Parms.ChannelId=ChannelId; \
	StrixRoomServerConnectedDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNetworkFacade_h_67_DELEGATE \
struct _Script_StrixSDK_eventStrixNodeGetCountDelegate_Parms \
{ \
	int32 Count; \
}; \
static inline void FStrixNodeGetCountDelegate_DelegateWrapper(const FScriptDelegate& StrixNodeGetCountDelegate, int32 Count) \
{ \
	_Script_StrixSDK_eventStrixNodeGetCountDelegate_Parms Parms; \
	Parms.Count=Count; \
	StrixNodeGetCountDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNetworkFacade_h_66_DELEGATE \
struct _Script_StrixSDK_eventStrixNodeRoomSearchDelegate_Parms \
{ \
	TArray<FStrixNodeRoomInfo> NodeRooms; \
}; \
static inline void FStrixNodeRoomSearchDelegate_DelegateWrapper(const FScriptDelegate& StrixNodeRoomSearchDelegate, TArray<FStrixNodeRoomInfo> const& NodeRooms) \
{ \
	_Script_StrixSDK_eventStrixNodeRoomSearchDelegate_Parms Parms; \
	Parms.NodeRooms=NodeRooms; \
	StrixNodeRoomSearchDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNetworkFacade_h_65_DELEGATE \
struct _Script_StrixSDK_eventStrixNodeSearchDelegate_Parms \
{ \
	TArray<FStrixNode> Nodes; \
}; \
static inline void FStrixNodeSearchDelegate_DelegateWrapper(const FScriptDelegate& StrixNodeSearchDelegate, TArray<FStrixNode> const& Nodes) \
{ \
	_Script_StrixSDK_eventStrixNodeSearchDelegate_Parms Parms; \
	Parms.Nodes=Nodes; \
	StrixNodeSearchDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNetworkFacade_h_64_DELEGATE \
static inline void FStrixMasterServerDisconnectedDelegate_DelegateWrapper(const FScriptDelegate& StrixMasterServerDisconnectedDelegate) \
{ \
	StrixMasterServerDisconnectedDelegate.ProcessDelegate<UObject>(NULL); \
}


#define matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNetworkFacade_h_63_DELEGATE \
static inline void FStrixMasterServerConnectedDelegate_DelegateWrapper(const FScriptDelegate& StrixMasterServerConnectedDelegate) \
{ \
	StrixMasterServerConnectedDelegate.ProcessDelegate<UObject>(NULL); \
}


#define matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNetworkFacade_h_60_DELEGATE \
struct _Script_StrixSDK_eventStrixErrorCodeFailureDelegate_Parms \
{ \
	int32 ErrorCode; \
	EStrixErrorCategory ErrorCategory; \
}; \
static inline void FStrixErrorCodeFailureDelegate_DelegateWrapper(const FScriptDelegate& StrixErrorCodeFailureDelegate, int32 ErrorCode, EStrixErrorCategory ErrorCategory) \
{ \
	_Script_StrixSDK_eventStrixErrorCodeFailureDelegate_Parms Parms; \
	Parms.ErrorCode=ErrorCode; \
	Parms.ErrorCategory=ErrorCategory; \
	StrixErrorCodeFailureDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNetworkFacade_h_90_SPARSE_DATA
#define matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNetworkFacade_h_90_RPC_WRAPPERS
#define matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNetworkFacade_h_90_RPC_WRAPPERS_NO_PURE_DECLS
#define matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNetworkFacade_h_90_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStrixNetworkFacade(); \
	friend struct Z_Construct_UClass_UStrixNetworkFacade_Statics; \
public: \
	DECLARE_CLASS(UStrixNetworkFacade, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StrixSDK"), NO_API) \
	DECLARE_SERIALIZER(UStrixNetworkFacade)


#define matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNetworkFacade_h_90_INCLASS \
private: \
	static void StaticRegisterNativesUStrixNetworkFacade(); \
	friend struct Z_Construct_UClass_UStrixNetworkFacade_Statics; \
public: \
	DECLARE_CLASS(UStrixNetworkFacade, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StrixSDK"), NO_API) \
	DECLARE_SERIALIZER(UStrixNetworkFacade)


#define matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNetworkFacade_h_90_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStrixNetworkFacade(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStrixNetworkFacade) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStrixNetworkFacade); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStrixNetworkFacade); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStrixNetworkFacade(UStrixNetworkFacade&&); \
	NO_API UStrixNetworkFacade(const UStrixNetworkFacade&); \
public:


#define matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNetworkFacade_h_90_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStrixNetworkFacade(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStrixNetworkFacade(UStrixNetworkFacade&&); \
	NO_API UStrixNetworkFacade(const UStrixNetworkFacade&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStrixNetworkFacade); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStrixNetworkFacade); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStrixNetworkFacade)


#define matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNetworkFacade_h_90_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_spawnerClasses() { return STRUCT_OFFSET(UStrixNetworkFacade, m_spawnerClasses); }


#define matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNetworkFacade_h_87_PROLOG
#define matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNetworkFacade_h_90_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNetworkFacade_h_90_PRIVATE_PROPERTY_OFFSET \
	matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNetworkFacade_h_90_SPARSE_DATA \
	matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNetworkFacade_h_90_RPC_WRAPPERS \
	matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNetworkFacade_h_90_INCLASS \
	matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNetworkFacade_h_90_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNetworkFacade_h_90_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNetworkFacade_h_90_PRIVATE_PROPERTY_OFFSET \
	matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNetworkFacade_h_90_SPARSE_DATA \
	matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNetworkFacade_h_90_RPC_WRAPPERS_NO_PURE_DECLS \
	matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNetworkFacade_h_90_INCLASS_NO_PURE_DECLS \
	matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNetworkFacade_h_90_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STRIXSDK_API UClass* StaticClass<class UStrixNetworkFacade>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixNetworkFacade_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
