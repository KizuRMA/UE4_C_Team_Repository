/*
 * Copyright 2019 Soft Gear Co., Ltd. All Rights Reserved.
 *
 * See https://strixengine.com/en/terms-of-use/ for full license details.
 */
#include "Adapter/StrixRoom.h"

const std::set<std::string> FStrixRoom::KnownNetworkFieldNames = { "capacity", "name", "password", "state", "isJoinable", "key1", "key1", "key2", "key3", "key4", "key5", "key6", "key7", "key8", "stringKey" };

FStrixRoom::FStrixRoom() : Id(0), Capacity(0), MemberCount(0), IsJoinable(true), State(0),
	Key1(0.0), Key2(0.0), Key3(0.0), Key4(0.0), Key5(0.0), Key6(0.0), Key7(0.0), Key8(0.0)
{
}

FStrixRoom::FStrixRoom(strix::client::match::room::model::CustomizableMatchRoomPtr room) :
	Id(0), Capacity(0), MemberCount(0), IsJoinable(true), State(0),
	Key1(0.0), Key2(0.0), Key3(0.0), Key4(0.0), Key5(0.0), Key6(0.0), Key7(0.0), Key8(0.0), m_room(room)
{
	if (room)
	{
		Id = (int32)room->GetPrimaryKey();
		Capacity = (int32)room->GetCapacity();
		MemberCount = (int32)room->GetMemberCount();
		IsJoinable = room->GetIsJoinable();
		State = (int32)room->GetState();

		if (room->GetName())
			Name = FString(UTF8_TO_TCHAR(room->GetName()->Get().c_str()));

		if (room->GetPassword())
			Password = FString((room->GetPassword()->Get().c_str()));

		Key1 = (float)room->GetKey1();
		Key2 = (float)room->GetKey2();
		Key3 = (float)room->GetKey3();
		Key4 = (float)room->GetKey4();
		Key5 = (float)room->GetKey5();
		Key6 = (float)room->GetKey6();
		Key7 = (float)room->GetKey7();
		Key8 = (float)room->GetKey8();

		StringKey = FString((room->GetStringKey().c_str()));
		Properties = FStrixPropertyMap(room->GetProperties());
	}
}
