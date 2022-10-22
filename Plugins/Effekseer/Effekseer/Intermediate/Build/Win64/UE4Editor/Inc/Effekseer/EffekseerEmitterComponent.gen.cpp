// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Effekseer/Public/EffekseerEmitterComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEffekseerEmitterComponent() {}
// Cross Module References
	EFFEKSEER_API UClass* Z_Construct_UClass_UEffekseerEmitterComponent_NoRegister();
	EFFEKSEER_API UClass* Z_Construct_UClass_UEffekseerEmitterComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_Effekseer();
	EFFEKSEER_API UScriptStruct* Z_Construct_UScriptStruct_FEffekseerHandle();
	EFFEKSEER_API UClass* Z_Construct_UClass_UEffekseerEffect_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	EFFEKSEER_API UClass* Z_Construct_UClass_UEffekseerSystemComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEffekseerEmitterComponent::execPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEffekseerHandle*)Z_Param__Result=P_THIS->Play();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEffekseerEmitterComponent::execSendTrigger)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendTrigger(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEffekseerEmitterComponent::execExists)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Exists();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEffekseerEmitterComponent::execStopRoot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopRoot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEffekseerEmitterComponent::execStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Stop();
		P_NATIVE_END;
	}
#if WITH_EDITOR
	DEFINE_FUNCTION(UEffekseerEmitterComponent::execPreview)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Preview();
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void UEffekseerEmitterComponent::StaticRegisterNativesUEffekseerEmitterComponent()
	{
		UClass* Class = UEffekseerEmitterComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Exists", &UEffekseerEmitterComponent::execExists },
			{ "Play", &UEffekseerEmitterComponent::execPlay },
#if WITH_EDITOR
			{ "Preview", &UEffekseerEmitterComponent::execPreview },
#endif // WITH_EDITOR
			{ "SendTrigger", &UEffekseerEmitterComponent::execSendTrigger },
			{ "Stop", &UEffekseerEmitterComponent::execStop },
			{ "StopRoot", &UEffekseerEmitterComponent::execStopRoot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEffekseerEmitterComponent_Exists_Statics
	{
		struct EffekseerEmitterComponent_eventExists_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEffekseerEmitterComponent_Exists_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EffekseerEmitterComponent_eventExists_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEffekseerEmitterComponent_Exists_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EffekseerEmitterComponent_eventExists_Parms), &Z_Construct_UFunction_UEffekseerEmitterComponent_Exists_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEffekseerEmitterComponent_Exists_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEffekseerEmitterComponent_Exists_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEffekseerEmitterComponent_Exists_Statics::Function_MetaDataParams[] = {
		{ "Category", "Effect" },
		{ "ModuleRelativePath", "Public/EffekseerEmitterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEffekseerEmitterComponent_Exists_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEffekseerEmitterComponent, nullptr, "Exists", nullptr, nullptr, sizeof(EffekseerEmitterComponent_eventExists_Parms), Z_Construct_UFunction_UEffekseerEmitterComponent_Exists_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEffekseerEmitterComponent_Exists_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEffekseerEmitterComponent_Exists_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEffekseerEmitterComponent_Exists_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEffekseerEmitterComponent_Exists()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEffekseerEmitterComponent_Exists_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEffekseerEmitterComponent_Play_Statics
	{
		struct EffekseerEmitterComponent_eventPlay_Parms
		{
			FEffekseerHandle ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEffekseerEmitterComponent_Play_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EffekseerEmitterComponent_eventPlay_Parms, ReturnValue), Z_Construct_UScriptStruct_FEffekseerHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEffekseerEmitterComponent_Play_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEffekseerEmitterComponent_Play_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEffekseerEmitterComponent_Play_Statics::Function_MetaDataParams[] = {
		{ "Category", "Deprecated" },
		{ "ModuleRelativePath", "Public/EffekseerEmitterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEffekseerEmitterComponent_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEffekseerEmitterComponent, nullptr, "Play", nullptr, nullptr, sizeof(EffekseerEmitterComponent_eventPlay_Parms), Z_Construct_UFunction_UEffekseerEmitterComponent_Play_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEffekseerEmitterComponent_Play_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEffekseerEmitterComponent_Play_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEffekseerEmitterComponent_Play_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEffekseerEmitterComponent_Play()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEffekseerEmitterComponent_Play_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UEffekseerEmitterComponent_Preview_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEffekseerEmitterComponent_Preview_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Effect" },
		{ "ModuleRelativePath", "Public/EffekseerEmitterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEffekseerEmitterComponent_Preview_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEffekseerEmitterComponent, nullptr, "Preview", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEffekseerEmitterComponent_Preview_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEffekseerEmitterComponent_Preview_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEffekseerEmitterComponent_Preview()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEffekseerEmitterComponent_Preview_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_UEffekseerEmitterComponent_SendTrigger_Statics
	{
		struct EffekseerEmitterComponent_eventSendTrigger_Parms
		{
			int32 index;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UEffekseerEmitterComponent_SendTrigger_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EffekseerEmitterComponent_eventSendTrigger_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEffekseerEmitterComponent_SendTrigger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEffekseerEmitterComponent_SendTrigger_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEffekseerEmitterComponent_SendTrigger_Statics::Function_MetaDataParams[] = {
		{ "Category", "Effect" },
		{ "ModuleRelativePath", "Public/EffekseerEmitterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEffekseerEmitterComponent_SendTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEffekseerEmitterComponent, nullptr, "SendTrigger", nullptr, nullptr, sizeof(EffekseerEmitterComponent_eventSendTrigger_Parms), Z_Construct_UFunction_UEffekseerEmitterComponent_SendTrigger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEffekseerEmitterComponent_SendTrigger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEffekseerEmitterComponent_SendTrigger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEffekseerEmitterComponent_SendTrigger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEffekseerEmitterComponent_SendTrigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEffekseerEmitterComponent_SendTrigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEffekseerEmitterComponent_Stop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEffekseerEmitterComponent_Stop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Effect" },
		{ "ModuleRelativePath", "Public/EffekseerEmitterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEffekseerEmitterComponent_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEffekseerEmitterComponent, nullptr, "Stop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEffekseerEmitterComponent_Stop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEffekseerEmitterComponent_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEffekseerEmitterComponent_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEffekseerEmitterComponent_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEffekseerEmitterComponent_StopRoot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEffekseerEmitterComponent_StopRoot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Effect" },
		{ "ModuleRelativePath", "Public/EffekseerEmitterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEffekseerEmitterComponent_StopRoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEffekseerEmitterComponent, nullptr, "StopRoot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEffekseerEmitterComponent_StopRoot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEffekseerEmitterComponent_StopRoot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEffekseerEmitterComponent_StopRoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEffekseerEmitterComponent_StopRoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEffekseerEmitterComponent_NoRegister()
	{
		return UEffekseerEmitterComponent::StaticClass();
	}
	struct Z_Construct_UClass_UEffekseerEmitterComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoDestroy_MetaData[];
#endif
		static void NewProp_bAutoDestroy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Effect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Effect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_System_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_System;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsLooping_MetaData[];
#endif
		static void NewProp_IsLooping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsLooping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AllColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DynamicInput_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DynamicInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_system__MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_system_;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEffekseerEmitterComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Effekseer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEffekseerEmitterComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEffekseerEmitterComponent_Exists, "Exists" }, // 95790774
		{ &Z_Construct_UFunction_UEffekseerEmitterComponent_Play, "Play" }, // 652181459
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UEffekseerEmitterComponent_Preview, "Preview" }, // 1001968520
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_UEffekseerEmitterComponent_SendTrigger, "SendTrigger" }, // 3290852106
		{ &Z_Construct_UFunction_UEffekseerEmitterComponent_Stop, "Stop" }, // 2770120916
		{ &Z_Construct_UFunction_UEffekseerEmitterComponent_StopRoot, "StopRoot" }, // 55250385
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerEmitterComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Effekseer" },
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "EffekseerEmitterComponent.h" },
		{ "ModuleRelativePath", "Public/EffekseerEmitterComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerEmitterComponent_Statics::NewProp_bAutoDestroy_MetaData[] = {
		{ "ModuleRelativePath", "Public/EffekseerEmitterComponent.h" },
	};
#endif
	void Z_Construct_UClass_UEffekseerEmitterComponent_Statics::NewProp_bAutoDestroy_SetBit(void* Obj)
	{
		((UEffekseerEmitterComponent*)Obj)->bAutoDestroy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEffekseerEmitterComponent_Statics::NewProp_bAutoDestroy = { "bAutoDestroy", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UEffekseerEmitterComponent), &Z_Construct_UClass_UEffekseerEmitterComponent_Statics::NewProp_bAutoDestroy_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEffekseerEmitterComponent_Statics::NewProp_bAutoDestroy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerEmitterComponent_Statics::NewProp_bAutoDestroy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerEmitterComponent_Statics::NewProp_Effect_MetaData[] = {
		{ "Category", "Effect" },
		{ "ModuleRelativePath", "Public/EffekseerEmitterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerEmitterComponent_Statics::NewProp_Effect = { "Effect", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerEmitterComponent, Effect), Z_Construct_UClass_UEffekseerEffect_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEffekseerEmitterComponent_Statics::NewProp_Effect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerEmitterComponent_Statics::NewProp_Effect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerEmitterComponent_Statics::NewProp_System_MetaData[] = {
		{ "Category", "Effect" },
		{ "ModuleRelativePath", "Public/EffekseerEmitterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerEmitterComponent_Statics::NewProp_System = { "System", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerEmitterComponent, System), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEffekseerEmitterComponent_Statics::NewProp_System_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerEmitterComponent_Statics::NewProp_System_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerEmitterComponent_Statics::NewProp_IsLooping_MetaData[] = {
		{ "Category", "Property" },
		{ "ModuleRelativePath", "Public/EffekseerEmitterComponent.h" },
	};
#endif
	void Z_Construct_UClass_UEffekseerEmitterComponent_Statics::NewProp_IsLooping_SetBit(void* Obj)
	{
		((UEffekseerEmitterComponent*)Obj)->IsLooping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEffekseerEmitterComponent_Statics::NewProp_IsLooping = { "IsLooping", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEffekseerEmitterComponent), &Z_Construct_UClass_UEffekseerEmitterComponent_Statics::NewProp_IsLooping_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEffekseerEmitterComponent_Statics::NewProp_IsLooping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerEmitterComponent_Statics::NewProp_IsLooping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerEmitterComponent_Statics::NewProp_AllColor_MetaData[] = {
		{ "Category", "Property" },
		{ "ModuleRelativePath", "Public/EffekseerEmitterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEffekseerEmitterComponent_Statics::NewProp_AllColor = { "AllColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerEmitterComponent, AllColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UEffekseerEmitterComponent_Statics::NewProp_AllColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerEmitterComponent_Statics::NewProp_AllColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerEmitterComponent_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "Property" },
		{ "ModuleRelativePath", "Public/EffekseerEmitterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEffekseerEmitterComponent_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerEmitterComponent, Speed), METADATA_PARAMS(Z_Construct_UClass_UEffekseerEmitterComponent_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerEmitterComponent_Statics::NewProp_Speed_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEffekseerEmitterComponent_Statics::NewProp_DynamicInput_Inner = { "DynamicInput", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerEmitterComponent_Statics::NewProp_DynamicInput_MetaData[] = {
		{ "Category", "Property" },
		{ "ModuleRelativePath", "Public/EffekseerEmitterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEffekseerEmitterComponent_Statics::NewProp_DynamicInput = { "DynamicInput", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerEmitterComponent, DynamicInput), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEffekseerEmitterComponent_Statics::NewProp_DynamicInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerEmitterComponent_Statics::NewProp_DynamicInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerEmitterComponent_Statics::NewProp_system__MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EffekseerEmitterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerEmitterComponent_Statics::NewProp_system_ = { "system_", nullptr, (EPropertyFlags)0x0010000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerEmitterComponent, system_), Z_Construct_UClass_UEffekseerSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEffekseerEmitterComponent_Statics::NewProp_system__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerEmitterComponent_Statics::NewProp_system__MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEffekseerEmitterComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerEmitterComponent_Statics::NewProp_bAutoDestroy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerEmitterComponent_Statics::NewProp_Effect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerEmitterComponent_Statics::NewProp_System,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerEmitterComponent_Statics::NewProp_IsLooping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerEmitterComponent_Statics::NewProp_AllColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerEmitterComponent_Statics::NewProp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerEmitterComponent_Statics::NewProp_DynamicInput_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerEmitterComponent_Statics::NewProp_DynamicInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerEmitterComponent_Statics::NewProp_system_,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEffekseerEmitterComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEffekseerEmitterComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEffekseerEmitterComponent_Statics::ClassParams = {
		&UEffekseerEmitterComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEffekseerEmitterComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerEmitterComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UEffekseerEmitterComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerEmitterComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEffekseerEmitterComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEffekseerEmitterComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEffekseerEmitterComponent, 1763490573);
	template<> EFFEKSEER_API UClass* StaticClass<UEffekseerEmitterComponent>()
	{
		return UEffekseerEmitterComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEffekseerEmitterComponent(Z_Construct_UClass_UEffekseerEmitterComponent, &UEffekseerEmitterComponent::StaticClass, TEXT("/Script/Effekseer"), TEXT("UEffekseerEmitterComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEffekseerEmitterComponent);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UEffekseerEmitterComponent)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
