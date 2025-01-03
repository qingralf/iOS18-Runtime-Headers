/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy
 */

@interface HMDCloudZone : HMFObject {
    HMDBackingStoreCacheZone * _backingStoreZone;
    HMDCloudCache * _cache;
    bool  _decrypted;
    bool  _recordsAvailable;
    HMDCloudGroup * _rootGroup;
    CKServerChangeToken * _serverChangeToken;
    CKRecordZoneSubscription * _subscription;
    NSString * _subscriptionName;
    CKRecordZone * _zone;
}

@property (nonatomic, retain) HMDBackingStoreCacheZone *backingStoreZone;
@property (nonatomic) HMDCloudCache *cache;
@property (getter=hasDecrypted, nonatomic) bool decrypted;
@property (nonatomic, readonly) NSString *owner;
@property (nonatomic, readonly) CKRecordID *privateZoneRootRecordID;
@property (getter=doesProcessChangeEvenIfDecryptionFails, nonatomic, readonly) bool processChangeEvenIfDecryptionFails;
@property (getter=hasRecordsAvailable, nonatomic) bool recordsAvailable;
@property (nonatomic, retain) HMDCloudGroup *rootGroup;
@property (nonatomic, retain) CKServerChangeToken *serverChangeToken;
@property (getter=hasServerTokenAvailable, nonatomic, readonly) bool serverTokenAvailable;
@property (nonatomic, retain) CKRecordZoneSubscription *subscription;
@property (nonatomic, retain) NSString *subscriptionName;
@property (nonatomic, retain) CKRecordZone *zone;
@property (nonatomic, readonly) NSString *zoneRootRecordName;

+ (void)createZoneWithName:(id)arg1 rootRecordName:(id)arg2 subscriptionName:(id)arg3 owner:(id)arg4 cacheZone:(id)arg5 cloudCache:(id)arg6 completion:(id /* block */)arg7;
+ (id)shortDescription;
+ (id)zoneRootRecordName;
+ (id)zoneSubscriptionName:(id)arg1;

- (void).cxx_destruct;
- (id)__cloudRecordWithObjectID:(id)arg1;
- (void)_initializeServerChangeToken:(id)arg1;
- (void)_initializeSubscription:(id)arg1;
- (void)addCloudRecord:(id)arg1 ownerID:(id)arg2;
- (void)allDescendentsCloudRecordsForParentID:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)backingStoreZone;
- (id)cache;
- (id)cloudRecordWithName:(id)arg1;
- (void)cloudRecordWithName:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)cloudRecordWithNames:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)cloudRecordWithObjectID:(id)arg1;
- (void)cloudRecordWithObjectID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)cloudRecordWithObjectIDs:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)cloudRecordsForParentID:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)createCloudRecordWithFetchResult:(id)arg1;
- (id)createCloudRecordWithObjectID:(id)arg1 recordName:(id)arg2;
- (id)createCloudZoneChangeTemporaryCache:(bool)arg1;
- (void)deleteCloudRecord:(id)arg1;
- (void)deleteCloudRecordNames:(id)arg1;
- (void)deleteZone;
- (id)description;
- (bool)doesProcessChangeEvenIfDecryptionFails;
- (void)fetchAllObjects:(id /* block */)arg1;
- (void)fetchMigratedObjects:(id /* block */)arg1;
- (bool)hasDecrypted;
- (bool)hasRecordsAvailable;
- (bool)hasServerTokenAvailable;
- (id)init;
- (id)initWithBackingStoreCacheZone:(id)arg1 cloudCache:(id)arg2;
- (bool)isRootCloudRecord:(id)arg1;
- (bool)isRootRecord:(id)arg1;
- (void)markMigratedObjectsAsMigrated;
- (id)owner;
- (id)privateZoneRootRecordID;
- (id)rootGroup;
- (id)serverChangeToken;
- (void)setBackingStoreZone:(id)arg1;
- (void)setCache:(id)arg1;
- (void)setDecrypted:(bool)arg1;
- (void)setRecordsAvailable:(bool)arg1;
- (void)setRootGroup:(id)arg1;
- (void)setServerChangeToken:(id)arg1;
- (void)setSubscription:(id)arg1;
- (void)setSubscriptionName:(id)arg1;
- (void)setZone:(id)arg1;
- (id)shortDescription;
- (id)subscription;
- (id)subscriptionName;
- (void)updateCloudRecord:(id)arg1;
- (void)updateCloudRecord:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateCurrentServerChangeToken;
- (void)updateServerChangeToken:(id)arg1;
- (id)zone;
- (id)zoneRootRecordName;

@end
