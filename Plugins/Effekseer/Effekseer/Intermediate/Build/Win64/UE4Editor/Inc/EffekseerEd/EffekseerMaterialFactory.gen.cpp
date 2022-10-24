// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EffekseerEd/Public/EffekseerMaterialFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEffekseerMaterialFactory() {}
// Cross Module References
	EFFEKSEERED_API UClass* Z_Construct_UClass_UEffekseerMaterialFactory_NoRegister();
	EFFEKSEERED_API UClass* Z_Construct_UClass_UEffekseerMaterialFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_EffekseerEd();
// End Cross Module References
	void UEffekseerMaterialFactory::StaticRegisterNativesUEffekseerMaterialFactory()
	{
	}
	UClass* Z_Construct_UClass_UEffekseerMaterialFactory_NoRegister()
	{
		return UEffekseerMaterialFactory::StaticClass();
	}
	struct Z_Construct_UClass_UEffekseerMaterialFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEffekseerMaterialFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_EffekseerEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerMaterialFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EffekseerMaterialFactory.h" },
		{ "ModuleRelativePath", "Public/EffekseerMaterialFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEffekseerMaterialFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEffekseerMaterialFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEffekseerMaterialFactory_Statics::ClassParams = {
		&UEffekseerMaterialFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEffekseerMaterialFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerMaterialFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEffekseerMaterialFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEffekseerMaterialFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEffekseerMaterialFactory, 1605990332);
	template<> EFFEKSEERED_API UClass* StaticClass<UEffekseerMaterialFactory>()
	{
		return UEffekseerMaterialFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEffekseerMaterialFactory(Z_Construct_UClass_UEffekseerMaterialFactory, &UEffekseerMaterialFactory::StaticClass, TEXT("/Script/EffekseerEd"), TEXT("UEffekseerMaterialFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEffekseerMaterialFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
