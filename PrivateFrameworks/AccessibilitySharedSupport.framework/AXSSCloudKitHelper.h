/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
 */

@interface AXSSCloudKitHelper : NSObject <APSConnectionDelegate> {
    NSMutableArray * _accumulatedQueuedData;
    APSConnection * _apsConnection;
    NSObject<OS_dispatch_semaphore> * _cloudKitQueueSemaphore;
    NSObject<OS_dispatch_queue> * _cloudkitQueue;
    CKContainer * _container;
    NSString * _containerIdentifier;
    CKDatabase * _database;
    bool  _isProtectedDataAvailable;
    NSURL * _largeBlobDirectoryURL;
    NSError * _lastInitializationError;
    NSManagedObjectContext * _managedObjectContext;
    bool  _observeLocalDatabaseChanges;
    NSPersistentStoreCoordinator * _observedCoordinator;
    NSPersistentStore * _observedStore;
    CKRecordZone * _recordZone;
    CKRecordZoneSubscription * _zoneSubscription;
}

@property (nonatomic, readonly) APSConnection *apsConnection;
@property (nonatomic, readonly) NSObject<OS_dispatch_semaphore> *cloudKitQueueSemaphore;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *cloudkitQueue;
@property (nonatomic, readonly) CKContainer *container;
@property (nonatomic, readonly) NSString *containerIdentifier;
@property (nonatomic, readonly) CKDatabase *database;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isProtectedDataAvailable;
@property (nonatomic, readonly) NSURL *largeBlobDirectoryURL;
@property (nonatomic, readonly) NSError *lastInitializationError;
@property (nonatomic, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic) bool observeLocalDatabaseChanges;
@property (nonatomic, readonly) NSPersistentStoreCoordinator *observedCoordinator;
@property (nonatomic, readonly) NSPersistentStore *observedStore;
@property (nonatomic, readonly) CKRecordZone *recordZone;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CKRecordZoneSubscription *zoneSubscription;

- (void).cxx_destruct;
- (bool)_checkAccountStatus:(id*)arg1;
- (bool)_createSchemaIfNecessary:(id*)arg1;
- (bool)_createZoneIfNecessary:(id*)arg1;
- (void)_initializeCloudkitForObservedStore;
- (void)_processAccumulatedQueueData;
- (void)_setApsConnection:(id)arg1;
- (void)_setContainer:(id)arg1;
- (void)_setDatabase:(id)arg1;
- (void)_setObservedStore:(id)arg1 observedCoordinator:(id)arg2;
- (bool)_setupPushConnection:(id*)arg1;
- (bool)_setupZoneSubscriptionIfNecessary:(id*)arg1;
- (id)apsConnection;
- (id)apsEnvironment;
- (void)beginWatchingForChanges;
- (void)clearRecordsForPurging:(id)arg1;
- (id)cloudKitPushTopic;
- (id)cloudKitQueueSemaphore;
- (id)cloudkitQueue;
- (void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (id)container;
- (id)containerIdentifier;
- (id)createCKRecordFromObject:(id)arg1;
- (id)database;
- (void)dealloc;
- (void)fetchChangesAndUpdateObservedStore;
- (id)initWithContainerIdentifier:(id)arg1 zoneName:(id)arg2;
- (bool)isProtectedDataAvailable;
- (id)largeBlobDirectoryURL;
- (id)lastInitializationError;
- (void)logMessage:(id)arg1;
- (Class)managedObjectClass;
- (id)managedObjectContext;
- (void)managedObjectContextDidSave:(id)arg1;
- (void)observeChangesForManagedContext:(id)arg1;
- (bool)observeLocalDatabaseChanges;
- (id)observedCoordinator;
- (id)observedStore;
- (void)openTransactionWithLabel:(id)arg1 andExecuteWorkBlock:(id /* block */)arg2;
- (void)processAccumulatedChangesForServerChangeToken:(id)arg1 withAccumulatedUpdates:(id)arg2 andDeletes:(id)arg3 inTransaction:(id)arg4;
- (void)processLocalChangesAndPush;
- (void)processRecordDeletionsFromServer:(id)arg1;
- (void)processServerUpdateChanges:(id)arg1 moc:(id)arg2 recordNameToManagedObject:(id)arg3;
- (id)recordType;
- (id)recordZone;
- (void)retrieveLocalChangesForCloud:(id /* block */)arg1;
- (id)serverChangeTokenMetadataKey;
- (void)setIsProtectedDataAvailable:(bool)arg1;
- (void)setObserveLocalDatabaseChanges:(bool)arg1;
- (bool)shouldExportManagedObject:(id)arg1;
- (id)testRecordForSchemaCreation:(id)arg1;
- (id)zoneCreatedKey;
- (id)zoneSubscription;
- (id)zoneSubscriptionKey;

@end
