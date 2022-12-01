// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StrixSDK/Public/Components/StrixMovementSynchronizer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStrixMovementSynchronizer() {}
// Cross Module References
	STRIXSDK_API UEnum* Z_Construct_UEnum_StrixSDK_EMovementSyncType();
	UPackage* Z_Construct_UPackage__Script_StrixSDK();
	STRIXSDK_API UClass* Z_Construct_UClass_UStrixMovementSynchronizer_NoRegister();
	STRIXSDK_API UClass* Z_Construct_UClass_UStrixMovementSynchronizer();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMovementMode();
// End Cross Module References
	static UEnum* EMovementSyncType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_StrixSDK_EMovementSyncType, Z_Construct_UPackage__Script_StrixSDK(), TEXT("EMovementSyncType"));
		}
		return Singleton;
	}
	template<> STRIXSDK_API UEnum* StaticEnum<EMovementSyncType>()
	{
		return EMovementSyncType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMovementSyncType(EMovementSyncType_StaticEnum, TEXT("/Script/StrixSDK"), TEXT("EMovementSyncType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_StrixSDK_EMovementSyncType_Hash() { return 3881656894U; }
	UEnum* Z_Construct_UEnum_StrixSDK_EMovementSyncType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_StrixSDK();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMovementSyncType"), 0, Get_Z_Construct_UEnum_StrixSDK_EMovementSyncType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMovementSyncType::RPC", (int64)EMovementSyncType::RPC },
				{ "EMovementSyncType::SyncProperties", (int64)EMovementSyncType::SyncProperties },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Components/StrixMovementSynchronizer.h" },
				{ "RPC.DisplayName", "RPCs" },
				{ "RPC.Name", "EMovementSyncType::RPC" },
				{ "SyncProperties.DisplayName", "Replica sync properties" },
				{ "SyncProperties.Name", "EMovementSyncType::SyncProperties" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_StrixSDK,
				nullptr,
				"EMovementSyncType",
				"EMovementSyncType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(UStrixMovementSynchronizer::execSetInterpolateRotation)
	{
		P_GET_UBOOL(Z_Param_interpolate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInterpolateRotation(Z_Param_interpolate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStrixMovementSynchronizer::execSetSyncZVelocity)
	{
		P_GET_UBOOL(Z_Param_sync);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSyncZVelocity(Z_Param_sync);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStrixMovementSynchronizer::execSetSyncYVelocity)
	{
		P_GET_UBOOL(Z_Param_sync);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSyncYVelocity(Z_Param_sync);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStrixMovementSynchronizer::execSetSyncXVelocity)
	{
		P_GET_UBOOL(Z_Param_sync);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSyncXVelocity(Z_Param_sync);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStrixMovementSynchronizer::execSetSyncJump)
	{
		P_GET_UBOOL(Z_Param_sync);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSyncJump(Z_Param_sync);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStrixMovementSynchronizer::execSetReachableDistance)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_distance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetReachableDistance(Z_Param_distance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStrixMovementSynchronizer::execSetSyncPeriodMax)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_periodMax);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSyncPeriodMax(Z_Param_periodMax);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStrixMovementSynchronizer::execSetSyncPeriodMin)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_periodMin);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSyncPeriodMin(Z_Param_periodMin);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStrixMovementSynchronizer::execSetDamping)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_damp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDamping(Z_Param_damp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStrixMovementSynchronizer::execSetAcceleration)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_accel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAcceleration(Z_Param_accel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStrixMovementSynchronizer::execSetMaxSpeed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_newMaxSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxSpeed(Z_Param_newMaxSpeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStrixMovementSynchronizer::execSetNearDistance)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_distance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNearDistance(Z_Param_distance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStrixMovementSynchronizer::execStartSync)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartSync();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStrixMovementSynchronizer::execSendJumpRpcIfNecessary)
	{
		P_GET_OBJECT(ACharacter,Z_Param_character);
		P_GET_PROPERTY(FByteProperty,Z_Param_mode);
		P_GET_PROPERTY(FByteProperty,Z_Param_v);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendJumpRpcIfNecessary(Z_Param_character,EMovementMode(Z_Param_mode),Z_Param_v);
		P_NATIVE_END;
	}
	void UStrixMovementSynchronizer::StaticRegisterNativesUStrixMovementSynchronizer()
	{
		UClass* Class = UStrixMovementSynchronizer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SendJumpRpcIfNecessary", &UStrixMovementSynchronizer::execSendJumpRpcIfNecessary },
			{ "SetAcceleration", &UStrixMovementSynchronizer::execSetAcceleration },
			{ "SetDamping", &UStrixMovementSynchronizer::execSetDamping },
			{ "SetInterpolateRotation", &UStrixMovementSynchronizer::execSetInterpolateRotation },
			{ "SetMaxSpeed", &UStrixMovementSynchronizer::execSetMaxSpeed },
			{ "SetNearDistance", &UStrixMovementSynchronizer::execSetNearDistance },
			{ "SetReachableDistance", &UStrixMovementSynchronizer::execSetReachableDistance },
			{ "SetSyncJump", &UStrixMovementSynchronizer::execSetSyncJump },
			{ "SetSyncPeriodMax", &UStrixMovementSynchronizer::execSetSyncPeriodMax },
			{ "SetSyncPeriodMin", &UStrixMovementSynchronizer::execSetSyncPeriodMin },
			{ "SetSyncXVelocity", &UStrixMovementSynchronizer::execSetSyncXVelocity },
			{ "SetSyncYVelocity", &UStrixMovementSynchronizer::execSetSyncYVelocity },
			{ "SetSyncZVelocity", &UStrixMovementSynchronizer::execSetSyncZVelocity },
			{ "StartSync", &UStrixMovementSynchronizer::execStartSync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStrixMovementSynchronizer_SendJumpRpcIfNecessary_Statics
	{
		struct StrixMovementSynchronizer_eventSendJumpRpcIfNecessary_Parms
		{
			ACharacter* character;
			TEnumAsByte<EMovementMode> mode;
			uint8 v;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_character;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_v;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStrixMovementSynchronizer_SendJumpRpcIfNecessary_Statics::NewProp_character = { "character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StrixMovementSynchronizer_eventSendJumpRpcIfNecessary_Parms, character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStrixMovementSynchronizer_SendJumpRpcIfNecessary_Statics::NewProp_mode = { "mode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StrixMovementSynchronizer_eventSendJumpRpcIfNecessary_Parms, mode), Z_Construct_UEnum_Engine_EMovementMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStrixMovementSynchronizer_SendJumpRpcIfNecessary_Statics::NewProp_v = { "v", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StrixMovementSynchronizer_eventSendJumpRpcIfNecessary_Parms, v), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStrixMovementSynchronizer_SendJumpRpcIfNecessary_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStrixMovementSynchronizer_SendJumpRpcIfNecessary_Statics::NewProp_character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStrixMovementSynchronizer_SendJumpRpcIfNecessary_Statics::NewProp_mode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStrixMovementSynchronizer_SendJumpRpcIfNecessary_Statics::NewProp_v,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStrixMovementSynchronizer_SendJumpRpcIfNecessary_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate function assigned to the MovementModeChangedDelegate of a character\n\x09 *  to detect and send Jump RPC commands if necessary.\n\x09 *\x09@param\x09""character\x09""Character to check\n\x09 *\x09@param\x09mode\x09Previous movement mode (walking, falling etc.)\n\x09 *\x09@param\x09v\x09Previous custom mode (unused)\n\x09 *\x09@remark\x09This will only work with classes derived from ACharacter\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/StrixMovementSynchronizer.h" },
		{ "ToolTip", "Delegate function assigned to the MovementModeChangedDelegate of a character\nto detect and send Jump RPC commands if necessary.\n    @param  character       Character to check\n    @param  mode    Previous movement mode (walking, falling etc.)\n    @param  v       Previous custom mode (unused)\n    @remark This will only work with classes derived from ACharacter" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStrixMovementSynchronizer_SendJumpRpcIfNecessary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStrixMovementSynchronizer, nullptr, "SendJumpRpcIfNecessary", nullptr, nullptr, sizeof(StrixMovementSynchronizer_eventSendJumpRpcIfNecessary_Parms), Z_Construct_UFunction_UStrixMovementSynchronizer_SendJumpRpcIfNecessary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStrixMovementSynchronizer_SendJumpRpcIfNecessary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStrixMovementSynchronizer_SendJumpRpcIfNecessary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStrixMovementSynchronizer_SendJumpRpcIfNecessary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStrixMovementSynchronizer_SendJumpRpcIfNecessary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStrixMovementSynchronizer_SendJumpRpcIfNecessary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStrixMovementSynchronizer_SetAcceleration_Statics
	{
		struct StrixMovementSynchronizer_eventSetAcceleration_Parms
		{
			float accel;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_accel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStrixMovementSynchronizer_SetAcceleration_Statics::NewProp_accel = { "accel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StrixMovementSynchronizer_eventSetAcceleration_Parms, accel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStrixMovementSynchronizer_SetAcceleration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStrixMovementSynchronizer_SetAcceleration_Statics::NewProp_accel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStrixMovementSynchronizer_SetAcceleration_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Setter of the Acceleration property\n\x09 *\x09@param\x09""accel   \x09The value to set\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/StrixMovementSynchronizer.h" },
		{ "ToolTip", "Setter of the Acceleration property\n    @param  accel           The value to set" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStrixMovementSynchronizer_SetAcceleration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStrixMovementSynchronizer, nullptr, "SetAcceleration", nullptr, nullptr, sizeof(StrixMovementSynchronizer_eventSetAcceleration_Parms), Z_Construct_UFunction_UStrixMovementSynchronizer_SetAcceleration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStrixMovementSynchronizer_SetAcceleration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStrixMovementSynchronizer_SetAcceleration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStrixMovementSynchronizer_SetAcceleration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStrixMovementSynchronizer_SetAcceleration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStrixMovementSynchronizer_SetAcceleration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStrixMovementSynchronizer_SetDamping_Statics
	{
		struct StrixMovementSynchronizer_eventSetDamping_Parms
		{
			float damp;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_damp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStrixMovementSynchronizer_SetDamping_Statics::NewProp_damp = { "damp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StrixMovementSynchronizer_eventSetDamping_Parms, damp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStrixMovementSynchronizer_SetDamping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStrixMovementSynchronizer_SetDamping_Statics::NewProp_damp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStrixMovementSynchronizer_SetDamping_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Setter of the Damping property\n\x09 *\x09@param\x09""damp    \x09The value to set\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/StrixMovementSynchronizer.h" },
		{ "ToolTip", "Setter of the Damping property\n    @param  damp            The value to set" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStrixMovementSynchronizer_SetDamping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStrixMovementSynchronizer, nullptr, "SetDamping", nullptr, nullptr, sizeof(StrixMovementSynchronizer_eventSetDamping_Parms), Z_Construct_UFunction_UStrixMovementSynchronizer_SetDamping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStrixMovementSynchronizer_SetDamping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStrixMovementSynchronizer_SetDamping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStrixMovementSynchronizer_SetDamping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStrixMovementSynchronizer_SetDamping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStrixMovementSynchronizer_SetDamping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStrixMovementSynchronizer_SetInterpolateRotation_Statics
	{
		struct StrixMovementSynchronizer_eventSetInterpolateRotation_Parms
		{
			bool interpolate;
		};
		static void NewProp_interpolate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_interpolate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UStrixMovementSynchronizer_SetInterpolateRotation_Statics::NewProp_interpolate_SetBit(void* Obj)
	{
		((StrixMovementSynchronizer_eventSetInterpolateRotation_Parms*)Obj)->interpolate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStrixMovementSynchronizer_SetInterpolateRotation_Statics::NewProp_interpolate = { "interpolate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StrixMovementSynchronizer_eventSetInterpolateRotation_Parms), &Z_Construct_UFunction_UStrixMovementSynchronizer_SetInterpolateRotation_Statics::NewProp_interpolate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStrixMovementSynchronizer_SetInterpolateRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStrixMovementSynchronizer_SetInterpolateRotation_Statics::NewProp_interpolate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStrixMovementSynchronizer_SetInterpolateRotation_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Setter of the InterpolateRotation property\n\x09 *\x09@param\x09interpolate\x09The value to set\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/StrixMovementSynchronizer.h" },
		{ "ToolTip", "Setter of the InterpolateRotation property\n    @param  interpolate     The value to set" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStrixMovementSynchronizer_SetInterpolateRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStrixMovementSynchronizer, nullptr, "SetInterpolateRotation", nullptr, nullptr, sizeof(StrixMovementSynchronizer_eventSetInterpolateRotation_Parms), Z_Construct_UFunction_UStrixMovementSynchronizer_SetInterpolateRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStrixMovementSynchronizer_SetInterpolateRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStrixMovementSynchronizer_SetInterpolateRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStrixMovementSynchronizer_SetInterpolateRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStrixMovementSynchronizer_SetInterpolateRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStrixMovementSynchronizer_SetInterpolateRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStrixMovementSynchronizer_SetMaxSpeed_Statics
	{
		struct StrixMovementSynchronizer_eventSetMaxSpeed_Parms
		{
			float newMaxSpeed;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_newMaxSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStrixMovementSynchronizer_SetMaxSpeed_Statics::NewProp_newMaxSpeed = { "newMaxSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StrixMovementSynchronizer_eventSetMaxSpeed_Parms, newMaxSpeed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStrixMovementSynchronizer_SetMaxSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStrixMovementSynchronizer_SetMaxSpeed_Statics::NewProp_newMaxSpeed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStrixMovementSynchronizer_SetMaxSpeed_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Setter of the MaxSpeed property\n\x09 *\x09@param\x09maxSpeed\x09The value to set\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/StrixMovementSynchronizer.h" },
		{ "ToolTip", "Setter of the MaxSpeed property\n    @param  maxSpeed        The value to set" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStrixMovementSynchronizer_SetMaxSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStrixMovementSynchronizer, nullptr, "SetMaxSpeed", nullptr, nullptr, sizeof(StrixMovementSynchronizer_eventSetMaxSpeed_Parms), Z_Construct_UFunction_UStrixMovementSynchronizer_SetMaxSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStrixMovementSynchronizer_SetMaxSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStrixMovementSynchronizer_SetMaxSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStrixMovementSynchronizer_SetMaxSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStrixMovementSynchronizer_SetMaxSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStrixMovementSynchronizer_SetMaxSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStrixMovementSynchronizer_SetNearDistance_Statics
	{
		struct StrixMovementSynchronizer_eventSetNearDistance_Parms
		{
			float distance;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_distance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStrixMovementSynchronizer_SetNearDistance_Statics::NewProp_distance = { "distance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StrixMovementSynchronizer_eventSetNearDistance_Parms, distance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStrixMovementSynchronizer_SetNearDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStrixMovementSynchronizer_SetNearDistance_Statics::NewProp_distance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStrixMovementSynchronizer_SetNearDistance_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Setter of the NearDistance property\n\x09 *\x09@param\x09""distance\x09The value to set\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/StrixMovementSynchronizer.h" },
		{ "ToolTip", "Setter of the NearDistance property\n    @param  distance        The value to set" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStrixMovementSynchronizer_SetNearDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStrixMovementSynchronizer, nullptr, "SetNearDistance", nullptr, nullptr, sizeof(StrixMovementSynchronizer_eventSetNearDistance_Parms), Z_Construct_UFunction_UStrixMovementSynchronizer_SetNearDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStrixMovementSynchronizer_SetNearDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStrixMovementSynchronizer_SetNearDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStrixMovementSynchronizer_SetNearDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStrixMovementSynchronizer_SetNearDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStrixMovementSynchronizer_SetNearDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStrixMovementSynchronizer_SetReachableDistance_Statics
	{
		struct StrixMovementSynchronizer_eventSetReachableDistance_Parms
		{
			float distance;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_distance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStrixMovementSynchronizer_SetReachableDistance_Statics::NewProp_distance = { "distance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StrixMovementSynchronizer_eventSetReachableDistance_Parms, distance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStrixMovementSynchronizer_SetReachableDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStrixMovementSynchronizer_SetReachableDistance_Statics::NewProp_distance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStrixMovementSynchronizer_SetReachableDistance_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Setter of the ReachableDistance property\n\x09 *\x09@param\x09""distance\x09The value to set\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/StrixMovementSynchronizer.h" },
		{ "ToolTip", "Setter of the ReachableDistance property\n    @param  distance        The value to set" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStrixMovementSynchronizer_SetReachableDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStrixMovementSynchronizer, nullptr, "SetReachableDistance", nullptr, nullptr, sizeof(StrixMovementSynchronizer_eventSetReachableDistance_Parms), Z_Construct_UFunction_UStrixMovementSynchronizer_SetReachableDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStrixMovementSynchronizer_SetReachableDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStrixMovementSynchronizer_SetReachableDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStrixMovementSynchronizer_SetReachableDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStrixMovementSynchronizer_SetReachableDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStrixMovementSynchronizer_SetReachableDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncJump_Statics
	{
		struct StrixMovementSynchronizer_eventSetSyncJump_Parms
		{
			bool sync;
		};
		static void NewProp_sync_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_sync;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncJump_Statics::NewProp_sync_SetBit(void* Obj)
	{
		((StrixMovementSynchronizer_eventSetSyncJump_Parms*)Obj)->sync = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncJump_Statics::NewProp_sync = { "sync", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StrixMovementSynchronizer_eventSetSyncJump_Parms), &Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncJump_Statics::NewProp_sync_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncJump_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncJump_Statics::NewProp_sync,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncJump_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Setter of the SyncJump property\n\x09 *\x09@param\x09sync\x09The value to set\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/StrixMovementSynchronizer.h" },
		{ "ToolTip", "Setter of the SyncJump property\n    @param  sync    The value to set" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStrixMovementSynchronizer, nullptr, "SetSyncJump", nullptr, nullptr, sizeof(StrixMovementSynchronizer_eventSetSyncJump_Parms), Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncJump_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncJump_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncJump_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncJump_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncJump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncJump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncPeriodMax_Statics
	{
		struct StrixMovementSynchronizer_eventSetSyncPeriodMax_Parms
		{
			int32 periodMax;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_periodMax;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncPeriodMax_Statics::NewProp_periodMax = { "periodMax", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StrixMovementSynchronizer_eventSetSyncPeriodMax_Parms, periodMax), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncPeriodMax_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncPeriodMax_Statics::NewProp_periodMax,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncPeriodMax_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Setter of the PeriodMax property\n\x09 *\x09@param\x09periodMax\x09The value to set\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/StrixMovementSynchronizer.h" },
		{ "ToolTip", "Setter of the PeriodMax property\n    @param  periodMax       The value to set" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncPeriodMax_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStrixMovementSynchronizer, nullptr, "SetSyncPeriodMax", nullptr, nullptr, sizeof(StrixMovementSynchronizer_eventSetSyncPeriodMax_Parms), Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncPeriodMax_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncPeriodMax_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncPeriodMax_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncPeriodMax_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncPeriodMax()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncPeriodMax_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncPeriodMin_Statics
	{
		struct StrixMovementSynchronizer_eventSetSyncPeriodMin_Parms
		{
			int32 periodMin;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_periodMin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncPeriodMin_Statics::NewProp_periodMin = { "periodMin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StrixMovementSynchronizer_eventSetSyncPeriodMin_Parms, periodMin), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncPeriodMin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncPeriodMin_Statics::NewProp_periodMin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncPeriodMin_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Setter of the PeriodMin property\n\x09 *\x09@param\x09periodMin\x09The value to set\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/StrixMovementSynchronizer.h" },
		{ "ToolTip", "Setter of the PeriodMin property\n    @param  periodMin       The value to set" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncPeriodMin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStrixMovementSynchronizer, nullptr, "SetSyncPeriodMin", nullptr, nullptr, sizeof(StrixMovementSynchronizer_eventSetSyncPeriodMin_Parms), Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncPeriodMin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncPeriodMin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncPeriodMin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncPeriodMin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncPeriodMin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncPeriodMin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncXVelocity_Statics
	{
		struct StrixMovementSynchronizer_eventSetSyncXVelocity_Parms
		{
			bool sync;
		};
		static void NewProp_sync_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_sync;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncXVelocity_Statics::NewProp_sync_SetBit(void* Obj)
	{
		((StrixMovementSynchronizer_eventSetSyncXVelocity_Parms*)Obj)->sync = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncXVelocity_Statics::NewProp_sync = { "sync", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StrixMovementSynchronizer_eventSetSyncXVelocity_Parms), &Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncXVelocity_Statics::NewProp_sync_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncXVelocity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncXVelocity_Statics::NewProp_sync,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncXVelocity_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Setter of the SyncXVelocity property\n\x09 *\x09@param\x09sync\x09The value to set\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/StrixMovementSynchronizer.h" },
		{ "ToolTip", "Setter of the SyncXVelocity property\n    @param  sync    The value to set" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncXVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStrixMovementSynchronizer, nullptr, "SetSyncXVelocity", nullptr, nullptr, sizeof(StrixMovementSynchronizer_eventSetSyncXVelocity_Parms), Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncXVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncXVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncXVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncXVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncXVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncXVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncYVelocity_Statics
	{
		struct StrixMovementSynchronizer_eventSetSyncYVelocity_Parms
		{
			bool sync;
		};
		static void NewProp_sync_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_sync;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncYVelocity_Statics::NewProp_sync_SetBit(void* Obj)
	{
		((StrixMovementSynchronizer_eventSetSyncYVelocity_Parms*)Obj)->sync = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncYVelocity_Statics::NewProp_sync = { "sync", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StrixMovementSynchronizer_eventSetSyncYVelocity_Parms), &Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncYVelocity_Statics::NewProp_sync_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncYVelocity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncYVelocity_Statics::NewProp_sync,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncYVelocity_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Setter of the SyncYVelocity property\n\x09 *\x09@param\x09sync\x09The value to set\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/StrixMovementSynchronizer.h" },
		{ "ToolTip", "Setter of the SyncYVelocity property\n    @param  sync    The value to set" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncYVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStrixMovementSynchronizer, nullptr, "SetSyncYVelocity", nullptr, nullptr, sizeof(StrixMovementSynchronizer_eventSetSyncYVelocity_Parms), Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncYVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncYVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncYVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncYVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncYVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncYVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncZVelocity_Statics
	{
		struct StrixMovementSynchronizer_eventSetSyncZVelocity_Parms
		{
			bool sync;
		};
		static void NewProp_sync_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_sync;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncZVelocity_Statics::NewProp_sync_SetBit(void* Obj)
	{
		((StrixMovementSynchronizer_eventSetSyncZVelocity_Parms*)Obj)->sync = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncZVelocity_Statics::NewProp_sync = { "sync", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StrixMovementSynchronizer_eventSetSyncZVelocity_Parms), &Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncZVelocity_Statics::NewProp_sync_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncZVelocity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncZVelocity_Statics::NewProp_sync,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncZVelocity_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Setter of the SyncZVelocity property\n\x09 *\x09@param\x09sync\x09The value to set\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/StrixMovementSynchronizer.h" },
		{ "ToolTip", "Setter of the SyncZVelocity property\n    @param  sync    The value to set" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncZVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStrixMovementSynchronizer, nullptr, "SetSyncZVelocity", nullptr, nullptr, sizeof(StrixMovementSynchronizer_eventSetSyncZVelocity_Parms), Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncZVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncZVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncZVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncZVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncZVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncZVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStrixMovementSynchronizer_StartSync_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStrixMovementSynchronizer_StartSync_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Internal function used for the registration of necessary callbacks etc.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/StrixMovementSynchronizer.h" },
		{ "ToolTip", "Internal function used for the registration of necessary callbacks etc." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStrixMovementSynchronizer_StartSync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStrixMovementSynchronizer, nullptr, "StartSync", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStrixMovementSynchronizer_StartSync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStrixMovementSynchronizer_StartSync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStrixMovementSynchronizer_StartSync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStrixMovementSynchronizer_StartSync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStrixMovementSynchronizer_NoRegister()
	{
		return UStrixMovementSynchronizer::StaticClass();
	}
	struct Z_Construct_UClass_UStrixMovementSynchronizer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NearDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NearDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Acceleration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Acceleration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damping_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SyncPeriodMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SyncPeriodMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SyncPeriodMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SyncPeriodMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReachableDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReachableDistance;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MovementSyncType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementSyncType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MovementSyncType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SendRPCSpawn_MetaData[];
#endif
		static void NewProp_SendRPCSpawn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SendRPCSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SyncJump_MetaData[];
#endif
		static void NewProp_SyncJump_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SyncJump;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SyncXVelocity_MetaData[];
#endif
		static void NewProp_SyncXVelocity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SyncXVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SyncYVelocity_MetaData[];
#endif
		static void NewProp_SyncYVelocity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SyncYVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SyncZVelocity_MetaData[];
#endif
		static void NewProp_SyncZVelocity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SyncZVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpolateRotation_MetaData[];
#endif
		static void NewProp_InterpolateRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InterpolateRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStrixMovementSynchronizer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_StrixSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStrixMovementSynchronizer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStrixMovementSynchronizer_SendJumpRpcIfNecessary, "SendJumpRpcIfNecessary" }, // 274011796
		{ &Z_Construct_UFunction_UStrixMovementSynchronizer_SetAcceleration, "SetAcceleration" }, // 1336270925
		{ &Z_Construct_UFunction_UStrixMovementSynchronizer_SetDamping, "SetDamping" }, // 2510075824
		{ &Z_Construct_UFunction_UStrixMovementSynchronizer_SetInterpolateRotation, "SetInterpolateRotation" }, // 3127202658
		{ &Z_Construct_UFunction_UStrixMovementSynchronizer_SetMaxSpeed, "SetMaxSpeed" }, // 3112085338
		{ &Z_Construct_UFunction_UStrixMovementSynchronizer_SetNearDistance, "SetNearDistance" }, // 1682541460
		{ &Z_Construct_UFunction_UStrixMovementSynchronizer_SetReachableDistance, "SetReachableDistance" }, // 2387833582
		{ &Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncJump, "SetSyncJump" }, // 3005673567
		{ &Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncPeriodMax, "SetSyncPeriodMax" }, // 1879365891
		{ &Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncPeriodMin, "SetSyncPeriodMin" }, // 3960922957
		{ &Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncXVelocity, "SetSyncXVelocity" }, // 1980493241
		{ &Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncYVelocity, "SetSyncYVelocity" }, // 4003744912
		{ &Z_Construct_UFunction_UStrixMovementSynchronizer_SetSyncZVelocity, "SetSyncZVelocity" }, // 2320611265
		{ &Z_Construct_UFunction_UStrixMovementSynchronizer_StartSync, "StartSync" }, // 2630915331
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStrixMovementSynchronizer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/** Component used for synchronization of the movement of an actor.\n *  In principle has two modes of work - local and remote.\n *  Local is used for the objects owned by this game instance and will\n *  send update messages to the server. Those messages are sent\n *  in an interval between minimum/maximum property of this component\n *  (depending on the change of the position and rotation).\n *  Remote is used to process the messages received from the server\n *  and update the properties on the actor.\n *  If the actor is a pawn the movement component of this pawn will be used\n *  to interpolate the received data, making movement smooth.\n *\n *  Requires the StrixReplicatorComponent on the owner actor.\n *//// \\cond\n" },
		{ "IncludePath", "Components/StrixMovementSynchronizer.h" },
		{ "ModuleRelativePath", "Public/Components/StrixMovementSynchronizer.h" },
		{ "ToolTip", "Component used for synchronization of the movement of an actor.\nIn principle has two modes of work - local and remote.\nLocal is used for the objects owned by this game instance and will\nsend update messages to the server. Those messages are sent\nin an interval between minimum/maximum property of this component\n(depending on the change of the position and rotation).\nRemote is used to process the messages received from the server\nand update the properties on the actor.\nIf the actor is a pawn the movement component of this pawn will be used\nto interpolate the received data, making movement smooth.\n\nRequires the StrixReplicatorComponent on the owner actor.\n/// \\cond" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_NearDistance_MetaData[] = {
		{ "BlueprintSetter", "SetNearDistance" },
		{ "Category", "Strix" },
		{ "Comment", "/**\n\x09 * Minimum distance between two distinct points on the interpolation path\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/StrixMovementSynchronizer.h" },
		{ "ToolTip", "Minimum distance between two distinct points on the interpolation path" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_NearDistance = { "NearDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStrixMovementSynchronizer, NearDistance), METADATA_PARAMS(Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_NearDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_NearDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_MaxSpeed_MetaData[] = {
		{ "BlueprintSetter", "SetMaxSpeed" },
		{ "Category", "Strix" },
		{ "Comment", "/**\n\x09 * Max speed allowed by interpolation algorithm\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/StrixMovementSynchronizer.h" },
		{ "ToolTip", "Max speed allowed by interpolation algorithm" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStrixMovementSynchronizer, MaxSpeed), METADATA_PARAMS(Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_MaxSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_MaxSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_Acceleration_MetaData[] = {
		{ "BlueprintSetter", "SetAcceleration" },
		{ "Category", "Strix" },
		{ "Comment", "/**\n\x09 * Max acceleration allowed by interpolation algorithm\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/StrixMovementSynchronizer.h" },
		{ "ToolTip", "Max acceleration allowed by interpolation algorithm" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_Acceleration = { "Acceleration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStrixMovementSynchronizer, Acceleration), METADATA_PARAMS(Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_Acceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_Acceleration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_Damping_MetaData[] = {
		{ "BlueprintSetter", "SetDamping" },
		{ "Category", "Strix" },
		{ "Comment", "/**\n\x09 * Damping value applied for smoothing of movement\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/StrixMovementSynchronizer.h" },
		{ "ToolTip", "Damping value applied for smoothing of movement" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_Damping = { "Damping", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStrixMovementSynchronizer, Damping), METADATA_PARAMS(Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_Damping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_Damping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_SyncPeriodMin_MetaData[] = {
		{ "BlueprintSetter", "SetSyncPeriodMin" },
		{ "Category", "Strix" },
		{ "Comment", "/**\n\x09 * Minimum period between sync update messages (ms)\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/StrixMovementSynchronizer.h" },
		{ "ToolTip", "Minimum period between sync update messages (ms)" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_SyncPeriodMin = { "SyncPeriodMin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStrixMovementSynchronizer, SyncPeriodMin), METADATA_PARAMS(Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_SyncPeriodMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_SyncPeriodMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_SyncPeriodMax_MetaData[] = {
		{ "BlueprintSetter", "SetSyncPeriodMax" },
		{ "Category", "Strix" },
		{ "Comment", "/**\n\x09 * Maximum period before sync update messages (ms)\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/StrixMovementSynchronizer.h" },
		{ "ToolTip", "Maximum period before sync update messages (ms)" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_SyncPeriodMax = { "SyncPeriodMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStrixMovementSynchronizer, SyncPeriodMax), METADATA_PARAMS(Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_SyncPeriodMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_SyncPeriodMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_ReachableDistance_MetaData[] = {
		{ "BlueprintSetter", "SetReachableDistance" },
		{ "Category", "Strix" },
		{ "Comment", "/**\n\x09 * The maximum reachable distance from current location in one step before we teleport\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/StrixMovementSynchronizer.h" },
		{ "ToolTip", "The maximum reachable distance from current location in one step before we teleport" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_ReachableDistance = { "ReachableDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStrixMovementSynchronizer, ReachableDistance), METADATA_PARAMS(Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_ReachableDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_ReachableDistance_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_MovementSyncType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_MovementSyncType_MetaData[] = {
		{ "Category", "Strix" },
		{ "Comment", "/**\n\x09 * Type of sync: Remote procedure calls (not stored), or replica properties (stored on server)\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/StrixMovementSynchronizer.h" },
		{ "ToolTip", "Type of sync: Remote procedure calls (not stored), or replica properties (stored on server)" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_MovementSyncType = { "MovementSyncType", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStrixMovementSynchronizer, MovementSyncType), Z_Construct_UEnum_StrixSDK_EMovementSyncType, METADATA_PARAMS(Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_MovementSyncType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_MovementSyncType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_SendRPCSpawn_MetaData[] = {
		{ "Category", "Strix" },
		{ "Comment", "/**\n\x09 * Check if this component should listen to room join events\n\x09 * and send the updated position (simple 'spawn' message) when a new player joins\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/StrixMovementSynchronizer.h" },
		{ "ToolTip", "Check if this component should listen to room join events\nand send the updated position (simple 'spawn' message) when a new player joins" },
	};
#endif
	void Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_SendRPCSpawn_SetBit(void* Obj)
	{
		((UStrixMovementSynchronizer*)Obj)->SendRPCSpawn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_SendRPCSpawn = { "SendRPCSpawn", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UStrixMovementSynchronizer), &Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_SendRPCSpawn_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_SendRPCSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_SendRPCSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_SyncJump_MetaData[] = {
		{ "BlueprintSetter", "SetSyncJump" },
		{ "Category", "Strix" },
		{ "Comment", "/**\n\x09 * Whether to synchronize character jump commands\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/StrixMovementSynchronizer.h" },
		{ "ToolTip", "Whether to synchronize character jump commands" },
	};
#endif
	void Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_SyncJump_SetBit(void* Obj)
	{
		((UStrixMovementSynchronizer*)Obj)->SyncJump = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_SyncJump = { "SyncJump", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UStrixMovementSynchronizer), &Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_SyncJump_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_SyncJump_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_SyncJump_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_SyncXVelocity_MetaData[] = {
		{ "BlueprintSetter", "SetSyncXVelocity" },
		{ "Category", "Strix" },
		{ "Comment", "/**\n\x09 * Whether to synchronize velocity on the x-axis\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/StrixMovementSynchronizer.h" },
		{ "ToolTip", "Whether to synchronize velocity on the x-axis" },
	};
#endif
	void Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_SyncXVelocity_SetBit(void* Obj)
	{
		((UStrixMovementSynchronizer*)Obj)->SyncXVelocity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_SyncXVelocity = { "SyncXVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UStrixMovementSynchronizer), &Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_SyncXVelocity_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_SyncXVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_SyncXVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_SyncYVelocity_MetaData[] = {
		{ "BlueprintSetter", "SetSyncYVelocity" },
		{ "Category", "Strix" },
		{ "Comment", "/**\n\x09 * Whether to synchronize velocity on the y-axis\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/StrixMovementSynchronizer.h" },
		{ "ToolTip", "Whether to synchronize velocity on the y-axis" },
	};
#endif
	void Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_SyncYVelocity_SetBit(void* Obj)
	{
		((UStrixMovementSynchronizer*)Obj)->SyncYVelocity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_SyncYVelocity = { "SyncYVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UStrixMovementSynchronizer), &Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_SyncYVelocity_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_SyncYVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_SyncYVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_SyncZVelocity_MetaData[] = {
		{ "BlueprintSetter", "SetSyncZVelocity" },
		{ "Category", "Strix" },
		{ "Comment", "/**\n\x09 * Whether to synchronize velocity on the z-axis\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/StrixMovementSynchronizer.h" },
		{ "ToolTip", "Whether to synchronize velocity on the z-axis" },
	};
#endif
	void Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_SyncZVelocity_SetBit(void* Obj)
	{
		((UStrixMovementSynchronizer*)Obj)->SyncZVelocity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_SyncZVelocity = { "SyncZVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UStrixMovementSynchronizer), &Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_SyncZVelocity_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_SyncZVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_SyncZVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_InterpolateRotation_MetaData[] = {
		{ "BlueprintSetter", "SetInterpolateRotation" },
		{ "Category", "Strix" },
		{ "Comment", "/**\n\x09 * Whether to smoothly interpolate rotation with Slerp\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/StrixMovementSynchronizer.h" },
		{ "ToolTip", "Whether to smoothly interpolate rotation with Slerp" },
	};
#endif
	void Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_InterpolateRotation_SetBit(void* Obj)
	{
		((UStrixMovementSynchronizer*)Obj)->InterpolateRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_InterpolateRotation = { "InterpolateRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UStrixMovementSynchronizer), &Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_InterpolateRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_InterpolateRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_InterpolateRotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStrixMovementSynchronizer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_NearDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_MaxSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_Acceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_Damping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_SyncPeriodMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_SyncPeriodMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_ReachableDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_MovementSyncType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_MovementSyncType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_SendRPCSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_SyncJump,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_SyncXVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_SyncYVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_SyncZVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStrixMovementSynchronizer_Statics::NewProp_InterpolateRotation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStrixMovementSynchronizer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStrixMovementSynchronizer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStrixMovementSynchronizer_Statics::ClassParams = {
		&UStrixMovementSynchronizer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UStrixMovementSynchronizer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UStrixMovementSynchronizer_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UStrixMovementSynchronizer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStrixMovementSynchronizer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStrixMovementSynchronizer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStrixMovementSynchronizer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStrixMovementSynchronizer, 983679299);
	template<> STRIXSDK_API UClass* StaticClass<UStrixMovementSynchronizer>()
	{
		return UStrixMovementSynchronizer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStrixMovementSynchronizer(Z_Construct_UClass_UStrixMovementSynchronizer, &UStrixMovementSynchronizer::StaticClass, TEXT("/Script/StrixSDK"), TEXT("UStrixMovementSynchronizer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStrixMovementSynchronizer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
