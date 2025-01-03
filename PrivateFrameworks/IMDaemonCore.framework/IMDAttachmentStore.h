/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDAttachmentStore : NSObject <AssetStoreProviding, RecordStoreDeleting, RecordStoreProviding>

@property (nonatomic, retain) NSNumber *afterRow;

+ (void)_askToTapToRadarForErrorString:(id)arg1 path:(id)arg2;
+ (bool)_cloudkitSyncingEnabled;
+ (bool)_filesystemIsCaseSensitiveWithPath:(id)arg1;
+ (bool)fileEligibleForCacheDelete:(id)arg1;
+ (id)sharedInstance;
+ (bool)updateTransferIn:(id)arg1 fromGUID:(id)arg2 toGUID:(id)arg3;

- (id)_alternateAttachmentPathIfExists:(id)arg1;
- (long long)_attachmentQueryForFilter:(unsigned long long)arg1;
- (void)_hasMarkedAllAttachmentsAsNeedingSync;
- (struct _IMDAttachmentRecordStruct { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; long long x2; struct __CFArray {} *x3; }*)_loadAttachmentRecordForGUID:(id)arg1;
- (void)_markAllFailedAttachmentsAsNeedingSync;
- (void)_markAttachmentWithROWID:(id)arg1 withSyncState:(long long)arg2;
- (void)_markTransferAsNotBeingAbleToSyncWithGUID:(id)arg1;
- (void)_needsToMarkAllAttachmentsAsNeedingSync;
- (id)_newFileTransferFromIMDAttachmentRecordRef:(struct _IMDAttachmentRecordStruct { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; long long x2; struct __CFArray {} *x3; }*)arg1;
- (id)_permanentTransferGUIDForExistingTransferWithTemporaryGUID:(id)arg1;
- (id)_permanentTransferGUIDForTransfer:(id)arg1 inItem:(id)arg2;
- (id)_recordZoneIDForFilter:(unsigned long long)arg1;
- (void)_reindexMessageGUIDs:(id)arg1 reason:(long long)arg2 completion:(id /* block */)arg3;
- (void)_removeTransferFromiCloudBackupWithGuid:(id)arg1;
- (void)_resetAttachmentSyncStateForGUID:(id)arg1 newSyncState:(long long)arg2;
- (bool)_shouldEarlyReturnForWrongItemType:(id)arg1;
- (bool)_shouldMarkAllAttachmentsAsNeedingSync;
- (bool)_shouldMarkAttachmentsAsNeedingReupload;
- (bool)_updateAttachmentGUID:(id)arg1 withGUID:(id)arg2;
- (id)_updateAttachmentGUIDIfNeededAndReturnTransfersMarkedWithFailStatus:(id)arg1 transfersToSyncRowIDs:(id)arg2;
- (id)afterRow;
- (id)attachmentWithGUID:(id)arg1;
- (id)attachmentsFilteredUsingPredicate:(id)arg1 limit:(unsigned long long)arg2;
- (id)attachmentsWithGUIDs:(id)arg1;
- (id)batchOfRecordIDsToDeleteWithLimit:(long long)arg1 error:(id*)arg2;
- (id)batchOfRecordsMissingAssetsAfterRow:(id*)arg1 withLimit:(long long)arg2;
- (id)batchOfRecordsToWriteWithFilter:(unsigned long long)arg1 limit:(long long)arg2 error:(id*)arg3;
- (id)batchOfRecordsToWriteWithFilter:(unsigned long long)arg1 limit:(long long)arg2 recurseCount:(int)arg3 error:(id*)arg4;
- (void)clearLocalSyncState:(unsigned long long)arg1;
- (void)clearTombstonesForRecordIDs:(id)arg1;
- (id)database;
- (bool)deleteAttachmentDataForTransfer:(id)arg1;
- (void)deleteAttachmentSyncToken;
- (bool)deleteAttachmentWithGUID:(id)arg1;
- (void)deleteAttachmentsDirectWithPredicate:(id)arg1;
- (bool)deleteAttachmentsForMessage:(id)arg1;
- (bool)deleteAttachmentsWithGUIDs:(id)arg1;
- (id)fileTransferWithAttachmentRecordRef:(struct _IMDAttachmentRecordStruct { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; long long x2; struct __CFArray {} *x3; }*)arg1;
- (bool)isSafeToDeleteAttachmentAtPath:(id)arg1;
- (void)legacyImport:(id)arg1;
- (void)markAllAttachmentsAsNeedingCloudKitSync;
- (void)markAllAttachmentsAsNotPurgeable;
- (void)markAttachment:(id)arg1 purgeable:(bool)arg2;
- (void)markAttachmentPurgeable:(id)arg1;
- (void)markAttachmentUnpurgeable:(id)arg1;
- (void)markFile:(id)arg1 asPurgeable:(bool)arg2;
- (void)markTransferAsNotSuccessfullyDownloadedWithGUID:(id)arg1;
- (id)messageForTransferGUID:(id)arg1 shouldLoadAttachments:(bool)arg2;
- (void)recordUpdateFailedWithID:(id)arg1 localGUID:(id)arg2 error:(id)arg3;
- (void)recordUpdateSucceededWithRecord:(id)arg1;
- (bool)removeAttachment:(id)arg1 fromMessageWithGUID:(id)arg2;
- (void)resetFetchState;
- (void)resetFetchStateForAssets;
- (void)resetLocalSyncStateIfAppropriate;
- (void)setAfterRow:(id)arg1;
- (bool)storeAttachment:(id)arg1 associateWithMessageWithGUID:(id)arg2;
- (bool)storeAttachment:(id)arg1 associateWithMessageWithGUID:(id)arg2 chatGUID:(id)arg3 storeAtExternalLocation:(bool)arg4;
- (id)syncTokenStore;
- (void)updateAssetUsingRecord:(id)arg1;
- (bool)updateAttachment:(id)arg1;
- (bool)updateAttachment:(id)arg1 chatGUID:(id)arg2 storeAtExternalPath:(bool)arg3;
- (bool)updateTemporaryTransferGUIDsIfNeeded:(id)arg1 transfersToSync:(id)arg2;
- (bool)updateTemporaryTransferGUIDsOn:(id)arg1 andUpdateMessageIfNeeded:(id)arg2 transfersToSync:(id)arg3;
- (bool)updateTemporaryTransferGUIDsOnMessageIfNeeded:(id)arg1;

@end
