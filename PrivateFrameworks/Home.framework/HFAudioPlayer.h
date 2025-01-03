/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFAudioPlayer : NSObject <AVAudioPlayerDelegate> {
    NSURL * _audioFileURL;
    AVAudioPlayer * _audioPlayer;
    AVAudioSession * _audioSession;
    bool  _audioSessionIsActive;
    unsigned long long  _audioSessionOptions;
    <HFAudioPlayerDelegate> * _delegate;
    CADisplayLink * _displayLink;
    bool  _paused;
    double  _playerCurrentTime;
    unsigned long long  _playerStopSource;
    NSNumber * _routeChangeReason;
}

@property (nonatomic, retain) NSURL *audioFileURL;
@property (nonatomic, retain) AVAudioPlayer *audioPlayer;
@property (nonatomic, retain) AVAudioSession *audioSession;
@property (getter=isAudioSessionActive, nonatomic) bool audioSessionIsActive;
@property (nonatomic) unsigned long long audioSessionOptions;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <HFAudioPlayerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CADisplayLink *displayLink;
@property (nonatomic, readonly) double duration;
@property (readonly) unsigned long long hash;
@property (getter=isPaused, nonatomic) bool paused;
@property (nonatomic) double playerCurrentTime;
@property (nonatomic) unsigned long long playerStopSource;
@property (getter=isPlaying, nonatomic, readonly) bool playing;
@property (nonatomic, retain) NSNumber *routeChangeReason;
@property (readonly) Class superclass;
@property (nonatomic) float volume;

- (void).cxx_destruct;
- (id)_audioSessionCategory;
- (unsigned long long)_audioSessionCategoryOptions;
- (void)_cleanup;
- (bool)_configureAudioSession:(id*)arg1;
- (void)_deactivateAudioSession;
- (void)_deregisterAudioSessionObservers;
- (void)_displayLinkUpdated:(id)arg1;
- (void)_pauseWithReason:(id)arg1;
- (void)_registerAudioSessionObservers;
- (void)_stopWithoutAudioSessionDeactivation;
- (id)audioFileURL;
- (id)audioPlayer;
- (void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(bool)arg2;
- (id)audioSession;
- (void)audioSessionDidInterrupt:(id)arg1;
- (void)audioSessionMediaServicesWereLost:(id)arg1;
- (void)audioSessionMediaServicesWereReset:(id)arg1;
- (unsigned long long)audioSessionOptions;
- (void)audioSessionRouteChanged:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)displayLink;
- (double)duration;
- (id)initWithAudioFileURL:(id)arg1 audioSessionOptions:(unsigned long long)arg2 delegate:(id)arg3;
- (bool)isAudioSessionActive;
- (bool)isPaused;
- (bool)isPlaying;
- (void)pause;
- (void)play;
- (double)playerCurrentTime;
- (unsigned long long)playerStopSource;
- (bool)prepareToPlay:(id*)arg1;
- (void)resume;
- (id)routeChangeReason;
- (void)setAudioFileURL:(id)arg1;
- (void)setAudioPlayer:(id)arg1;
- (void)setAudioSession:(id)arg1;
- (void)setAudioSessionIsActive:(bool)arg1;
- (void)setAudioSessionOptions:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayLink:(id)arg1;
- (void)setPaused:(bool)arg1;
- (void)setPlayerCurrentTime:(double)arg1;
- (void)setPlayerStopSource:(unsigned long long)arg1;
- (void)setRouteChangeReason:(id)arg1;
- (void)setVolume:(float)arg1;
- (void)stop;
- (void)updateAudioFileURL:(id)arg1;
- (float)volume;

@end
