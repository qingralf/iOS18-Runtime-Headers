/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface _MPCPlaybackEnginePlayer : NSObject <MFPlaybackStackControllerDelegate, MPCAssetLoaderDelegate, MPCPlaybackEngineEventObserving> {
    double  _applicationMusicPlayerCrossFadeDuration;
    long long  _applicationMusicPlayerTransitionType;
    <MFAssetLoading> * _assetLoader;
    bool  _autoPlayWhenLikelyToKeepUp;
    MPCItemBookmarker * _bookmarker;
    MPCPlayerItemConfigurator * _configurator;
    MRCriticalSectionToken * _criticalSectionToken;
    NSNumber * _currentRelativeVolume;
    MPCPlaybackErrorController * _errorController;
    <MPCPlaybackEngineEventStreamDeferralAssertion> * _evsDeferralAssertionForFirstAudioFrame;
    MPCExternalPlaybackController * _externalPlaybackController;
    long long  _jumpIdentifier;
    bool  _lastReportedVocalAttenuationEnabledState;
    MPCLeaseController * _leaseController;
    MPCPlaybackEngine * _playbackEngine;
    <MFPlaybackStackController><MFQueueManagement> * _playbackStackController;
    MPCAVItemTrace * _playbackStartTrace;
    bool  _reloadingPlaybackContext;
    unsigned long long  _stateHandle;
    _MPCAudioSessionController * _transientAudioSessionController;
    MPCMediaFoundationTranslator * _translator;
}

@property (nonatomic, readonly) NSDictionary *_stateDictionary;
@property (nonatomic) double applicationMusicPlayerCrossFadeDuration;
@property (nonatomic) long long applicationMusicPlayerTransitionType;
@property (nonatomic, retain) <MFAssetLoading> *assetLoader;
@property (nonatomic) bool autoPlayWhenLikelyToKeepUp;
@property (nonatomic, retain) MPCItemBookmarker *bookmarker;
@property (nonatomic, retain) MPCPlayerItemConfigurator *configurator;
@property (nonatomic, retain) MRCriticalSectionToken *criticalSectionToken;
@property (nonatomic, readonly) MPAVItem *currentItem;
@property (nonatomic, readonly) float currentRate;
@property (nonatomic, copy) NSNumber *currentRelativeVolume;
@property (nonatomic, readonly) double currentTime;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) MPCPlaybackErrorController *errorController;
@property (nonatomic, retain) <MPCPlaybackEngineEventStreamDeferralAssertion> *evsDeferralAssertionForFirstAudioFrame;
@property (nonatomic, retain) MPCExternalPlaybackController *externalPlaybackController;
@property (nonatomic, readonly) bool hasPlayedSuccessfully;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long jumpIdentifier;
@property (nonatomic) bool lastReportedVocalAttenuationEnabledState;
@property (nonatomic, retain) MPCLeaseController *leaseController;
@property (nonatomic, readonly) MPCPlaybackEngine *playbackEngine;
@property (nonatomic, retain) <MFPlaybackStackController><MFQueueManagement> *playbackStackController;
@property (nonatomic, retain) MPCAVItemTrace *playbackStartTrace;
@property (nonatomic, readonly) AVPlayerViewController *playerViewController;
@property (nonatomic) float relativeVolume;
@property (getter=isReloadingPlaybackContext, nonatomic, readonly) bool reloadingPlaybackContext;
@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly) long long stateBeforeInterruption;
@property (nonatomic) unsigned long long stateHandle;
@property (readonly) Class superclass;
@property (nonatomic, retain) _MPCAudioSessionController *transientAudioSessionController;
@property (nonatomic, retain) MPCMediaFoundationTranslator *translator;

+ (id)describePlayer:(id)arg1;

- (void).cxx_destruct;
- (id)_MPAVItemForMFQueuePlayerItem:(id)arg1;
- (double)_adjustPlayerTimeForAudioTapProcessing:(double)arg1;
- (bool)_isAVKitSkipAction:(id)arg1;
- (bool)_itemConfigurationIsIncompatibleWithVocalAttenuationState:(id)arg1;
- (void)_logTimeJumpForItem:(id)arg1 fromTime:(double)arg2 toTime:(double)arg3 userInitiated:(bool)arg4 timeStamp:(id)arg5;
- (void)_performSkipForUserAction:(id)arg1;
- (void)_playbackDidStopForItem:(id)arg1 source:(id)arg2 reason:(id)arg3 time:(double)arg4;
- (void)_setupPlaybackStackWithPlaybackEngine:(id)arg1;
- (id)_stateDictionary;
- (void)_updateActiveFormatForQueueItem:(id)arg1;
- (double)applicationMusicPlayerCrossFadeDuration;
- (long long)applicationMusicPlayerTransitionType;
- (id)assetLoader;
- (void)assetLoadingDidCompleteForItem:(id)arg1 error:(id)arg2;
- (void)assetLoadingDidStartForItem:(id)arg1;
- (bool)autoPlayWhenLikelyToKeepUp;
- (void)becomeActiveWithCompletion:(id /* block */)arg1;
- (id)bookmarker;
- (id)configurator;
- (id)criticalSectionToken;
- (id)currentItem;
- (void)currentItemWillChangeFromItem:(id)arg1 toItem:(id)arg2 source:(long long)arg3 timeStamp:(id)arg4;
- (float)currentRate;
- (id)currentRelativeVolume;
- (double)currentTime;
- (void)deactivateAudioSessionIfIdle:(long long)arg1;
- (void)dealloc;
- (void)didPerformPlayerOperationWithPlayerIdentifier:(id)arg1 items:(id)arg2 operation:(id)arg3;
- (void)didReachEndOfQueueWithReason:(id)arg1;
- (void)didReportSignpostWithType:(long long)arg1;
- (void)donateMetricsToPlayerItem:(id)arg1;
- (void)effectiveRateDidChangeTo:(float)arg1 forItem:(id)arg2 timeStamp:(id)arg3;
- (void)endScanningWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)engine:(id)arg1 didChangeQueueController:(id)arg2;
- (void)engine:(id)arg1 didChangeQueueWithReason:(id)arg2;
- (void)engine:(id)arg1 willRemoveQueueController:(id)arg2;
- (id)errorController;
- (void)errorResolutionDidEndForItem:(id)arg1 error:(id)arg2 resolution:(long long)arg3;
- (void)errorResolutionDidStartForItem:(id)arg1 error:(id)arg2;
- (id)evsDeferralAssertionForFirstAudioFrame;
- (id)externalPlaybackController;
- (void)finalizeSetQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)finalizeStateRestoreWithCompletion:(id /* block */)arg1;
- (void)firstFrameWillRenderForItem:(id)arg1 timeStamp:(id)arg2;
- (void)firstVideoFrameWasRenderedForItem:(id)arg1 timeStamp:(id)arg2;
- (bool)hasPlayedSuccessfully;
- (id)initWithPlaybackEngine:(id)arg1;
- (void)interruptionDidBeginWithInterruptor:(id)arg1 timeStamp:(id)arg2;
- (void)interruptionDidFinishForInterruptor:(id)arg1 shouldResume:(bool)arg2 timeStamp:(id)arg3;
- (void)invalidateEVSDeferralAssertionForFirstAudioFrame;
- (bool)isReloadingPlaybackContext;
- (void)itemDidBecomeCurrent:(id)arg1 source:(long long)arg2 timeStamp:(id)arg3;
- (void)itemDidFailToLoad:(id)arg1 silently:(bool)arg2 error:(id)arg3 timeStamp:(id)arg4;
- (void)itemDidFailToPlayToEnd:(id)arg1 error:(id)arg2 timeStamp:(id)arg3;
- (void)itemDidPlayToEnd:(id)arg1 timeStamp:(id)arg2;
- (void)itemDidResignCurrent:(id)arg1 source:(long long)arg2 timeStamp:(id)arg3;
- (void)itemIsReadyForMetrics:(id)arg1 accessLog:(id)arg2;
- (void)itemIsReadyToPlay:(id)arg1 timeStamp:(id)arg2;
- (long long)jumpIdentifier;
- (void)jumpToTime:(double)arg1 identifier:(id)arg2 completion:(id /* block */)arg3;
- (bool)lastReportedVocalAttenuationEnabledState;
- (id)leaseController;
- (void)mediaServicesInterruptionDidBeginWithItemAtDeath:(id)arg1 timeAtDeath:(double)arg2 timeStamp:(id)arg3;
- (void)mediaServicesInterruptionDidEndWithTimeStamp:(id)arg1;
- (void)mediaServicesPurgeDidOccurWithTimeStamp:(id)arg1;
- (void)overlappedPlaybackDidEndFrom:(id)arg1 to:(id)arg2 transitionTime:(id)arg3 transitionType:(long long)arg4 timeStamp:(id)arg5;
- (void)overlappedPlaybackWillBeginFrom:(id)arg1 to:(id)arg2 transitionTime:(id)arg3 transitionType:(long long)arg4 timeStamp:(id)arg5;
- (void)pauseForLeasePreventionWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)pauseForSleepTimerWithFadeout:(double)arg1 identifier:(id)arg2 completion:(id /* block */)arg3;
- (void)pauseWithFadeout:(double)arg1 identifier:(id)arg2 completion:(id /* block */)arg3;
- (void)pauseWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)playWithRate:(float)arg1 identifier:(id)arg2 completion:(id /* block */)arg3;
- (void)playbackBufferStateDidChangeToState:(long long)arg1 forItem:(id)arg2 timeStamp:(id)arg3;
- (void)playbackDidReachQueueEndWithTimeStamp:(id)arg1;
- (void)playbackDidStartForItem:(id)arg1 rate:(float)arg2 fromStalling:(bool)arg3 timeStamp:(id)arg4;
- (void)playbackDidStopForItem:(id)arg1 source:(id)arg2 reason:(id)arg3 timeStamp:(id)arg4;
- (id)playbackEngine;
- (void)playbackIsBlockedOnNonPlayableItem:(id)arg1;
- (void)playbackIsLikelyToKeepUp:(bool)arg1 forItem:(id)arg2 timeStamp:(id)arg3;
- (void)playbackRateDidChangeNotifiedForItem:(id)arg1 newRate:(float)arg2 reason:(id)arg3 participantIdentifier:(id)arg4 timeStamp:(id)arg5;
- (void)playbackRateDidChangeToRate:(float)arg1 forItem:(id)arg2 timeStamp:(id)arg3;
- (id)playbackStackController;
- (id)playbackStartTrace;
- (void)playbackTimeDidChangeTo:(double)arg1 forItem:(id)arg2 reason:(long long)arg3 timeStamp:(id)arg4;
- (void)playbackWaitingToPlayForItem:(id)arg1 reason:(id)arg2 timeStamp:(id)arg3;
- (id)playerViewController;
- (void)prewarm;
- (float)relativeVolume;
- (void)relativeVolumeDidChangeTo:(float)arg1 timeStamp:(id)arg2;
- (void)reloadItemsKeepingCurrentItem:(bool)arg1 allowReuse:(bool)arg2;
- (void)renderingModeDidChange:(long long)arg1 timeStamp:(id)arg2;
- (void)routeDidChange:(bool)arg1 metadata:(id)arg2 timeStamp:(id)arg3;
- (void)screenRecordingDidChange:(bool)arg1 timeStamp:(id)arg2;
- (void)setApplicationMusicPlayerCrossFadeDuration:(double)arg1;
- (void)setApplicationMusicPlayerTransitionType:(long long)arg1;
- (void)setApplicationMusicPlayerTransitionType:(long long)arg1 withDuration:(double)arg2;
- (void)setAssetLoader:(id)arg1;
- (void)setAutoPlayWhenLikelyToKeepUp:(bool)arg1;
- (void)setBookmarker:(id)arg1;
- (void)setConfigurator:(id)arg1;
- (void)setCriticalSectionToken:(id)arg1;
- (void)setCurrentRelativeVolume:(id)arg1;
- (void)setErrorController:(id)arg1;
- (void)setEvsDeferralAssertionForFirstAudioFrame:(id)arg1;
- (void)setExternalPlaybackController:(id)arg1;
- (void)setJumpIdentifier:(long long)arg1;
- (void)setLastReportedVocalAttenuationEnabledState:(bool)arg1;
- (void)setLeaseController:(id)arg1;
- (void)setPlaybackStackController:(id)arg1;
- (void)setPlaybackStartTrace:(id)arg1;
- (void)setRate:(float)arg1 identifier:(id)arg2 completion:(id /* block */)arg3;
- (void)setRelativeVolume:(float)arg1;
- (void)setStateHandle:(unsigned long long)arg1;
- (void)setTransientAudioSessionController:(id)arg1;
- (void)setTranslator:(id)arg1;
- (void)setupPlaybackStackIfNeeded;
- (void)stackControllerDidCancelTransitionFrom:(id)arg1 to:(id)arg2 type:(long long)arg3 reason:(id)arg4;
- (void)stackControllerDidCreateTransitionFrom:(id)arg1 to:(id)arg2 type:(long long)arg3 parameters:(id)arg4;
- (long long)state;
- (long long)stateBeforeInterruption;
- (void)stateDidChangeFromState:(long long)arg1 toState:(long long)arg2 timeStamp:(id)arg3;
- (unsigned long long)stateHandle;
- (void)takeEVSDeferralAssertionForFirstAudioFrame;
- (void)timeControlStatusDidChange:(long long)arg1 waitingReason:(id)arg2 timeStamp:(id)arg3;
- (void)togglePlaybackWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)tracksDidChangeForItem:(id)arg1 timeStamp:(id)arg2;
- (id)transientAudioSessionController;
- (id)translator;
- (void)updateAudioSession;
- (void)updateAudioSessionSpeechDetection;
- (void)userActionDidBegin:(id)arg1;
- (void)userActionDidEnd:(id)arg1 error:(id)arg2;
- (void)userSeekCompletedForItem:(id)arg1 fromTime:(double)arg2 toTime:(double)arg3 timeStamp:(id)arg4;
- (void)willPerformPlayerOperationWithPlayerIdentifier:(id)arg1 operation:(id)arg2 reason:(id)arg3;

@end