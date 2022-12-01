/*
 * Copyright 2019 Soft Gear Co., Ltd. All Rights Reserved.
 *
 * See https://strixengine.com/en/terms-of-use/ for full license details.
 */
#include "Adapter/StrixRoomMember.h"

const std::set<std::string> FStrixRoomMember::KnownNetworkFieldNames = { "name" };

FStrixRoomMember::FStrixRoomMember() : Id(0), RoomId(0)
{
}

FStrixRoomMember::FStrixRoomMember(strix::client::match::room::model::CustomizableMatchRoomMemberPtr roomMember) : Id(0), RoomId(0), m_roomMember(roomMember)
{
	if (roomMember)
	{
		Id = (int32)roomMember->GetPrimaryKey();
		RoomId = (int32)roomMember->GetRoomId();
		Name = FString(UTF8_TO_TCHAR(roomMember->GetName().c_str()));
		Properties = FStrixPropertyMap(roomMember->GetProperties());
	}
}
