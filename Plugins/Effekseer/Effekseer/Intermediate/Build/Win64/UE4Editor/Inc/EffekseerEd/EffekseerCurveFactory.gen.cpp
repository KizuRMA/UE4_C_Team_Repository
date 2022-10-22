// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EffekseerEd/Public/EffekseerCurveFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEffekseerCurveFactory() {}
// Cross Module References
	EFFEKSEERED_API UClass* Z_Construct_UClass_UEffekseerCurveFactory_NoRegister();
	EFFEKSEERED_API UClass* Z_Construct_UClass_UEffekseerCurveFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_EffekseerEd();
// End Cross Module References
	void UEffekseerCurveFactory::StaticRegisterNativesUEffekseerCurveFactory()
	{
	}
	UClass* Z_Construct_UClass_UEffekseerCurveFactory_NoRegister()
	{
		return UEffekseerCurveFactory::StaticClass();
	}
	struct Z_Construct_UClass_UEffekseerCurveFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEffekseerCurveFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_EffekseerEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerCurveFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EffekseerCurveFactory.h" },
		{ "ModuleRelativePath", "Public/EffekseerCurveFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEffekseerCurveFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEffekseerCurveFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEffekseerCurveFactory_Statics::ClassParams = {
		&UEffekseerCurveFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEffekseerCurveFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerCurveFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEffekseerCurveFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEffekseerCurveFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEffekseerCurveFactory, 906382897);
	template<> EFFEKSEERED_API UClass* StaticClass<UEffekseerCurveFactory>()
	{
		return UEffekseerCurveFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEffekseerCurveFactory(Z_Construct_UClass_UEffekseerCurveFactory, &UEffekseerCurveFactory::StaticClass, TEXT("/Script/EffekseerEd"), TEXT("UEffekseerCurveFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEffekseerCurveFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
