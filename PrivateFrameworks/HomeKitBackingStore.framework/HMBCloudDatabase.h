/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

@interface HMBCloudDatabase : HMFObject <HMBCloudPushObserver, HMFLogging> {
    id /* block */  _cloudZoneFactory;
    HMBCloudDatabaseConfiguration * _configuration;
    CKContainer * _container;
    HMBCloudCredentialsAvailabilityListener * _credentialsAvailabilityListener;
    <HMBCloudDatabaseDataSource> * _dataSource;
    NSOperationQueue * _databaseFetchOperationQueue;
    <HMBCloudDatabaseDelegate> * _delegate;
    NAFuture * _initialCloudSyncFuture;
    NSOperationQueue * _invitationOperationQueue;
    HMBLocalDatabase * _localDatabase;
    CKDatabase * _privateDatabase;
    HMBCloudDatabaseStateModel * _privateDatabaseState;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _propertyLock;
    CKDatabase * _publicDatabase;
    HMBCloudDatabaseStateModel * _publicDatabaseState;
    CKDatabase * _sharedDatabase;
    HMBCloudDatabaseStateModel * _sharedDatabaseState;
    HMBLocalZone * _stateZone;
    NSMutableDictionary * _zoneStateByZoneID;
}

@property (nonatomic, copy) id /* block */ cloudZoneFactory;
@property (nonatomic, readonly, copy) HMBCloudDatabaseConfiguration *configuration;
@property (nonatomic, readonly) CKContainer *container;
@property (nonatomic, readonly) CKContainerID *containerID;
@property (nonatomic, readonly) HMBCloudCredentialsAvailabilityListener *credentialsAvailabilityListener;
@property (nonatomic, readonly) <HMBCloudDatabaseDataSource> *dataSource;
@property (nonatomic, readonly) NSOperationQueue *databaseFetchOperationQueue;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <HMBCloudDatabaseDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NAFuture *initialCloudSyncFuture;
@property (nonatomic, readonly) NSOperationQueue *invitationOperationQueue;
@property (nonatomic, readonly) HMBLocalDatabase *localDatabase;
@property (nonatomic, readonly) <NAScheduler> *operationScheduler;
@property (nonatomic, readonly) CKDatabase *privateDatabase;
@property (nonatomic, retain) HMBCloudDatabaseStateModel *privateDatabaseState;
@property (nonatomic, readonly) NSSet *privateZoneIDs;
@property (nonatomic, readonly) CKDatabase *publicDatabase;
@property (nonatomic, retain) HMBCloudDatabaseStateModel *publicDatabaseState;
@property (nonatomic, readonly) NSSet *publicZoneIDs;
@property (nonatomic, readonly) CKDatabase *sharedDatabase;
@property (nonatomic, retain) HMBCloudDatabaseStateModel *sharedDatabaseState;
@property (nonatomic, readonly) NSSet *sharedZoneIDs;
@property (nonatomic, readonly) HMBLocalZone *stateZone;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSMutableDictionary *zoneStateByZoneID;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)_acceptInvitation:(id)arg1;
- (id)_openOrCreateZoneWithScope:(long long)arg1 recordZoneID:(id)arg2 delegate:(id)arg3 shouldCreate:(bool)arg4 configuration:(id)arg5 existingCloudZone:(id)arg6 error:(id*)arg7;
- (void)_performInitialCloudSync;
- (bool)_retryCloudKitOperationAfterError:(id)arg1 retryBlock:(id /* block */)arg2;
- (id)_updateAPSRegistration:(bool)arg1;
- (id)_zonesWithScope:(long long)arg1;
- (id)acceptInvitation:(id)arg1;
- (id)acceptInvitationWithShareMetadata:(id)arg1;
- (void)addContainerOperation:(id)arg1;
- (void)addDatabaseOperation:(id)arg1 forScope:(long long)arg2;
- (id)attributeDescriptions;
- (id /* block */)cloudZoneFactory;
- (id)configuration;
- (id)container;
- (id)containerID;
- (id)createPrivateZoneWithID:(id)arg1;
- (id)credentialsAvailabilityListener;
- (id)dataSource;
- (id)databaseFetchOperationQueue;
- (id)databaseStateForDatabaseScope:(long long)arg1;
- (id)delegate;
- (id)fetchCurrentUserRecordForDatabase:(id)arg1;
- (id)fetchParticipantWithLookupInfo:(id)arg1;
- (id)fetchShareMetadataForInvitation:(id)arg1;
- (id)fetchSubscriptionsInDatabase:(id)arg1;
- (id)fetchZonesWithIDs:(id)arg1 inDatabase:(id)arg2;
- (void)handleCreatedZoneIDs:(id)arg1;
- (void)handleRemovedZoneIDs:(id)arg1 userInitiated:(bool)arg2;
- (void)handleUpdatedZonesIDs:(id)arg1;
- (void)handler:(id)arg1 didReceiveCKNotification:(id)arg2;
- (void)handler:(id)arg1 didReceiveMessageWithUserInfo:(id)arg2;
- (id)initWithLocalDatabase:(id)arg1 configuration:(id)arg2;
- (id)initWithLocalDatabase:(id)arg1 stateZone:(id)arg2 container:(id)arg3 configuration:(id)arg4 databaseStateModelsByScope:(id)arg5 zoneStateModels:(id)arg6 credentialsAvailabilityListener:(id)arg7 dataSource:(id)arg8;
- (id)initialCloudSyncFuture;
- (id)invitationOperationQueue;
- (id)localDatabase;
- (id)logIdentifier;
- (bool)needsZoneCreationForZoneWithID:(id)arg1;
- (void)notifyDelegateOfError:(id)arg1 forOperation:(id)arg2;
- (id)openExistingPrivateZoneWithID:(id)arg1 configuration:(id)arg2 delegate:(id)arg3 error:(id*)arg4;
- (id)openExistingSharedZoneWithID:(id)arg1 configuration:(id)arg2 delegate:(id)arg3 error:(id*)arg4;
- (id)openOrCreatePrivateZoneWithID:(id)arg1 configuration:(id)arg2 delegate:(id)arg3 error:(id*)arg4;
- (id)operationConfigurationWithProcessingOptions:(id)arg1;
- (id)operationScheduler;
- (id)performCloudPullForScope:(long long)arg1;
- (id)performCodeOperationWithServiceName:(id)arg1 functionName:(id)arg2 request:(id)arg3 responseClass:(Class)arg4;
- (id)performInitialCloudSync;
- (id)privateDatabase;
- (id)privateDatabaseState;
- (id)privateZoneIDs;
- (id)publicDatabase;
- (id)publicDatabaseState;
- (id)publicZoneIDs;
- (id)pushSubscriptionsForDatabase:(id)arg1 subscriptionsToSave:(id)arg2 subscriptionIDsToRemove:(id)arg3;
- (id)registerPrivateSubscription:(id)arg1;
- (id)registerPrivateSubscriptionForExternalRecordType:(id)arg1;
- (id)registerSharedSubscriptionForExternalRecordType:(id)arg1;
- (id)registerSubscription:(id)arg1 forZoneWithID:(id)arg2;
- (id)registerSubscriptionForExternalRecordType:(id)arg1 databaseState:(id)arg2;
- (id)removePrivateZoneWithID:(id)arg1;
- (void)removeStateForZoneID:(id)arg1;
- (id)removeZoneWithID:(id)arg1;
- (bool)reopenOrRecreatePrivateZone:(id)arg1 error:(id*)arg2;
- (bool)retryCloudKitOperation:(id)arg1 afterError:(id)arg2 retryBlock:(id /* block */)arg3;
- (void)retryStartupBlock:(id /* block */)arg1;
- (id)serverChangeTokenForZoneWithID:(id)arg1;
- (void)setCloudZoneFactory:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInitialCloudSyncFuture:(id)arg1;
- (void)setPrivateDatabaseState:(id)arg1;
- (void)setPublicDatabaseState:(id)arg1;
- (void)setSharedDatabaseState:(id)arg1;
- (id)sharedDatabase;
- (id)sharedDatabaseState;
- (id)sharedZoneIDs;
- (id)shutdown;
- (id)stateZone;
- (id)subscriptionIDForCloudID:(id)arg1 recordType:(id)arg2;
- (id)subscriptionIDForZoneID:(id)arg1 recordType:(id)arg2;
- (id)subscriptionsForZoneWithID:(id)arg1;
- (id)synchronizeSharedZones;
- (id)synchronizeZoneStateForZoneIDs:(id)arg1;
- (id)unregisterPrivateSubscriptionForExternalRecordType:(id)arg1;
- (id)unregisterPrivateSubscriptionForSubscriptionID:(id)arg1;
- (id)unregisterSharedSubscriptionForExternalRecordType:(id)arg1;
- (id)unregisterSharedSubscriptionForSubscriptionID:(id)arg1;
- (id)unregisterSubscription:(id)arg1 forZoneWithID:(id)arg2;
- (void)updateNeedsZoneDeletion:(bool)arg1 forZoneWithID:(id)arg2;
- (void)updateRebuildStatus:(id)arg1 forZoneWithID:(id)arg2;
- (void)updateServerChangeToken:(id)arg1 forDatabaseWithScope:(long long)arg2;
- (void)updateServerChangeToken:(id)arg1 forZoneWithID:(id)arg2;
- (id)waitForAccountAvailability;
- (id)zoneStateByZoneID;

@end
