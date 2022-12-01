// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FStrixRoomMember;
#ifdef STRIXSDK_StrixReplicatorComponent_generated_h
#error "StrixReplicatorComponent.generated.h already included, missing '#pragma once' in StrixReplicatorComponent.h"
#endif
#define STRIXSDK_StrixReplicatorComponent_generated_h

#define matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_Components_StrixReplicatorComponent_h_68_DELEGATE \
static inline void FStrixReplicatorChangeOwnerDelegate_DelegateWrapper(const FMulticastScriptDelegate& StrixReplicatorChangeOwnerDelegate) \
{ \
	StrixReplicatorChangeOwnerDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_Components_StrixReplicatorComponent_h_67_DELEGATE \
static inline void FStrixReplicatorDesyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& StrixReplicatorDesyncDelegate) \
{ \
	StrixReplicatorDesyncDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_Components_StrixReplicatorComponent_h_66_DELEGATE \
static inline void FStrixReplicatorSyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& StrixReplicatorSyncDelegate) \
{ \
	StrixReplicatorSyncDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_Components_StrixReplicatorComponent_h_65_DELEGATE \
static inline void FStrixReplicatorDestroyDelegate_DelegateWrapper(const FMulticastScriptDelegate& StrixReplicatorDestroyDelegate) \
{ \
	StrixReplicatorDestroyDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_Components_StrixReplicatorComponent_h_64_DELEGATE \
static inline void FStrixReplicatorInitDelegate_DelegateWrapper(const FMulticastScriptDelegate& StrixReplicatorInitDelegate) \
{ \
	StrixReplicatorInitDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_Components_StrixReplicatorComponent_h_80_SPARSE_DATA
#define matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_Components_StrixReplicatorComponent_h_80_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetRoomMember); \
	DECLARE_FUNCTION(execGetIsOwnerAndReplicating); \
	DECLARE_FUNCTION(execGetIsReplicating); \
	DECLARE_FUNCTION(execGetIsOwner); \
	DECLARE_FUNCTION(execSetTicksPerSecond); \
	DECLARE_FUNCTION(execGetTicksPerSecond);


#define matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_Components_StrixReplicatorComponent_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRoomMember); \
	DECLARE_FUNCTION(execGetIsOwnerAndReplicating); \
	DECLARE_FUNCTION(execGetIsReplicating); \
	DECLARE_FUNCTION(execGetIsOwner); \
	DECLARE_FUNCTION(execSetTicksPerSecond); \
	DECLARE_FUNCTION(execGetTicksPerSecond);


#define matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_Components_StrixReplicatorComponent_h_80_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStrixReplicatorComponent(); \
	friend struct Z_Construct_UClass_UStrixReplicatorComponent_Statics; \
public: \
	DECLARE_CLASS(UStrixReplicatorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StrixSDK"), NO_API) \
	DECLARE_SERIALIZER(UStrixReplicatorComponent)


#define matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_Components_StrixReplicatorComponent_h_80_INCLASS \
private: \
	static void StaticRegisterNativesUStrixReplicatorComponent(); \
	friend struct Z_Construct_UClass_UStrixReplicatorComponent_Statics; \
public: \
	DECLARE_CLASS(UStrixReplicatorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StrixSDK"), NO_API) \
	DECLARE_SERIALIZER(UStrixReplicatorComponent)


#define matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_Components_StrixReplicatorComponent_h_80_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStrixReplicatorComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStrixReplicatorComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStrixReplicatorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStrixReplicatorComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStrixReplicatorComponent(UStrixReplicatorComponent&&); \
	NO_API UStrixReplicatorComponent(const UStrixReplicatorComponent&); \
public:


#define matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_Components_StrixReplicatorComponent_h_80_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStrixReplicatorComponent(UStrixReplicatorComponent&&); \
	NO_API UStrixReplicatorComponent(const UStrixReplicatorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStrixReplicatorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStrixReplicatorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStrixReplicatorComponent)


#define matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_Components_StrixReplicatorComponent_h_80_PRIVATE_PROPERTY_OFFSET
#define matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_Components_StrixReplicatorComponent_h_76_PROLOG
#define matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_Components_StrixReplicatorComponent_h_80_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_Components_StrixReplicatorComponent_h_80_PRIVATE_PROPERTY_OFFSET \
	matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_Components_StrixReplicatorComponent_h_80_SPARSE_DATA \
	matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_Components_StrixReplicatorComponent_h_80_RPC_WRAPPERS \
	matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_Components_StrixReplicatorComponent_h_80_INCLASS \
	matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_Components_StrixReplicatorComponent_h_80_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_Components_StrixReplicatorComponent_h_80_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_Components_StrixReplicatorComponent_h_80_PRIVATE_PROPERTY_OFFSET \
	matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_Components_StrixReplicatorComponent_h_80_SPARSE_DATA \
	matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_Components_StrixReplicatorComponent_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
	matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_Components_StrixReplicatorComponent_h_80_INCLASS_NO_PURE_DECLS \
	matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_Components_StrixReplicatorComponent_h_80_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STRIXSDK_API UClass* StaticClass<class UStrixReplicatorComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_Components_StrixReplicatorComponent_h


#define FOREACH_ENUM_ECONNECTIONCLOSEDBEHAVIOUR(op) \
	op(EConnectionClosedBehaviour::ChangeOwnership) \
	op(EConnectionClosedBehaviour::Delete) \
	op(EConnectionClosedBehaviour::Unknown) 

enum class EConnectionClosedBehaviour : uint8;
template<> STRIXSDK_API UEnum* StaticEnum<EConnectionClosedBehaviour>();

#define FOREACH_ENUM_EINSTANTIABLEBY(op) \
	op(EInstantiableBy::RoomOwner) \
	op(EInstantiableBy::Anyone) \
	op(EInstantiableBy::Unknown) 

enum class EInstantiableBy : uint8;
template<> STRIXSDK_API UEnum* StaticEnum<EInstantiableBy>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
