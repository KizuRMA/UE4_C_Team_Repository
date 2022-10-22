// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Effekseer/Public/EffekseerModel.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEffekseerModel() {}
// Cross Module References
	EFFEKSEER_API UClass* Z_Construct_UClass_UEffekseerModel_NoRegister();
	EFFEKSEER_API UClass* Z_Construct_UClass_UEffekseerModel();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Effekseer();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
// End Cross Module References
	void UEffekseerModel::StaticRegisterNativesUEffekseerModel()
	{
	}
	UClass* Z_Construct_UClass_UEffekseerModel_NoRegister()
	{
		return UEffekseerModel::StaticClass();
	}
	struct Z_Construct_UClass_UEffekseerModel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_AnimationFaceOffsets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationFaceOffsets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimationFaceOffsets;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_AnimationFaceCounts_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationFaceCounts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimationFaceCounts;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetImportData;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEffekseerModel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Effekseer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerModel_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EffekseerModel.h" },
		{ "ModuleRelativePath", "Public/EffekseerModel.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerModel_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "EffekseerModel" },
		{ "ModuleRelativePath", "Public/EffekseerModel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerModel_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerModel, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEffekseerModel_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerModel_Statics::NewProp_Mesh_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UEffekseerModel_Statics::NewProp_AnimationFaceOffsets_Inner = { "AnimationFaceOffsets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerModel_Statics::NewProp_AnimationFaceOffsets_MetaData[] = {
		{ "Category", "EffekseerModel" },
		{ "ModuleRelativePath", "Public/EffekseerModel.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEffekseerModel_Statics::NewProp_AnimationFaceOffsets = { "AnimationFaceOffsets", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerModel, AnimationFaceOffsets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEffekseerModel_Statics::NewProp_AnimationFaceOffsets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerModel_Statics::NewProp_AnimationFaceOffsets_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UEffekseerModel_Statics::NewProp_AnimationFaceCounts_Inner = { "AnimationFaceCounts", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerModel_Statics::NewProp_AnimationFaceCounts_MetaData[] = {
		{ "Category", "EffekseerModel" },
		{ "ModuleRelativePath", "Public/EffekseerModel.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEffekseerModel_Statics::NewProp_AnimationFaceCounts = { "AnimationFaceCounts", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerModel, AnimationFaceCounts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEffekseerModel_Statics::NewProp_AnimationFaceCounts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerModel_Statics::NewProp_AnimationFaceCounts_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffekseerModel_Statics::NewProp_AssetImportData_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "ModuleRelativePath", "Public/EffekseerModel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerModel_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x0010000800020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffekseerModel, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEffekseerModel_Statics::NewProp_AssetImportData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerModel_Statics::NewProp_AssetImportData_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEffekseerModel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerModel_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerModel_Statics::NewProp_AnimationFaceOffsets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerModel_Statics::NewProp_AnimationFaceOffsets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerModel_Statics::NewProp_AnimationFaceCounts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerModel_Statics::NewProp_AnimationFaceCounts,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerModel_Statics::NewProp_AssetImportData,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEffekseerModel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEffekseerModel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEffekseerModel_Statics::ClassParams = {
		&UEffekseerModel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEffekseerModel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerModel_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEffekseerModel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerModel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEffekseerModel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEffekseerModel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEffekseerModel, 655060582);
	template<> EFFEKSEER_API UClass* StaticClass<UEffekseerModel>()
	{
		return UEffekseerModel::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEffekseerModel(Z_Construct_UClass_UEffekseerModel, &UEffekseerModel::StaticClass, TEXT("/Script/Effekseer"), TEXT("UEffekseerModel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEffekseerModel);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UEffekseerModel)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
