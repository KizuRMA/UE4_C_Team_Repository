#pragma once

#include <strix/net/socket/Types.h>

namespace strix { namespace net { namespace socket {

class AddrInfoUtil
{
public:
	static int getAddrInfo(const char* pNodeName, const char* pServername, const AddrInfo* pHints, AddrInfo** pResult);

	static void freeAddrInfo(AddrInfo* addrInfoStorage);
};

} } }
