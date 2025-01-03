/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
 */

@interface BCCloudKitController : NSObject <BDSCloudKitSupportSignOutDeleteWithoutInstance, BDSHandlesRemoteNotification> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    BUCoalescingCallBlock * _coalescedAttachment;
    BUCoalescingCallBlock * _coalescedChangeAttachment;
    <BCContainerConfiguration> * _configuration;
    CKContainer * _container;
    long long  _currentStatus;
    NSString * _currentUserIDName;
    bool  _didChangeContainer;
    bool  _enableCloudSync;
    bool  _gettingAccountInfo;
    NSMutableArray * _pendingGetAccountInfoCompletionBlocks;
    NSMutableArray * _pendingRequestUpdateAttachmentCompletionBlocks;
    BCCloudKitDatabaseController * _privateCloudDatabaseController;
    bool  _serviceMode;
    BCCloudKitTransactionManager * _transactionManager;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic, retain) BUCoalescingCallBlock *coalescedAttachment;
@property (nonatomic, retain) BUCoalescingCallBlock *coalescedChangeAttachment;
@property (nonatomic, retain) <BCContainerConfiguration> *configuration;
@property (nonatomic, retain) CKContainer *container;
@property (nonatomic) long long currentStatus;
@property (nonatomic, copy) NSString *currentUserIDName;
@property (nonatomic) bool didChangeContainer;
@property (nonatomic) bool enableCloudSync;
@property (nonatomic) bool gettingAccountInfo;
@property (nonatomic, readonly) NSMutableArray *pendingGetAccountInfoCompletionBlocks;
@property (nonatomic, readonly) NSMutableArray *pendingRequestUpdateAttachmentCompletionBlocks;
@property (retain) BCCloudKitDatabaseController *privateCloudDatabaseController;
@property (nonatomic) bool serviceMode;
@property (nonatomic, retain) BCCloudKitTransactionManager *transactionManager;

+ (id)databaseFolderURLForConfiguration:(id)arg1;
+ (void)deleteCloudDataWithCompletion:(id /* block */)arg1;
+ (id)instanceForCKNotification:(id)arg1;
+ (id)p_createDatabaseArchiveDirectoryForConfiguration:(id)arg1;
+ (id)p_privateDatabaseArchiveURLForConfiguration:(id)arg1;
+ (void)registerForSecureNotifications;
+ (id)secureSharedInstance;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_attachOrSignalFetchChangesTransaction:(id)arg1 reason:(id)arg2;
- (void)_reestablishSyncEngineSalt;
- (void)_reestablishSyncEngineSaltIfNeeded;
- (void)_updateAccountCacheWithCompletionBlock:(id /* block */)arg1;
- (id)accessQueue;
- (void)applicationDidBecomeActive;
- (void)aq_flushPendingGetAccountInfoCompletionBlocksWithWillRetryUpdateAttachment:(bool)arg1;
- (void)aq_requestUpdateAttachment;
- (void)aq_requestUpdateAttachmentWithCompletion:(id /* block */)arg1;
- (void)aq_setGettingAccountInfo:(bool)arg1 willRetryUpdateAttachment:(bool)arg2;
- (void)attachOrSignalFetchChangesTransaction:(id)arg1 reason:(id)arg2;
- (id)coalescedAttachment;
- (id)coalescedChangeAttachment;
- (id)configuration;
- (id)container;
- (long long)currentStatus;
- (id)currentUserIDName;
- (bool)didChangeContainer;
- (bool)enableCloudSync;
- (bool)gettingAccountInfo;
- (void)handleRemoteCKNotification:(id)arg1;
- (void)handleRemoteNotification:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (void)p_accountChanged:(id)arg1;
- (void)p_accountReallyChangedWithCompletion:(id /* block */)arg1;
- (void)p_flushPendingRequestUpdateAttachmentCompletionBlocks;
- (void)p_flushPendingRequestUpdateAttachmentCompletionBlocksWithAttached:(bool)arg1 reachable:(bool)arg2;
- (void)p_getAccountInfo;
- (void)p_getAccountInfoWithCompletion:(id /* block */)arg1;
- (void)p_getNecessaryAccountInfoFromContainer:(id)arg1 completion:(id /* block */)arg2;
- (void)p_identityChanged:(id)arg1;
- (void)p_testAccountChanged:(id)arg1;
- (void)p_updateAttachment;
- (id)pendingGetAccountInfoCompletionBlocks;
- (id)pendingRequestUpdateAttachmentCompletionBlocks;
- (id)privateCloudDatabaseController;
- (void)requestUpdateAttachmentWithCompletion:(id /* block */)arg1;
- (bool)serviceMode;
- (void)setAccessQueue:(id)arg1;
- (void)setCoalescedAttachment:(id)arg1;
- (void)setCoalescedChangeAttachment:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setContainer:(id)arg1;
- (void)setCurrentStatus:(long long)arg1;
- (void)setCurrentUserIDName:(id)arg1;
- (void)setDidChangeContainer:(bool)arg1;
- (void)setEnableCloudSync:(bool)arg1;
- (void)setEnableCloudSync:(bool)arg1 serviceMode:(bool)arg2;
- (void)setGettingAccountInfo:(bool)arg1;
- (void)setPrivateCloudDatabaseController:(id)arg1;
- (void)setServiceMode:(bool)arg1;
- (void)setTransactionManager:(id)arg1;
- (id)transactionManager;

@end
