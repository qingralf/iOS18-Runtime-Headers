/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
 */

@interface SPOwnerSession : NSObject <SPMaintenanceConnectionProtocol, SPOwnerSessionPrivateProtocol, SPPersistentConnectionProtocol, SPSeparationMonitoringProtocol, SPTagSeparationProtocol, SPTrackingAvoidanceServiceProtocol> {
    SPOwnerSessionState * __ownerSessionState;
    NSSet * _allBeaconsCache;
    NSMutableDictionary * _batteryStatusCache;
    NSSet * _clientObservedBeacons;
    NSObject<OS_dispatch_source> * _connectionExpiryDispatchTimer;
    NSMutableDictionary * _darwinHandlers;
    SPOwnerSessionDelegatedLocation * _delegationUpdate;
    NSDate * _fetchLimit;
    NSDictionary * _locationCache;
    SPOwnerSessionLocationFetch * _locationFetch;
    NSSet * _locationSources;
    NSOperationQueue * _notificationQueue;
    <SPOwnerSessionXPCProtocol> * _proxy;
    NSObject<OS_dispatch_queue> * _queue;
    FMQueueSynchronizer * _queueSynchronizer;
    NSObject<OS_dispatch_source> * _registerIntentDispatchTimer;
    FMXPCServiceDescription * _serviceDescription;
    FMXPCSession * _session;
    SPBeaconManagerSimpleBeaconUpdateInterface * _simpleBeaconUpdateInterface;
    id /* block */  _tagSeparationBeaconsChangedBlock;
    FMTokenBucket * _tokenBucket;
    <SPOwnerSessionXPCProtocol> * _userAgentProxy;
    id /* block */  beaconAddedBlock;
    id /* block */  beaconRemovedBlock;
    id /* block */  beaconsChangedBlock;
    id /* block */  latestLocationsUpdatedBlock;
    id /* block */  maintainedBeaconsChangedBlock;
    id /* block */  maintainedUnknownBeaconsChangedBlock;
    id /* block */  ownerSessionStateUpdatedBlock;
}

@property (nonatomic, retain) SPOwnerSessionState *_ownerSessionState;
@property (nonatomic, readonly, copy) NSSet *allBeacons;
@property (nonatomic, retain) NSSet *allBeaconsCache;
@property (nonatomic, retain) NSMutableDictionary *batteryStatusCache;
@property (nonatomic, copy) id /* block */ beaconAddedBlock;
@property (nonatomic, copy) id /* block */ beaconRemovedBlock;
@property (nonatomic, copy) id /* block */ beaconsChangedBlock;
@property (nonatomic, retain) NSSet *clientObservedBeacons;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *connectionExpiryDispatchTimer;
@property (nonatomic, retain) NSMutableDictionary *darwinHandlers;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, retain) SPOwnerSessionDelegatedLocation *delegationUpdate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDate *fetchLimit;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ latestLocationsUpdatedBlock;
@property (nonatomic, retain) NSDictionary *locationCache;
@property (nonatomic, retain) SPOwnerSessionLocationFetch *locationFetch;
@property (nonatomic, copy) NSSet *locationSources;
@property (nonatomic, copy) id /* block */ maintainedBeaconsChangedBlock;
@property (nonatomic, copy) id /* block */ maintainedUnknownBeaconsChangedBlock;
@property (nonatomic, retain) NSOperationQueue *notificationQueue;
@property (nonatomic, readonly, copy) SPOwnerSessionState *ownerSessionState;
@property (nonatomic, copy) id /* block */ ownerSessionStateUpdatedBlock;
@property (nonatomic, retain) <SPOwnerSessionXPCProtocol> *proxy;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) FMQueueSynchronizer *queueSynchronizer;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *registerIntentDispatchTimer;
@property (nonatomic, retain) FMXPCServiceDescription *serviceDescription;
@property (nonatomic, retain) FMXPCSession *session;
@property (nonatomic, retain) SPBeaconManagerSimpleBeaconUpdateInterface *simpleBeaconUpdateInterface;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ tagSeparationBeaconsChangedBlock;
@property (nonatomic, retain) FMTokenBucket *tokenBucket;
@property (nonatomic, retain) <SPOwnerSessionXPCProtocol> *userAgentProxy;

- (void).cxx_destruct;
- (void)_cacheBatteryStatus:(unsigned char)arg1 beaconUUID:(id)arg2;
- (id)_enforceRateLimit;
- (void)_invalidate;
- (id)_ownerSessionState;
- (void)_unregisterDarwinNotificationName:(id)arg1;
- (void)_updateBatteryStatus:(unsigned char)arg1 beaconUUID:(id)arg2 completion:(id /* block */)arg3;
- (void)_updateOwnerSessionState;
- (void)acceptUTForBeaconUUID:(id)arg1;
- (void)activeCompanionWithCompletion:(id /* block */)arg1;
- (void)addBeaconChangedListener:(id)arg1 beaconUUID:(id)arg2 taskName:(id)arg3 commandIdentifier:(id)arg4 commandIssueDate:(id)arg5;
- (void)addSafeLocation:(id)arg1 completion:(id /* block */)arg2;
- (id)allBeacons;
- (id)allBeaconsCache;
- (void)allBeaconsWithCompletion:(id /* block */)arg1;
- (void)allObservationsForBeacon:(id)arg1 completion:(id /* block */)arg2;
- (void)assignSafeLocation:(id)arg1 beaconUUIDs:(id)arg2 completion:(id /* block */)arg3;
- (void)assignSafeLocation:(id)arg1 to:(id)arg2 completion:(id /* block */)arg3;
- (id)batteryStatusCache;
- (id /* block */)beaconAddedBlock;
- (void)beaconForIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)beaconForUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)beaconGroupForIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)beaconGroupsForUUIDs:(id)arg1 completion:(id /* block */)arg2;
- (id /* block */)beaconRemovedBlock;
- (void)beaconStoreStatusWithCompletion:(id /* block */)arg1;
- (void)beaconingIdentifierForMACAddress:(id)arg1 completion:(id /* block */)arg2;
- (id /* block */)beaconsChangedBlock;
- (void)beaconsToMaintainPersistentConnection:(id /* block */)arg1;
- (void)beaconsToMonitorForSeparation:(id /* block */)arg1;
- (void)clientConfigurationWithCompletion:(id /* block */)arg1;
- (id)clientObservedBeacons;
- (void)connectUsingMACAddress:(id)arg1 longTermKey:(id)arg2 completion:(id /* block */)arg3;
- (id)connectionExpiryDispatchTimer;
- (void)connectionExpiryTimerFired;
- (id)darwinHandlers;
- (void)dealloc;
- (void)delegatedLocationForContext:(id)arg1 completion:(id /* block */)arg2;
- (id)delegationUpdate;
- (void)didDetectUnauthorizedTrackingWithCompletion:(id)arg1 completion:(id /* block */)arg2;
- (void)didObserveUnauthorizedTrackingWithCompletion:(id)arg1 completion:(id /* block */)arg2;
- (void)didUpdateUnauthorizedTrackingWithCompletion:(id)arg1 completion:(id /* block */)arg2;
- (void)didWithdrawUnauthorizedTrackingWithCompletion:(id)arg1 completion:(id /* block */)arg2;
- (void)disableSeparationMonitoringForBeacon:(id)arg1 completion:(id /* block */)arg2;
- (void)disableSeparationMonitoringForBeacons:(id)arg1 completion:(id /* block */)arg2;
- (void)disableUTAppAlert:(bool)arg1 completion:(id /* block */)arg2;
- (void)disconnectFromMACAddress:(id)arg1 completion:(id /* block */)arg2;
- (void)enableSeparationMonitoringForBeacon:(id)arg1 completion:(id /* block */)arg2;
- (void)enableSeparationMonitoringForBeacons:(id)arg1 completion:(id /* block */)arg2;
- (id)executeCommand:(id)arg1;
- (void)executeCommand:(id)arg1 completion:(id /* block */)arg2;
- (id)executeUTPlaySoundCommand:(id)arg1;
- (void)fakeClassicPairingWithMACAddress:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchFindMyNetworkStatusForMACAddress:(id)arg1 completion:(id /* block */)arg2;
- (id)fetchLimit;
- (void)fetchSeparationMonitoringStatus:(id /* block */)arg1;
- (void)fetchUnauthorizedEncryptedPayload:(id)arg1 completion:(id /* block */)arg2;
- (void)finishBeaconFuture:(id)arg1 beaconUUID:(id)arg2;
- (void)finishBeaconGroupFuture:(id)arg1 command:(id)arg2 commandIssueDate:(id)arg3;
- (void)forceDistributeKeysWithCompletion:(id /* block */)arg1;
- (void)forceKeySyncForBeaconUUID:(id)arg1 lastObservationDate:(id)arg2 lastObservationIndex:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)forceLOIBasedSafeLocationRefresh:(id /* block */)arg1;
- (void)forceRePairingWithUUID:(id)arg1 partIds:(id)arg2 completion:(id /* block */)arg3;
- (void)forceUpdateKeyAlignmentRecordForUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)forceUpdateKeyMapsForUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)hintBasedIndexSearchForBeacon:(id)arg1 baseIndex:(id)arg2 hint:(unsigned char)arg3 completion:(id /* block */)arg4;
- (void)ignoreBeaconByAdvertisement:(id)arg1 until:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)ignoreBeaconByUUID:(id)arg1 until:(unsigned long long)arg2;
- (void)ignoreBeaconByUUID:(id)arg1 until:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)ignoreBeaconByUUID:(id)arg1 untilDate:(id)arg2 completion:(id /* block */)arg3;
- (void)ignoringUnauthorizedTrackingWithCompletion:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)invalidateRegisterIntentDispatchTimer;
- (void)isUTAppAlertDisabled:(id /* block */)arg1;
- (id /* block */)latestLocationsUpdatedBlock;
- (id)locationCache;
- (id)locationFetch;
- (void)locationForContext:(id)arg1 completion:(id /* block */)arg2;
- (id)locationSources;
- (void)locationsForBeacons:(id)arg1 completion:(id /* block */)arg2;
- (id /* block */)maintainedBeaconsChangedBlock;
- (void)maintainedBeaconsChangedWithBlock:(id /* block */)arg1;
- (id /* block */)maintainedUnknownBeaconsChangedBlock;
- (void)maintainedUnknownBeaconsChangedWithBlock:(id /* block */)arg1;
- (id /* block */)maintenanceConnectionUpdateBlock;
- (id)notificationQueue;
- (id)ownerSessionState;
- (id /* block */)ownerSessionStateUpdatedBlock;
- (void)peripheralConnectionMaterialForAccessoryIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)playUnauthorizedSoundOnBeaconByUUID:(id)arg1 completion:(id /* block */)arg2;
- (id)proxy;
- (void)publishSeparationEventForBeacons:(id)arg1 eventType:(long long)arg2 region:(id)arg3 completion:(id /* block */)arg4;
- (void)publishWildModeRecordsWithCompletion:(id /* block */)arg1;
- (id)queue;
- (id)queueSynchronizer;
- (void)rawSearchResultsForBeacon:(id)arg1 dateInterval:(id)arg2 completion:(id /* block */)arg3;
- (void)readAISMetadataFromBeaconIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)readAISMetadataFromMACAddress:(id)arg1 useOwnerControlPoint:(bool)arg2 completion:(id /* block */)arg3;
- (void)readRawAISMetadataFromBeaconIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)readRawAISMetadataFromMACAddress:(id)arg1 useOwnerControlPoint:(bool)arg2 completion:(id /* block */)arg3;
- (void)registerDarwinNotificationName:(id)arg1 block:(id /* block */)arg2;
- (id)registerIntentDispatchTimer;
- (void)registerIntentTimerFired;
- (id)remoteInterface;
- (void)removeBeacon:(id)arg1 completion:(id /* block */)arg2;
- (void)removeBeaconFromGroup:(id)arg1 completion:(id /* block */)arg2;
- (void)removeSafeLocation:(id)arg1 completion:(id /* block */)arg2;
- (void)requestLiveLocationForFriend:(id)arg1 completion:(id /* block */)arg2;
- (void)requestLiveLocationForUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)safeLocationsForSeparationMonitoring:(id /* block */)arg1;
- (void)sendRegisterIntentWithCompletion:(id /* block */)arg1;
- (void)sendUnregisterIntentWithCompletion:(id /* block */)arg1;
- (id)serviceDescription;
- (id)session;
- (void)setAllBeaconsCache:(id)arg1;
- (void)setBatteryStatusCache:(id)arg1;
- (void)setBeaconAddedBlock:(id /* block */)arg1;
- (void)setBeaconRemovedBlock:(id /* block */)arg1;
- (void)setBeaconsChangedBlock:(id /* block */)arg1;
- (void)setClientObservedBeacons:(id)arg1;
- (void)setConnectionExpiryDispatchTimer:(id)arg1;
- (void)setConnectionExpiryDispatchTimerWithInterval:(double)arg1;
- (void)setDarwinHandlers:(id)arg1;
- (void)setDelegatedLocationUpdateBlock:(id /* block */)arg1;
- (void)setDelegationUpdate:(id)arg1;
- (void)setDeviceEventUpdateBlock:(id /* block */)arg1;
- (void)setFetchLimit:(id)arg1;
- (void)setFindMyNetworkStatusForMACAddress:(id)arg1 status:(bool)arg2 completion:(id /* block */)arg3;
- (void)setInvalidationBlock:(id /* block */)arg1;
- (void)setLatestLocationsUpdatedBlock:(id /* block */)arg1;
- (void)setLocationCache:(id)arg1;
- (void)setLocationFetch:(id)arg1;
- (void)setLocationSources:(id)arg1;
- (void)setLocationUpdateBlock:(id /* block */)arg1;
- (void)setMaintainedBeaconsChangedBlock:(id /* block */)arg1;
- (void)setMaintainedUnknownBeaconsChangedBlock:(id /* block */)arg1;
- (void)setNotificationQueue:(id)arg1;
- (void)setOwnerSessionStateUpdatedBlock:(id /* block */)arg1;
- (void)setProxy:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setQueueSynchronizer:(id)arg1;
- (void)setRegisterIntentDispatchTimer:(id)arg1;
- (void)setRegisterIntentDispatchTimerWithInterval:(double)arg1;
- (void)setServiceDescription:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setSimpleBeaconUpdateInterface:(id)arg1;
- (void)setTagSeparationBeaconsChangedBlock:(id /* block */)arg1;
- (void)setTokenBucket:(id)arg1;
- (void)setUserAgentProxy:(id)arg1;
- (void)set_ownerSessionState:(id)arg1;
- (id)simpleBeaconUpdateInterface;
- (void)simulateAccessoryPairing:(id)arg1 name:(id)arg2 isAirPods:(bool)arg3 completion:(id /* block */)arg4;
- (void)standaloneBeaconsForUUIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)startRefreshing;
- (void)startRefreshingBeacons:(id)arg1;
- (void)startRefreshingBeaconsForSeparationMonitoringWithBlock:(id /* block */)arg1;
- (void)startRefreshingPersistentConnectionWithBlock:(id /* block */)arg1;
- (void)startRefreshingSafeLocationWithBlock:(id /* block */)arg1;
- (void)startRefreshingSeparationMonitoringState:(id /* block */)arg1;
- (void)startRefreshingTagSeparationWithBlock:(id /* block */)arg1;
- (void)startUpdatingApplicationBeaconsWithContext:(id)arg1 collectionDifference:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)startUpdatingMaintenanceConnection;
- (void)stopFetchingUnauthorizedEncryptedPayloadWithCompletion:(id /* block */)arg1;
- (void)stopRefreshing;
- (void)stopRefreshingBeaconsForSeparationMonitoringWithBlock;
- (void)stopRefreshingPersistentConnection;
- (void)stopRefreshingSafeLocations;
- (void)stopRefreshingSeparationMonitoringState;
- (void)stopRefreshingTagSeparation;
- (void)stopUpdatingApplicationBeaconsWithCompletion:(id /* block */)arg1;
- (void)subscribeAndFetchLocationForContext:(id)arg1 completion:(id /* block */)arg2;
- (void)subscribeDelegatedLocationUpdatesForContext:(id)arg1 completion:(id /* block */)arg2;
- (id /* block */)tagSeparationBeaconsChangedBlock;
- (void)tagSeparationStateChanged:(id)arg1 beaconUUID:(id)arg2 completion:(id /* block */)arg3;
- (void)tagSeparationStateChanged:(id)arg1 beaconUUID:(id)arg2 location:(id)arg3 completion:(id /* block */)arg4;
- (id)tokenBucket;
- (void)unacceptedBeaconsWithCompletion:(id /* block */)arg1;
- (void)unassignSafeLocation:(id)arg1 beaconUUID:(id)arg2 completion:(id /* block */)arg3;
- (void)unassignSafeLocation:(id)arg1 beaconUUIDs:(id)arg2 completion:(id /* block */)arg3;
- (void)unauthorizedTrackingTypeWithCompletion:(id)arg1 completion:(id /* block */)arg2;
- (void)unknownBeaconsForUUIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)unregisterDarwinNotificationName:(id)arg1;
- (void)unsubscribeDelegatedLocationUpdatesWithCompletion:(id /* block */)arg1;
- (void)unsubscribeLocationUpdatesWithCompletion:(id /* block */)arg1;
- (void)updateAllBeacons;
- (void)updateBatteryStatus:(unsigned char)arg1 beaconUUID:(id)arg2 completion:(id /* block */)arg3;
- (void)updateBeaconObservations:(id)arg1 completion:(id /* block */)arg2;
- (void)updateConnectionExpiryDispatchTimerWithBeacons:(id)arg1;
- (void)updateSafeLocation:(id)arg1 completion:(id /* block */)arg2;
- (id)userAgentProxy;
- (void)waitForBeaconStoreAvailableWithCompletion:(id /* block */)arg1;

@end
