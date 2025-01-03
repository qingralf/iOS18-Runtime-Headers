/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSPublisher : MSCupidStateMachine <MSPublishStorageProtocolDelegate, MSPublishStreamsProtocolDelegate, MSPublisher> {
    MSMediaStreamDaemon * _daemon;
    <MSPublisherDelegate> * _delegate;
    MSObjectQueue * _derivativesQueue;
    NSMutableDictionary * _fileHashToAssetMap;
    int  _maxErrorCount;
    NSMutableDictionary * _maxSizeByUTI;
    NSArray * _pendingDerivativesQueue;
    MSPublishStreamsProtocol * _protocol;
    int  _publishBatchSize;
    long long  _publishTargetByteCount;
    MSObjectQueue * _quarantinedQueue;
    NSMutableArray * _requestAuthQueue;
    NSMutableArray * _sendingQueue;
    unsigned long long  _sendingQueueCount;
    int  _state;
    <MSPublishStorageProtocol> * _storageProtocol;
    NSURL * _storageProtocolURL;
    NSMutableArray * _tempFiles;
    MSObjectQueue * _uploadQueue;
}

@property (nonatomic) MSMediaStreamDaemon *daemon;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <MSPublisherDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) int publishBatchSize;
@property (nonatomic) long long publishTargetByteCount;
@property (nonatomic, retain) NSURL *storageProtocolURL;
@property (readonly) Class superclass;

+ (id)_clearInstantiatedPublishersByPersonID;
+ (void)_setMasterNextActivityDate:(id)arg1 forPersonID:(id)arg2;
+ (id)existingPublisherForPersonID:(id)arg1;
+ (void)forgetPersonID:(id)arg1;
+ (bool)isInRetryState;
+ (id)nextActivityDate;
+ (id)nextActivityDateForPersonID:(id)arg1;
+ (id)personIDsWithOutstandingActivities;
+ (id)publisherForPersonID:(id)arg1;
+ (void)stopAllActivities;

- (void).cxx_destruct;
- (void)_abort;
- (id)_abortedError;
- (void)_addAssetToFileHashMap:(id)arg1;
- (void)_categorizeError:(id)arg1 setOutIsIgnorable:(bool*)arg2 setOutIsCounted:(bool*)arg3 setOutIsFatal:(bool*)arg4 setOutNeedsBackoff:(bool*)arg5 setOutIsTemporary:(bool*)arg6 setOutIsTokenAuth:(bool*)arg7 setOutIsAuthError:(bool*)arg8;
- (id)_checkAssetCollectionFiles:(id)arg1;
- (id)_checkObjectWrappers:(id)arg1;
- (id)_collectionWithNoDerivatives:(id)arg1;
- (void)_didFinishUsingAssetCollections:(id)arg1;
- (void)_forget;
- (id)_invalidStreamsResponseErrorUnderlyingError:(id)arg1;
- (bool)_isAllowedToUpload;
- (bool)_isInRetryState;
- (void)_quarantineOrDiscardWrappers:(id)arg1 withError:(id)arg2;
- (void)_refreshServerSideConfiguredParameters;
- (void)_registerAllAssetsForWrapper:(id)arg1;
- (void)_registerAsset:(id)arg1;
- (void)_removeAssetFromFileHashMap:(id)arg1;
- (void)_removeAssetsInAssetCollectionWrappersFromAssetMap:(id)arg1;
- (void)_requestDerivatives;
- (void)_sendFilesToMMCS;
- (void)_sendMetadataToStreams;
- (void)_sendUploadComplete;
- (void)_serverSideConfigurationDidChange:(id)arg1;
- (int)_stop;
- (void)_updateMasterManifest;
- (bool)_verifyAssetFile:(id)arg1;
- (void)abort;
- (void)computeHashForAsset:(id)arg1;
- (id)daemon;
- (void)deactivate;
- (void)dealloc;
- (id)delegate;
- (bool)dequeueAssetCollectionWithGUIDs:(id)arg1 outError:(id*)arg2;
- (bool)enqueueAssetCollections:(id)arg1 outError:(id*)arg2;
- (id)initWithPersonID:(id)arg1 baseURL:(id)arg2;
- (void)publish;
- (int)publishBatchSize;
- (void)publishStorageProtocol:(id)arg1 didFinishUploadingAsset:(id)arg2 error:(id)arg3;
- (void)publishStorageProtocol:(id)arg1 didFinishUsingFD:(int)arg2 forAsset:(id)arg3;
- (int)publishStorageProtocol:(id)arg1 didRequestFDForAsset:(id)arg2;
- (void)publishStorageProtocolDidFinishPublishingAllAssets:(id)arg1;
- (void)publishStreamsProtocol:(id)arg1 didFinishSendingUploadCompleteError:(id)arg2;
- (void)publishStreamsProtocol:(id)arg1 didFinishUploadingMetadataResponse:(id)arg2 error:(id)arg3;
- (void)publishStreamsProtocol:(id)arg1 didReceiveAuthenticationError:(id)arg2;
- (long long)publishTargetByteCount;
- (void)reenqueueQuarantinedAssetCollections;
- (void)setDaemon:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPublishBatchSize:(int)arg1;
- (void)setPublishTargetByteCount:(long long)arg1;
- (void)setStorageProtocolURL:(id)arg1;
- (void)stop;
- (id)storageProtocolURL;
- (void)submitAssetCollectionsForPublication:(id)arg1 skipAssetCollections:(id)arg2;

@end
