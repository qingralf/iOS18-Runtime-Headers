/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

@interface ATMPStoreAssetLink : NSObject <ATAssetLink, MPStoreDownloadManagerObserver> {
    NSMutableDictionary * _assetMap;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    <ATAssetLinkDelegate> * _delegate;
    MPStoreDownloadManager * _downloadManager;
    NSMutableDictionary * _downloadsMap;
    bool  _open;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <ATAssetLinkDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isOpen, nonatomic, readonly) bool open;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_assetTypeForStoreKind:(id)arg1;
- (id)_dataClassForStoreKind:(id)arg1;
- (void)_enqueueAssets:(id)arg1;
- (id)_errorForFinishedDownload:(id)arg1;
- (void)_finishAsset:(id)arg1 error:(id)arg2 retryable:(bool)arg3;
- (bool)canEnqueueAsset:(id)arg1;
- (void)cancelAssets:(id)arg1;
- (void)close;
- (id)delegate;
- (void)downloadManager:(id)arg1 didAddActiveDownloads:(id)arg2 removeActiveDownloads:(id)arg3;
- (void)downloadManager:(id)arg1 didAddDownloads:(id)arg2 removeDownloads:(id)arg3;
- (void)downloadManager:(id)arg1 downloadDidFinish:(id)arg2;
- (void)downloadManager:(id)arg1 downloadDidProgress:(id)arg2;
- (id)enqueueAssets:(id)arg1 force:(bool)arg2;
- (id)init;
- (bool)isOpen;
- (bool)linkIsReady;
- (unsigned long long)maximumBatchSize;
- (bool)open;
- (void)prioritizeAsset:(id)arg1;
- (unsigned long long)priority;
- (void)setDelegate:(id)arg1;

@end
