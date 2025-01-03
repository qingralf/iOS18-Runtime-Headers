/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDFileTransferCenter : NSObject {
    NSMutableSet * _activeHubbleRequestedTransfers;
    NSMutableSet * _activeTransfers;
    NSString * _contextStamp;
    NSMutableDictionary * _guidToTransferMap;
    NSMutableDictionary * _localFileURLRetrievalWithGuidCompletionHandlers;
    NSMutableSet * _messagesToReindexForPreviewGeneration;
    NSTimer * _transferTimer;
    NSMutableArray * _transferringTransfers;
}

@property (nonatomic, retain) NSMutableSet *activeHubbleRequestedTransfers;
@property (nonatomic, retain) NSMutableSet *activeTransfers;
@property (nonatomic, retain) NSString *contextStamp;
@property (nonatomic, retain) NSMutableDictionary *guidToTransferMap;
@property (nonatomic, retain) NSMutableDictionary *localFileURLRetrievalWithGuidCompletionHandlers;
@property (nonatomic, retain) NSMutableSet *messagesToReindexForPreviewGeneration;
@property (nonatomic, retain) NSTimer *transferTimer;
@property (nonatomic, retain) NSMutableArray *transferringTransfers;

+ (id)fileTransferErrorWithReason:(long long)arg1 description:(id)arg2;
+ (id)localFileURLRetrievalErrorWithReason:(long long)arg1 description:(id)arg2;
+ (id)localFileURLRetrievalErrorWithReason:(long long)arg1 underlyingReason:(long long)arg2 description:(id)arg3;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_addActiveTransfer:(id)arg1;
- (void)_addGatekeeperProperties:(id)arg1 toDirectory:(id)arg2;
- (void)_addGatekeeperProperties:(id)arg1 toFileAtPath:(id)arg2;
- (void)_addSpotlightPropertiesFromFileTransfer:(id)arg1 toDirectory:(id)arg2;
- (void)_addTransfer:(id)arg1 forGUID:(id)arg2 shouldNotify:(bool)arg3;
- (void)_addTransferringTransfer:(id)arg1;
- (id)_allFileTransfers;
- (id)_attachmentStoreSharedInstance;
- (void)_clearProgressForTransferGUID:(id)arg1;
- (void)_completeHubbleDownloadForTransfer:(id)arg1;
- (void)_completeProgressForTransferGUID:(id)arg1;
- (id)_createWrapperForTransfer:(id)arg1;
- (id)_dictionaryRepresentationsForFileTransfers:(id)arg1 toSave:(bool)arg2;
- (id)_findTransferGUIDMatchingSpotlightDonatedSpeculativeTransferGUID:(id)arg1;
- (void)_flushMessagesToReindexForPreviewGeneration;
- (id)_getNewFileTransferForStoredAttachmentPayloadDataWithTransferGUID:(id)arg1 messageGUID:(id)arg2;
- (void)_handleFileTransfer:(id)arg1 acceptedWithPath:(id)arg2 autoRename:(bool)arg3 overwrite:(bool)arg4 options:(long long)arg5 postNotification:(bool)arg6;
- (void)_handleFileTransfer:(id)arg1 createdWithProperties:(id)arg2 withAuditToken:(struct { unsigned int x1[8]; })arg3;
- (void)_handleFileTransfer:(id)arg1 updatedWithProperties:(id)arg2;
- (void)_handleFileTransfer:(id)arg1 updatedWithProperties:(id)arg2 isStickerReposition:(bool)arg3 repositionedLocally:(bool)arg4;
- (void)_handleFileTransferForStickerRepositionWithGUID:(id)arg1 updatedWithProperties:(id)arg2 fromLocalChange:(bool)arg3;
- (void)_handleFileTransferRemoved:(id)arg1;
- (void)_handleFileTransferStopped:(id)arg1;
- (void)_handleFileTransfers:(id)arg1 autoRename:(bool)arg2 overwrite:(bool)arg3 options:(long long)arg4 postNotification:(bool)arg5;
- (bool)_hasActiveTransferWithGUID:(id)arg1;
- (void)_hubbleTransferCompleted:(id)arg1 withGUID:(id)arg2 error:(id)arg3 suggestedRetryGUID:(id)arg4;
- (id)_messageStoreSharedInstance;
- (void)_postHubbleDownloadFailedForTransfer:(id)arg1 error:(id)arg2;
- (void)_postUpdated:(id)arg1;
- (void)_previewGenerationFailedNotification:(id)arg1;
- (void)_previewGenerationSucceededNotification:(id)arg1;
- (id)_progressForTransferGUID:(id)arg1 allowCreate:(bool)arg2 path:(id)arg3;
- (void)_reindexTransferIfNeededForPreviewGenerationStateChange:(id)arg1 originalPreviewGenerationState:(long long)arg2;
- (void)_removeActiveTransfer:(id)arg1;
- (void)_removeHubbleRequestedTransfer:(id)arg1;
- (void)_removeTransferringTransfer:(id)arg1;
- (id)_removeWrapperForTransfer:(id)arg1;
- (id)_retrieveLocalFileURLForFileTransferWithGUID:(id)arg1 options:(long long)arg2 outTransfer:(id*)arg3 outError:(id*)arg4;
- (bool)_shouldDownloadAssetForTransfer:(id)arg1 forMessageItem:(id)arg2;
- (void)_transferTimerTick:(id)arg1;
- (void)_updateAndPostCachedTransfer:(id)arg1;
- (void)_updateContextStamp;
- (void)_updateTransferGUID:(id)arg1 toGUID:(id)arg2;
- (void)_updateTransferPreviewGenerationState:(id)arg1 newState:(long long)arg2;
- (void)acceptTransfer:(id)arg1 path:(id)arg2;
- (id)activeHubbleRequestedTransfers;
- (id)activeTransfers;
- (void)addDefaultGatekeeperPropertiesToDirectory:(id)arg1;
- (void)addHubbleRequestedTransfer:(id)arg1;
- (void)addTransfer:(id)arg1 forGUID:(id)arg2;
- (void)assignTransfer:(id)arg1 toAccount:(id)arg2 otherPerson:(id)arg3;
- (void)broadcastTransfersWithGUIDs:(id)arg1 atLocalPaths:(id)arg2;
- (id)contextStamp;
- (id)createNewOutgoingTransferWithLocalFileURL:(id)arg1;
- (void)deleteTransferForGUID:(id)arg1;
- (void)endTransfer:(id)arg1;
- (void)endTransfer:(id)arg1 endState:(long long)arg2 updateByteCounts:(bool)arg3;
- (void)failTransfer:(id)arg1 error:(id)arg2;
- (void)failTransfer:(id)arg1 reason:(long long)arg2;
- (void)failTransferPreviewGeneration:(id)arg1;
- (void)generatePreviewForTransfer:(id)arg1 messageItem:(id)arg2 senderContext:(id)arg3;
- (id)guidForNewIncomingTransferWithFilename:(id)arg1 isDirectory:(bool)arg2 totalBytes:(unsigned long long)arg3 hfsType:(unsigned int)arg4 hfsCreator:(unsigned int)arg5 hfsFlags:(unsigned short)arg6;
- (id)guidForNewOutgoingTransferWithFilename:(id)arg1 isDirectory:(bool)arg2 totalBytes:(unsigned long long)arg3 hfsType:(unsigned int)arg4 hfsCreator:(unsigned int)arg5 hfsFlags:(unsigned short)arg6;
- (id)guidToTransferMap;
- (id)guidsForStoredAttachmentBlastDoorPayloadData:(id)arg1 messageGUID:(id)arg2;
- (id)guidsForStoredAttachmentPayloadData:(id)arg1 messageGUID:(id)arg2;
- (id)guidsForStoredAttachmentPayloadDataURLs:(id)arg1 messageGUID:(id)arg2;
- (id)init;
- (id)localFileURLRetrievalWithGuidCompletionHandlers;
- (void)makeNewIncomingTransferWithGUID:(id)arg1 filename:(id)arg2 isDirectory:(bool)arg3 totalBytes:(unsigned long long)arg4 hfsType:(unsigned int)arg5 hfsCreator:(unsigned int)arg6 hfsFlags:(unsigned short)arg7;
- (void)makeNewOutgoingTransferWithGUID:(id)arg1 filename:(id)arg2 isDirectory:(bool)arg3 totalBytes:(unsigned long long)arg4 hfsType:(unsigned int)arg5 hfsCreator:(unsigned int)arg6 hfsFlags:(unsigned short)arg7;
- (bool)markAttachment:(id)arg1 sender:(id)arg2 recipients:(id)arg3 isIncoming:(bool)arg4;
- (void)markTransferAsNotSuccessfullyDownloadedFromCloud:(id)arg1;
- (void)markTransferAsNotSyncedSuccessfully:(id)arg1;
- (id)messagesToReindexForPreviewGeneration;
- (bool)populateLocalURLsForTransfer:(id)arg1 fromCKRecord:(id)arg2;
- (void)postHubbleDownloadFailedIfNeededForTransfer:(id)arg1 error:(id)arg2;
- (void)postHubbleDownloadFinishedIfNeededForTransfer:(id)arg1;
- (bool)registerGUID:(id)arg1 forNewOutgoingTransferWithLocalURL:(id)arg2;
- (void)rejectTransfer:(id)arg1;
- (void)removeFinishedTransfers;
- (void)removeTransferForGUID:(id)arg1;
- (void)resetSyncStateForRecord:(id)arg1 toState:(long long)arg2;
- (void)resetTransfer:(id)arg1 andPostError:(id)arg2;
- (void)resetTransfer:(id)arg1 andPostReason:(long long)arg2;
- (void)retrieveLocalFileURLForFileTransferWithGUIDs:(id)arg1 options:(long long)arg2 completion:(id /* block */)arg3;
- (void)setActiveHubbleRequestedTransfers:(id)arg1;
- (void)setActiveTransfers:(id)arg1;
- (void)setContextStamp:(id)arg1;
- (void)setGuidToTransferMap:(id)arg1;
- (void)setLocalFileURLRetrievalWithGuidCompletionHandlers:(id)arg1;
- (void)setMessagesToReindexForPreviewGeneration:(id)arg1;
- (void)setRecoverableErrorForTransfer:(id)arg1 error:(long long)arg2;
- (void)setTransferTimer:(id)arg1;
- (void)setTransferringTransfers:(id)arg1;
- (void)setUpdatedStickerUserInfo:(id)arg1 forTransfer:(id)arg2 repositioningFromLocalChange:(bool)arg3;
- (void)startFinalizingTransfer:(id)arg1;
- (void)startFinalizingTransfer:(id)arg1 updateByteCounts:(bool)arg2;
- (void)startTransfer:(id)arg1;
- (void)successfullyGeneratedPreviewForTransfer:(id)arg1;
- (void)successfullyGeneratedPreviewForTransfer:(id)arg1 withPreviewSize:(struct CGSize { double x1; double x2; })arg2;
- (id)transferForGUID:(id)arg1;
- (id)transferTimer;
- (id)transferringTransfers;
- (void)updateTransfer:(id)arg1;
- (void)updateTransfer:(id)arg1 currentBytes:(unsigned long long)arg2 totalBytes:(unsigned long long)arg3;
- (void)updateTransferAsWaitingForAccept:(id)arg1;
- (void)updateTransferGUID:(id)arg1 toGUID:(id)arg2;
- (id)updateTransfersWithCKRecord:(id)arg1 recordWasFetched:(bool)arg2 downloadAsset:(bool*)arg3;

@end
