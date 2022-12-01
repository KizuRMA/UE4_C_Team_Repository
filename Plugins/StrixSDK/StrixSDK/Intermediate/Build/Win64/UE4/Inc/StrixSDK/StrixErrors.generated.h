// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STRIXSDK_StrixErrors_generated_h
#error "StrixErrors.generated.h already included, missing '#pragma once' in StrixErrors.h"
#endif
#define STRIXSDK_StrixErrors_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID matchingTest_Plugins_StrixSDK_Source_StrixSDK_Public_StrixErrors_h


#define FOREACH_ENUM_ESTRIXERRORCATEGORY(op) \
	op(EStrixErrorCategory::StrixNet) \
	op(EStrixErrorCategory::StrixClient) \
	op(EStrixErrorCategory::External) \
	op(EStrixErrorCategory::StrixUESDK) 

enum class EStrixErrorCategory : uint8;
template<> STRIXSDK_API UEnum* StaticEnum<EStrixErrorCategory>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
