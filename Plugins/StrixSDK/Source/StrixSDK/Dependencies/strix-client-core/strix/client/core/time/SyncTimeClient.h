#pragma once

#include <strix/client/core/RequestClient.h>
#include <strix/client/core/message/FailureMessage.h>
#include <strix/client/core/time/message/SyncTimeMessage.h>
#include <strix/client/core/time/message/SyncTimeResponse.h>

#include <chrono>

namespace strix { namespace client { namespace core { namespace time {

/**
 *  Client controller for time synchronization actions. Calculates a synchronized time between client and server
 */
class SyncTimeClient : public strix::client::core::RequestClient
{
public:
	SyncTimeClient();

	virtual ~SyncTimeClient() {}

	/** Get the round trip time.
	 *  @returns	The round trip time in milliseconds.
	 */
	int GetRTT();
	
	/**
	 *  Get the sync period between sync attempts
	 *  @returns	The sync period in milliseconds
	 */
	int GetSyncPeriod();

	/**
	 *  Set the sync period between sync attempts
	 *  @params	syncPeriod	The sync period in milliseconds
	 */
	void SetSyncPeriod(int syncPeriod);

	/**
	 *  Get the current synchronized time
	 *  @returns	The current time
	 */
	std::chrono::system_clock::time_point GetSynchronizedTime() const;

	/**
	 *  Called on a successful response from the server to a sync time request. Updates the current synchronized time
	 *  @param	result	The sync time response containing the time
	 */
	virtual void OnSyncTimeResponse(strix::client::core::request::RequestResult<message::SyncTimeResponsePtr> result);

	/**
	 *  Called on a failed response from the server to a sync time request
	 *  @param	result	The failure message
	 */
	virtual void OnSyncTimeFailed(strix::client::core::request::RequestResult<core::message::FailureMessagePtr> result);

	/**
	 *  Request a new synchronized time update if the sync period has passed
	 */
	void Update();

protected:

	/**
	 *  Resets the current synchronized time to the current time on this machine
	 */
	virtual void ResetData();

private:
	void SyncTime(message::SyncTimeMessagePtr message, request::RequestResultHandlerT<message::SyncTimeResponse> handler, request::RequestFailureHandler failureHandler, request::RequestConfigPtr config = nullptr);

private:
	std::chrono::system_clock::time_point m_lastSyncTime;
	message::SyncTimeMessagePtr m_syncTimeMessage;
	int m_syncPeriod;
	int m_RTT;
	int m_offset;
};

typedef std::shared_ptr<SyncTimeClient> SyncTimeClientPtr;

} } } }