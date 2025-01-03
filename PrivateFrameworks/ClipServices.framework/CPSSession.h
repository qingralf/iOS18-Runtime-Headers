/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ClipServices.framework/ClipServices
 */

@interface CPSSession : NSObject <CPSInstallationControllerDelegate> {
    <CPSAppInfoFetching> * _appInfoFetcher;
    id /* block */  _applicationIconFetchCompletion;
    NSURL * _applicationIconFileURL;
    CPSPromise * _businessIconFetchingPromise;
    NSURL * _businessIconFileURL;
    <CPSBusinessItemFetching> * _businessItemFetcher;
    long long  _clipAvailabilityState;
    CPSSessionConfiguration * _configuration;
    bool  _didFetchApplicationIcon;
    NSNumber * _estimatedProgress;
    NSURL * _heroImageFileURL;
    CPSImageLoader * _imageLoader;
    long long  _installationState;
    CPSClipLaunchOptions * _launchOptions;
    CPSClipMetadata * _metadata;
    id /* block */  _metadataCompletion;
    NSError * _metadataFetchError;
    long long  _metadataFetchState;
    bool  _openingWebClipFromDaemon;
    NSMutableArray * _proxyObjects;
    NSObject<OS_dispatch_queue> * _queue;
    NSURL * _url;
}

@property (nonatomic, retain) <CPSAppInfoFetching> *appInfoFetcher;
@property (nonatomic, readonly) NSURL *applicationIconFileURL;
@property (nonatomic, retain) <CPSBusinessItemFetching> *businessItemFetcher;
@property (nonatomic, retain) CPSSessionConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSNumber *estimatedProgress;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) CPSClipLaunchOptions *launchOptions;
@property (nonatomic, readonly) NSString *logID;
@property (nonatomic, readonly) CPSClipMetadata *metadata;
@property (getter=isOpeningWebClipFromDaemon, nonatomic) bool openingWebClipFromDaemon;
@property (getter=isPurgeable, nonatomic, readonly) bool purgeable;
@property (nonatomic, readonly) bool registeredForTest;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSURL *url;

- (void).cxx_destruct;
- (id)_availabilityOptions;
- (void)_didDetermineAvailability:(bool)arg1;
- (void)_didFetchBusinessIconWithURL:(id)arg1;
- (void)_didFinishLoadingWithError:(id)arg1;
- (void)_didUpdateMetadata:(id)arg1;
- (void)_evictFromCache;
- (void)_fetchAppMetadataWithBundleID:(id)arg1 url:(id)arg2 accountInvocationPolicy:(id)arg3;
- (void)_fetchBusinessIconIfNeeded;
- (void)_fetchBusinessMetadata;
- (void)_fetchParentApplicationMetadataWithBundleID:(id)arg1;
- (void)_notifyObserversOfMetadataFetchResultUpdates:(id)arg1;
- (void)_retrieveApplicationIconWithAppIconURL:(id)arg1 clipBundleID:(id)arg2;
- (void)_retrieveApplicationIconWithCompletionHandler:(id /* block */)arg1;
- (void)_retrieveHeroImageWithHeroImageURL:(id)arg1;
- (void)_retrieveImageWithURL:(id)arg1 didFetchImage:(bool*)arg2 fileURL:(id*)arg3 fetchCompletion:(id /* block */)arg4 proxyCompletion:(id /* block */)arg5;
- (id)_retrieveInstalledApplicationIconWithAppIconURL:(id)arg1 clipBundleID:(id)arg2;
- (void)_updateEntryPointForWebClip:(id)arg1;
- (void)_updateLocationConfirmationForRecord:(id)arg1 permissionGranted:(id)arg2;
- (void)_updateWebClipIcon:(id)arg1 metadata:(id)arg2;
- (void)addRemoteObjectProxy:(id)arg1;
- (id)appInfoFetcher;
- (id)applicationIconFileURL;
- (id)businessItemFetcher;
- (bool)checkAndConsumeShowsAppAttributionBannerLaunchOption;
- (void)clearMetadataAndRefetch;
- (id)configuration;
- (void)didCompleteTestSessionAtTime:(double)arg1;
- (id)estimatedProgress;
- (void)fetchHeroImage;
- (void)fetchMetadataWithCompletion:(id /* block */)arg1;
- (id)initWithURL:(id)arg1 usingQueue:(id)arg2;
- (id)initWithURL:(id)arg1 usingQueue:(id)arg2 configuration:(id)arg3;
- (void)installationController:(id)arg1 didFinishWithError:(id)arg2;
- (void)installationController:(id)arg1 didUpdateProgress:(double)arg2;
- (void)installationControllerDidInstallPlaceholder:(id)arg1;
- (void)installationControllerWillStartInstall:(id)arg1;
- (bool)isOpeningWebClipFromDaemon;
- (bool)isPurgeable;
- (id)launchOptions;
- (id)logID;
- (id)metadata;
- (bool)registeredForTest;
- (void)removeRemoteObjectProxy:(id)arg1;
- (void)setAppInfoFetcher:(id)arg1;
- (void)setBusinessItemFetcher:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setOpeningWebClipFromDaemon:(bool)arg1;
- (void)setPreloadedMetadata:(id)arg1;
- (void)updateClipDataForEntryPointWithWebClip:(id)arg1 launchOptions:(id)arg2;
- (id)url;

@end
