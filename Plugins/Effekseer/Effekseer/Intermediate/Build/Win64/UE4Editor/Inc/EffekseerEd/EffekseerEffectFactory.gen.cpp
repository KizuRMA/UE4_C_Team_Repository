// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EffekseerEd/Public/EffekseerEffectFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEffekseerEffectFactory() {}
// Cross Module References
	EFFEKSEERED_API UClass* Z_Construct_UClass_UEffekseerEffectFactory_NoRegister();
	EFFEKSEERED_API UClass* Z_Construct_UClass_UEffekseerEffectFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_EffekseerEd();
// End Cross Module References
	void UEffekseerEffectFactory::StaticRegisterNativesUEffekseerEffectFactory()
	{
	}
	UClass* Z_Construct_UClass_UEffekseerEffectFactory_NoRegister()
	{
		return UEffekseerEffectFactory::StaticClass();
	}
	struct Z_Construct_UClass_UEffekseerEffectFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEffekseerEffectFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_EffekseerEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerEffectFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EffekseerEffectFactory.h" },
		{ "ModuleRelativePath", "Public/EffekseerEffectFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEffekseerEffectFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEffekseerEffectFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEffekseerEffectFactory_Statics::ClassParams = {
		&UEffekseerEffectFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEffekseerEffectFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerEffectFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEffekseerEffectFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEffekseerEffectFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEffekseerEffectFactory, 531696138);
	template<> EFFEKSEERED_API UClass* StaticClass<UEffekseerEffectFactory>()
	{
		return UEffekseerEffectFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEffekseerEffectFactory(Z_Construct_UClass_UEffekseerEffectFactory, &UEffekseerEffectFactory::StaticClass, TEXT("/Script/EffekseerEd"), TEXT("UEffekseerEffectFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEffekseerEffectFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
