/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPSharedTripService : NSObject <MSPSharedTripContactControllerDelegate, MSPSharedTripXPCClient, MSPSharedTripXPCServer> {
    GCDTimer * _blockListCoalescingTimer;
    id  _blockListMonitoringObserver;
    NSObject<OS_dispatch_group> * _checkinDispatchGroup;
    bool  _confirmedMapsIsInstalled;
    NSXPCConnection * _connection;
    bool  _connectionError;
    unsigned long long  _connectionRetryCounter;
    NSObject<OS_dispatch_queue> * _isolationQueue;
    MSPMapsPaths * _mapsPaths;
    bool  _networkReachable;
    unsigned long long  _permissions;
    NSMutableArray * _receivedTrips;
    GEOObserverHashTable * _receivingObservers;
    NSDate * _reconnectionBackoffUntilDate;
    GEOObserverHashTable * _sendingObservers;
    id  _serverDisabledDefaultListener;
    MSPSharedTripContactController * _sharingContactController;
    NSString * _sharingGroupIdentifier;
    MSPSharedTripSharingIdentity * _sharingIdentity;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _sharingIdentityLock;
    NSMutableDictionary * _subscriptionTokensByTripID;
    id  _userDisabledDefaultListener;
}

@property (nonatomic, readonly) bool canAddReceivers;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool entitledToReceiveTrips;
@property (nonatomic, readonly) bool entitledToShareTrip;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *receivedTrips;
@property (nonatomic, readonly) NSArray *receivers;
@property (nonatomic, readonly) MSPSharedTripSharingIdentity *sharingIdentity;
@property (readonly) Class superclass;

+ (bool)_supportsPassingClosureReasons;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_addSubscriptionTokenForTripID:(id)arg1;
- (void)_addTestTripsTo:(id)arg1;
- (void)_blockSharedTrip:(id)arg1;
- (unsigned long long)_capabilityTypeForContact:(id)arg1 serviceName:(id*)arg2 isActiveReceiver:(bool*)arg3;
- (void)_checkBlockList;
- (void)_checkEnabledState;
- (void)_checkin;
- (void)_checkinWithCompletion:(id /* block */)arg1;
- (void)_clearBlockedTripIdentifiers;
- (void)_fetchActiveHandlesWithCompletion:(id /* block */)arg1;
- (void)_fetchRequiresUserConfirmationOfSharingIdentityWithCompletion:(id /* block */)arg1;
- (void)_fetchSharedTripsWithCompletion:(id /* block */)arg1;
- (void)_fetchSharingIdentityWithCompletion:(id /* block */)arg1;
- (void)_handleCheckinWithSharingIdentity:(id)arg1 activeRecipients:(id)arg2 serviceNamesByHandle:(id)arg3 receivedTrips:(id)arg4 permissions:(unsigned long long)arg5;
- (id)_insertOrUpdateTrip:(id)arg1;
- (bool)_isMapsInstalled;
- (void)_networkReachabilityChanged:(id)arg1;
- (void)_openConnectionIfNeeded;
- (void)_performBlockAfterInitialConnection:(id /* block */)arg1;
- (void)_performBlockAfterInitialSync:(id /* block */)arg1;
- (void)_performBlockWhenCheckinCompleted:(id /* block */)arg1;
- (void)_purgeExpiredBlockedTripIdentifiers;
- (void)_purgeToken:(id)arg1 forTripID:(id)arg2;
- (id)_receivers;
- (id)_remoteObjectProxy;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)_reportUserConfirmationOfSharingIdentity:(id)arg1 completion:(id /* block */)arg2;
- (void)_resetCheckinIdentityAndPermissions;
- (void)_scheduleCoalescedBlockListCheckIfNeeded;
- (bool)_serviceCanAttemptConnection:(id*)arg1;
- (void)_startMonitoringSystemBlockListIfNeeded;
- (void)_startSharingTripWithContacts:(id)arg1 capabilityType:(unsigned long long)arg2 serviceName:(id)arg3 completion:(id /* block */)arg4;
- (void)_startSharingTripWithMessagesGroup:(id)arg1 completion:(id /* block */)arg2;
- (void)_startSharingWithContact:(id)arg1 completion:(id /* block */)arg2;
- (void)_stopAllSharingWithReason:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)_stopMonitoringSystemBlockList;
- (void)_stopSharingTripWithContacts:(id)arg1 reason:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)_stopSharingTripWithMessagesGroup:(id)arg1 reason:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)_stopSharingTripWithReason:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)_stopSharingWithContact:(id)arg1 reason:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)_subscribeToSharedTripUpdatesWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)_subscriptionTokenDidInvalidate:(id)arg1 forTripID:(id)arg2;
- (id)_subscriptionTokensForTripID:(id)arg1 createIfNeeded:(bool)arg2;
- (bool)_supportsArchivingSharingState;
- (bool)_supportsMonitoringBlockList;
- (void)_systemBlockListDidUpdate;
- (void)_validateCurrentConfigurationWithCompletion:(id /* block */)arg1;
- (void)addReceivingObserver:(id)arg1;
- (void)addSendingObserver:(id)arg1;
- (id)archivedSharingState;
- (void)blockSharedTrip:(id)arg1;
- (void)blockSharedTripWithIdentifier:(id)arg1;
- (bool)canAddReceivers;
- (unsigned long long)capabilityTypeForContact:(id)arg1 serviceName:(id*)arg2 isActiveReceiver:(bool*)arg3;
- (void)checkin;
- (void)checkinWithCompletion:(id /* block */)arg1;
- (void)clearBlockedTripIdentifiers;
- (id)contactsFromArchivedTripSharingState:(id)arg1;
- (void)dealloc;
- (void)destinationDidUpdateForSharedTrip:(id)arg1;
- (void)destinationReachedDidUpdateForSharedTrip:(id)arg1;
- (bool)entitledToReceiveTrips;
- (bool)entitledToShareTrip;
- (void)etaDidUpdateForSharedTrip:(id)arg1;
- (void)fetchActiveHandlesWithCompletion:(id /* block */)arg1;
- (void)fetchRequiresUserConfirmationOfSharingIdentityWithCompletion:(id /* block */)arg1;
- (void)fetchSharedTripsWithCompletion:(id /* block */)arg1;
- (void)fetchSharingIdentityWithCompletion:(id /* block */)arg1;
- (id)init;
- (bool)isSharingWithContact:(id)arg1;
- (void)performBlockAfterInitialConnection:(id /* block */)arg1;
- (void)performBlockAfterInitialSync:(id /* block */)arg1;
- (void)purgeExpiredBlockedTripIdentifiers;
- (void)purgeToken:(id)arg1 forTripID:(id)arg2;
- (id)receivedTrips;
- (id)receivers;
- (void)refreshReceivedTripsWithCompletion:(id /* block */)arg1;
- (void)refreshSharingIdentityWithCompletion:(id /* block */)arg1;
- (void)removeReceivingObserver:(id)arg1;
- (void)removeSendingObserver:(id)arg1;
- (void)reportUserConfirmationOfSharingIdentity:(id)arg1 completion:(id /* block */)arg2;
- (void)routeDidUpdateForSharedTrip:(id)arg1;
- (void)sharedTripContactController:(id)arg1 didUpdateActiveContactsValues:(id)arg2;
- (void)sharedTripDidBecomeAvailable:(id)arg1;
- (void)sharedTripDidBecomeUnavailable:(id)arg1;
- (void)sharedTripDidClose:(id)arg1;
- (void)sharedTripDidStartSharingWithIdentifier:(id)arg1;
- (void)sharedTripDidUpdateRecipients:(id)arg1 withServices:(id)arg2;
- (void)sharedTripInvalidatedWithError:(id)arg1;
- (id)sharingIdentity;
- (void)sharingIdentityDidChange:(id)arg1;
- (void)startSharingTripWithContacts:(id)arg1 capabilityType:(unsigned long long)arg2 serviceName:(id)arg3 completion:(id /* block */)arg4;
- (void)startSharingTripWithMessagesGroup:(id)arg1 completion:(id /* block */)arg2;
- (void)startSharingWithContact:(id)arg1 completion:(id /* block */)arg2;
- (void)stopAllSharingWithCompletion:(id /* block */)arg1;
- (void)stopAllSharingWithReason:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)stopSharingTripWithContacts:(id)arg1 reason:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)stopSharingTripWithMessagesGroup:(id)arg1 reason:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)stopSharingTripWithReason:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)stopSharingWithContact:(id)arg1 completion:(id /* block */)arg2;
- (void)stopSharingWithContact:(id)arg1 reason:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)subscribeToSharedTripUpdatesWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)unsubscribeFromSharedTripUpdatesWithIdentifier:(id)arg1 completion:(id /* block */)arg2;

@end
