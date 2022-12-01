#pragma once

#include <strix/net/socket/Types.h>

namespace strix { namespace net { namespace socket {

struct AddressInfo
{
	strix::net::socket::Family Family;
	Type SocketType;
	strix::net::socket::Protocol Protocol;
	SockAddr* Address;
	SockLenT AddressLength;
};

} } }

#if defined(__ORBIS__) || defined(__PROSPERO__)
#include <strix/net/socket/orbis/AddressInfoList.h>
#else
#include <strix/net/socket/AddressInfoList.h>
#endif
