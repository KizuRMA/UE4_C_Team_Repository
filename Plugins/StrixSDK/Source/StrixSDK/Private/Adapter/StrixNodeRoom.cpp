/*
 * Copyright 2019 Soft Gear Co., Ltd. All Rights Reserved.
 *
 * See https://strixengine.com/en/terms-of-use/ for full license details.
 */
#include "Adapter/StrixNodeRoom.h"

FStrixNodeRoom::FStrixNodeRoom() : Id(0), RoomId(0), Capacity(0), MemberCount(0), IsPasswordProtected(false), IsJoinable(true), State(0),
Key1(0.0), Key2(0.0), Key3(0.0), Key4(0.0), Key5(0.0), Key6(0.0), Key7(0.0), Key8(0.0)
{
}

FStrixNodeRoom::FStrixNodeRoom(strix::client::match::node::model::CustomizableMatchServerNodeRoomPtr nodeRoom) :
	Id(0), RoomId(0), Capacity(0), MemberCount(0), IsPasswordProtected(false), IsJoinable(true), State(0),
	Key1(0.0), Key2(0.0), Key3(0.0), Key4(0.0), Key5(0.0), Key6(0.0), Key7(0.0), Key8(0.0), m_nodeRoom(nodeRoom)
{
	if (nodeRoom)
	{
		Id = (int32)nodeRoom->GetPrimaryKey();
		RoomId = (int32)nodeRoom->GetRoomId();
		Capacity = (int32)nodeRoom->GetCapacity();
		MemberCount = (int32)nodeRoom->GetMemberCount();
		IsPasswordProtected = nodeRoom->GetIsPasswordProtected();
		IsJoinable = nodeRoom->GetIsJoinable();
		State = (int32)nodeRoom->GetState();

		if (nodeRoom->GetName())
			Name = FString(UTF8_TO_TCHAR(nodeRoom->GetName()->Get().c_str()));

		Key1 = (float)nodeRoom->GetKey1();
		Key2 = (float)nodeRoom->GetKey2();
		Key3 = (float)nodeRoom->GetKey3();
		Key4 = (float)nodeRoom->GetKey4();
		Key5 = (float)nodeRoom->GetKey5();
		Key6 = (float)nodeRoom->GetKey6();
		Key7 = (float)nodeRoom->GetKey7();
		Key8 = (float)nodeRoom->GetKey8();

		StringKey = FString(UTF8_TO_TCHAR(nodeRoom->GetStringKey().c_str()));
		Properties = FStrixPropertyMap(nodeRoom->GetProperties());
	}
}
