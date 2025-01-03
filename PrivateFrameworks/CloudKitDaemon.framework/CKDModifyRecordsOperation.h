/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDModifyRecordsOperation : CKDDatabaseOperation {
    bool  _alwaysFetchPCSFromServer;
    NSDictionary * _assetUUIDToExpectedProperties;
    bool  _atomic;
    NSData * _cachedGlobalPerUserBoundaryKeyData;
    bool  _canSetPreviousProtectionEtag;
    NSData * _clientChangeTokenData;
    NSMutableDictionary * _cloneContextsBySignature;
    NSDictionary * _conflictLosersToResolveByRecordID;
    CKDDecryptRecordsOperation * _decryptOperation;
    id /* block */  _deleteCompletionBlock;
    NSMapTable * _handlersByAsset;
    NSMapTable * _handlersByAssetNeedingRecordFetch;
    NSDictionary * _handlersByRecordID;
    bool  _hasRecordsToDelete;
    bool  _hasRecordsToSave;
    bool  _haveOutstandingHandlers;
    bool  _includeMergeableDeltasInModifyRecordsRequest;
    bool  _markAsParticipantNeedsNewInvitationToken;
    NSMutableDictionary * _modifyHandlersByZoneID;
    NSObject<OS_dispatch_queue> * _modifyRecordsQueue;
    bool  _originatingFromDaemon;
    NSDictionary * _packageUUIDToExpectedProperties;
    NSDictionary * _parentsByRecordID;
    NSDictionary * _pluginFieldsForRecordDeletesByID;
    NSArray * _recordIDsToDelete;
    NSDictionary * _recordIDsToDeleteToEtags;
    NSDictionary * _recordIDsToDeleteToSigningPCSIdentity;
    id /* block */  _recordsInFlightBlock;
    NSArray * _recordsToSave;
    bool  _requestNeedsUserPublicKeys;
    bool  _retriedRecords;
    bool  _retryPCSFailures;
    int  _saveAttempts;
    id /* block */  _saveCompletionBlock;
    long long  _savePolicy;
    id /* block */  _saveProgressBlock;
    bool  _shouldCloneFileInAssetCache;
    bool  _shouldModifyRecordsInDatabase;
    bool  _shouldOnlySaveAssetContent;
    bool  _shouldReportRecordsInFlight;
    C2RequestOptions * _streamingAssetRequestOptions;
    CKDProtocolTranslator * _translator;
    bool  _trustProtectionData;
    id /* block */  _uploadCompletionBlock;
    NSArray * _userPublicKeys;
}

@property (nonatomic) bool alwaysFetchPCSFromServer;
@property (nonatomic, retain) NSDictionary *assetUUIDToExpectedProperties;
@property (nonatomic) bool atomic;
@property (nonatomic, copy) NSData *cachedGlobalPerUserBoundaryKeyData;
@property (nonatomic) bool canSetPreviousProtectionEtag;
@property (nonatomic, copy) NSData *clientChangeTokenData;
@property (nonatomic, retain) <CKModifyRecordsOperationCallbacks><CKDOperationCallbackProxy> *clientOperationCallbackProxy;
@property (nonatomic, retain) NSDictionary *conflictLosersToResolveByRecordID;
@property (nonatomic, copy) id /* block */ deleteCompletionBlock;
@property (nonatomic, retain) NSMapTable *handlersByAsset;
@property (nonatomic, retain) NSMapTable *handlersByAssetNeedingRecordFetch;
@property (nonatomic, retain) NSDictionary *handlersByRecordID;
@property (nonatomic) bool haveOutstandingHandlers;
@property (nonatomic) bool includeMergeableDeltasInModifyRecordsRequest;
@property (nonatomic) bool markAsParticipantNeedsNewInvitationToken;
@property (nonatomic, retain) NSMutableDictionary *modifyHandlersByZoneID;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *modifyRecordsQueue;
@property (nonatomic) bool originatingFromDaemon;
@property (nonatomic, retain) NSDictionary *packageUUIDToExpectedProperties;
@property (nonatomic, retain) NSDictionary *parentsByRecordID;
@property (nonatomic, retain) NSDictionary *pluginFieldsForRecordDeletesByID;
@property (nonatomic, readonly) CKDDecryptRecordsOperation *recordDecryptOperation;
@property (nonatomic, retain) NSArray *recordIDsToDelete;
@property (nonatomic, retain) NSDictionary *recordIDsToDeleteToEtags;
@property (nonatomic, retain) NSDictionary *recordIDsToDeleteToSigningPCSIdentity;
@property (nonatomic, copy) id /* block */ recordsInFlightBlock;
@property (nonatomic, retain) NSArray *recordsToSave;
@property (nonatomic) bool requestNeedsUserPublicKeys;
@property (nonatomic) bool retriedRecords;
@property (nonatomic) bool retryPCSFailures;
@property (nonatomic) int saveAttempts;
@property (nonatomic, copy) id /* block */ saveCompletionBlock;
@property (nonatomic) long long savePolicy;
@property (nonatomic, copy) id /* block */ saveProgressBlock;
@property (nonatomic) bool shouldCloneFileInAssetCache;
@property (nonatomic) bool shouldModifyRecordsInDatabase;
@property (nonatomic) bool shouldOnlySaveAssetContent;
@property (nonatomic) bool shouldReportRecordsInFlight;
@property (nonatomic) unsigned long long state;
@property (nonatomic, copy) C2RequestOptions *streamingAssetRequestOptions;
@property (nonatomic, retain) CKDProtocolTranslator *translator;
@property (nonatomic) bool trustProtectionData;
@property (nonatomic, copy) id /* block */ uploadCompletionBlock;
@property (nonatomic, retain) NSArray *userPublicKeys;

+ (bool)_claimPackagesInRecord:(id)arg1 error:(id*)arg2;
+ (long long)isPredominatelyDownload;
+ (id)nameForState:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_applySideEffects;
- (void)_batchFetchAssetRecordsForRereferencing;
- (void)_clearProtectionDataIfNotEntitled;
- (void)_continueRecordsModify;
- (id)_createModifyRequestWithRecordsToSave:(id)arg1 recordsToDelete:(id)arg2 recordsToDeleteToEtags:(id)arg3 recordIDsToDeleteToSigningPCSIdentity:(id)arg4 handlersByRecordID:(id)arg5 sendMergeableDeltas:(bool)arg6;
- (void)_determineEnvironment;
- (void)_didCompleteRecordFetchOperation:(id)arg1 assetArrayByRecordID:(id)arg2;
- (void)_enumerateHandlersInState:(unsigned long long)arg1 withBlock:(id /* block */)arg2;
- (void)_fetchContainerScopedUserID;
- (void)_fetchGlobalPerUserBoundaryKey;
- (void)_fetchPackageRecordsForRereferencing;
- (void)_fetchRecordPCSData;
- (void)_fetchRecordsForRereferencing;
- (void)_fetchSharePCSData;
- (void)_fetchShareParticipants;
- (void)_fetchUserPublicKeys;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleDecryptionFailure:(id)arg1 forRecordID:(id)arg2;
- (void)_handleMergeableDeltaSavedForRecordID:(id)arg1 key:(id)arg2 result:(id)arg3;
- (void)_handleRecordDeleted:(id)arg1 handler:(id)arg2 responseCode:(id)arg3;
- (void)_handleRecordSaved:(id)arg1 handler:(id)arg2 etag:(id)arg3 dateStatistics:(id)arg4 expirationDate:(id)arg5 responseCode:(id)arg6 keysAssociatedWithETag:(id)arg7 recordForOplockFailure:(id)arg8 serverRecord:(id)arg9;
- (void)_handleReplaceDeltasRequest:(id)arg1 result:(id)arg2;
- (bool)_hasHandlerInState:(unsigned long long)arg1;
- (void)_markRecordHandlersAsUploaded;
- (bool)_needsSigningPCS;
- (void)_performCallbacksForAtomicZoneHandlers:(id)arg1;
- (void)_performCallbacksForNonAtomicZoneHandlers:(id)arg1;
- (void)_performHandlerCallbacks;
- (id)_prepareAssetsForUpload;
- (void)_prepareForUpload;
- (void)_prepareParentPCS;
- (bool)_prepareRecordsForSave;
- (void)_reallyHandleRecordSaved:(id)arg1 handler:(id)arg2 etag:(id)arg3 dateStatistics:(id)arg4 expirationDate:(id)arg5 responseCode:(id)arg6 keysAssociatedWithETag:(id)arg7 recordForOplockFailure:(id)arg8 decryptedServerRecord:(id)arg9;
- (void)_reportRecordsInFlight;
- (id)_setBoundaryKeyOnAssetsToUpload:(id)arg1;
- (bool)_shouldToposortInContainerID:(id)arg1;
- (bool)_topoSortRecords;
- (id)_topoSortRecordsForHandlers:(id)arg1;
- (void)_uploadAssets;
- (void)_uploadMergeableDeltas;
- (void)_verifyRecordEncryption;
- (id)activityCreate;
- (bool)alwaysFetchPCSFromServer;
- (id)analyticsPayload;
- (void)assetArray:(id)arg1 didFetchRecord:(id)arg2 error:(id)arg3;
- (id)assetUUIDToExpectedProperties;
- (bool)atomic;
- (id)cachedGlobalPerUserBoundaryKeyData;
- (void)callbackWithMetadata:(id)arg1 error:(id)arg2;
- (bool)canSetPreviousProtectionEtag;
- (id)clientChangeTokenData;
- (id)conflictLosersToResolveByRecordID;
- (void)deleteCallbackWithMetadata:(id)arg1 error:(id)arg2;
- (id /* block */)deleteCompletionBlock;
- (void)finishDecryption;
- (void)finishWithError:(id)arg1;
- (id)handlerForDeleteWithRecordID:(id)arg1;
- (id)handlerForSaveWithRecord:(id)arg1;
- (id)handlersByAsset;
- (id)handlersByAssetNeedingRecordFetch;
- (id)handlersByRecordID;
- (bool)haveOutstandingHandlers;
- (bool)includeMergeableDeltasInModifyRecordsRequest;
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;
- (bool)isOperationType:(int)arg1;
- (void)main;
- (bool)makeStateTransition;
- (bool)markAsParticipantNeedsNewInvitationToken;
- (id)modifyHandlersByZoneID;
- (id)modifyRecordsQueue;
- (int)operationType;
- (bool)originatingFromDaemon;
- (void)packageArray:(id)arg1 didFetchRecord:(id)arg2 error:(id)arg3;
- (id)packageUUIDToExpectedProperties;
- (id)parentsByRecordID;
- (id)pluginFieldsForRecordDeletesByID;
- (id)recordDecryptOperation;
- (id)recordIDsToDelete;
- (id)recordIDsToDeleteToEtags;
- (id)recordIDsToDeleteToSigningPCSIdentity;
- (id /* block */)recordsInFlightBlock;
- (id)recordsToSave;
- (id)relevantZoneIDs;
- (bool)requestNeedsUserPublicKeys;
- (id)requestedFieldsByRecordIDForRecords:(id)arg1;
- (bool)retriedRecords;
- (bool)retryPCSFailures;
- (int)saveAttempts;
- (void)saveCallbackWithMetadata:(id)arg1 error:(id)arg2;
- (id /* block */)saveCompletionBlock;
- (long long)savePolicy;
- (id /* block */)saveProgressBlock;
- (void)setAlwaysFetchPCSFromServer:(bool)arg1;
- (void)setAssetUUIDToExpectedProperties:(id)arg1;
- (void)setAtomic:(bool)arg1;
- (void)setCachedGlobalPerUserBoundaryKeyData:(id)arg1;
- (void)setCanSetPreviousProtectionEtag:(bool)arg1;
- (void)setClientChangeTokenData:(id)arg1;
- (void)setConflictLosersToResolveByRecordID:(id)arg1;
- (void)setDeleteCompletionBlock:(id /* block */)arg1;
- (void)setHandlersByAsset:(id)arg1;
- (void)setHandlersByAssetNeedingRecordFetch:(id)arg1;
- (void)setHandlersByRecordID:(id)arg1;
- (void)setHaveOutstandingHandlers:(bool)arg1;
- (void)setIncludeMergeableDeltasInModifyRecordsRequest:(bool)arg1;
- (void)setMarkAsParticipantNeedsNewInvitationToken:(bool)arg1;
- (void)setModifyHandlersByZoneID:(id)arg1;
- (void)setModifyRecordsQueue:(id)arg1;
- (void)setOriginatingFromDaemon:(bool)arg1;
- (void)setPackageUUIDToExpectedProperties:(id)arg1;
- (void)setParentsByRecordID:(id)arg1;
- (void)setPluginFieldsForRecordDeletesByID:(id)arg1;
- (void)setRecordIDsToDelete:(id)arg1;
- (void)setRecordIDsToDeleteToEtags:(id)arg1;
- (void)setRecordIDsToDeleteToSigningPCSIdentity:(id)arg1;
- (void)setRecordsInFlightBlock:(id /* block */)arg1;
- (void)setRecordsToSave:(id)arg1;
- (void)setRequestNeedsUserPublicKeys:(bool)arg1;
- (void)setRetriedRecords:(bool)arg1;
- (void)setRetryPCSFailures:(bool)arg1;
- (void)setSaveAttempts:(int)arg1;
- (void)setSaveCompletionBlock:(id /* block */)arg1;
- (void)setSavePolicy:(long long)arg1;
- (void)setSaveProgressBlock:(id /* block */)arg1;
- (void)setShouldCloneFileInAssetCache:(bool)arg1;
- (void)setShouldModifyRecordsInDatabase:(bool)arg1;
- (void)setShouldOnlySaveAssetContent:(bool)arg1;
- (void)setShouldReportRecordsInFlight:(bool)arg1;
- (void)setStreamingAssetRequestOptions:(id)arg1;
- (void)setTranslator:(id)arg1;
- (void)setTrustProtectionData:(bool)arg1;
- (void)setUploadCompletionBlock:(id /* block */)arg1;
- (void)setUserPublicKeys:(id)arg1;
- (bool)shouldCloneFileInAssetCache;
- (bool)shouldModifyRecordsInDatabase;
- (bool)shouldOnlySaveAssetContent;
- (bool)shouldReportRecordsInFlight;
- (id)streamingAssetRequestOptions;
- (bool)supportsClearAssetEncryption;
- (id)translator;
- (bool)trustProtectionData;
- (id /* block */)uploadCompletionBlock;
- (id)userPublicKeys;
- (bool)validateAgainstLiveContainer:(id)arg1 error:(id*)arg2;

@end
