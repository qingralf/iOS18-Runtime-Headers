/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
 */

@interface BCCloudKitDatabaseController : NSObject <BCCloudDataPrivacyDelegate> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSURL * _archiveURL;
    bool  _attachedToContainer;
    double  _backOffInterval;
    NSMutableSet * _changedRecordZoneIDs;
    BUCoalescingCallBlock * _coalescedArchive;
    BUCoalescingCallBlock * _coalescedZoneFetch;
    BCCloudKitConfiguration * _configuration;
    CKContainer * _container;
    NSString * _containerIdentifier;
    CKDatabase * _database;
    NSArray * _desiredRecordZoneIDs;
    bool  _fetchRecordZoneChangesSuccess;
    bool  _hasSubscription;
    NSMutableDictionary * _observers;
    NSData * _recordIDSalt;
    NSMutableDictionary * _recordZones;
    CKServerChangeToken * _serverChangeToken;
    bool  _serverFetchPostponed;
    NSMutableDictionary * _tokenStores;
    CKRecordID * _userRecordID;
    NSMapTable * _zoneObservers;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _zoneObserversLock;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic, copy) NSURL *archiveURL;
@property (nonatomic) bool attachedToContainer;
@property (nonatomic) double backOffInterval;
@property (nonatomic, retain) NSMutableSet *changedRecordZoneIDs;
@property (nonatomic, retain) BUCoalescingCallBlock *coalescedArchive;
@property (nonatomic, retain) BUCoalescingCallBlock *coalescedZoneFetch;
@property (nonatomic, retain) BCCloudKitConfiguration *configuration;
@property (nonatomic, retain) CKContainer *container;
@property (nonatomic, copy) NSString *containerIdentifier;
@property (nonatomic, retain) CKDatabase *database;
@property (nonatomic, copy) NSArray *desiredRecordZoneIDs;
@property (nonatomic) bool fetchRecordZoneChangesSuccess;
@property (nonatomic) bool hasSubscription;
@property (nonatomic, retain) NSMutableDictionary *observers;
@property (retain) NSData *recordIDSalt;
@property (nonatomic, retain) NSMutableDictionary *recordZones;
@property (nonatomic, retain) CKServerChangeToken *serverChangeToken;
@property (nonatomic) bool serverFetchPostponed;
@property (nonatomic, readonly, copy) NSString *subscriptionID;
@property (nonatomic, retain) NSMutableDictionary *tokenStores;
@property (nonatomic, retain) CKRecordID *userRecordID;
@property (nonatomic, retain) NSMapTable *zoneObservers;

+ (id)decodeRecordFromSystemFields:(id)arg1;
+ (id)encodeRecordSystemFields:(id)arg1;
+ (void)startInternetConnectionReachabilityNotifier;

- (void).cxx_destruct;
- (void)_deleteRecordZonesWithIDs:(id)arg1 qualityOfService:(long long)arg2 completion:(id /* block */)arg3;
- (id)accessQueue;
- (void)addObserver:(id)arg1 recordType:(id)arg2;
- (void)addObserver:(id)arg1 zoneID:(id)arg2;
- (id)appBundleIdentifier;
- (id)archiveURL;
- (void)attachToZones:(id)arg1 completion:(id /* block */)arg2;
- (bool)attachedToContainer;
- (double)backOffInterval;
- (id)changedRecordZoneIDs;
- (id)coalescedArchive;
- (id)coalescedZoneFetch;
- (id)configuration;
- (void)connectUserTo:(id)arg1 container:(id)arg2 updateSubscription:(bool)arg3 completion:(id /* block */)arg4 subscriptionCompletion:(id /* block */)arg5;
- (id)container;
- (id)containerIdentifier;
- (id)database;
- (id)desiredRecordZoneIDs;
- (void)detach;
- (void)detachWithError:(id)arg1 completion:(id /* block */)arg2;
- (id)diagnosticDatabaseInfo;
- (bool)establishedSalt;
- (void)fetchChangesWithCompletion:(id /* block */)arg1;
- (void)fetchRecordForRecordID:(id)arg1 completion:(id /* block */)arg2;
- (bool)fetchRecordZoneChangesSuccess;
- (void)getAttached:(id /* block */)arg1;
- (bool)hasSubscription;
- (id)initWithConfiguration:(id)arg1 archiveURL:(id)arg2;
- (void)invalidateSalt;
- (id)observers;
- (id)p_archiveToData;
- (void)p_createRecordIDSaltWithCompletion:(id /* block */)arg1;
- (void)p_createRecordZones:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)p_fetchDatabaseChanges:(id /* block */)arg1;
- (void)p_fetchRecordZoneChanges:(id)arg1 optionsByRecordZoneID:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)p_fetchRecordZoneChangesForRecordZoneIDs:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)p_fetchZoneChanges:(id /* block */)arg1;
- (void)p_informObserversOfAttachmentChange;
- (void)p_informObserversOfCompletedFetchOfZone:(id)arg1;
- (void)p_informObserversOfRecordsChanged:(id)arg1;
- (void)p_informObserversOfRecordsChanged:(id)arg1 forRecordType:(id)arg2;
- (void)p_informObserversOfSaltVersionIdentifierChanged:(id)arg1 forZones:(id)arg2 completion:(id /* block */)arg3;
- (void)p_internetReachabilityChanged:(id)arg1;
- (void)p_scheduleArchiveWithCompletion:(id /* block */)arg1;
- (void)p_subscribeWithCompletion:(id /* block */)arg1;
- (void)p_unarchive;
- (id)p_unarchiveFromData:(id)arg1;
- (void)p_unsubscribeToContainer:(id)arg1;
- (void)p_updateRetryParametersFromFetchZoneChangesOperationError:(id)arg1;
- (id)recordIDSalt;
- (id)recordNameFromRecordType:(id)arg1 identifier:(id)arg2;
- (void)recordZoneWithName:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)recordZones;
- (void)registerServerChangeTokenStore:(id)arg1 forZoneID:(id)arg2;
- (void)removeObserver:(id)arg1;
- (void)removeObserver:(id)arg1 recordType:(id)arg2;
- (id)saltedAndHashedIDFromLocalID:(id)arg1;
- (id)serverChangeToken;
- (bool)serverFetchPostponed;
- (void)setAccessQueue:(id)arg1;
- (void)setArchiveURL:(id)arg1;
- (void)setAttachedToContainer:(bool)arg1;
- (void)setBackOffInterval:(double)arg1;
- (void)setChangedRecordZoneIDs:(id)arg1;
- (void)setCoalescedArchive:(id)arg1;
- (void)setCoalescedZoneFetch:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setContainer:(id)arg1;
- (void)setContainerIdentifier:(id)arg1;
- (void)setDatabase:(id)arg1;
- (void)setDesiredRecordZoneIDs:(id)arg1;
- (void)setFetchRecordZoneChangesSuccess:(bool)arg1;
- (void)setHasSubscription:(bool)arg1;
- (void)setObservers:(id)arg1;
- (void)setRecordIDSalt:(id)arg1;
- (void)setRecordZones:(id)arg1;
- (void)setServerChangeToken:(id)arg1;
- (void)setServerFetchPostponed:(bool)arg1;
- (void)setTokenStores:(id)arg1;
- (void)setUserRecordID:(id)arg1;
- (void)setZoneObservers:(id)arg1;
- (id)subscriptionID;
- (id)tokenStores;
- (void)unregisterServerChangeTokenStore:(id)arg1;
- (id)userRecordID;
- (void)willAttachToContainer:(id)arg1 serviceMode:(bool)arg2 completion:(id /* block */)arg3;
- (id)zoneObservers;
- (void)zonesDeletedOrReset:(id)arg1 completion:(id /* block */)arg2;
- (void)zonesTemporarilyUnreadableWithError:(id)arg1 completion:(id /* block */)arg2;
- (void)zonesUnreadableDueToMissingD2DEncryptionIdentity:(id)arg1 completion:(id /* block */)arg2;

@end
