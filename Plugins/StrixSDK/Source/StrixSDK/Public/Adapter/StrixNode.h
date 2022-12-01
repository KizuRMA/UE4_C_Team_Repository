/*
 * Copyright 2019 Soft Gear Co., Ltd. All Rights Reserved.
 *
 * See https://strixengine.com/en/terms-of-use/ for full license details.
 */
#pragma once

#include "CoreMinimal.h"
#include "Adapter/StrixPropertyMap.h"

#include <strix/client/match/node/model/CustomizableMatchServerNode.h>
#include "StrixNode.generated.h"

/** Wrapper class for the internal node object, used by Strix libraries.
 *  Node represents a server (master/room) in the Strix network.
 */
USTRUCT(BlueprintType)
struct STRIXSDK_API FStrixNode
{
	GENERATED_BODY()

	FStrixNode();
	FStrixNode(strix::client::match::node::model::CustomizableMatchServerNodePtr node);

	/** Id */
	UPROPERTY(BlueprintReadOnly, Category = "StrixNode")
	int32 Id;

	/** Address of this node */
	UPROPERTY(BlueprintReadOnly, Category = "StrixNode")
	FString Host;

	/** Port */
	UPROPERTY(BlueprintReadOnly, Category = "StrixNode")
	int32 Port;

	/** Type of protocol used (TCP, UDP) */
	UPROPERTY(BlueprintReadOnly, Category = "StrixNode")
	FString Protocol;

	/** Node type */
	UPROPERTY(BlueprintReadOnly, Category = "StrixNode")
	int32 Type;

	/** Customizable properties of this node.
	 *  Note: it's not possible to create conditions using those.
	 */
	UPROPERTY(BlueprintReadOnly, Category = "StrixNode")
	FStrixPropertyMap Properties;

	strix::client::match::node::model::CustomizableMatchServerNodePtr m_node;
};