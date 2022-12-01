#pragma once

#include <strix/net/socket/AddressInfo.h>
#include <strix/net/socket/AddrInfoUtil.h>

namespace strix { namespace net { namespace socket {

/**
*  A thin wrapper around a linked list returned by getaddrinfo on POSIX-compliant platforms
*/
class AddressInfoList
{
public:
	AddressInfoList(AddrInfo* addrInfo)
		: m_info(addrInfo)
	{ }

	~AddressInfoList()
	{
		AddrInfoUtil::freeAddrInfo(m_info);
		m_info = nullptr;
	}

	struct Iterator
	{
		Iterator(AddrInfo* current)
			: m_current(current)
		{}

		AddressInfo operator*() const {
			AddressInfo addressInfo;
			addressInfo.Family = m_current->ai_family;
			addressInfo.SocketType = m_current->ai_socktype;
			addressInfo.Protocol = m_current->ai_protocol;
			addressInfo.Address = m_current->ai_addr;
			addressInfo.AddressLength = static_cast<SockLenT>(m_current->ai_addrlen);

			return addressInfo;
		}

		//AddressInfo *operator->() { return m_ptr; }

		Iterator& operator++() { m_current = m_current->ai_next; return *this; }

		Iterator operator++(int) { Iterator tmp = *this; ++(*this); return tmp; }

		friend bool operator== (const Iterator& a, const Iterator& b) { return a.m_current == b.m_current; };
		friend bool operator!= (const Iterator& a, const Iterator& b) { return a.m_current != b.m_current; };
	private:

		AddrInfo* m_current;
	};

	Iterator begin() { return Iterator(m_info); }
	Iterator end() { return Iterator(nullptr); }

private:
	AddrInfo* m_info;

	friend Iterator;
};

} } }