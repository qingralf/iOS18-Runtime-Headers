/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDCKMessageSyncController : IMDCKAbstractSyncController {
    IMDCKMessageSyncCKOperationFactory * _CKOperationFactory;
    CKServerChangeToken * _archivedRecordSyncToken;
    NSObject<OS_dispatch_queue> * _ckQueue;
    unsigned long long  _deviceConditionsToCheck;
    bool  _encounteredIncompatibleMessage;
    IMDRecordZoneManager * _recordZoneManager;
    <SyncTokenStoreProviding> * _syncTokenStore;
    NSMutableDictionary * _visitedChats;
}

@property (nonatomic, retain) IMDCKMessageSyncCKOperationFactory *CKOperationFactory;
@property (nonatomic, retain) CKServerChangeToken *archivedRecordSyncToken;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *ckQueue;
@property (nonatomic) unsigned long long deviceConditionsToCheck;
@property (nonatomic) bool encounteredIncompatibleMessage;
@property (nonatomic, retain) CKServerChangeToken *latestSyncToken;
@property (nonatomic, retain) IMDRecordZoneManager *recordZoneManager;
@property (nonatomic, retain) <SyncTokenStoreProviding> *syncTokenStore;
@property (nonatomic, retain) NSMutableDictionary *visitedChats;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)CKOperationFactory;
- (id)_changeTokenKey;
- (id)_chatRegistry;
- (id)_ckUtilitiesInstance;
- (id)_constructMessageRecordIDUsingTombStoneDictionary:(id)arg1;
- (id)_copyRecordIDsToDeleteWithLimit:(unsigned long long)arg1;
- (void)_deleteMessagesWithRecordIDs:(id)arg1 completion:(id /* block */)arg2;
- (bool)_deviceConditionsAllowsMessageSyncForActivity:(id)arg1 deviceConditionsToCheck:(unsigned long long)arg2 currentBatchCount:(long long)arg3 maxBatchCount:(long long)arg4;
- (bool)_deviceConditionsAllowsMessageSyncForCurrentBatchCount:(long long)arg1 maxBatchCount:(long long)arg2 activity:(id)arg3;
- (bool)_doesAnyRecordZoneIDHavePendingArchivedRecords:(long long)arg1;
- (void)_fetchArchivedRecordsIfNeeded:(bool)arg1 currentBatchCount:(long long)arg2 maxNumberOfBatches:(long long)arg3 activity:(id)arg4 withCompletionBlock:(id /* block */)arg5;
- (void)_fetchMessageZoneChangesSyncType:(long long)arg1 currentBatchCount:(long long)arg2 maxNumberOfBatches:(long long)arg3 activity:(id)arg4 completionBlock:(id /* block */)arg5;
- (void)_hasMarkedAllMessagesAsNeedingSync;
- (bool)_isCoreDuetSyncForMaxBatchCount:(long long)arg1 activity:(id)arg2;
- (bool)_isDiskSpaceAvailableForSyncType:(long long)arg1 currentBatchCount:(long long)arg2;
- (bool)_isValidCKRecordToSync:(id)arg1;
- (bool)_kickOffWriteIfNeededForSyncType:(long long)arg1 activity:(id)arg2 completion:(id /* block */)arg3;
- (void)_kickOffWriteOnCKQueueWithActivity:(id)arg1 completion:(id /* block */)arg2;
- (void)_markAllIncompatibleMessagesForDeletion;
- (void)_markAllUnsuccessFullSyncMessagesAsNeedingSync;
- (unsigned long long)_messageDeleteBatchSize;
- (id)_messageRecordSalt;
- (bool)_messageZoneCreated;
- (id)_messageZoneID;
- (void)_migrateSyncTokens;
- (void)_needsToMarkAllMessagesAsNeedingSync;
- (void)_noteSyncEnded;
- (long long)_numberOfBatchesOfMessagesToFetchInInitialSync;
- (unsigned long long)_numberOfMessagesToUpload;
- (unsigned long long)_numberOfRecordsToFetchForSyncType:(long long)arg1;
- (id)_operationErrorForModifyingRecordCompletion:(id)arg1;
- (void)_processArchivedRecordsFetchCompletionZoneID:(id)arg1 serverChangeToken:(id)arg2 moreComing:(bool)arg3 currentBatchCount:(long long)arg4 maxNumberOfBatches:(long long)arg5 activity:(id)arg6 error:(id)arg7 completionBlock:(id /* block */)arg8;
- (void)_processFetchArchivedRecordCompletionWithError:(id)arg1 WithCompletionBlock:(id /* block */)arg2;
- (void)_processFetchRecordZoneChangesCompletionWithError:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)_processModifyRecordsCompletion:(id)arg1 deletedRecordIDs:(id)arg2 operationError:(id)arg3 isLastBatchOfWrite:(bool)arg4 activity:(id)arg5 writeCompletionBlock:(id /* block */)arg6;
- (void)_processRecordChange:(id)arg1;
- (void)_processRecordDeletionCompletion:(id)arg1 error:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)_processRecordWriteCompletionForRecord:(id)arg1 NSError:(id)arg2;
- (void)_processRecordZoneFetchCompletionZoneID:(id)arg1 serverChangeToken:(id)arg2 clientChangeTokenData:(id)arg3 moreComing:(bool)arg4 NSError:(id)arg5 syncType:(long long)arg6 currentBatchCount:(long long)arg7 maxNumberOfBatches:(long long)arg8 shouldFetchArchivedRecords:(bool)arg9 activity:(id)arg10 completionBlock:(id /* block */)arg11;
- (id)_recordKeyManagerSharedInstance;
- (id)_recordsToSave;
- (id)_recordsToSaveWithAttemptCount:(unsigned long long)arg1;
- (void)_resetArvchivedRecordSyncToken;
- (void)_resetSyncToken;
- (void)_scheduleOperation:(id)arg1;
- (id)_sharedIMDMessageStore;
- (bool)_shouldDeferCoreDuetMessagesSyncWithActivity:(id)arg1;
- (bool)_shouldFetchArchivedRecords:(id)arg1;
- (bool)_shouldMarkAllMessagesAsNeedingSync;
- (id)_syncOperationGroupName;
- (void)_updateDeviceConditionsToCheckIfNeededForCurrentBatchCount:(long long)arg1 maxBatchCount:(long long)arg2;
- (void)_writeDirtyMessagesToCloudKitWithActivity:(id)arg1 completion:(id /* block */)arg2;
- (id)archivedRecordSyncToken;
- (id)ckQueue;
- (void)clearLocalSyncState:(unsigned long long)arg1;
- (void)deleteChatBotMessageSyncToken;
- (void)deleteMessageSyncToken;
- (void)deleteMessagesZone;
- (unsigned long long)deviceConditionsToCheck;
- (bool)encounteredIncompatibleMessage;
- (void)incompatibleMessageDeleteDetected:(id)arg1;
- (id)init;
- (id)initWithSyncTokenStore:(id)arg1;
- (id)latestSyncToken;
- (id)recordZoneManager;
- (void)setArchivedRecordSyncToken:(id)arg1;
- (void)setCKOperationFactory:(id)arg1;
- (void)setCkQueue:(id)arg1;
- (void)setDeviceConditionsToCheck:(unsigned long long)arg1;
- (void)setEncounteredIncompatibleMessage:(bool)arg1;
- (void)setLatestSyncToken:(id)arg1;
- (void)setRecordZoneManager:(id)arg1;
- (void)setSyncTokenStore:(id)arg1;
- (void)setVisitedChats:(id)arg1;
- (long long)syncControllerRecordType;
- (void)syncDeletedMessagesToCloudKitWithCompletion:(id /* block */)arg1;
- (void)syncMessagesWithSyncType:(long long)arg1 deviceConditionsToCheck:(unsigned long long)arg2 activity:(id)arg3 completionBlock:(id /* block */)arg4;
- (id)syncTokenStore;
- (id)visitedChats;

@end
