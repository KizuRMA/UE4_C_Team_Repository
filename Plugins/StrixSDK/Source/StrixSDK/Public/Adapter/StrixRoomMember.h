/*
 * Copyright 2019 Soft Gear Co., Ltd. All Rights Reserved.
 *
 * See https://strixengine.com/en/terms-of-use/ for full license details.
 */
#pragma once

#include "CoreMinimal.h"
#include "Adapter/StrixPropertyMap.h"

#include <strix/client/match/room/model/CustomizableMatchRoomMember.h>
#include "StrixRoomMember.generated.h"

/** Wrapper class for the internal room member object, used by Strix libraries.
 *  Room member represents a client connected to the specified room.
 */
USTRUCT(BlueprintType)
struct STRIXSDK_API FStrixRoomMember
{
	GENERATED_BODY()

	FStrixRoomMember();
	FStrixRoomMember(strix::client::match::room::model::CustomizableMatchRoomMemberPtr roomMember);

	/** Member Id */
	UPROPERTY(BlueprintReadOnly, Category = "StrixRoomMember")
	int32 Id;

	/** Room Id */
	UPROPERTY(BlueprintReadOnly, Category = "StrixRoomMember")
	int32 RoomId;

	/** Name of this member */
	UPROPERTY(BlueprintReadOnly, Category = "StrixRoomMember")
	FString Name;

	/** Customizable properties of this room.
	 *  Note: it's not possible to create conditions using those.
	 */
	UPROPERTY(BlueprintReadOnly, Category = "StrixRoomMember")
	FStrixPropertyMap Properties;

	static const std::set<std::string> KnownNetworkFieldNames;

	strix::client::match::room::model::CustomizableMatchRoomMemberPtr m_roomMember;
};