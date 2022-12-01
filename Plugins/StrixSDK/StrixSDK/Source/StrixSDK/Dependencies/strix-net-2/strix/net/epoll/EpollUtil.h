#pragma once

#include <strix/net/socket/Socket.h>
#include <strix/net/socket/Types.h>
#include <strix/net/Pch.h>

#if defined(__ORBIS__) || defined(__PROSPERO__)
#define EPOLLIN SCE_NET_EPOLLIN
#define EPOLLOUT SCE_NET_EPOLLOUT
#define EPOLLERR SCE_NET_EPOLLERR
#define EPOLLHUP SCE_NET_EPOLLHUP
#define EPOLLDESCID SCE_NET_EPOLLDESCID

// TODO: port edge-trggered code
#define EPOLLET 0

#define EPOLL_CTL_MOD SCE_NET_EPOLL_CTL_MOD
#define EPOLL_CTL_ADD SCE_NET_EPOLL_CTL_ADD
#define EPOLL_CTL_DEL SCE_NET_EPOLL_CTL_DEL

typedef SceNetId EpollQueueId;
typedef SceNetEpollEvent EpollEvent;
#else
#include <sys/epoll.h>
#include <sys/ioctl.h>

typedef int EpollQueueId;
typedef epoll_event EpollEvent;
#endif

namespace strix { namespace net { namespace socket {

#if defined(__ORBIS__) || defined(__PROSPERO__)
class EpollUtil
{
public:
	static int Wait(EpollQueueId queueId, EpollEvent* events, int maxEvents, int timeout)
	{
		return sceNetEpollWait(queueId, events, maxEvents, timeout);
	}

	static int Control(EpollQueueId queueId, int operation, Descriptor socketDescriptor, EpollEvent* event)
	{
		return sceNetEpollControl(queueId, operation, socketDescriptor, event);
	}

	static EpollQueueId Create()
	{
		return sceNetEpollCreate("epoll", 0);
	}

	static int Destroy(EpollQueueId queueId)
	{
		return sceNetEpollDestroy(queueId);
	}
};
#else
static const int MAX_EVENTS = 10;

class EpollUtil
{
public:
	static int Wait(EpollQueueId queueId, EpollEvent* events, int maxEvents, int timeout)
	{
		return epoll_wait(queueId, events, maxEvents, timeout);
	}

	static int Control(EpollQueueId queueId, int operation, Descriptor socketDescriptor, EpollEvent* event)
	{
		return epoll_ctl(queueId, operation, socketDescriptor, event);
	}

	static EpollQueueId Create()
	{
		return epoll_create(MAX_EVENTS);
	}

	static int Destroy(EpollQueueId queueId)
	{
		return close(queueId);
	}
};
#endif
} } }