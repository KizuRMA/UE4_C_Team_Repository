// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StrixSDK/Public/Components/StrixTransformSyncComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStrixTransformSyncComponent() {}
// Cross Module References
	STRIXSDK_API UClass* Z_Construct_UClass_UStrixTransformSyncComponent_NoRegister();
	STRIXSDK_API UClass* Z_Construct_UClass_UStrixTransformSyncComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_StrixSDK();
// End Cross Module References
	void UStrixTransformSyncComponent::StaticRegisterNativesUStrixTransformSyncComponent()
	{
	}
	UClass* Z_Construct_UClass_UStrixTransformSyncComponent_NoRegister()
	{
		return UStrixTransformSyncComponent::StaticClass();
	}
	struct Z_Construct_UClass_UStrixTransformSyncComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStrixTransformSyncComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_StrixSDK,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStrixTransformSyncComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Strix" },
		{ "Comment", "/** Component used for synchronization of the transform of an actor.\n *  Synchronizes information about the rotation, translation and scale.\n *  \n *  Requires the StrixReplicatorComponent on the owner actor.\n *//// \\cond\n" },
		{ "IncludePath", "Components/StrixTransformSyncComponent.h" },
		{ "ModuleRelativePath", "Public/Components/StrixTransformSyncComponent.h" },
		{ "ToolTip", "Component used for synchronization of the transform of an actor.\nSynchronizes information about the rotation, translation and scale.\n\nRequires the StrixReplicatorComponent on the owner actor.\n/// \\cond" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStrixTransformSyncComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStrixTransformSyncComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStrixTransformSyncComponent_Statics::ClassParams = {
		&UStrixTransformSyncComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UStrixTransformSyncComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStrixTransformSyncComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStrixTransformSyncComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStrixTransformSyncComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStrixTransformSyncComponent, 3441965263);
	template<> STRIXSDK_API UClass* StaticClass<UStrixTransformSyncComponent>()
	{
		return UStrixTransformSyncComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStrixTransformSyncComponent(Z_Construct_UClass_UStrixTransformSyncComponent, &UStrixTransformSyncComponent::StaticClass, TEXT("/Script/StrixSDK"), TEXT("UStrixTransformSyncComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStrixTransformSyncComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
