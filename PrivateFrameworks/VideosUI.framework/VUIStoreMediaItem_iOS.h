/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIStoreMediaItem_iOS : VUILibraryMediaItem_iOS <TVPContentKeyLoading, TVPMediaItemReportingDelegate, VUIStoreFPSKeyLoaderDelegate> {
    NSURL * _downloadDestinationURL;
    VUIStoreDownloadMonitor * _downloadMonitor;
    NSNumber * _downloadToken;
    NSNumber * _fileSize;
    NSDictionary * _fpsAdditionalServerParams;
    NSURL * _fpsCertificateURL;
    NSError * _fpsKeyError;
    NSURL * _fpsKeyServerURL;
    NSURL * _hlsPlaybackURL;
    bool  _isForStartingDownload;
    unsigned long long  _loadingContext;
    bool  _needsRentalCheckin;
    bool  _needsRentalCheckoutPriorToPlayback;
    NSObject * _parentReportingToken;
    unsigned long long  _playbackContext;
    long long  _playbackType;
    NSURL * _playbackURL;
    NSDictionary * _sinfsDict;
    VUIStoreFPSKeyLoader * _storeFPSKeyLoader;
    bool  _useSidebandLibraryForPlaybackKeys;
    VUIVideoManagedObject * _videoManagedObject;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSURL *downloadDestinationURL;
@property (nonatomic, retain) VUIStoreDownloadMonitor *downloadMonitor;
@property (nonatomic, retain) NSNumber *downloadToken;
@property (nonatomic, retain) NSNumber *fileSize;
@property (nonatomic, copy) NSDictionary *fpsAdditionalServerParams;
@property (nonatomic, copy) NSURL *fpsCertificateURL;
@property (nonatomic, retain) NSError *fpsKeyError;
@property (nonatomic, copy) NSURL *fpsKeyServerURL;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSURL *hlsPlaybackURL;
@property (nonatomic) bool isForStartingDownload;
@property (nonatomic) unsigned long long loadingContext;
@property (nonatomic) bool needsRentalCheckin;
@property (nonatomic) bool needsRentalCheckoutPriorToPlayback;
@property (nonatomic, retain) NSObject *parentReportingToken;
@property (nonatomic) unsigned long long playbackContext;
@property (nonatomic) long long playbackType;
@property (nonatomic, retain) NSURL *playbackURL;
@property (nonatomic, retain) NSDictionary *sinfsDict;
@property (nonatomic, retain) VUIStoreFPSKeyLoader *storeFPSKeyLoader;
@property (readonly) Class superclass;
@property (nonatomic) bool useSidebandLibraryForPlaybackKeys;
@property (nonatomic, retain) VUIVideoManagedObject *videoManagedObject;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_checkInRental;
- (void)_checkoutRentalWithCheckoutType:(unsigned long long)arg1 startPlaybackClock:(bool)arg2 completion:(id /* block */)arg3;
- (void)_configureForDownloadingWithCompletion:(id /* block */)arg1;
- (void)_configureForLocalPlaybackWithURL:(id)arg1 completion:(id /* block */)arg2;
- (void)_configureForPlaybackFromExistingDownload:(id)arg1 downloadManager:(id)arg2 completion:(id /* block */)arg3;
- (void)_configureForStreamingPlaybackWithCompletion:(id /* block */)arg1;
- (void)_deleteDownloadKeyCookieForURL:(id)arg1;
- (id)_downloadForThisMediaItemReturningDownloadManager:(id*)arg1;
- (void)_externalPlaybackTypeDidChange:(id)arg1;
- (id)_hlsURLEnsuringDsidQueryParamIsPresentFromURL:(id)arg1;
- (id)_iTunesStoreContentInfo;
- (id)_iTunesStoreContentPurchasedMediaKind;
- (bool)_loadingCancelled:(unsigned long long)arg1;
- (id)_offlineKeyDataForKeyRequest:(id)arg1;
- (void)_performRedownloadWithType:(long long)arg1 completion:(id /* block */)arg2;
- (void)_persistOfflineKeyData:(id)arg1 forKeyRequest:(id)arg2;
- (id)_rentalEndDate;
- (id)_rentalExpirationDate;
- (id)_rentalPlaybackEndDate;
- (void)_setDownloadKeyCookieWithURL:(id)arg1 downloadKey:(id)arg2;
- (void)_updateRentalPlaybackStartDate:(id)arg1;
- (bool)_url:(id)arg1 hasSameAdamIDAsURL:(id)arg2;
- (id)_videoPlaybackTypeDescription;
- (void)cleanUpMediaItem;
- (void)dealloc;
- (id)downloadDestinationURL;
- (id)downloadMonitor;
- (id)downloadToken;
- (id)fileSize;
- (id)fpsAdditionalServerParams;
- (id)fpsCertificateURL;
- (id)fpsKeyError;
- (id)fpsKeyServerURL;
- (bool)hasTrait:(id)arg1;
- (id)hlsPlaybackURL;
- (id)initWithAdamID:(long long)arg1 videoManagedObject:(id)arg2 isForStartingDownload:(bool)arg3;
- (id)initWithMPMediaItem:(id)arg1 videoManagedObject:(id)arg2 isForStartingDownload:(bool)arg3;
- (bool)isEqualToMediaItem:(id)arg1;
- (bool)isForStartingDownload;
- (void)loadFairPlayStreamingKeyRequests:(id)arg1;
- (void)loadFairPlayStreamingKeyRequests:(id)arg1 completion:(id /* block */)arg2;
- (unsigned long long)loadingContext;
- (void)mediaItemAllInitialLoadingComplete:(id)arg1 totalTime:(double)arg2 player:(id)arg3;
- (id)mediaItemMetadataForProperty:(id)arg1;
- (id)mediaItemURL;
- (bool)needsRentalCheckin;
- (bool)needsRentalCheckoutPriorToPlayback;
- (id)parentReportingToken;
- (unsigned long long)playbackContext;
- (long long)playbackType;
- (id)playbackURL;
- (void)prepareForLoadingWithCompletion:(id /* block */)arg1;
- (void)prepareForPlaybackInitiationWithCompletion:(id /* block */)arg1;
- (void)processFinishedDownloadWithCompletion:(id /* block */)arg1;
- (id)replacementErrorForPlaybackError:(id)arg1;
- (id)reportingDelegate;
- (void)resetReportingEventCollection;
- (void)setDownloadDestinationURL:(id)arg1;
- (void)setDownloadMonitor:(id)arg1;
- (void)setDownloadToken:(id)arg1;
- (void)setFileSize:(id)arg1;
- (void)setFpsAdditionalServerParams:(id)arg1;
- (void)setFpsCertificateURL:(id)arg1;
- (void)setFpsKeyError:(id)arg1;
- (void)setFpsKeyServerURL:(id)arg1;
- (void)setHlsPlaybackURL:(id)arg1;
- (void)setIsForStartingDownload:(bool)arg1;
- (void)setLoadingContext:(unsigned long long)arg1;
- (void)setMediaItemMetadata:(id)arg1 forProperty:(id)arg2;
- (void)setNeedsRentalCheckin:(bool)arg1;
- (void)setNeedsRentalCheckoutPriorToPlayback:(bool)arg1;
- (void)setParentReportingToken:(id)arg1;
- (void)setPlaybackContext:(unsigned long long)arg1;
- (void)setPlaybackType:(long long)arg1;
- (void)setPlaybackURL:(id)arg1;
- (void)setSinfsDict:(id)arg1;
- (void)setStoreFPSKeyLoader:(id)arg1;
- (void)setUseSidebandLibraryForPlaybackKeys:(bool)arg1;
- (void)setVideoManagedObject:(id)arg1;
- (bool)shouldRetryPlaybackForError:(id)arg1;
- (id)sinfsDict;
- (id)storeFPSKeyLoader;
- (void)storeFPSKeyLoader:(id)arg1 didLoadOfflineKeyData:(id)arg2 forKeyRequest:(id)arg3;
- (void)storeFPSKeyLoader:(id)arg1 didReceiveUpdatedRentalExpirationDate:(id)arg2 playbackStartDate:(id)arg3;
- (void)storeFPSKeyLoader:(id)arg1 willFailWithError:(id)arg2 forKeyRequest:(id)arg3;
- (void)updateBookmarkWithSuggestedTime:(double)arg1 forElapsedTime:(double)arg2 duration:(double)arg3 playbackOfMediaItemIsEnding:(bool)arg4;
- (bool)useSidebandLibraryForPlaybackKeys;
- (id)videoManagedObject;

@end
