/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMoviePlayerController : NSObject <AVPlayerViewControllerDelegatePrivate, MPMediaPlayback> {
    UIView * _backgroundView;
    NSURL * _contentURL;
    long long  _controlStyle;
    AVAssetImageGenerator * _generator;
    UIViewController * _hostingViewController;
    bool  _isFullscreen;
    long long  _movieSourceType;
    AVPlayerViewController * _playerViewController;
    _MPMoviePlayerProxyView * _proxyView;
    long long  _repeatMode;
    bool  _shouldAutoplay;
    bool  _useApplicationAudioSession;
}

@property (getter=isAirPlayVideoActive, nonatomic, readonly) bool airPlayVideoActive;
@property (nonatomic) bool allowsAirPlay;
@property (nonatomic, readonly) UIView *backgroundView;
@property (nonatomic, copy) NSURL *contentURL;
@property (nonatomic) long long controlStyle;
@property (nonatomic) float currentPlaybackRate;
@property (nonatomic) double currentPlaybackTime;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (nonatomic) double endPlaybackTime;
@property (getter=isFullscreen, nonatomic) bool fullscreen;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIViewController *hostingViewController;
@property (nonatomic) double initialPlaybackTime;
@property (nonatomic, readonly) bool isPreparedToPlay;
@property (nonatomic, readonly) unsigned long long loadState;
@property (nonatomic, readonly) unsigned long long movieMediaTypes;
@property (nonatomic) long long movieSourceType;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } naturalSize;
@property (nonatomic, readonly) double playableDuration;
@property (nonatomic, readonly) long long playbackState;
@property (nonatomic, readonly) AVPlayerViewController *playerViewController;
@property (nonatomic, readonly) bool readyForDisplay;
@property (nonatomic) long long repeatMode;
@property (nonatomic) long long scalingMode;
@property (nonatomic) bool shouldAutoplay;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *view;

- (void).cxx_destruct;
- (id)_advertisementView;
- (void)_avPlayerItemDidPlayToEndNotification:(id)arg1;
- (id)_videoViewController;
- (id)accessLog;
- (bool)allowsAirPlay;
- (id)backgroundView;
- (void)beginSeekingBackward;
- (void)beginSeekingForward;
- (void)cancelAllThumbnailImageRequests;
- (id)contentURL;
- (long long)controlStyle;
- (float)currentPlaybackRate;
- (double)currentPlaybackTime;
- (void)dealloc;
- (double)duration;
- (double)endPlaybackTime;
- (void)endSeeking;
- (id)errorLog;
- (id)hostingViewController;
- (id)init;
- (id)initWithContentURL:(id)arg1;
- (double)initialPlaybackTime;
- (bool)isAirPlayVideoActive;
- (bool)isFullscreen;
- (bool)isPreparedToPlay;
- (unsigned long long)loadState;
- (unsigned long long)movieMediaTypes;
- (long long)movieSourceType;
- (struct CGSize { double x1; double x2; })naturalSize;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)pause;
- (void)play;
- (double)playableDuration;
- (long long)playbackState;
- (id)playerViewController;
- (void)playerViewController:(id)arg1 willBeginFullScreenPresentationWithAnimationCoordinator:(id)arg2;
- (void)playerViewController:(id)arg1 willEndFullScreenPresentationWithAnimationCoordinator:(id)arg2;
- (void)prepareToPlay;
- (bool)readyForDisplay;
- (long long)repeatMode;
- (void)requestThumbnailImagesAtTimes:(id)arg1 timeOption:(long long)arg2;
- (long long)scalingMode;
- (void)setAllowsAirPlay:(bool)arg1;
- (void)setContentURL:(id)arg1;
- (void)setControlStyle:(long long)arg1;
- (void)setCurrentPlaybackRate:(float)arg1;
- (void)setCurrentPlaybackTime:(double)arg1;
- (void)setEndPlaybackTime:(double)arg1;
- (void)setFullscreen:(bool)arg1;
- (void)setFullscreen:(bool)arg1 animated:(bool)arg2;
- (void)setHostingViewController:(id)arg1;
- (void)setInitialPlaybackTime:(double)arg1;
- (void)setMovieSourceType:(long long)arg1;
- (void)setRepeatMode:(long long)arg1;
- (void)setScalingMode:(long long)arg1;
- (void)setShouldAutoplay:(bool)arg1;
- (void)setUseApplicationAudioSession:(bool)arg1;
- (bool)shouldAutoplay;
- (void)stop;
- (id)thumbnailImageAtTime:(double)arg1 timeOption:(long long)arg2;
- (id)timedMetadata;
- (bool)useApplicationAudioSession;
- (id)view;

@end
