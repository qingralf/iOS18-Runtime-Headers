/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

@interface JFXCompositionPlayerViewController : UIViewController <UIGestureRecognizerDelegate> {
    int  _cachedCurrentTime;
    int  _cachedDuration;
    int  _cachedMuted;
    struct CGSize { 
        double width; 
        double height; 
    }  _cachedRenderSizeInPixels;
    bool  _cachedWasPlaying;
    <JFXCompositionPlayableElementsDataSource> * _clipsDataSource;
    JFXCompositionPlayer * _clipsPlayer;
    <JFXCompositionPlayerViewControllerDelegate> * _delegate;
    bool  _disableVideoDisplayGestures;
    NSString * _displayName;
    bool  _dontRemovePlaceHolderOnDisplay;
    bool  _isDisplaying;
    struct CGSize { 
        double width; 
        double height; 
    }  _lastPlayerViewBoundsSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _lastPlayerViewSize;
    unsigned int  _parentCode;
    UIView * _placeHolderView;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _playbackTimeChangedObserverInterval;
    UIColor * _restoreToColor;
    long long  _videoContentMode;
    UIView * _videoDisplayOverlayView;
    UIView * _viewFlashed;
}

@property (nonatomic) int cachedCurrentTime;
@property (nonatomic) int cachedDuration;
@property (nonatomic) int cachedMuted;
@property (nonatomic) struct CGSize { double x1; double x2; } cachedRenderSizeInPixels;
@property (nonatomic) bool cachedWasPlaying;
@property (nonatomic) <JFXCompositionPlayableElementsDataSource> *clipsDataSource;
@property (nonatomic, retain) JFXCompositionPlayer *clipsPlayer;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } currentCMTime;
@property (nonatomic, readonly) int currentTime;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <JFXCompositionPlayerViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disableVideoDisplayGestures;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic) bool dontRemovePlaceHolderOnDisplay;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isDisplaying;
@property (nonatomic) struct CGSize { double x1; double x2; } lastPlayerViewBoundsSize;
@property (nonatomic) struct CGSize { double x1; double x2; } lastPlayerViewSize;
@property (getter=isMuted, nonatomic) bool muted;
@property (nonatomic) unsigned int parentCode;
@property (nonatomic, retain) UIView *placeHolderView;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } playbackTimeChangedObserverInterval;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } renderSizeInPixels;
@property (nonatomic, retain) UIColor *restoreToColor;
@property (readonly) Class superclass;
@property (nonatomic) long long videoContentMode;
@property (nonatomic, retain) UIView *videoDisplayOverlayView;
@property (nonatomic) UIView *viewFlashed;

+ (Class)compositionPlayerClass;

- (void).cxx_destruct;
- (void)addPlaceHolder;
- (void)appDidBecomeActive:(id)arg1;
- (void)appDidEnterBackground:(id)arg1;
- (void)appWillResignActive:(id)arg1;
- (void)beginFlash;
- (int)cachedCurrentTime;
- (int)cachedDuration;
- (int)cachedMuted;
- (struct CGSize { double x1; double x2; })cachedRenderSizeInPixels;
- (bool)cachedWasPlaying;
- (id)clipsDataSource;
- (id)clipsPlayer;
- (id)contentModeToVideoGravity:(long long)arg1;
- (struct CGPoint { double x1; double x2; })convertPointInPlaybackSizeToClipPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })convertPointInPlaybackSizeToClipPointNormalized:(struct CGPoint { double x1; double x2; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })currentCMTime;
- (int)currentTime;
- (void)dealloc;
- (id)delegate;
- (void)didReceiveMemoryWarning;
- (bool)disableVideoDisplayGestures;
- (void)dispatchBlockWhenDone:(id /* block */)arg1;
- (id)displayName;
- (void)displayPlaceHolder;
- (bool)dontRemovePlaceHolderOnDisplay;
- (int)duration;
- (void)endFlash;
- (int)frameRate;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)installVideoDisplayGestures;
- (bool)isDisplaying;
- (bool)isMuted;
- (bool)isPlaying;
- (bool)isReloadClipDataSourceNeeded;
- (struct CGSize { double x1; double x2; })lastPlayerViewBoundsSize;
- (struct CGSize { double x1; double x2; })lastPlayerViewSize;
- (void)mediaserverdCrashed;
- (struct { double x1; double x2; })normalizedMinimumTouchSize;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (unsigned int)parentCode;
- (void)pause;
- (void)pauseWithCompletionBlock:(id /* block */)arg1;
- (id)placeHolderView;
- (id)placeholderContainerView;
- (void)play;
- (void)playWithCompletionHandler:(id /* block */)arg1;
- (void)playbackAreaDoubleTapped:(id)arg1;
- (void)playbackAreaPanned:(id)arg1;
- (void)playbackAreaPinched:(id)arg1;
- (void)playbackAreaRotated:(id)arg1;
- (void)playbackAreaTapped:(id)arg1;
- (void)playbackDidStart:(id)arg1;
- (void)playbackDidStop:(id)arg1 currentTime:(int)arg2;
- (void)playbackReadyForDisplayChanged:(id)arg1 isReady:(bool)arg2 setPlaceHolder:(bool)arg3;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })playbackTimeChangedObserverInterval;
- (void)playbackTimeDidChange:(id)arg1 currentTime:(int)arg2;
- (void)playerBecameReadyForDisplayChanged:(bool)arg1 setPlaceHolder:(bool)arg2;
- (id)playerContainerView;
- (struct CGSize { double x1; double x2; })playerViewBoundsSize;
- (id)playerViewer;
- (void)playerWillBeDestroyed:(id)arg1;
- (void)preparePlaceHolder;
- (void)prepareVideoDisplayView;
- (void)reloadClipDataSource;
- (void)reloadClipDataSourceIfNeeded;
- (void)reloadClipDataSourceOnBecomingActive;
- (void)removePlaceHolder;
- (struct CGSize { double x1; double x2; })renderSizeInPixels;
- (void)resetPlaybackTimeChangedObserverInterval;
- (id)restoreToColor;
- (void)seekToTime:(int)arg1;
- (void)setCachedCurrentTime:(int)arg1;
- (void)setCachedDuration:(int)arg1;
- (void)setCachedMuted:(int)arg1;
- (void)setCachedRenderSizeInPixels:(struct CGSize { double x1; double x2; })arg1;
- (void)setCachedWasPlaying:(bool)arg1;
- (void)setClipsDataSource:(id)arg1;
- (void)setClipsPlayer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisableVideoDisplayGestures:(bool)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setDontRemovePlaceHolderOnDisplay:(bool)arg1;
- (void)setLastPlayerViewBoundsSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setLastPlayerViewSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setMuted:(bool)arg1;
- (void)setNeedsCompositionUpdate;
- (void)setNeedsCompositionUpdateForClip:(id)arg1;
- (void)setParentCode:(unsigned int)arg1;
- (void)setPlaceHolderView:(id)arg1;
- (void)setPlaybackTimeChangeNotificationPeriod:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setPlaybackTimeChangedObserverInterval:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setRestoreToColor:(id)arg1;
- (void)setVideoContentMode:(long long)arg1;
- (void)setVideoDisplayOverlayView:(id)arg1;
- (void)setViewFlashed:(id)arg1;
- (void)sharedInit;
- (bool)shouldHandleMediaServerCrash;
- (void)unloadClipDataSourceSetPlaceHolder:(bool)arg1;
- (void)unloadCompositionSetPlaceHolder:(bool)arg1;
- (void)updateCachedPlaybackProperties;
- (void)updateDelegatePlayer;
- (void)updateVideoDisplayViewBounds;
- (long long)videoContentMode;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })videoDisplayBounds;
- (id)videoDisplayOverlayView;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)viewFlashed;
- (id)viewToFlash;

@end
