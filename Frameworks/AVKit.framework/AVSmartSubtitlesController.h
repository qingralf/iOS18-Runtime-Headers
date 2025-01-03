/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVSmartSubtitlesController : NSObject {
    double  _currentSkipBackTimeInterval;
    <AVSmartSubtitlesControllerDelegate> * _delegate;
    bool  _didToggleCaptionsOn;
    double  _lastSeekTime;
    AVPlayerController * _playerController;
    bool  _playerMuted;
    id  _playerTimeObserver;
    double  _skipBackSeekDelta;
    AVObservationController * _smartSubtitlesControllerKVO;
    long long  _state;
    bool  _subtitlesOnMuteActive;
    double  _timeOfSeekStart;
}

@property (nonatomic) double currentSkipBackTimeInterval;
@property (nonatomic) <AVSmartSubtitlesControllerDelegate> *delegate;
@property (nonatomic) bool didToggleCaptionsOn;
@property (nonatomic) double lastSeekTime;
@property (nonatomic, retain) AVPlayerController *playerController;
@property (nonatomic) bool playerMuted;
@property (nonatomic, retain) id playerTimeObserver;
@property (nonatomic) double skipBackSeekDelta;
@property (nonatomic, readonly) bool smartSubtitlesActive;
@property (nonatomic, retain) AVObservationController *smartSubtitlesControllerKVO;
@property (nonatomic) long long state;
@property (getter=isSubtitlesOnMuteActive, nonatomic) bool subtitlesOnMuteActive;
@property (nonatomic) double timeOfSeekStart;

- (void).cxx_destruct;
- (void)__transitionToDisplayingCaptionsIfAble;
- (void)_performSkipBackDelegateCallback;
- (bool)_toggleCaptions:(bool)arg1;
- (double)currentSkipBackTimeInterval;
- (void)dealloc;
- (id)delegate;
- (bool)didToggleCaptionsOn;
- (id)init;
- (void)invalidate;
- (bool)isSubtitlesOnMuteActive;
- (double)lastSeekTime;
- (id)playerController;
- (bool)playerMuted;
- (id)playerTimeObserver;
- (void)setCurrentSkipBackTimeInterval:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDidToggleCaptionsOn:(bool)arg1;
- (void)setLastSeekTime:(double)arg1;
- (void)setPlayerController:(id)arg1;
- (void)setPlayerMuted:(bool)arg1;
- (void)setPlayerTimeObserver:(id)arg1;
- (void)setSkipBackSeekDelta:(double)arg1;
- (void)setSmartSubtitlesControllerKVO:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setSubtitlesOnMuteActive:(bool)arg1;
- (void)setTimeOfSeekStart:(double)arg1;
- (double)skipBackSeekDelta;
- (bool)smartSubtitlesActive;
- (id)smartSubtitlesControllerKVO;
- (long long)state;
- (double)timeOfSeekStart;
- (void)updatePlayerVolumeToPlayerMuted:(bool)arg1;
- (void)userRequestedSeekWithTimeInterval:(double)arg1;
- (void)userRequestedSmartSubtitlesHiddenIfActive;

@end
