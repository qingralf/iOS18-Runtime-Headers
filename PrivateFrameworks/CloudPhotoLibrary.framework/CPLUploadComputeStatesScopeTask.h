/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLUploadComputeStatesScopeTask : CPLEngineScopedTask {
    CPLUploadComputeStatesAccumulator * _computeStatesAccumulator;
    unsigned long long  _countOfComputeStatesPutAside;
    unsigned long long  _countOfDroppedComputeStates;
    unsigned long long  _countOfProvidedComputeStates;
    unsigned long long  _countOfRequestedComputeStates;
    bool  _didUploadSomeComputeStates;
    NSDictionary * _knownRecords;
    NSObject<OS_dispatch_queue> * _queue;
    NSProgress * _requestMissingPayloadsProgress;
    CPLEngineScope * _sharedScope;
    CPLRecordTargetMapping * _targetMapping;
    long long  _taskItem;
    <CPLEngineTransportGroup> * _transportGroup;
    CPLTransportScopeMapping * _transportScopeMapping;
    <CPLEngineTransportUploadComputeStatesTask> * _uploadComputeStatesTask;
}

- (void).cxx_destruct;
- (void)_deleteTempFolderForPayloads;
- (void)_discardExtractedBatchAndGetNextBatch;
- (void)_dropAllComputeStates;
- (void)_dropLocalComputeStates:(id)arg1;
- (void)_getNextBatchAndUpload;
- (void)_requestMissingPayloads;
- (void)_updateComputeSyncUploadMetricsWithError:(id)arg1;
- (void)_uploadComputeStatesTaskDidFinishWithError:(id)arg1;
- (void)_uploadExtractedBatch;
- (void)cancel;
- (bool)checkScopeIsValidInTransaction:(id)arg1;
- (id)initWithEngineLibrary:(id)arg1 session:(id)arg2 clientCacheIdentifier:(id)arg3 scope:(id)arg4 transportScope:(id)arg5;
- (void)launch;
- (void)taskDidFinishWithError:(id)arg1;
- (id)taskIdentifier;

@end
