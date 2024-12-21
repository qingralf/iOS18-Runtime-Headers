/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKQueryOperation : CKDatabaseOperation <CKQueryOperationCallbacks> {
    unsigned long long  _assetBackedMergeableDeltaCount;
    NSDictionary * _assetTransferOptionsByKey;
    CKQueryCursor * _cursor;
    NSArray * _desiredKeys;
    bool  _fetchAllResults;
    unsigned long long  _mergeableDeltaCount;
    unsigned long long  _mergeableValueCount;
    CKQuery * _query;
    id /* block */  _queryCompletionBlock;
    id /* block */  _queryCompletionBlock_wrapper;
    id /* block */  _queryCursorFetchedBlock;
    NSMutableDictionary * _recordErrors;
    id /* block */  _recordFetchedBlock;
    id /* block */  _recordMatchedBlock;
    id /* block */  _recordMatchedBlock_wrapper;
    CKQueryCursor * _resultsCursor;
    unsigned long long  _resultsLimit;
    bool  _shouldFetchAssetContent;
    CKRecordZoneID * _zoneID;
}

@property (nonatomic, copy) NSDictionary *assetTransferOptionsByKey;
@property (nonatomic, readonly) <CKQueryOperationCallbacks> *clientOperationCallbackProxy;
@property (nonatomic, copy) CKQueryCursor *cursor;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *desiredKeys;
@property (nonatomic) bool fetchAllResults;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CKQueryOperationInfo *operationInfo;
@property (nonatomic, copy) CKQuery *query;
@property (nonatomic, copy) id /* block */ queryCompletionBlock;
@property (nonatomic, copy) id /* block */ queryCompletionBlock_wrapper;
@property (nonatomic, copy) id /* block */ queryCursorFetchedBlock;
@property (nonatomic, retain) NSMutableDictionary *recordErrors;
@property (nonatomic, copy) id /* block */ recordFetchedBlock;
@property (nonatomic, copy) id /* block */ recordMatchedBlock;
@property (nonatomic, copy) id /* block */ recordMatchedBlock_wrapper;
@property (nonatomic, copy) CKQueryCursor *resultsCursor;
@property (nonatomic) unsigned long long resultsLimit;
@property (nonatomic) bool shouldFetchAssetContent;
@property (readonly) Class superclass;
@property (nonatomic, copy) CKRecordZoneID *zoneID;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)arg1;
+ (SEL)daemonCallbackCompletionSelector;
+ (SEL)daemonInvocationSelector;

- (void).cxx_destruct;
- (bool)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (id)assetTransferOptionsByKey;
- (void)ckSignpostBegin;
- (void)ckSignpostEndWithError:(id)arg1;
- (id)cursor;
- (id)desiredKeys;
- (bool)fetchAllResults;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (void)handleOperationDidCompleteWithCursor:(id)arg1 metrics:(id)arg2 error:(id)arg3;
- (void)handleQueryDidFetchCursor:(id)arg1 reply:(id /* block */)arg2;
- (void)handleQueryDidFetchForRecordID:(id)arg1 record:(id)arg2 error:(id)arg3;
- (bool)hasCKOperationCallbacksSet;
- (id)init;
- (id)initWithCursor:(id)arg1;
- (id)initWithQuery:(id)arg1;
- (id)query;
- (id /* block */)queryCompletionBlock;
- (id /* block */)queryCompletionBlock_wrapper;
- (id /* block */)queryCursorFetchedBlock;
- (id)recordErrors;
- (id /* block */)recordFetchedBlock;
- (id /* block */)recordMatchedBlock;
- (id /* block */)recordMatchedBlock_wrapper;
- (id)resultsCursor;
- (unsigned long long)resultsLimit;
- (void)setAssetTransferOptionsByKey:(id)arg1;
- (void)setCursor:(id)arg1;
- (void)setDesiredKeys:(id)arg1;
- (void)setFetchAllResults:(bool)arg1;
- (void)setQuery:(id)arg1;
- (void)setQueryCompletionBlock:(id /* block */)arg1;
- (void)setQueryCompletionBlockIVar:(id /* block */)arg1;
- (void)setQueryCompletionBlock_wrapper:(id /* block */)arg1;
- (void)setQueryCursorFetchedBlock:(id /* block */)arg1;
- (void)setRecordErrors:(id)arg1;
- (void)setRecordFetchedBlock:(id /* block */)arg1;
- (void)setRecordMatchedBlock:(id /* block */)arg1;
- (void)setRecordMatchedBlock_wrapper:(id /* block */)arg1;
- (void)setResultsCursor:(id)arg1;
- (void)setResultsLimit:(unsigned long long)arg1;
- (void)setShouldFetchAssetContent:(bool)arg1;
- (void)setZoneID:(id)arg1;
- (bool)shouldFetchAssetContent;
- (id)zoneID;

@end