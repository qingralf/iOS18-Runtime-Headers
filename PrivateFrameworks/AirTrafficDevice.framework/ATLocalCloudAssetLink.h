/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

@interface ATLocalCloudAssetLink : NSObject <ATAssetLink, ATMessageLinkObserver> {
    NSMutableDictionary * _activeRequests;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    <ATAssetLinkDelegate> * _delegate;
    ATLegacyMessageLink * _messageLink;
    bool  _open;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableOrderedSet * _queuedAssets;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <ATAssetLinkDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isOpen, nonatomic, readonly) bool open;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_finishAsset:(id)arg1 withError:(id)arg2;
- (void)_handleLocalCloudDownloadResponse:(id)arg1;
- (void)_requestNextDownload;
- (bool)canEnqueueAsset:(id)arg1;
- (void)cancelAssets:(id)arg1;
- (void)close;
- (void)dealloc;
- (id)delegate;
- (id)enqueueAssets:(id)arg1 force:(bool)arg2;
- (id)initWithMessageLink:(id)arg1;
- (bool)isOpen;
- (bool)linkIsReady;
- (unsigned long long)maximumBatchSize;
- (void)messageLinkWasClosed:(id)arg1;
- (void)messageLinkWasInitialized:(id)arg1;
- (bool)open;
- (void)prioritizeAsset:(id)arg1;
- (unsigned long long)priority;
- (void)setDelegate:(id)arg1;

@end
