/*
 * Copyright 2019 Soft Gear Co., Ltd. All Rights Reserved.
 *
 * See https://strixengine.com/en/terms-of-use/ for full license details.
 */
#include "StrixNotificationListener.h"

void UStrixNotificationListener::BeginPlay()
{
	UActorComponent::BeginPlay();

	Listener = NewObject<UStrixNotificationListenerObject>();
	Listener->Init(ChannelId, this);
	Listener->StrixRoomContextOpen = StrixRoomContextOpen;
	Listener->StrixRoomSetMemberNotificationArrived = StrixRoomSetMemberNotificationArrived;
	Listener->StrixRoomLeaveNotificationArrived = StrixRoomLeaveNotificationArrived;
	Listener->StrixRoomSetNotificationArrived = StrixRoomSetNotificationArrived;
	Listener->StrixRoomSetMemberNotificationArrived = StrixRoomSetMemberNotificationArrived;
	Listener->StrixRoomOwnerChanged = StrixRoomOwnerChanged;
	Listener->StrixRoomServerDisconnected = StrixRoomServerDisconnected;
	Listener->StrixRoomContextClosed = StrixRoomContextClosed;
	Listener->StrixRoomDeleteNotificationArrived = StrixRoomDeleteNotificationArrived;
	Listener->StrixRoomJoinNotificationArrived = StrixRoomJoinNotificationArrived;
	Listener->StrixRoomKickNotificationArrived = StrixRoomKickNotificationArrived;
}

void UStrixNotificationListener::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Listener->StopNotificationListener();
	UActorComponent::EndPlay(EndPlayReason);
}