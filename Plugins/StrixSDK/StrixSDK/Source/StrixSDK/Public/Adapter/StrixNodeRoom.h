/*
 * Copyright 2019 Soft Gear Co., Ltd. All Rights Reserved.
 *
 * See https://strixengine.com/en/terms-of-use/ for full license details.
 */
#pragma once

#include "CoreMinimal.h"
#include "Adapter/StrixPropertyMap.h"

#include <strix/client/match/node/model/CustomizableMatchServerNodeRoom.h>
#include "StrixNodeRoom.generated.h"

/** Wrapper class for the internal node room object, used by Strix libraries.
 *  Node room represents room information stored on the node (master) server.
 *  Not to be confused with FStrixRoom, which is the room information stored on the room server.
 */
USTRUCT(BlueprintType)
struct STRIXSDK_API FStrixNodeRoom
{
	GENERATED_BODY()

	FStrixNodeRoom();
	FStrixNodeRoom(strix::client::match::node::model::CustomizableMatchServerNodeRoomPtr nodeRoom);

	/** Id
	 *  Note: different than room id. This is the unique identifier of the node id - room id pair stored on the node (master) server.
	 */
	UPROPERTY(BlueprintReadOnly, Category = "StrixNodeRoom")
	int32 Id;

	/** Room Id */
	UPROPERTY(BlueprintReadOnly, Category = "StrixNodeRoom")
	int32 RoomId;

	/** Capacity of this room */
	UPROPERTY(BlueprintReadOnly, Category = "StrixNodeRoom")
	int32 Capacity;

	/** Current member count of this room */
	UPROPERTY(BlueprintReadOnly, Category = "StrixNodeRoom")
	int32 MemberCount;

	/** Whether or not this room is password protected */
	UPROPERTY(BlueprintReadOnly, Category = "StrixNodeRoom")
	bool IsPasswordProtected;

	/** Whether or not this room is joinable */
	UPROPERTY(BlueprintReadOnly, Category = "StrixNodeRoom")
	bool IsJoinable;

	/** Id of the current state on the room (not predefined) */
	UPROPERTY(BlueprintReadOnly, Category = "StrixNodeRoom")
	int32 State;

	/** Name of this room */
	UPROPERTY(BlueprintReadOnly, Category = "StrixNodeRoom")
	FString Name;

	/** Customizable numeric property that can be used for making conditions */
	UPROPERTY(BlueprintReadOnly, Category = "StrixNodeRoom")
	float Key1;

	/** Customizable numeric property that can be used for making conditions */
	UPROPERTY(BlueprintReadOnly, Category = "StrixNodeRoom")
	float Key2;

	/** Customizable numeric property that can be used for making conditions */
	UPROPERTY(BlueprintReadOnly, Category = "StrixNodeRoom")
	float Key3;

	/** Customizable numeric property that can be used for making conditions */
	UPROPERTY(BlueprintReadOnly, Category = "StrixNodeRoom")
	float Key4;

	/** Customizable numeric property that can be used for making conditions */
	UPROPERTY(BlueprintReadOnly, Category = "StrixNodeRoom")
	float Key5;

	/** Customizable numeric property that can be used for making conditions */
	UPROPERTY(BlueprintReadOnly, Category = "StrixNodeRoom")
	float Key6;

	/** Customizable numeric property that can be used for making conditions */
	UPROPERTY(BlueprintReadOnly, Category = "StrixNodeRoom")
	float Key7;

	/** Customizable numeric property that can be used for making conditions */
	UPROPERTY(BlueprintReadOnly, Category = "StrixNodeRoom")
	float Key8;

	/** Customizable string property that can be used for making conditions */
	UPROPERTY(BlueprintReadOnly, Category = "StrixNodeRoom")
	FString StringKey;

	/** Customizable properties of this room.
	 *  Note: it's not possible to create conditions using those.
	 */
	UPROPERTY(BlueprintReadOnly, Category = "StrixNodeRoom")
	FStrixPropertyMap Properties;

	strix::client::match::node::model::CustomizableMatchServerNodeRoomPtr m_nodeRoom;
};