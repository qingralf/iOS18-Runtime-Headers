/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StatusKitAgentCore.framework/StatusKitAgentCore
 */

@interface SKADatabaseProvider : NSObject <SKADatabaseProviding> {
    bool  _accountCheckCompleted;
    bool  _accountSupportsDeviceToDeviceEncryption;
    CKContainer * _ckContainer;
    bool  _cloudKitSetupCompleted;
    <SKADatabaseProvidingDelegate> * _delegate;
    bool  _hasInitialCloudKitImportOccurred;
    NSObject<OS_dispatch_queue> * _historyProcessingQueue;
    NSMutableArray * _importCompletionHandlers;
    NSPersistentContainer * _persistentContainer;
}

@property (nonatomic) bool accountCheckCompleted;
@property (nonatomic) bool accountSupportsDeviceToDeviceEncryption;
@property (nonatomic, retain) CKContainer *ckContainer;
@property (nonatomic) bool cloudKitSetupCompleted;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <SKADatabaseProvidingDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasInitialCloudKitImportOccurred;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *historyProcessingQueue;
@property (nonatomic, retain) NSMutableArray *importCompletionHandlers;
@property (nonatomic, retain) NSPersistentContainer *persistentContainer;
@property (readonly) Class superclass;

+ (id)logger;

- (void).cxx_destruct;
- (id)_persistentCloudKitContainerEventTypeToString:(long long)arg1;
- (bool)accountCheckCompleted;
- (bool)accountSupportsDeviceToDeviceEncryption;
- (id)appTransactionAuthorName;
- (id)ckContainer;
- (id)ckContainerIdentifier;
- (id)cloudDatabaseFileURL;
- (bool)cloudKitSetupCompleted;
- (id)cloudPersistentStoreDescription;
- (id)containerName;
- (id)createCkContainer;
- (id)createPersistentContainer;
- (id)databaseDirectoryURL;
- (bool)databaseHasBeenCreated;
- (id)delegate;
- (void)deviceToDeviceEncryptedDatabaseCapableWithCompletion:(id /* block */)arg1;
- (id)existingManagedObjectWithID:(id)arg1 managedObjectContext:(id)arg2;
- (id)extractModifiedChannelFromPersistentStoreRemoteChangeForChannel:(id)arg1 managedObjectContext:(id)arg2;
- (id)extractModifiedChannelFromPersistentStoreRemoteChangeForReceivedInvitation:(id)arg1 managedObjectContext:(id)arg2;
- (id)fileManager;
- (void)handleManateeAvailabilityNotification:(id)arg1;
- (void)handlePersistentStoreEventChangedNotification:(id)arg1;
- (void)handlePersistentStoreRemoteChangeNotification:(id)arg1;
- (bool)hasInitialCloudKitImportOccurred;
- (void)hasInitialCloudKitImportOccurred:(id /* block */)arg1;
- (id)historyProcessingQueue;
- (id)importCompletionHandlers;
- (id)initWithDelegate:(id)arg1;
- (id)lastProcessedPersistentHistoryToken;
- (id)lastProcessedPersistentHistoryTokenFileURL;
- (id)localDatabaseFileURL;
- (id)localPersistentStoreDescription;
- (id)newBackgroundContext;
- (bool)overrideDeviceEncryptionCheck;
- (bool)performInitialImportQueryWithContainer:(id)arg1;
- (id)persistentContainer;
- (void)processPersistentStoreRemoteChanges;
- (void)setAccountCheckCompleted:(bool)arg1;
- (void)setAccountSupportsDeviceToDeviceEncryption:(bool)arg1;
- (void)setCkContainer:(id)arg1;
- (void)setCloudKitSetupCompleted:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHasInitialCloudKitImportOccurred:(bool)arg1;
- (void)setHistoryProcessingQueue:(id)arg1;
- (void)setImportCompletionHandlers:(id)arg1;
- (void)setLastProcessedPersistentHistoryToken:(id)arg1;
- (void)setPersistentContainer:(id)arg1;

@end
