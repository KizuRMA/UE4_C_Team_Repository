// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EffekseerEd/Public/EffekseerModelFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEffekseerModelFactory() {}
// Cross Module References
	EFFEKSEERED_API UClass* Z_Construct_UClass_UEffekseerModelFactory_NoRegister();
	EFFEKSEERED_API UClass* Z_Construct_UClass_UEffekseerModelFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_EffekseerEd();
// End Cross Module References
	void UEffekseerModelFactory::StaticRegisterNativesUEffekseerModelFactory()
	{
	}
	UClass* Z_Construct_UClass_UEffekseerModelFactory_NoRegister()
	{
		return UEffekseerModelFactory::StaticClass();
	}
	struct Z_Construct_UClass_UEffekseerModelFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEffekseerModelFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_EffekseerEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerModelFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EffekseerModelFactory.h" },
		{ "ModuleRelativePath", "Public/EffekseerModelFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEffekseerModelFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEffekseerModelFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEffekseerModelFactory_Statics::ClassParams = {
		&UEffekseerModelFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEffekseerModelFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerModelFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEffekseerModelFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEffekseerModelFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEffekseerModelFactory, 512248574);
	template<> EFFEKSEERED_API UClass* StaticClass<UEffekseerModelFactory>()
	{
		return UEffekseerModelFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEffekseerModelFactory(Z_Construct_UClass_UEffekseerModelFactory, &UEffekseerModelFactory::StaticClass, TEXT("/Script/EffekseerEd"), TEXT("UEffekseerModelFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEffekseerModelFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
