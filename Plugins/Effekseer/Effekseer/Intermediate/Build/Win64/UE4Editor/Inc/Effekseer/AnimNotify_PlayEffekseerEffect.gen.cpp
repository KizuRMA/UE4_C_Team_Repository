// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Effekseer/Public/AnimNotify_PlayEffekseerEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotify_PlayEffekseerEffect() {}
// Cross Module References
	EFFEKSEER_API UClass* Z_Construct_UClass_UAnimNotify_PlayEffekseerEffect_NoRegister();
	EFFEKSEER_API UClass* Z_Construct_UClass_UAnimNotify_PlayEffekseerEffect();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_Effekseer();
	EFFEKSEER_API UClass* Z_Construct_UClass_UEffekseerEffect_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	void UAnimNotify_PlayEffekseerEffect::StaticRegisterNativesUAnimNotify_PlayEffekseerEffect()
	{
	}
	UClass* Z_Construct_UClass_UAnimNotify_PlayEffekseerEffect_NoRegister()
	{
		return UAnimNotify_PlayEffekseerEffect::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNotify_PlayEffekseerEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffekseerEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EffekseerEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocationOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attached_MetaData[];
#endif
		static void NewProp_Attached_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Attached;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SocketName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNotify_PlayEffekseerEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_Effekseer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_PlayEffekseerEffect_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n\x09@brief\x09""Animation notify for Effekseer\n\x09@note\n\x09This class is based on Cascade\n*/" },
		{ "DisplayName", "Play Effekseer Effect" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "AnimNotify_PlayEffekseerEffect.h" },
		{ "ModuleRelativePath", "Public/AnimNotify_PlayEffekseerEffect.h" },
		{ "ToolTip", "@brief  Animation notify for Effekseer\n@note\nThis class is based on Cascade" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_PlayEffekseerEffect_Statics::NewProp_EffekseerEffect_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "DisplayName", "Effekseer Effect" },
		{ "ModuleRelativePath", "Public/AnimNotify_PlayEffekseerEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimNotify_PlayEffekseerEffect_Statics::NewProp_EffekseerEffect = { "EffekseerEffect", nullptr, (EPropertyFlags)0x0010000000000011, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimNotify_PlayEffekseerEffect, EffekseerEffect), Z_Construct_UClass_UEffekseerEffect_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_PlayEffekseerEffect_Statics::NewProp_EffekseerEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PlayEffekseerEffect_Statics::NewProp_EffekseerEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_PlayEffekseerEffect_Statics::NewProp_LocationOffset_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "ModuleRelativePath", "Public/AnimNotify_PlayEffekseerEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotify_PlayEffekseerEffect_Statics::NewProp_LocationOffset = { "LocationOffset", nullptr, (EPropertyFlags)0x0010000000000011, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimNotify_PlayEffekseerEffect, LocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_PlayEffekseerEffect_Statics::NewProp_LocationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PlayEffekseerEffect_Statics::NewProp_LocationOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_PlayEffekseerEffect_Statics::NewProp_RotationOffset_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "ModuleRelativePath", "Public/AnimNotify_PlayEffekseerEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotify_PlayEffekseerEffect_Statics::NewProp_RotationOffset = { "RotationOffset", nullptr, (EPropertyFlags)0x0010000000000011, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimNotify_PlayEffekseerEffect, RotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_PlayEffekseerEffect_Statics::NewProp_RotationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PlayEffekseerEffect_Statics::NewProp_RotationOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_PlayEffekseerEffect_Statics::NewProp_Attached_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "ModuleRelativePath", "Public/AnimNotify_PlayEffekseerEffect.h" },
	};
#endif
	void Z_Construct_UClass_UAnimNotify_PlayEffekseerEffect_Statics::NewProp_Attached_SetBit(void* Obj)
	{
		((UAnimNotify_PlayEffekseerEffect*)Obj)->Attached = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotify_PlayEffekseerEffect_Statics::NewProp_Attached = { "Attached", nullptr, (EPropertyFlags)0x0010000000000011, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAnimNotify_PlayEffekseerEffect), &Z_Construct_UClass_UAnimNotify_PlayEffekseerEffect_Statics::NewProp_Attached_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_PlayEffekseerEffect_Statics::NewProp_Attached_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PlayEffekseerEffect_Statics::NewProp_Attached_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_PlayEffekseerEffect_Statics::NewProp_SocketName_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "ModuleRelativePath", "Public/AnimNotify_PlayEffekseerEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimNotify_PlayEffekseerEffect_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000011, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimNotify_PlayEffekseerEffect, SocketName), METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_PlayEffekseerEffect_Statics::NewProp_SocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PlayEffekseerEffect_Statics::NewProp_SocketName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotify_PlayEffekseerEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_PlayEffekseerEffect_Statics::NewProp_EffekseerEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_PlayEffekseerEffect_Statics::NewProp_LocationOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_PlayEffekseerEffect_Statics::NewProp_RotationOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_PlayEffekseerEffect_Statics::NewProp_Attached,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_PlayEffekseerEffect_Statics::NewProp_SocketName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNotify_PlayEffekseerEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotify_PlayEffekseerEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotify_PlayEffekseerEffect_Statics::ClassParams = {
		&UAnimNotify_PlayEffekseerEffect::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimNotify_PlayEffekseerEffect_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PlayEffekseerEffect_Statics::PropPointers),
		0,
		0x001120A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_PlayEffekseerEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PlayEffekseerEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimNotify_PlayEffekseerEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimNotify_PlayEffekseerEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimNotify_PlayEffekseerEffect, 307272517);
	template<> EFFEKSEER_API UClass* StaticClass<UAnimNotify_PlayEffekseerEffect>()
	{
		return UAnimNotify_PlayEffekseerEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimNotify_PlayEffekseerEffect(Z_Construct_UClass_UAnimNotify_PlayEffekseerEffect, &UAnimNotify_PlayEffekseerEffect::StaticClass, TEXT("/Script/Effekseer"), TEXT("UAnimNotify_PlayEffekseerEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify_PlayEffekseerEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
