#pragma once

#include "CoreMinimal.h"
#include "StrixNotificationListenerObject.h"
#include "Components/ActorComponent.h"

#include "StrixNotificationListener.generated.h"

/** Component used for easy management of the callbacks (functions)
 *  executed when a notification arrives on the specified channel.
 *
 *  Does not have to be attached to a replicator for use.
 */
 /// \cond
UCLASS(ClassGroup = (Strix), meta = (BlueprintSpawnableComponent))
/// \endcond
class STRIXSDK_API UStrixNotificationListener : public UActorComponent
{
	GENERATED_BODY()

public:
	/** Delegate called when room context was opened
	 */
	UPROPERTY(BlueprintAssignable, Category = "Strix|Notifications")
	FStrixNotifierRoomContextOpenDelegate StrixRoomContextOpen;
	
	/** Delegate called when room join notification was received
	 */
	UPROPERTY(BlueprintAssignable, Category = "Strix|Notifications")
	FStrixNotifierRoomJoinNotificationDelegate StrixRoomJoinNotificationArrived;
	
	/** Delegate called when room leave notification was received
	 */
	UPROPERTY(BlueprintAssignable, Category = "Strix|Notifications")
	FStrixNotifierRoomLeaveNotificationDelegate StrixRoomLeaveNotificationArrived;
	
	/** Delegate called when room set notification was received
	 */
	UPROPERTY(BlueprintAssignable, Category = "Strix|Notifications")
	FStrixNotifierRoomSetNotificationDelegate StrixRoomSetNotificationArrived;
	
	/** Delegate called when room set member notification was received
	 */
	UPROPERTY(BlueprintAssignable, Category = "Strix|Notifications")
	FStrixNotifierRoomSetMemberNotificationDelegate StrixRoomSetMemberNotificationArrived;
	
	/** Delegate called when room kick notification was received
	 */
	UPROPERTY(BlueprintAssignable, Category = "Strix|Notifications")
	FStrixNotifierRoomKickNotificationDelegate StrixRoomKickNotificationArrived;
	
	/** Delegate called when room delete notification was received
	 */
	UPROPERTY(BlueprintAssignable, Category = "Strix|Notifications")
	FStrixNotifierRoomDeleteNotificationDelegate StrixRoomDeleteNotificationArrived;
	
	/** Delegate called when room context was closed
	 */
	UPROPERTY(BlueprintAssignable, Category = "Strix|Notifications")
	FStrixNotifierRoomContextClosedDelegate StrixRoomContextClosed;
	
	/** Delegate called when the room owner changes
	 */
	UPROPERTY(BlueprintAssignable, Category = "Strix|Notifications")
	FStrixNotifierRoomOwnerChangedNotificationDelegate StrixRoomOwnerChanged;
	
	/** Delegate called when room server disconnects
	 */
	UPROPERTY(BlueprintAssignable, Category = "Strix|Notifications")
	FStrixRoomServerDisconnectedDelegate StrixRoomServerDisconnected;
	
	/** Channel Id to use
	 */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, AdvancedDisplay, Category = "Strix Notifier")
	int32 ChannelId;

protected:
	void BeginPlay() override;
	void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

private:

	UPROPERTY()
	UStrixNotificationListenerObject* Listener;
};
