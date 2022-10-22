// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Effekseer/Public/EffekseerSystemComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEffekseerSystemComponent() {}
// Cross Module References
	EFFEKSEER_API UClass* Z_Construct_UClass_UEffekseerSystemComponent_NoRegister();
	EFFEKSEER_API UClass* Z_Construct_UClass_UEffekseerSystemComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_Effekseer();
	EFFEKSEER_API UScriptStruct* Z_Construct_UScriptStruct_FEffekseerHandle();
	EFFEKSEER_API UClass* Z_Construct_UClass_UEffekseerEffect_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	EFFEKSEER_API UEnum* Z_Construct_UEnum_Effekseer_EEffekseerColorSpaceType();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceConstant_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	EFFEKSEER_API UClass* Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEffekseerSystemComponent::execStopNetwork)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopNetwork();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEffekseerSystemComponent::execStartNetwork)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartNetwork();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEffekseerSystemComponent::execSetEffectDynamicInput)
	{
		P_GET_STRUCT(FEffekseerHandle,Z_Param_handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEffectDynamicInput(Z_Param_handle,Z_Param_index,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEffekseerSystemComponent::execSetEffectAllColor)
	{
		P_GET_STRUCT(FEffekseerHandle,Z_Param_handle);
		P_GET_STRUCT(FColor,Z_Param_color);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEffectAllColor(Z_Param_handle,Z_Param_color);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEffekseerSystemComponent::execSetEffectSpeed)
	{
		P_GET_STRUCT(FEffekseerHandle,Z_Param_handle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_speed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEffectSpeed(Z_Param_handle,Z_Param_speed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEffekseerSystemComponent::execStopRoot)
	{
		P_GET_STRUCT(FEffekseerHandle,Z_Param_handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopRoot(Z_Param_handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEffekseerSystemComponent::execStop)
	{
		P_GET_STRUCT(FEffekseerHandle,Z_Param_handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Stop(Z_Param_handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEffekseerSystemComponent::execSendTrigger)
	{
		P_GET_STRUCT(FEffekseerHandle,Z_Param_handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendTrigger(Z_Param_handle,Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEffekseerSystemComponent::execExists)
	{
		P_GET_STRUCT(FEffekseerHandle,Z_Param_handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Exists(Z_Param_handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEffekseerSystemComponent::execSetEffectScaling)
	{
		P_GET_STRUCT(FEffekseerHandle,Z_Param_handle);
		P_GET_STRUCT(FVector,Z_Param_scaling);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEffectScaling(Z_Param_handle,Z_Param_scaling);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEffekseerSystemComponent::execSetEffectRotation)
	{
		P_GET_STRUCT(FEffekseerHandle,Z_Param_handle);
		P_GET_STRUCT(FQuat,Z_Param_rotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEffectRotation(Z_Param_handle,Z_Param_rotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEffekseerSystemComponent::execSetEffectPosition)
	{
		P_GET_STRUCT(FEffekseerHandle,Z_Param_handle);
		P_GET_STRUCT(FVector,Z_Param_position);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEffectPosition(Z_Param_handle,Z_Param_position);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEffekseerSystemComponent::execPlay)
	{
		P_GET_OBJECT(UEffekseerEffect,Z_Param_effect);
		P_GET_STRUCT(FVector,Z_Param_position);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEffekseerHandle*)Z_Param__Result=P_THIS->Play(Z_Param_effect,Z_Param_position);
		P_NATIVE_END;
	}
	void UEffekseerSystemComponent::StaticRegisterNativesUEffekseerSystemComponent()
	{
		UClass* Class = UEffekseerSystemComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Exists", &UEffekseerSystemComponent::execExists },
			{ "Play", &UEffekseerSystemComponent::execPlay },
			{ "SendTrigger", &UEffekseerSystemComponent::execSendTrigger },
			{ "SetEffectAllColor", &UEffekseerSystemComponent::execSetEffectAllColor },
			{ "SetEffectDynamicInput", &UEffekseerSystemComponent::execSetEffectDynamicInput },
			{ "SetEffectPosition", &UEffekseerSystemComponent::execSetEffectPosition },
			{ "SetEffectRotation", &UEffekseerSystemComponent::execSetEffectRotation },
			{ "SetEffectScaling", &UEffekseerSystemComponent::execSetEffectScaling },
			{ "SetEffectSpeed", &UEffekseerSystemComponent::execSetEffectSpeed },
			{ "StartNetwork", &UEffekseerSystemComponent::execStartNetwork },
			{ "Stop", &UEffekseerSystemComponent::execStop },
			{ "StopNetwork", &UEffekseerSystemComponent::execStopNetwork },
			{ "StopRoot", &UEffekseerSystemComponent::execStopRoot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEffekseerSystemComponent_Exists_Statics
	{
		struct EffekseerSystemComponent_eventExists_Parms
		{
			FEffekseerHandle handle;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEffekseerSystemComponent_Exists_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EffekseerSystemComponent_eventExists_Parms, handle), Z_Construct_UScriptStruct_FEffekseerHandle, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEffekseerSystemComponent_Exists_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EffekseerSystemComponent_eventExists_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEffekseerSystemComponent_Exists_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EffekseerSystemComponent_eventExists_Parms), &Z_Construct_UFunction_UEffekseerSystemComponent_Exists_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEffekseerSystemComponent_Exists_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEffekseerSystemComponent_Exists_Statics::NewProp_handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEffekseerSystemComponent_Exists_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEffekseerSystemComponent_Exists_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEffekseerSystemComponent_Exists_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEffekseerSystemComponent, nullptr, "Exists", nullptr, nullptr, sizeof(EffekseerSystemComponent_eventExists_Parms), Z_Construct_UFunction_UEffekseerSystemComponent_Exists_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEffekseerSystemComponent_Exists_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEffekseerSystemComponent_Exists_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEffekseerSystemComponent_Exists_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEffekseerSystemComponent_Exists()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEffekseerSystemComponent_Exists_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEffekseerSystemComponent_Play_Statics
	{
		struct EffekseerSystemComponent_eventPlay_Parms
		{
			UEffekseerEffect* effect;
			FVector position;
			FEffekseerHandle ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_effect;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_position;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEffekseerSystemComponent_Play_Statics::NewProp_effect = { "effect", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EffekseerSystemComponent_eventPlay_Parms, effect), Z_Construct_UClass_UEffekseerEffect_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEffekseerSystemComponent_Play_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EffekseerSystemComponent_eventPlay_Parms, position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEffekseerSystemComponent_Play_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EffekseerSystemComponent_eventPlay_Parms, ReturnValue), Z_Construct_UScriptStruct_FEffekseerHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEffekseerSystemComponent_Play_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEffekseerSystemComponent_Play_Statics::NewProp_effect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEffekseerSystemComponent_Play_Statics::NewProp_position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEffekseerSystemComponent_Play_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEffekseerSystemComponent_Play_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEffekseerSystemComponent_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEffekseerSystemComponent, nullptr, "Play", nullptr, nullptr, sizeof(EffekseerSystemComponent_eventPlay_Parms), Z_Construct_UFunction_UEffekseerSystemComponent_Play_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEffekseerSystemComponent_Play_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEffekseerSystemComponent_Play_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEffekseerSystemComponent_Play_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEffekseerSystemComponent_Play()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEffekseerSystemComponent_Play_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEffekseerSystemComponent_SendTrigger_Statics
	{
		struct EffekseerSystemComponent_eventSendTrigger_Parms
		{
			FEffekseerHandle handle;
			int32 index;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEffekseerSystemComponent_SendTrigger_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EffekseerSystemComponent_eventSendTrigger_Parms, handle), Z_Construct_UScriptStruct_FEffekseerHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UEffekseerSystemComponent_SendTrigger_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EffekseerSystemComponent_eventSendTrigger_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEffekseerSystemComponent_SendTrigger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEffekseerSystemComponent_SendTrigger_Statics::NewProp_handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEffekseerSystemComponent_SendTrigger_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEffekseerSystemComponent_SendTrigger_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEffekseerSystemComponent_SendTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEffekseerSystemComponent, nullptr, "SendTrigger", nullptr, nullptr, sizeof(EffekseerSystemComponent_eventSendTrigger_Parms), Z_Construct_UFunction_UEffekseerSystemComponent_SendTrigger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEffekseerSystemComponent_SendTrigger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEffekseerSystemComponent_SendTrigger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEffekseerSystemComponent_SendTrigger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEffekseerSystemComponent_SendTrigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEffekseerSystemComponent_SendTrigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectAllColor_Statics
	{
		struct EffekseerSystemComponent_eventSetEffectAllColor_Parms
		{
			FEffekseerHandle handle;
			FColor color;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_color;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectAllColor_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EffekseerSystemComponent_eventSetEffectAllColor_Parms, handle), Z_Construct_UScriptStruct_FEffekseerHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectAllColor_Statics::NewProp_color = { "color", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EffekseerSystemComponent_eventSetEffectAllColor_Parms, color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectAllColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectAllColor_Statics::NewProp_handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectAllColor_Statics::NewProp_color,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectAllColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectAllColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEffekseerSystemComponent, nullptr, "SetEffectAllColor", nullptr, nullptr, sizeof(EffekseerSystemComponent_eventSetEffectAllColor_Parms), Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectAllColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectAllColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectAllColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectAllColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectAllColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectAllColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectDynamicInput_Statics
	{
		struct EffekseerSystemComponent_eventSetEffectDynamicInput_Parms
		{
			FEffekseerHandle handle;
			int32 index;
			float value;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectDynamicInput_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EffekseerSystemComponent_eventSetEffectDynamicInput_Parms, handle), Z_Construct_UScriptStruct_FEffekseerHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectDynamicInput_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EffekseerSystemComponent_eventSetEffectDynamicInput_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectDynamicInput_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EffekseerSystemComponent_eventSetEffectDynamicInput_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectDynamicInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectDynamicInput_Statics::NewProp_handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectDynamicInput_Statics::NewProp_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectDynamicInput_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectDynamicInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectDynamicInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEffekseerSystemComponent, nullptr, "SetEffectDynamicInput", nullptr, nullptr, sizeof(EffekseerSystemComponent_eventSetEffectDynamicInput_Parms), Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectDynamicInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectDynamicInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectDynamicInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectDynamicInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectDynamicInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectDynamicInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectPosition_Statics
	{
		struct EffekseerSystemComponent_eventSetEffectPosition_Parms
		{
			FEffekseerHandle handle;
			FVector position;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_position;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectPosition_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EffekseerSystemComponent_eventSetEffectPosition_Parms, handle), Z_Construct_UScriptStruct_FEffekseerHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectPosition_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EffekseerSystemComponent_eventSetEffectPosition_Parms, position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectPosition_Statics::NewProp_handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectPosition_Statics::NewProp_position,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEffekseerSystemComponent, nullptr, "SetEffectPosition", nullptr, nullptr, sizeof(EffekseerSystemComponent_eventSetEffectPosition_Parms), Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectRotation_Statics
	{
		struct EffekseerSystemComponent_eventSetEffectRotation_Parms
		{
			FEffekseerHandle handle;
			FQuat rotation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectRotation_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EffekseerSystemComponent_eventSetEffectRotation_Parms, handle), Z_Construct_UScriptStruct_FEffekseerHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectRotation_Statics::NewProp_rotation = { "rotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EffekseerSystemComponent_eventSetEffectRotation_Parms, rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectRotation_Statics::NewProp_handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectRotation_Statics::NewProp_rotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEffekseerSystemComponent, nullptr, "SetEffectRotation", nullptr, nullptr, sizeof(EffekseerSystemComponent_eventSetEffectRotation_Parms), Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectScaling_Statics
	{
		struct EffekseerSystemComponent_eventSetEffectScaling_Parms
		{
			FEffekseerHandle handle;
			FVector scaling;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_scaling;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectScaling_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EffekseerSystemComponent_eventSetEffectScaling_Parms, handle), Z_Construct_UScriptStruct_FEffekseerHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectScaling_Statics::NewProp_scaling = { "scaling", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EffekseerSystemComponent_eventSetEffectScaling_Parms, scaling), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectScaling_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectScaling_Statics::NewProp_handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectScaling_Statics::NewProp_scaling,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectScaling_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectScaling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEffekseerSystemComponent, nullptr, "SetEffectScaling", nullptr, nullptr, sizeof(EffekseerSystemComponent_eventSetEffectScaling_Parms), Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectScaling_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectScaling_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectScaling_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectScaling_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectScaling()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectScaling_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectSpeed_Statics
	{
		struct EffekseerSystemComponent_eventSetEffectSpeed_Parms
		{
			FEffekseerHandle handle;
			float speed;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_speed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectSpeed_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EffekseerSystemComponent_eventSetEffectSpeed_Parms, handle), Z_Construct_UScriptStruct_FEffekseerHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectSpeed_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EffekseerSystemComponent_eventSetEffectSpeed_Parms, speed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectSpeed_Statics::NewProp_handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectSpeed_Statics::NewProp_speed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEffekseerSystemComponent, nullptr, "SetEffectSpeed", nullptr, nullptr, sizeof(EffekseerSystemComponent_eventSetEffectSpeed_Parms), Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEffekseerSystemComponent_StartNetwork_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEffekseerSystemComponent_StartNetwork_Statics::Function_MetaDataParams[] = {
		{ "Category", "Network" },
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEffekseerSystemComponent_StartNetwork_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEffekseerSystemComponent, nullptr, "StartNetwork", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEffekseerSystemComponent_StartNetwork_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEffekseerSystemComponent_StartNetwork_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEffekseerSystemComponent_StartNetwork()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEffekseerSystemComponent_StartNetwork_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEffekseerSystemComponent_Stop_Statics
	{
		struct EffekseerSystemComponent_eventStop_Parms
		{
			FEffekseerHandle handle;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEffekseerSystemComponent_Stop_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EffekseerSystemComponent_eventStop_Parms, handle), Z_Construct_UScriptStruct_FEffekseerHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEffekseerSystemComponent_Stop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEffekseerSystemComponent_Stop_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEffekseerSystemComponent_Stop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEffekseerSystemComponent_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEffekseerSystemComponent, nullptr, "Stop", nullptr, nullptr, sizeof(EffekseerSystemComponent_eventStop_Parms), Z_Construct_UFunction_UEffekseerSystemComponent_Stop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEffekseerSystemComponent_Stop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEffekseerSystemComponent_Stop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEffekseerSystemComponent_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEffekseerSystemComponent_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEffekseerSystemComponent_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEffekseerSystemComponent_StopNetwork_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEffekseerSystemComponent_StopNetwork_Statics::Function_MetaDataParams[] = {
		{ "Category", "Network" },
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEffekseerSystemComponent_StopNetwork_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEffekseerSystemComponent, nullptr, "StopNetwork", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEffekseerSystemComponent_StopNetwork_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEffekseerSystemComponent_StopNetwork_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEffekseerSystemComponent_StopNetwork()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEffekseerSystemComponent_StopNetwork_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEffekseerSystemComponent_StopRoot_Statics
	{
		struct EffekseerSystemComponent_eventStopRoot_Parms
		{
			FEffekseerHandle handle;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEffekseerSystemComponent_StopRoot_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EffekseerSystemComponent_eventStopRoot_Parms, handle), Z_Construct_UScriptStruct_FEffekseerHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEffekseerSystemComponent_StopRoot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEffekseerSystemComponent_StopRoot_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEffekseerSystemComponent_StopRoot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEffekseerSystemComponent_StopRoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEffekseerSystemComponent, nullptr, "StopRoot", nullptr, nullptr, sizeof(EffekseerSystemComponent_eventStopRoot_Parms), Z_Construct_UFunction_UEffekseerSystemComponent_StopRoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEffekseerSystemComponent_StopRoot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEffekseerSystemComponent_StopRoot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEffekseerSystemComponent_StopRoot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEffekseerSystemComponent_StopRoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEffekseerSystemComponent_StopRoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEffekseerSystemComponent_NoRegister()
	{
		return UEffekseerSystemComponent::StaticClass();
	}
	struct Z_Construct_UClass_UEffekseerSystemComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSprite_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxSprite;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ColorSpace_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorSpace_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ColorSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThreadCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ThreadCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpaqueMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OpaqueMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslucentMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TranslucentMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditiveMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AdditiveMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubtractiveMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubtractiveMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModulateMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ModulateMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightingMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LightingMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistortionTranslucentMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DistortionTranslucentMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistortionAdditiveMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DistortionAdditiveMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Opaque_DD_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Opaque_DD_Material;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Translucent_DD_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Translucent_DD_Material;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Additive_DD_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Additive_DD_Material;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Subtractive_DD_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Subtractive_DD_Material;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Modulate_DD_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Modulate_DD_Material;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistortionTranslucent_DD_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DistortionTranslucent_DD_Material;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistortionAdditive_DD_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DistortionAdditive_DD_Material;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Materials_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Materials_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Materials;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OpaqueDynamicMaterials_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OpaqueDynamicMaterials_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpaqueDynamicMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_OpaqueDynamicMaterials;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TranslucentDynamicMaterials_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TranslucentDynamicMaterials_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslucentDynamicMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_TranslucentDynamicMaterials;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AdditiveDynamicMaterials_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AdditiveDynamicMaterials_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditiveDynamicMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_AdditiveDynamicMaterials;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubtractiveDynamicMaterials_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubtractiveDynamicMaterials_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubtractiveDynamicMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_SubtractiveDynamicMaterials;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ModulateDynamicMaterials_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ModulateDynamicMaterials_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModulateDynamicMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ModulateDynamicMaterials;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LightingDynamicMaterials_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LightingDynamicMaterials_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightingDynamicMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_LightingDynamicMaterials;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DistortionTranslucentDynamicMaterials_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DistortionTranslucentDynamicMaterials_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistortionTranslucentDynamicMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_DistortionTranslucentDynamicMaterials;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DistortionAdditiveDynamicMaterials_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DistortionAdditiveDynamicMaterials_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistortionAdditiveDynamicMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_DistortionAdditiveDynamicMaterials;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetworkPort_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NetworkPort;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoStartNetworkAutomatically_MetaData[];
#endif
		static void NewProp_DoStartNetworkAutomatically_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DoStartNetworkAutomatically;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEffekseerSystemComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Effekseer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEffekseerSystemComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEffekseerSystemComponent_Exists, "Exists" }, // 773193386
		{ &Z_Construct_UFunction_UEffekseerSystemComponent_Play, "Play" }, // 943488444
		{ &Z_Construct_UFunction_UEffekseerSystemComponent_SendTrigger, "SendTrigger" }, // 934881015
		{ &Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectAllColor, "SetEffectAllColor" }, // 2471493387
		{ &Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectDynamicInput, "SetEffectDynamicInput" }, // 1749193198
		{ &Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectPosition, "SetEffectPosition" }, // 15606170
		{ &Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectRotation, "SetEffectRotation" }, // 193008705
		{ &Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectScaling, "SetEffectScaling" }, // 3825385313
		{ &Z_Construct_UFunction_UEffekseerSystemComponent_SetEffectSpeed, "SetEffectSpeed" }, // 1950869860
		{ &Z_Construct_UFunction_UEffekseerSystemComponent_StartNetwork, "StartNetwork" }, // 1539181524
		{ &Z_Construct_UFunction_UEffekseerSystemComponent_Stop, "Stop" }, // 3935172477
		{ &Z_Construct_UFunction_UEffekseerSystemComponent_StopNetwork, "StopNetwork" }, // 2788899665
		{ &Z_Construct_UFunction_UEffekseerSystemComponent_StopRoot, "StopRoot" }, // 2030190439
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerSystemComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Effekseer" },
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "EffekseerSystemComponent.h" },
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_MaxSprite_MetaData[] = {
		{ "Category", "Property" },
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_MaxSprite = { "MaxSprite", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerSystemComponent, MaxSprite), METADATA_PARAMS(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_MaxSprite_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_MaxSprite_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_ColorSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_ColorSpace_MetaData[] = {
		{ "Category", "Property" },
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_ColorSpace = { "ColorSpace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerSystemComponent, ColorSpace), Z_Construct_UEnum_Effekseer_EEffekseerColorSpaceType, METADATA_PARAMS(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_ColorSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_ColorSpace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_ThreadCount_MetaData[] = {
		{ "Category", "Property" },
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_ThreadCount = { "ThreadCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerSystemComponent, ThreadCount), METADATA_PARAMS(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_ThreadCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_ThreadCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_OpaqueMaterial_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_OpaqueMaterial = { "OpaqueMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerSystemComponent, OpaqueMaterial), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_OpaqueMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_OpaqueMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_TranslucentMaterial_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_TranslucentMaterial = { "TranslucentMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerSystemComponent, TranslucentMaterial), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_TranslucentMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_TranslucentMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_AdditiveMaterial_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_AdditiveMaterial = { "AdditiveMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerSystemComponent, AdditiveMaterial), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_AdditiveMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_AdditiveMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_SubtractiveMaterial_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_SubtractiveMaterial = { "SubtractiveMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerSystemComponent, SubtractiveMaterial), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_SubtractiveMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_SubtractiveMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_ModulateMaterial_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_ModulateMaterial = { "ModulateMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerSystemComponent, ModulateMaterial), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_ModulateMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_ModulateMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_LightingMaterial_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_LightingMaterial = { "LightingMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerSystemComponent, LightingMaterial), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_LightingMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_LightingMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DistortionTranslucentMaterial_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DistortionTranslucentMaterial = { "DistortionTranslucentMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerSystemComponent, DistortionTranslucentMaterial), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DistortionTranslucentMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DistortionTranslucentMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DistortionAdditiveMaterial_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DistortionAdditiveMaterial = { "DistortionAdditiveMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerSystemComponent, DistortionAdditiveMaterial), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DistortionAdditiveMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DistortionAdditiveMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_Opaque_DD_Material_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_Opaque_DD_Material = { "Opaque_DD_Material", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerSystemComponent, Opaque_DD_Material), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_Opaque_DD_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_Opaque_DD_Material_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_Translucent_DD_Material_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_Translucent_DD_Material = { "Translucent_DD_Material", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerSystemComponent, Translucent_DD_Material), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_Translucent_DD_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_Translucent_DD_Material_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_Additive_DD_Material_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_Additive_DD_Material = { "Additive_DD_Material", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerSystemComponent, Additive_DD_Material), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_Additive_DD_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_Additive_DD_Material_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_Subtractive_DD_Material_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_Subtractive_DD_Material = { "Subtractive_DD_Material", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerSystemComponent, Subtractive_DD_Material), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_Subtractive_DD_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_Subtractive_DD_Material_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_Modulate_DD_Material_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_Modulate_DD_Material = { "Modulate_DD_Material", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerSystemComponent, Modulate_DD_Material), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_Modulate_DD_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_Modulate_DD_Material_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DistortionTranslucent_DD_Material_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DistortionTranslucent_DD_Material = { "DistortionTranslucent_DD_Material", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerSystemComponent, DistortionTranslucent_DD_Material), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DistortionTranslucent_DD_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DistortionTranslucent_DD_Material_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DistortionAdditive_DD_Material_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DistortionAdditive_DD_Material = { "DistortionAdditive_DD_Material", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerSystemComponent, DistortionAdditive_DD_Material), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DistortionAdditive_DD_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DistortionAdditive_DD_Material_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_Materials_ValueProp = { "Materials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_Materials_Key_KeyProp = { "Materials_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UEffekseerEffectMaterialParameterHolder_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_Materials_MetaData[] = {
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerSystemComponent, Materials), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_Materials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_Materials_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_OpaqueDynamicMaterials_ValueProp = { "OpaqueDynamicMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_OpaqueDynamicMaterials_Key_KeyProp = { "OpaqueDynamicMaterials_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_OpaqueDynamicMaterials_MetaData[] = {
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_OpaqueDynamicMaterials = { "OpaqueDynamicMaterials", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerSystemComponent, OpaqueDynamicMaterials), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_OpaqueDynamicMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_OpaqueDynamicMaterials_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_TranslucentDynamicMaterials_ValueProp = { "TranslucentDynamicMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_TranslucentDynamicMaterials_Key_KeyProp = { "TranslucentDynamicMaterials_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_TranslucentDynamicMaterials_MetaData[] = {
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_TranslucentDynamicMaterials = { "TranslucentDynamicMaterials", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerSystemComponent, TranslucentDynamicMaterials), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_TranslucentDynamicMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_TranslucentDynamicMaterials_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_AdditiveDynamicMaterials_ValueProp = { "AdditiveDynamicMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_AdditiveDynamicMaterials_Key_KeyProp = { "AdditiveDynamicMaterials_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_AdditiveDynamicMaterials_MetaData[] = {
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_AdditiveDynamicMaterials = { "AdditiveDynamicMaterials", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerSystemComponent, AdditiveDynamicMaterials), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_AdditiveDynamicMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_AdditiveDynamicMaterials_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_SubtractiveDynamicMaterials_ValueProp = { "SubtractiveDynamicMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_SubtractiveDynamicMaterials_Key_KeyProp = { "SubtractiveDynamicMaterials_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_SubtractiveDynamicMaterials_MetaData[] = {
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_SubtractiveDynamicMaterials = { "SubtractiveDynamicMaterials", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerSystemComponent, SubtractiveDynamicMaterials), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_SubtractiveDynamicMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_SubtractiveDynamicMaterials_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_ModulateDynamicMaterials_ValueProp = { "ModulateDynamicMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_ModulateDynamicMaterials_Key_KeyProp = { "ModulateDynamicMaterials_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_ModulateDynamicMaterials_MetaData[] = {
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_ModulateDynamicMaterials = { "ModulateDynamicMaterials", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerSystemComponent, ModulateDynamicMaterials), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_ModulateDynamicMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_ModulateDynamicMaterials_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_LightingDynamicMaterials_ValueProp = { "LightingDynamicMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_LightingDynamicMaterials_Key_KeyProp = { "LightingDynamicMaterials_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_LightingDynamicMaterials_MetaData[] = {
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_LightingDynamicMaterials = { "LightingDynamicMaterials", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerSystemComponent, LightingDynamicMaterials), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_LightingDynamicMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_LightingDynamicMaterials_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DistortionTranslucentDynamicMaterials_ValueProp = { "DistortionTranslucentDynamicMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DistortionTranslucentDynamicMaterials_Key_KeyProp = { "DistortionTranslucentDynamicMaterials_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DistortionTranslucentDynamicMaterials_MetaData[] = {
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DistortionTranslucentDynamicMaterials = { "DistortionTranslucentDynamicMaterials", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerSystemComponent, DistortionTranslucentDynamicMaterials), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DistortionTranslucentDynamicMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DistortionTranslucentDynamicMaterials_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DistortionAdditiveDynamicMaterials_ValueProp = { "DistortionAdditiveDynamicMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DistortionAdditiveDynamicMaterials_Key_KeyProp = { "DistortionAdditiveDynamicMaterials_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DistortionAdditiveDynamicMaterials_MetaData[] = {
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DistortionAdditiveDynamicMaterials = { "DistortionAdditiveDynamicMaterials", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerSystemComponent, DistortionAdditiveDynamicMaterials), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DistortionAdditiveDynamicMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DistortionAdditiveDynamicMaterials_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_NetworkPort_MetaData[] = {
		{ "Category", "Network" },
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_NetworkPort = { "NetworkPort", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerSystemComponent, NetworkPort), METADATA_PARAMS(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_NetworkPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_NetworkPort_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DoStartNetworkAutomatically_MetaData[] = {
		{ "Category", "Network" },
		{ "ModuleRelativePath", "Public/EffekseerSystemComponent.h" },
	};
#endif
	void Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DoStartNetworkAutomatically_SetBit(void* Obj)
	{
		((UEffekseerSystemComponent*)Obj)->DoStartNetworkAutomatically = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DoStartNetworkAutomatically = { "DoStartNetworkAutomatically", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEffekseerSystemComponent), &Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DoStartNetworkAutomatically_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DoStartNetworkAutomatically_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DoStartNetworkAutomatically_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEffekseerSystemComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_MaxSprite,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_ColorSpace_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_ColorSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_ThreadCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_OpaqueMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_TranslucentMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_AdditiveMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_SubtractiveMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_ModulateMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_LightingMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DistortionTranslucentMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DistortionAdditiveMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_Opaque_DD_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_Translucent_DD_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_Additive_DD_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_Subtractive_DD_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_Modulate_DD_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DistortionTranslucent_DD_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DistortionAdditive_DD_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_Materials_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_Materials_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_Materials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_OpaqueDynamicMaterials_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_OpaqueDynamicMaterials_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_OpaqueDynamicMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_TranslucentDynamicMaterials_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_TranslucentDynamicMaterials_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_TranslucentDynamicMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_AdditiveDynamicMaterials_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_AdditiveDynamicMaterials_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_AdditiveDynamicMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_SubtractiveDynamicMaterials_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_SubtractiveDynamicMaterials_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_SubtractiveDynamicMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_ModulateDynamicMaterials_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_ModulateDynamicMaterials_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_ModulateDynamicMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_LightingDynamicMaterials_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_LightingDynamicMaterials_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_LightingDynamicMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DistortionTranslucentDynamicMaterials_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DistortionTranslucentDynamicMaterials_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DistortionTranslucentDynamicMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DistortionAdditiveDynamicMaterials_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DistortionAdditiveDynamicMaterials_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DistortionAdditiveDynamicMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_NetworkPort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerSystemComponent_Statics::NewProp_DoStartNetworkAutomatically,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEffekseerSystemComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEffekseerSystemComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEffekseerSystemComponent_Statics::ClassParams = {
		&UEffekseerSystemComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEffekseerSystemComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerSystemComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UEffekseerSystemComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerSystemComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEffekseerSystemComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEffekseerSystemComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEffekseerSystemComponent, 2615294415);
	template<> EFFEKSEER_API UClass* StaticClass<UEffekseerSystemComponent>()
	{
		return UEffekseerSystemComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEffekseerSystemComponent(Z_Construct_UClass_UEffekseerSystemComponent, &UEffekseerSystemComponent::StaticClass, TEXT("/Script/Effekseer"), TEXT("UEffekseerSystemComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEffekseerSystemComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
