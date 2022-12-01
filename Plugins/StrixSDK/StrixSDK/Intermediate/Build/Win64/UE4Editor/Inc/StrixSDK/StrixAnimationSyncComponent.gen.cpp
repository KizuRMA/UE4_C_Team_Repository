// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StrixSDK/Public/Components/StrixAnimationSyncComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStrixAnimationSyncComponent() {}
// Cross Module References
	STRIXSDK_API UClass* Z_Construct_UClass_UStrixAnimationSyncComponent_NoRegister();
	STRIXSDK_API UClass* Z_Construct_UClass_UStrixAnimationSyncComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_StrixSDK();
// End Cross Module References
	void UStrixAnimationSyncComponent::StaticRegisterNativesUStrixAnimationSyncComponent()
	{
	}
	UClass* Z_Construct_UClass_UStrixAnimationSyncComponent_NoRegister()
	{
		return UStrixAnimationSyncComponent::StaticClass();
	}
	struct Z_Construct_UClass_UStrixAnimationSyncComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStrixAnimationSyncComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_StrixSDK,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStrixAnimationSyncComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/** Component used for synchronization of the variables stored on\n *  the animation blueprints. For a property to be replicated the 'Replication'\n *  parameter needs to be set to 'Replicated' or 'RepNotify'.\n *  \n *  Requires the StrixReplicatorComponent on the owner actor.\n *//// \\cond\n" },
		{ "IncludePath", "Components/StrixAnimationSyncComponent.h" },
		{ "ModuleRelativePath", "Public/Components/StrixAnimationSyncComponent.h" },
		{ "ToolTip", "Component used for synchronization of the variables stored on\nthe animation blueprints. For a property to be replicated the 'Replication'\nparameter needs to be set to 'Replicated' or 'RepNotify'.\n\nRequires the StrixReplicatorComponent on the owner actor.\n/// \\cond" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStrixAnimationSyncComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStrixAnimationSyncComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStrixAnimationSyncComponent_Statics::ClassParams = {
		&UStrixAnimationSyncComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UStrixAnimationSyncComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStrixAnimationSyncComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStrixAnimationSyncComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStrixAnimationSyncComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStrixAnimationSyncComponent, 1394485491);
	template<> STRIXSDK_API UClass* StaticClass<UStrixAnimationSyncComponent>()
	{
		return UStrixAnimationSyncComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStrixAnimationSyncComponent(Z_Construct_UClass_UStrixAnimationSyncComponent, &UStrixAnimationSyncComponent::StaticClass, TEXT("/Script/StrixSDK"), TEXT("UStrixAnimationSyncComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStrixAnimationSyncComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
