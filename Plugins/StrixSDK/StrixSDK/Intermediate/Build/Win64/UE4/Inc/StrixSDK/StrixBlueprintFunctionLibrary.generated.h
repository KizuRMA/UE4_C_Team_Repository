// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FStrixNetworkId;
struct FStrixRelayArg;
 
 struct FRotator;
 struct FVector;
struct FVector;
struct FTransform;
struct FRotator;
struct FQuat;
struct FStrixOrder;
struct FStrixCondition;
struct FStrixPropertyMap;
class UObject;
struct FDateTime;
class AActor;
struct FStrixRoomMember;
struct FStrixRoom;
struct FStrixNodeRoomInfo;
#ifdef STRIXSDK_StrixBlueprintFunctionLibrary_generated_h
#error "StrixBlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in StrixBlueprintFunctionLibrary.h"
#endif
#define STRIXSDK_StrixBlueprintFunctionLibrary_generated_h

#define matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixBlueprintFunctionLibrary_h_27_SPARSE_DATA
#define matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixBlueprintFunctionLibrary_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConv_StrixNetworkIdToStrixRelayArg); \
	DECLARE_FUNCTION(execConv_StringKeyStringMapToStrixRelayArg); \
	DECLARE_FUNCTION(execConv_StringKeyRotatorMapToStrixRelayArg); \
	DECLARE_FUNCTION(execConv_StringKeyVectorMapToStrixRelayArg); \
	DECLARE_FUNCTION(execConv_StringKeyFloatMapToStrixRelayArg); \
	DECLARE_FUNCTION(execConv_StringKeyIntMapToStrixRelayArg); \
	DECLARE_FUNCTION(execConv_StringKeyByteMapToStrixRelayArg); \
	DECLARE_FUNCTION(execConv_StringKeyBoolMapToStrixRelayArg); \
	DECLARE_FUNCTION(execConv_IntKeyStringMapToStrixRelayArg); \
	DECLARE_FUNCTION(execConv_IntKeyRotatorMapToStrixRelayArg); \
	DECLARE_FUNCTION(execConv_IntKeyVectorMapToStrixRelayArg); \
	DECLARE_FUNCTION(execConv_IntKeyFloatMapToStrixRelayArg); \
	DECLARE_FUNCTION(execConv_IntKeyIntMapToStrixRelayArg); \
	DECLARE_FUNCTION(execConv_IntKeyByteMapToStrixRelayArg); \
	DECLARE_FUNCTION(execConv_IntKeyBoolMapToStrixRelayArg); \
	DECLARE_FUNCTION(execConv_StringSetToStrixRelayArg); \
	DECLARE_FUNCTION(execConv_VectorSetToStrixRelayArg); \
	DECLARE_FUNCTION(execConv_FloatSetToStrixRelayArg); \
	DECLARE_FUNCTION(execConv_IntSetToStrixRelayArg); \
	DECLARE_FUNCTION(execConv_ByteSetToStrixRelayArg); \
	DECLARE_FUNCTION(execConv_BoolArrayToStrixRelayArg); \
	DECLARE_FUNCTION(execConv_TextArrayToStrixRelayArg); \
	DECLARE_FUNCTION(execConv_StringArrayToStrixRelayArg); \
	DECLARE_FUNCTION(execConv_TransformArrayToStrixRelayArg); \
	DECLARE_FUNCTION(execConv_RotatorArrayToStrixRelayArg); \
	DECLARE_FUNCTION(execConv_QuatArrayToStrixRelayArg); \
	DECLARE_FUNCTION(execConv_VectorArrayToStrixRelayArg); \
	DECLARE_FUNCTION(execConv_FloatArrayToStrixRelayArg); \
	DECLARE_FUNCTION(execConv_IntArrayToStrixRelayArg); \
	DECLARE_FUNCTION(execConv_ByteArrayToStrixRelayArg); \
	DECLARE_FUNCTION(execConv_TextToStrixRelayArg); \
	DECLARE_FUNCTION(execConv_StringToStrixRelayArg); \
	DECLARE_FUNCTION(execConv_QuatToStrixRelayArg); \
	DECLARE_FUNCTION(execConv_TransformToStrixRelayArg); \
	DECLARE_FUNCTION(execConv_RotatorToStrixRelayArg); \
	DECLARE_FUNCTION(execConv_VectorToStrixRelayArg); \
	DECLARE_FUNCTION(execConv_FloatToStrixRelayArg); \
	DECLARE_FUNCTION(execConv_IntToStrixRelayArg); \
	DECLARE_FUNCTION(execConv_BoolToStrixRelayArg); \
	DECLARE_FUNCTION(execConv_ByteToStrixRelayArg); \
	DECLARE_FUNCTION(execCreateStrixDescendingOrder); \
	DECLARE_FUNCTION(execCreateStrixAscendingOrder); \
	DECLARE_FUNCTION(execCreateStrixOrCondition); \
	DECLARE_FUNCTION(execCreateStrixAndCondition); \
	DECLARE_FUNCTION(execCreateStrixFieldIsNotNullCondition); \
	DECLARE_FUNCTION(execCreateStrixFieldIsNullCondition); \
	DECLARE_FUNCTION(execCreateStrixFieldBetweenInclusiveCondition); \
	DECLARE_FUNCTION(execCreateStrixFieldBetweenExclusiveCondition); \
	DECLARE_FUNCTION(execCreateStrixFieldNotEqualsCondition); \
	DECLARE_FUNCTION(execCreateStrixFieldLessThanEqualsCondition); \
	DECLARE_FUNCTION(execCreateStrixFieldLessThanCondition); \
	DECLARE_FUNCTION(execCreateStrixFieldGreaterThanEqualsCondition); \
	DECLARE_FUNCTION(execCreateStrixFieldGreaterThanCondition); \
	DECLARE_FUNCTION(execCreateStrixFieldEqualsCondition); \
	DECLARE_FUNCTION(execCreateStrixStringStartsWithCondition); \
	DECLARE_FUNCTION(execCreateStrixStringEndsWithCondition); \
	DECLARE_FUNCTION(execCreateStrixStringContainsCondition); \
	DECLARE_FUNCTION(execCreateStrixStringNotEqualsCondition); \
	DECLARE_FUNCTION(execCreateStrixStringEqualsCondition); \
	DECLARE_FUNCTION(execCreateStrixFloatBetweenInclusiveCondition); \
	DECLARE_FUNCTION(execCreateStrixFloatBetweenExclusiveCondition); \
	DECLARE_FUNCTION(execCreateStrixFloatNotEqualsCondition); \
	DECLARE_FUNCTION(execCreateStrixFloatLessThanEqualsCondition); \
	DECLARE_FUNCTION(execCreateStrixFloatLessThanCondition); \
	DECLARE_FUNCTION(execCreateStrixFloatGreaterThanEqualsCondition); \
	DECLARE_FUNCTION(execCreateStrixFloatGreaterThanCondition); \
	DECLARE_FUNCTION(execCreateStrixFloatEqualsCondition); \
	DECLARE_FUNCTION(execCreateStrixIntBetweenInclusiveCondition); \
	DECLARE_FUNCTION(execCreateStrixIntBetweenExclusiveCondition); \
	DECLARE_FUNCTION(execCreateStrixIntNotEqualsCondition); \
	DECLARE_FUNCTION(execCreateStrixIntLessThanEqualsCondition); \
	DECLARE_FUNCTION(execCreateStrixIntLessThanCondition); \
	DECLARE_FUNCTION(execCreateStrixIntGreaterThanEqualsCondition); \
	DECLARE_FUNCTION(execCreateStrixIntGreaterThanCondition); \
	DECLARE_FUNCTION(execCreateStrixIntEqualsCondition); \
	DECLARE_FUNCTION(execCreateStrixByteBetweenInclusiveCondition); \
	DECLARE_FUNCTION(execCreateStrixByteBetweenExclusiveCondition); \
	DECLARE_FUNCTION(execCreateStrixByteNotEqualsCondition); \
	DECLARE_FUNCTION(execCreateStrixByteLessThanEqualsCondition); \
	DECLARE_FUNCTION(execCreateStrixByteLessThanCondition); \
	DECLARE_FUNCTION(execCreateStrixByteGreaterThanEqualsCondition); \
	DECLARE_FUNCTION(execCreateStrixByteGreaterThanCondition); \
	DECLARE_FUNCTION(execCreateStrixByteEqualsCondition); \
	DECLARE_FUNCTION(execCreateStrixBoolNotEqualsCondition); \
	DECLARE_FUNCTION(execCreateStrixBoolEqualsCondition); \
	DECLARE_FUNCTION(execSetStringProperty); \
	DECLARE_FUNCTION(execSetFloatProperty); \
	DECLARE_FUNCTION(execSetIntProperty); \
	DECLARE_FUNCTION(execSetBoolProperty); \
	DECLARE_FUNCTION(execSetByteProperty); \
	DECLARE_FUNCTION(execTryGetStringProperty); \
	DECLARE_FUNCTION(execTryGetFloatProperty); \
	DECLARE_FUNCTION(execTryGetIntProperty); \
	DECLARE_FUNCTION(execTryGetBoolProperty); \
	DECLARE_FUNCTION(execTryGetByteProperty); \
	DECLARE_FUNCTION(execUnpauseNetworkObjectManager); \
	DECLARE_FUNCTION(execPauseNetworkObjectManager); \
	DECLARE_FUNCTION(execGetSynchronizedTime); \
	DECLARE_FUNCTION(execGetObjectFromNetworkIdString); \
	DECLARE_FUNCTION(execGetObjectFromNetworkId); \
	DECLARE_FUNCTION(execGetNetworkIdFromObject); \
	DECLARE_FUNCTION(execSendRpc); \
	DECLARE_FUNCTION(execSendRpcToAll); \
	DECLARE_FUNCTION(execSendRpcToOtherMembers); \
	DECLARE_FUNCTION(execSendRpcToRoomOwner); \
	DECLARE_FUNCTION(execSendRpcToObjectOwner); \
	DECLARE_FUNCTION(execRegisterStrixRpc); \
	DECLARE_FUNCTION(execDirectRelayMessage); \
	DECLARE_FUNCTION(execRelayMessage); \
	DECLARE_FUNCTION(execGetSyncRTT); \
	DECLARE_FUNCTION(execSetSyncTimePeriod); \
	DECLARE_FUNCTION(execGetSyncTimePeriod); \
	DECLARE_FUNCTION(execGetNodeCount); \
	DECLARE_FUNCTION(execGetCurrentRoomMembers); \
	DECLARE_FUNCTION(execGetCurrentRoomMemberById); \
	DECLARE_FUNCTION(execGetCurrentRoomMember); \
	DECLARE_FUNCTION(execIsRoomOwner); \
	DECLARE_FUNCTION(execKickRoomMember); \
	DECLARE_FUNCTION(execSetRoomMember); \
	DECLARE_FUNCTION(execGetCurrentRoom); \
	DECLARE_FUNCTION(execSetRoom); \
	DECLARE_FUNCTION(execDeleteRoom); \
	DECLARE_FUNCTION(execLeaveRoom); \
	DECLARE_FUNCTION(execJoinRandomRoom); \
	DECLARE_FUNCTION(execSearchJoinableRoom); \
	DECLARE_FUNCTION(execCreateRoom); \
	DECLARE_FUNCTION(execJoinRoom); \
	DECLARE_FUNCTION(execSearchRoom); \
	DECLARE_FUNCTION(execDisconnectRoomServer); \
	DECLARE_FUNCTION(execIsRoomServerConnected); \
	DECLARE_FUNCTION(execConnectToRoomServer); \
	DECLARE_FUNCTION(execCreateNodeRoom); \
	DECLARE_FUNCTION(execJoinNodeRoom); \
	DECLARE_FUNCTION(execJoinRandomNodeRoom); \
	DECLARE_FUNCTION(execSearchJoinableNodeRoom); \
	DECLARE_FUNCTION(execSearchNodeRoom); \
	DECLARE_FUNCTION(execSearchNode); \
	DECLARE_FUNCTION(execDisconnectMasterServer); \
	DECLARE_FUNCTION(execIsMasterServerConnected); \
	DECLARE_FUNCTION(execConnectToMasterServer); \
	DECLARE_FUNCTION(execIsNetworkObjectManagerPaused); \
	DECLARE_FUNCTION(execIsInitialized); \
	DECLARE_FUNCTION(execStopStrixNetwork); \
	DECLARE_FUNCTION(execInitializeStrixNetworkWithHttpAccessToken); \
	DECLARE_FUNCTION(execInitializeStrixNetwork);


#define matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixBlueprintFunctionLibrary_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConv_StrixNetworkIdToStrixRelayArg); \
	DECLARE_FUNCTION(execConv_StringKeyStringMapToStrixRelayArg); \
	DECLARE_FUNCTION(execConv_StringKeyRotatorMapToStrixRelayArg); \
	DECLARE_FUNCTION(execConv_StringKeyVectorMapToStrixRelayArg); \
	DECLARE_FUNCTION(execConv_StringKeyFloatMapToStrixRelayArg); \
	DECLARE_FUNCTION(execConv_StringKeyIntMapToStrixRelayArg); \
	DECLARE_FUNCTION(execConv_StringKeyByteMapToStrixRelayArg); \
	DECLARE_FUNCTION(execConv_StringKeyBoolMapToStrixRelayArg); \
	DECLARE_FUNCTION(execConv_IntKeyStringMapToStrixRelayArg); \
	DECLARE_FUNCTION(execConv_IntKeyRotatorMapToStrixRelayArg); \
	DECLARE_FUNCTION(execConv_IntKeyVectorMapToStrixRelayArg); \
	DECLARE_FUNCTION(execConv_IntKeyFloatMapToStrixRelayArg); \
	DECLARE_FUNCTION(execConv_IntKeyIntMapToStrixRelayArg); \
	DECLARE_FUNCTION(execConv_IntKeyByteMapToStrixRelayArg); \
	DECLARE_FUNCTION(execConv_IntKeyBoolMapToStrixRelayArg); \
	DECLARE_FUNCTION(execConv_StringSetToStrixRelayArg); \
	DECLARE_FUNCTION(execConv_VectorSetToStrixRelayArg); \
	DECLARE_FUNCTION(execConv_FloatSetToStrixRelayArg); \
	DECLARE_FUNCTION(execConv_IntSetToStrixRelayArg); \
	DECLARE_FUNCTION(execConv_ByteSetToStrixRelayArg); \
	DECLARE_FUNCTION(execConv_BoolArrayToStrixRelayArg); \
	DECLARE_FUNCTION(execConv_TextArrayToStrixRelayArg); \
	DECLARE_FUNCTION(execConv_StringArrayToStrixRelayArg); \
	DECLARE_FUNCTION(execConv_TransformArrayToStrixRelayArg); \
	DECLARE_FUNCTION(execConv_RotatorArrayToStrixRelayArg); \
	DECLARE_FUNCTION(execConv_QuatArrayToStrixRelayArg); \
	DECLARE_FUNCTION(execConv_VectorArrayToStrixRelayArg); \
	DECLARE_FUNCTION(execConv_FloatArrayToStrixRelayArg); \
	DECLARE_FUNCTION(execConv_IntArrayToStrixRelayArg); \
	DECLARE_FUNCTION(execConv_ByteArrayToStrixRelayArg); \
	DECLARE_FUNCTION(execConv_TextToStrixRelayArg); \
	DECLARE_FUNCTION(execConv_StringToStrixRelayArg); \
	DECLARE_FUNCTION(execConv_QuatToStrixRelayArg); \
	DECLARE_FUNCTION(execConv_TransformToStrixRelayArg); \
	DECLARE_FUNCTION(execConv_RotatorToStrixRelayArg); \
	DECLARE_FUNCTION(execConv_VectorToStrixRelayArg); \
	DECLARE_FUNCTION(execConv_FloatToStrixRelayArg); \
	DECLARE_FUNCTION(execConv_IntToStrixRelayArg); \
	DECLARE_FUNCTION(execConv_BoolToStrixRelayArg); \
	DECLARE_FUNCTION(execConv_ByteToStrixRelayArg); \
	DECLARE_FUNCTION(execCreateStrixDescendingOrder); \
	DECLARE_FUNCTION(execCreateStrixAscendingOrder); \
	DECLARE_FUNCTION(execCreateStrixOrCondition); \
	DECLARE_FUNCTION(execCreateStrixAndCondition); \
	DECLARE_FUNCTION(execCreateStrixFieldIsNotNullCondition); \
	DECLARE_FUNCTION(execCreateStrixFieldIsNullCondition); \
	DECLARE_FUNCTION(execCreateStrixFieldBetweenInclusiveCondition); \
	DECLARE_FUNCTION(execCreateStrixFieldBetweenExclusiveCondition); \
	DECLARE_FUNCTION(execCreateStrixFieldNotEqualsCondition); \
	DECLARE_FUNCTION(execCreateStrixFieldLessThanEqualsCondition); \
	DECLARE_FUNCTION(execCreateStrixFieldLessThanCondition); \
	DECLARE_FUNCTION(execCreateStrixFieldGreaterThanEqualsCondition); \
	DECLARE_FUNCTION(execCreateStrixFieldGreaterThanCondition); \
	DECLARE_FUNCTION(execCreateStrixFieldEqualsCondition); \
	DECLARE_FUNCTION(execCreateStrixStringStartsWithCondition); \
	DECLARE_FUNCTION(execCreateStrixStringEndsWithCondition); \
	DECLARE_FUNCTION(execCreateStrixStringContainsCondition); \
	DECLARE_FUNCTION(execCreateStrixStringNotEqualsCondition); \
	DECLARE_FUNCTION(execCreateStrixStringEqualsCondition); \
	DECLARE_FUNCTION(execCreateStrixFloatBetweenInclusiveCondition); \
	DECLARE_FUNCTION(execCreateStrixFloatBetweenExclusiveCondition); \
	DECLARE_FUNCTION(execCreateStrixFloatNotEqualsCondition); \
	DECLARE_FUNCTION(execCreateStrixFloatLessThanEqualsCondition); \
	DECLARE_FUNCTION(execCreateStrixFloatLessThanCondition); \
	DECLARE_FUNCTION(execCreateStrixFloatGreaterThanEqualsCondition); \
	DECLARE_FUNCTION(execCreateStrixFloatGreaterThanCondition); \
	DECLARE_FUNCTION(execCreateStrixFloatEqualsCondition); \
	DECLARE_FUNCTION(execCreateStrixIntBetweenInclusiveCondition); \
	DECLARE_FUNCTION(execCreateStrixIntBetweenExclusiveCondition); \
	DECLARE_FUNCTION(execCreateStrixIntNotEqualsCondition); \
	DECLARE_FUNCTION(execCreateStrixIntLessThanEqualsCondition); \
	DECLARE_FUNCTION(execCreateStrixIntLessThanCondition); \
	DECLARE_FUNCTION(execCreateStrixIntGreaterThanEqualsCondition); \
	DECLARE_FUNCTION(execCreateStrixIntGreaterThanCondition); \
	DECLARE_FUNCTION(execCreateStrixIntEqualsCondition); \
	DECLARE_FUNCTION(execCreateStrixByteBetweenInclusiveCondition); \
	DECLARE_FUNCTION(execCreateStrixByteBetweenExclusiveCondition); \
	DECLARE_FUNCTION(execCreateStrixByteNotEqualsCondition); \
	DECLARE_FUNCTION(execCreateStrixByteLessThanEqualsCondition); \
	DECLARE_FUNCTION(execCreateStrixByteLessThanCondition); \
	DECLARE_FUNCTION(execCreateStrixByteGreaterThanEqualsCondition); \
	DECLARE_FUNCTION(execCreateStrixByteGreaterThanCondition); \
	DECLARE_FUNCTION(execCreateStrixByteEqualsCondition); \
	DECLARE_FUNCTION(execCreateStrixBoolNotEqualsCondition); \
	DECLARE_FUNCTION(execCreateStrixBoolEqualsCondition); \
	DECLARE_FUNCTION(execSetStringProperty); \
	DECLARE_FUNCTION(execSetFloatProperty); \
	DECLARE_FUNCTION(execSetIntProperty); \
	DECLARE_FUNCTION(execSetBoolProperty); \
	DECLARE_FUNCTION(execSetByteProperty); \
	DECLARE_FUNCTION(execTryGetStringProperty); \
	DECLARE_FUNCTION(execTryGetFloatProperty); \
	DECLARE_FUNCTION(execTryGetIntProperty); \
	DECLARE_FUNCTION(execTryGetBoolProperty); \
	DECLARE_FUNCTION(execTryGetByteProperty); \
	DECLARE_FUNCTION(execUnpauseNetworkObjectManager); \
	DECLARE_FUNCTION(execPauseNetworkObjectManager); \
	DECLARE_FUNCTION(execGetSynchronizedTime); \
	DECLARE_FUNCTION(execGetObjectFromNetworkIdString); \
	DECLARE_FUNCTION(execGetObjectFromNetworkId); \
	DECLARE_FUNCTION(execGetNetworkIdFromObject); \
	DECLARE_FUNCTION(execSendRpc); \
	DECLARE_FUNCTION(execSendRpcToAll); \
	DECLARE_FUNCTION(execSendRpcToOtherMembers); \
	DECLARE_FUNCTION(execSendRpcToRoomOwner); \
	DECLARE_FUNCTION(execSendRpcToObjectOwner); \
	DECLARE_FUNCTION(execRegisterStrixRpc); \
	DECLARE_FUNCTION(execDirectRelayMessage); \
	DECLARE_FUNCTION(execRelayMessage); \
	DECLARE_FUNCTION(execGetSyncRTT); \
	DECLARE_FUNCTION(execSetSyncTimePeriod); \
	DECLARE_FUNCTION(execGetSyncTimePeriod); \
	DECLARE_FUNCTION(execGetNodeCount); \
	DECLARE_FUNCTION(execGetCurrentRoomMembers); \
	DECLARE_FUNCTION(execGetCurrentRoomMemberById); \
	DECLARE_FUNCTION(execGetCurrentRoomMember); \
	DECLARE_FUNCTION(execIsRoomOwner); \
	DECLARE_FUNCTION(execKickRoomMember); \
	DECLARE_FUNCTION(execSetRoomMember); \
	DECLARE_FUNCTION(execGetCurrentRoom); \
	DECLARE_FUNCTION(execSetRoom); \
	DECLARE_FUNCTION(execDeleteRoom); \
	DECLARE_FUNCTION(execLeaveRoom); \
	DECLARE_FUNCTION(execJoinRandomRoom); \
	DECLARE_FUNCTION(execSearchJoinableRoom); \
	DECLARE_FUNCTION(execCreateRoom); \
	DECLARE_FUNCTION(execJoinRoom); \
	DECLARE_FUNCTION(execSearchRoom); \
	DECLARE_FUNCTION(execDisconnectRoomServer); \
	DECLARE_FUNCTION(execIsRoomServerConnected); \
	DECLARE_FUNCTION(execConnectToRoomServer); \
	DECLARE_FUNCTION(execCreateNodeRoom); \
	DECLARE_FUNCTION(execJoinNodeRoom); \
	DECLARE_FUNCTION(execJoinRandomNodeRoom); \
	DECLARE_FUNCTION(execSearchJoinableNodeRoom); \
	DECLARE_FUNCTION(execSearchNodeRoom); \
	DECLARE_FUNCTION(execSearchNode); \
	DECLARE_FUNCTION(execDisconnectMasterServer); \
	DECLARE_FUNCTION(execIsMasterServerConnected); \
	DECLARE_FUNCTION(execConnectToMasterServer); \
	DECLARE_FUNCTION(execIsNetworkObjectManagerPaused); \
	DECLARE_FUNCTION(execIsInitialized); \
	DECLARE_FUNCTION(execStopStrixNetwork); \
	DECLARE_FUNCTION(execInitializeStrixNetworkWithHttpAccessToken); \
	DECLARE_FUNCTION(execInitializeStrixNetwork);


#define matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixBlueprintFunctionLibrary_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStrixBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_UStrixBlueprintFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UStrixBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StrixSDK"), NO_API) \
	DECLARE_SERIALIZER(UStrixBlueprintFunctionLibrary)


#define matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixBlueprintFunctionLibrary_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUStrixBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_UStrixBlueprintFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UStrixBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StrixSDK"), NO_API) \
	DECLARE_SERIALIZER(UStrixBlueprintFunctionLibrary)


#define matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixBlueprintFunctionLibrary_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStrixBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStrixBlueprintFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStrixBlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStrixBlueprintFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStrixBlueprintFunctionLibrary(UStrixBlueprintFunctionLibrary&&); \
	NO_API UStrixBlueprintFunctionLibrary(const UStrixBlueprintFunctionLibrary&); \
public:


#define matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixBlueprintFunctionLibrary_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStrixBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStrixBlueprintFunctionLibrary(UStrixBlueprintFunctionLibrary&&); \
	NO_API UStrixBlueprintFunctionLibrary(const UStrixBlueprintFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStrixBlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStrixBlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStrixBlueprintFunctionLibrary)


#define matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixBlueprintFunctionLibrary_h_27_PRIVATE_PROPERTY_OFFSET
#define matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixBlueprintFunctionLibrary_h_24_PROLOG
#define matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixBlueprintFunctionLibrary_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixBlueprintFunctionLibrary_h_27_PRIVATE_PROPERTY_OFFSET \
	matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixBlueprintFunctionLibrary_h_27_SPARSE_DATA \
	matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixBlueprintFunctionLibrary_h_27_RPC_WRAPPERS \
	matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixBlueprintFunctionLibrary_h_27_INCLASS \
	matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixBlueprintFunctionLibrary_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixBlueprintFunctionLibrary_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixBlueprintFunctionLibrary_h_27_PRIVATE_PROPERTY_OFFSET \
	matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixBlueprintFunctionLibrary_h_27_SPARSE_DATA \
	matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixBlueprintFunctionLibrary_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixBlueprintFunctionLibrary_h_27_INCLASS_NO_PURE_DECLS \
	matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixBlueprintFunctionLibrary_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STRIXSDK_API UClass* StaticClass<class UStrixBlueprintFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixBlueprintFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
