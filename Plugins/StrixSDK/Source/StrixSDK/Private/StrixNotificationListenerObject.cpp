/*
 * Copyright 2019 Soft Gear Co., Ltd. All Rights Reserved.
 *
 * See https://strixengine.com/en/terms-of-use/ for full license details.
 */
#include "StrixNotificationListenerObject.h"

#include "StrixNetworkFacade.h"
#include "UELogHandler.h"

#include <strix/client/ingame/network/RoomContext.h>
#include <strix/client/ingame/network/StrixNetworkEvents.h>
#include <strix/client/match/MatchMessages.h>
#include <strix/client/room/RoomMessages.h>
#include "strix/client/match/CustomizableMatchRoomClient.h"

void UStrixNotificationListenerObject::Init(int32 channelId, UObject* contextObject)
{
	ChannelId = channelId;
	ContextObject = contextObject;
	UStrixNetworkFacade* strixNetwork = UStrixNetworkFacade::GetInstance(ContextObject);

	if (strixNetwork)
	{
		m_roomServerDisconnectHandle = strixNetwork->AddRoomServerDisconnectHandler(strix::client::core::util::MethodBinding::BindRaw(this, &UStrixNotificationListenerObject::OnRoomServerDisconnect));

		auto roomContext = strixNetwork->GetRoomContextByChannelId(ChannelId);

		if (roomContext && roomContext->GetMatchRoomClient())
		{
			StartNotificationListenerBase(roomContext);
		}
		else
		{
			m_roomContextOpenHandle = strixNetwork->AddRoomContextOpenHandler(strix::client::core::util::MethodBinding::BindRaw(this, &UStrixNotificationListenerObject::OnRoomContextOpen));
		}
	}
	else
	{
		UE_LOG(LogStrix, Log, TEXT("StrixNotificationListener::Start - Strix network is not initialized."));
	}
}

void UStrixNotificationListenerObject::BeginDestroy() {
	StopNotificationListener();
	UObject::BeginDestroy();
}

void UStrixNotificationListenerObject::StopNotificationListener()
{
	m_isActive = false;

	UStrixNetworkFacade* strixNetwork = UStrixNetworkFacade::GetInstance(ContextObject);
	if (strixNetwork)
	{
		strixNetwork->RemoveRoomContextOpenHandler(m_roomContextOpenHandle);
		strixNetwork->RemoveRoomServerDisconnectHandler(m_roomServerDisconnectHandle);
	}

	RemoveRoomHandlers();
}

void UStrixNotificationListenerObject::RemoveRoomHandlers()
{
	auto roomContext = m_roomContext.lock();
	if (roomContext && roomContext->GetMatchRoomClient())
	{
		roomContext->GetMatchRoomClient()->RemoveRoomJoinNotifiedHandler(m_roomJoinNotificationHandle);
		roomContext->GetMatchRoomClient()->RemoveRoomLeaveNotifiedHandler(m_roomLeaveNotificationHandle);
		roomContext->GetMatchRoomClient()->RemoveRoomSetNotifiedHandler(m_roomSetNotificationHandle);
		roomContext->GetMatchRoomClient()->RemoveRoomSetMemberNotifiedHandler(m_roomSetMemberNotificationHandle);
		roomContext->GetMatchRoomClient()->RemoveMatchRoomKickNotifiedHandler(m_roomKickNotificationHandle);
		roomContext->GetMatchRoomClient()->RemoveRoomDeleteNotifiedHandler(m_roomDeleteNotificationHandle);
		roomContext->GetMatchRoomClient()->RemoveRoomChangeOwnerNotifiedHandler(m_roomOwnerChangedNotificationHandle);

		roomContext->RemoveRoomContextInvalidateHandler(m_roomContextInvalidateHandle);
	}
}

void UStrixNotificationListenerObject::StartNotificationListenerBase(strix::client::ingame::network::RoomContextPtr roomContext)
{
	if (!roomContext->GetMatchRoomClient())
	{
		UE_LOG(LogStrix, Log, TEXT("StrixNotificationListener::OnRoomContextOpen - Match room client not initialized."));
		return;
	}

	m_roomJoinNotificationHandle = roomContext->GetMatchRoomClient()->AddRoomJoinNotifiedHandler(
		strix::client::core::util::MethodBinding::BindRaw(this, &UStrixNotificationListenerObject::OnRoomJoinNotification));

	m_roomLeaveNotificationHandle = roomContext->GetMatchRoomClient()->AddRoomLeaveNotifiedHandler(
		strix::client::core::util::MethodBinding::BindRaw(this, &UStrixNotificationListenerObject::OnRoomLeaveNotification));

	m_roomSetNotificationHandle = roomContext->GetMatchRoomClient()->AddRoomSetNotifiedHandler(
		strix::client::core::util::MethodBinding::BindRaw(this, &UStrixNotificationListenerObject::OnRoomSetNotification));

	m_roomSetMemberNotificationHandle = roomContext->GetMatchRoomClient()->AddRoomSetMemberNotifiedHandler(
		strix::client::core::util::MethodBinding::BindRaw(this, &UStrixNotificationListenerObject::OnRoomSetMemberNotification));

	m_roomKickNotificationHandle = roomContext->GetMatchRoomClient()->AddMatchRoomKickNotifiedHandler(
		strix::client::core::util::MethodBinding::BindRaw(this, &UStrixNotificationListenerObject::OnRoomKickNotification));

	m_roomDeleteNotificationHandle = roomContext->GetMatchRoomClient()->AddRoomDeleteNotifiedHandler(
		strix::client::core::util::MethodBinding::BindRaw(this, &UStrixNotificationListenerObject::OnRoomDeleteNotification));

	m_roomOwnerChangedNotificationHandle = roomContext->GetMatchRoomClient()->AddRoomChangeOwnerNotifiedHandler(
		strix::client::core::util::MethodBinding::BindRaw(this, &UStrixNotificationListenerObject::OnRoomChangeOwnerNotification));

	m_roomContextInvalidateHandle = roomContext->AddRoomContextInvalidateHandler(
		[this](strix::client::ingame::network::RoomContextInvalidateEventArgs args) {
		RemoveRoomHandlers();
		StrixRoomContextClosed.Broadcast(ChannelId);
	}
	);

	m_roomContext = roomContext;
	m_isActive = true;
}

void UStrixNotificationListenerObject::OnRoomJoinNotification(strix::client::core::NotificationEventArgs<strix::client::room::message::RoomJoinNotificationPtr> args)
{
	if (!m_isActive)
	{
		return;
	}
	auto roomMember = args.m_data->GetNewlyJoinedMember();
	if (roomMember->InstanceOf<strix::client::match::room::model::CustomizableMatchRoomMember>())
	{
		auto customizableMatchRoomMember = std::static_pointer_cast<strix::client::match::room::model::CustomizableMatchRoomMember>(roomMember);
		StrixRoomJoinNotificationArrived.Broadcast(ChannelId, FStrixRoomMember(customizableMatchRoomMember));
	}
}

void UStrixNotificationListenerObject::OnRoomLeaveNotification(strix::client::core::NotificationEventArgs<strix::client::room::message::RoomLeaveNotificationPtr> args)
{
	if (!m_isActive)
	{
		return;
	}
	auto roomMember = args.m_data->GetGoneMember();
	if (roomMember->InstanceOf<strix::client::match::room::model::CustomizableMatchRoomMember>())
	{
		auto customizableMatchRoomMember = std::static_pointer_cast<strix::client::match::room::model::CustomizableMatchRoomMember>(roomMember);
		StrixRoomLeaveNotificationArrived.Broadcast(ChannelId, FStrixRoomMember(customizableMatchRoomMember));
	}
}

void UStrixNotificationListenerObject::OnRoomSetNotification(strix::client::core::NotificationEventArgs<strix::client::room::message::RoomSetNotificationPtr> args)
{
	if (!m_isActive)
	{
		return;
	}
	auto room = args.m_data->GetRoom();
	if (room->InstanceOf<strix::client::match::room::model::CustomizableMatchRoom>())
	{
		auto customizableMatchRoom = std::static_pointer_cast<strix::client::match::room::model::CustomizableMatchRoom>(room);
		StrixRoomSetNotificationArrived.Broadcast(ChannelId, FStrixRoom(customizableMatchRoom));
	}
}

void UStrixNotificationListenerObject::OnRoomChangeOwnerNotification(strix::client::core::NotificationEventArgs<strix::client::room::message::RoomSetNotificationPtr> args)
{
	if (!m_isActive)
	{
		return;
	}
	auto room = args.m_data->GetRoom();
	if(auto matchRoom = std::static_pointer_cast<strix::client::match::room::model::CustomizableMatchRoom>(room))
	{
		auto strixNetwork = UStrixNetworkFacade::GetInstance(ContextObject);
		if(!strixNetwork)
		{
			UE_LOG(LogStrix, Warning, TEXT("Network not initialized for OnRoomChangeOwnerNotification"));
			return;
		}

		auto members = strixNetwork->GetRoomContextByChannelId(ChannelId)->GetRoomData()->GetRoomMembers();

		const auto roomOwner = std::static_pointer_cast<strix::client::match::room::model::CustomizableMatchRoomMember>(members[matchRoom->GetOwnerUid()]);

		const auto previousRoomOwner = std::static_pointer_cast<strix::client::match::room::model::CustomizableMatchRoomMember>(members[
		    std::static_pointer_cast<strix::client::match::room::model::CustomizableMatchRoom>(
			    strixNetwork->GetRoomContextByChannelId(ChannelId)->GetRoomData()->GetRoom())->GetOwnerUid()
		]);

		if(roomOwner && previousRoomOwner)
		{
		    StrixRoomOwnerChanged.Broadcast(ChannelId, FStrixRoomMember(roomOwner), FStrixRoomMember(previousRoomOwner));
		}
	}
}

void UStrixNotificationListenerObject::OnRoomSetMemberNotification(strix::client::core::NotificationEventArgs<strix::client::room::message::RoomSetMemberNotificationPtr> args)
{
	if (!m_isActive)
	{
		//return;
	}
	auto roomMember = args.m_data->GetMember();
	if (roomMember->InstanceOf<strix::client::match::room::model::CustomizableMatchRoomMember>())
	{
		auto customizableMatchRoomMember = std::static_pointer_cast<strix::client::match::room::model::CustomizableMatchRoomMember>(roomMember);
		StrixRoomSetMemberNotificationArrived.Broadcast(ChannelId, FStrixRoomMember(customizableMatchRoomMember));
	}
}

void UStrixNotificationListenerObject::OnRoomKickNotification(strix::client::core::NotificationEventArgs<strix::client::match::room::message::MatchRoomKickNotificationPtr> args)
{
	if (!m_isActive)
	{
		return;
	}
	StrixRoomKickNotificationArrived.Broadcast(ChannelId);
}

void UStrixNotificationListenerObject::OnRoomDeleteNotification(strix::client::core::NotificationEventArgs<strix::client::room::message::RoomDeleteNotificationPtr> args)
{
	if (!m_isActive)
	{
		return;
	}
	StrixRoomDeleteNotificationArrived.Broadcast(ChannelId);
}

void UStrixNotificationListenerObject::OnRoomContextOpen(int channelId, strix::client::ingame::network::RoomContextPtr roomContext)
{
	if (channelId == ChannelId)
	{
		if (!m_isActive)
		{
			StartNotificationListenerBase(roomContext);
		}

		StrixRoomContextOpen.Broadcast(channelId);
	}
}

void UStrixNotificationListenerObject::OnRoomServerDisconnect(int channelId)
{
	if (channelId == ChannelId)
	{
		StrixRoomServerDisconnected.Broadcast(channelId);
	}
}


