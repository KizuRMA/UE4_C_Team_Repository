/*
 * Copyright 2019 Soft Gear Co., Ltd. All Rights Reserved.
 *
 * See https://strixengine.com/en/terms-of-use/ for full license details.
 */
#include "Adapter/StrixNode.h"

FStrixNode::FStrixNode() : Id(0), Port(0), Type(0)
{
}

FStrixNode::FStrixNode(strix::client::match::node::model::CustomizableMatchServerNodePtr node) : Id(0), Port(0), Type(0), m_node(node)
{
	if (node)
	{
		Id = (int32)node->GetPrimaryKey();
		Host = FString(node->GetHost().c_str());
		Port = (int32)node->GetPortNumber();
		Protocol = FString(node->GetProtocol().c_str());
		Type = (int32)node->GetType();
		Properties = FStrixPropertyMap(node->GetProperties());
	}
}
