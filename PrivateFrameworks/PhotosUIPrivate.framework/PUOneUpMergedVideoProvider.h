/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUIPrivate.framework/PhotosUIPrivate
 */

@interface PUOneUpMergedVideoProvider : PXObservable <ISBasePlayerDelegate, PUViewModelChangeObserver, PXChangeObserver> {
    PUBrowsingViewModel * _browsingViewModel;
    PUMergedLivePhotosVideoRequest * _currentRequest;
    NSCache * _dataCache;
    NSError * _error;
    bool  _isEnabled;
    ISLivePhotoPlayer * _livePhotoPlayer;
    PUMergedLivePhotosVideo * _mergedVideo;
    long long  _state;
}

@property (nonatomic, readonly) PUBrowsingViewModel *browsingViewModel;
@property (nonatomic, retain) PUMergedLivePhotosVideoRequest *currentRequest;
@property (nonatomic, retain) NSCache *dataCache;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isEnabled;
@property (nonatomic, readonly) ISLivePhotoPlayer *livePhotoPlayer;
@property (nonatomic, retain) PUMergedLivePhotosVideo *mergedVideo;
@property (nonatomic) long long state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleRequestChanges:(id)arg1;
- (void)_updateLivePhotoPlayerItem;
- (void)_updateRequest;
- (id)browsingViewModel;
- (id)currentRequest;
- (id)dataCache;
- (id)error;
- (id)initWithBrowsingViewModel:(id)arg1;
- (bool)isEnabled;
- (id)livePhotoPlayer;
- (id)mergedVideo;
- (id)mutableChangeObject;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)playerWillRelinquishVideoPlayer:(id)arg1;
- (void)setCurrentRequest:(id)arg1;
- (void)setDataCache:(id)arg1;
- (void)setError:(id)arg1;
- (void)setIsEnabled:(bool)arg1;
- (void)setMergedVideo:(id)arg1;
- (void)setState:(long long)arg1;
- (long long)state;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (id)wrappedVideoPlayerForPlayer:(id)arg1;

@end