/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUIPrivate.framework/PhotosUIPrivate
 */

@interface PUVideoTileViewController : PUTileViewController <PUAssetViewModelChangeObserver, PUBrowsingVideoPlayerTimeObserver, PUBrowsingVideoPlayerVideoOutput, PUVideoLayerSource, PUViewModelChangeObserver, PXChangeObserver, PXSettingsKeyObserver, PXVideoSessionUIViewDelegate> {
    int  __currentImageRequestID;
    bool  __isDisplayingFullQualityImage;
    id /* block */  __readyForDisplayCompletionHandler;
    struct CGSize { 
        double width; 
        double height; 
    }  __targetSize;
    long long  __thumbnailRequestNumber;
    <PUDisplayAsset> * _asset;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _assetKeyFrameSourceTime;
    PUAssetViewModel * _assetViewModel;
    UIView * _borderView;
    PUBrowsingVideoPlayer * _browsingVideoPlayer;
    PUBrowsingViewModel * _browsingViewModel;
    bool  _canPlayVideo;
    bool  _currentImageIsPlaceholder;
    UIImage * _displayedPreloadedImage;
    bool  _hidePlaceholderImmediately;
    bool  _isOnSecondScreen;
    UIView * _liveEffectRenderingDebugIndicator;
    PUMediaProvider * _mediaProvider;
    PXPixelBufferView * _pixelBufferView;
    bool  _placeholderHiddenBehindVideoView;
    UIImageView * _placeholderImageView;
    bool  _placeholderIsAnimatingToHidden;
    bool  _placeholderVisible;
    bool  _playerDidPlayToEnd;
    bool  _playerIsSeeking;
    UIImage * _preloadedImage;
    id /* block */  _readyForDisplayChangeHandler;
    struct CGSize { 
        double width; 
        double height; 
    }  _requestedImageTargetSize;
    PXVideoSession * _videoSession;
    PXVideoSessionUIView * _videoView;
    UIView * _view;
    bool  _waitForFocusValueForCrossfade;
}

@property (setter=_setCurrentImageRequestID:, nonatomic) int _currentImageRequestID;
@property (setter=_setDisplayingFullQualityImage:, nonatomic) bool _isDisplayingFullQualityImage;
@property (nonatomic, readonly) bool _isDisplayingVideo;
@property (setter=_setReadyForDisplayCompletionHandler:, nonatomic, copy) id /* block */ _readyForDisplayCompletionHandler;
@property (setter=_setTargetSize:, nonatomic) struct CGSize { double x1; double x2; } _targetSize;
@property (setter=_setThumbnailRequestNumber:, nonatomic) long long _thumbnailRequestNumber;
@property (setter=_setAsset:, nonatomic, retain) <PUDisplayAsset> *asset;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } assetKeyFrameSourceTime;
@property (nonatomic, retain) PUAssetViewModel *assetViewModel;
@property (nonatomic, readonly) UIView *borderView;
@property (nonatomic, retain) PUBrowsingVideoPlayer *browsingVideoPlayer;
@property (nonatomic, retain) PUBrowsingViewModel *browsingViewModel;
@property (nonatomic) bool canPlayVideo;
@property (nonatomic) bool currentImageIsPlaceholder;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIImage *displayedPreloadedImage;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isOnSecondScreen;
@property (nonatomic, retain) PUMediaProvider *mediaProvider;
@property (nonatomic) bool placeholderHiddenBehindVideoView;
@property (nonatomic) bool placeholderIsAnimatingToHidden;
@property (nonatomic) bool placeholderVisible;
@property (nonatomic) bool playerDidPlayToEnd;
@property (nonatomic) bool playerIsSeeking;
@property (nonatomic, readonly) AVPlayerLayer *playerLayer;
@property (nonatomic, copy) id /* block */ readyForDisplayChangeHandler;
@property (nonatomic) struct CGSize { double x1; double x2; } requestedImageTargetSize;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool videoOutputIsReadyForDisplay;
@property (nonatomic, retain) PXVideoSession *videoSession;
@property (nonatomic, retain) PXVideoSessionUIView *videoView;

+ (id)keyFrameTimeLoadingQueue;

- (void).cxx_destruct;
- (void)_callReadyToDisplayChangeHandler;
- (int)_currentImageRequestID;
- (void)_fetchKeyTimeForAsset:(id)arg1;
- (void)_handleAssetViewModel:(id)arg1 didChange:(id)arg2;
- (void)_handleImageResult:(id)arg1 info:(id)arg2 synchronous:(bool)arg3;
- (void)_handleKeyFrameSourceTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 forAsset:(id)arg2;
- (bool)_isDisplayingFullQualityImage;
- (bool)_isDisplayingVideo;
- (void)_layoutLiveEffectsRenderDebugIndicator;
- (id /* block */)_readyForDisplayCompletionHandler;
- (void)_setAsset:(id)arg1;
- (void)_setCurrentImageRequestID:(int)arg1;
- (void)_setDisplayingFullQualityImage:(bool)arg1;
- (void)_setImageResult:(id)arg1 pixelBuffer:(struct __CVBuffer { }*)arg2 info:(id)arg3 synchronous:(bool)arg4;
- (void)_setReadyForDisplayCompletionHandler:(id /* block */)arg1;
- (void)_setTargetSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_setThumbnailRequestNumber:(long long)arg1;
- (struct CGSize { double x1; double x2; })_targetSize;
- (long long)_thumbnailRequestNumber;
- (void)_updateDebugBorders;
- (void)_updateImage;
- (void)_updateInteractionHostViewRegistration;
- (void)_updateLiveEffectsRenderDebugIndicator;
- (void)_updateLiveEffectsRenderDebugIndicatorVisibility;
- (void)_updatePlaceholderVisibility;
- (void)_updateReadyForDisplay;
- (void)_updateTargetSize;
- (void)_updateVideo;
- (bool)adoptAssetTransitionInfo:(id)arg1;
- (void)applyLayoutInfo:(id)arg1;
- (id)asset;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })assetKeyFrameSourceTime;
- (id)assetViewModel;
- (void)becomeReusable;
- (id)borderView;
- (id)browsingVideoPlayer;
- (id)browsingViewModel;
- (bool)canPlayVideo;
- (bool)currentImageIsPlaceholder;
- (void)didChangeActive;
- (void)didChangeAnimating;
- (id)displayedPreloadedImage;
- (id)generateAssetTransitionInfo;
- (id)initWithReuseIdentifier:(id)arg1;
- (bool)isOnSecondScreen;
- (id)loadView;
- (id)mediaProvider;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (bool)placeholderHiddenBehindVideoView;
- (bool)placeholderIsAnimatingToHidden;
- (bool)placeholderVisible;
- (bool)playerDidPlayToEnd;
- (bool)playerIsSeeking;
- (id)playerLayer;
- (void)prepareForVideoResolutionChange;
- (id /* block */)readyForDisplayChangeHandler;
- (void)removeAllAnimations;
- (struct CGSize { double x1; double x2; })requestedImageTargetSize;
- (void)setAssetKeyFrameSourceTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setAssetViewModel:(id)arg1;
- (void)setBrowsingVideoPlayer:(id)arg1;
- (void)setBrowsingViewModel:(id)arg1;
- (void)setCanPlayVideo:(bool)arg1;
- (void)setCurrentImageIsPlaceholder:(bool)arg1;
- (void)setDisplayedPreloadedImage:(id)arg1;
- (void)setEdgeAntialiasingEnabled:(bool)arg1;
- (void)setIsOnSecondScreen:(bool)arg1;
- (void)setMediaProvider:(id)arg1;
- (void)setPlaceholderHiddenBehindVideoView:(bool)arg1;
- (void)setPlaceholderIsAnimatingToHidden:(bool)arg1;
- (void)setPlaceholderVisible:(bool)arg1;
- (void)setPlaceholderVisible:(bool)arg1 animated:(bool)arg2 animationDuration:(double)arg3 completion:(id /* block */)arg4;
- (void)setPlayerDidPlayToEnd:(bool)arg1;
- (void)setPlayerIsSeeking:(bool)arg1;
- (void)setPreloadedImage:(id)arg1;
- (void)setReadyForDisplayChangeHandler:(id /* block */)arg1;
- (void)setRequestedImageTargetSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setVideoSession:(id)arg1;
- (void)setVideoView:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (bool)videoOutputIsReadyForDisplay;
- (void)videoPlayer:(id)arg1 currentTimeDidChange:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)videoPlayer:(id)arg1 desiredSeekTimeDidChange:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (id)videoSession;
- (void)videoSessionViewPlaceholderVisibilityChanged:(id)arg1;
- (id)videoView;
- (void)viewDidLoad;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (id)viewsForApplyingBorder;
- (id)viewsForApplyingCornerRadius;

@end
