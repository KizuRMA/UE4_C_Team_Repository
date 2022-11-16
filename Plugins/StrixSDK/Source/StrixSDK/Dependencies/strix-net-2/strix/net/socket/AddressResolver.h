#pragma once

#include <strix/net/Pch.h>
#include <strix/net/socket/SocketUtil.h>
#include <strix/net/socket/AddressInfo.h>

#if defined(__ORBIS__) || defined(__PROSPERO__)
#include <strix/net/socket/orbis/DnsResolver.h>
#include <strix/net/socket/orbis/MemoryPool.h>
#endif // defined(__ORBIS__) || defined(__PROSPERO__)

namespace strix { namespace net { namespace socket {

class AddressResolver {
public:
	/**
	*  Constructs a new address resolver
	*  @param	dnsResolver	Orbis DNS resolver
	*/
	AddressResolver();

	/**
	*  Gets a list of addresses that can be used to connect to the provided hostname via a socket of the provided type
	*  @param[in]	hostname	Either a domain name or an IP address
	*  @param[in]	socketType	Type of the socket used to connect to the hostname: UDP, TCP, or raw socket
	*  @returns		A list of addresses that can be iterated over
	*  @warning		This operation can block for DNS resolution if hostname is not empty
	*/
	AddressInfoList GetConnectAddresses(const std::string &hostname, Type socketType) const;

	/**
	*  Gets a list of addresses that can be used to listen to incoming connections on a socket of the provided type
	*  @param[in]	socketType	Type of the socket used to listen to incoming connections: UDP, TCP, or raw socket
	*  @returns		A list of addresses that can be iterated over
	*/
	AddressInfoList GetBindAddresses(Type socketType) const;

	virtual ~AddressResolver() = default;
private:
#if defined(__ORBIS__) || defined(__PROSPERO__)
	std::shared_ptr<MemoryPool> m_memoryPool;
	DnsResolver m_dnsResolver;
#endif // defined(__ORBIS__) || defined(__PROSPERO__)
};

typedef std::shared_ptr<AddressResolver> AddressResolverPtr;

struct AddressResolverException : public std::exception
{
	int m_errorCode;
	AddressResolverException(int errorCode) { m_errorCode = errorCode; }
};

} } }