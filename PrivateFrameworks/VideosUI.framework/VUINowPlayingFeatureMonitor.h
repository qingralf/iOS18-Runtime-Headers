/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUINowPlayingFeatureMonitor : NSObject <VUIMediaPlaybackManagerDelegate> {
    NSMutableDictionary * _boundaryTimeObserverInfos;
    <VUINowPlayingFeatureMonitorDelegate> * _delegate;
    struct { 
        bool respondsToFeatureDidChangeState; 
        bool respondsToActiveFeatureChangedFrom; 
    }  _delegateFlags;
    id  _elapsedTimeObserverToken;
    NSMutableArray * _elapsedTimes;
    NSMutableArray * _enabledUIModes;
    NSMapTable * _featureBoundaryInfos;
    NSMapTable * _featureDependencies;
    <VUINowPlayingFeature> * _featureLastRequestedUI;
    NSMapTable * _featureTimers;
    NSMapTable * _featureTokens;
    NSMutableSet * _features;
    double  _lastProcessedElapsedTime;
    bool  _observingElapsedTime;
    VUITransitionalPlaybackUIManager * _playbackManager;
    NSObject<TVPAVFPlayback> * _player;
}

@property (nonatomic, readonly) NSArray *allFeatures;
@property (nonatomic, retain) NSMutableDictionary *boundaryTimeObserverInfos;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <VUINowPlayingFeatureMonitorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) id elapsedTimeObserverToken;
@property (nonatomic, retain) NSMutableArray *elapsedTimes;
@property (nonatomic, retain) NSMutableArray *enabledUIModes;
@property (nonatomic, retain) NSMapTable *featureBoundaryInfos;
@property (nonatomic, retain) NSMapTable *featureDependencies;
@property (nonatomic, retain) <VUINowPlayingFeature> *featureLastRequestedUI;
@property (nonatomic, retain) NSMapTable *featureTimers;
@property (nonatomic, retain) NSMapTable *featureTokens;
@property (nonatomic, retain) NSMutableSet *features;
@property (readonly) unsigned long long hash;
@property (nonatomic) double lastProcessedElapsedTime;
@property (nonatomic) bool observingElapsedTime;
@property (nonatomic, retain) VUITransitionalPlaybackUIManager *playbackManager;
@property (nonatomic, retain) NSObject<TVPAVFPlayback> *player;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_activateFeature:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)_activateFeature:(id)arg1 ignoringCurrentActivation:(bool)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (id)_activeFeature;
- (id)_activeFeatures;
- (void)_addObservedToken:(id)arg1 forFeature:(id)arg2;
- (void)_addTimeObservingForFeature:(id)arg1 withStartTime:(double)arg2 andHandler:(id /* block */)arg3;
- (void)_addTimeObservingForFeature:(id)arg1 withStartTime:(double)arg2 andRestartTime:(double)arg3 andHandler:(id /* block */)arg4;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_cancelTimerForFeature:(id)arg1;
- (void)_cleanUpEverything;
- (void)_cleanupFeature:(id)arg1;
- (void)_createBoundaryObserverForFeature:(id)arg1 time:(double)arg2 andHandler:(id /* block */)arg3;
- (void)_deactivateFeature:(id)arg1 animated:(bool)arg2;
- (void)_expireTimerFeaturesIfNeeded;
- (bool)_hasActiveFeaturesInArray:(id)arg1;
- (bool)_hasAnyActiveFeature;
- (bool)_isElapsedTimeWithinFeatureTimeWindow:(id)arg1;
- (bool)_isHybridFeature:(id)arg1;
- (bool)_isTVAdvisoryFeature:(id)arg1;
- (bool)_isTimeBoundFeature:(id)arg1;
- (bool)_isTimerFeatureExpired:(id)arg1;
- (bool)_isTimerTriggeredFeature:(id)arg1;
- (bool)_isUserTriggeredFeature:(id)arg1;
- (bool)_needsUIForFeature:(id)arg1;
- (id)_observerInfoForFeature:(id)arg1 matchingTime:(double)arg2;
- (void)_playbackStateChangedNottificaiton:(id)arg1;
- (void)_processAnyTimeBoundFeatures;
- (void)_processElapsedTime:(double)arg1;
- (void)_processFeature:(id)arg1;
- (void)_processLastElapsedTime;
- (void)_processTimeBoundFeature:(id)arg1;
- (void)_processTimerTriggeredFeature:(id)arg1;
- (void)_processUserTriggeredFeature:(id)arg1 activate:(bool)arg2 animated:(bool)arg3;
- (void)_registerPlaybackStateChangeNotification;
- (void)_removeAllObservedTokensForFeature:(id)arg1;
- (void)_removeTimeObservingForFeature:(id)arg1 withStartTime:(double)arg2;
- (void)_scheduleDeactivationOfTimeBoundFeature:(id)arg1;
- (void)_setupTimerFeatureExpiration;
- (bool)_shouldActivateTimeBoundFeatureInitially:(id)arg1;
- (bool)_shouldAnimateFeature:(id)arg1;
- (void)_startObservingElapsedTime;
- (id)_timeBoundFeatures;
- (void)_unregisterPlaybackStateNotification;
- (void)_updateBoundaryObserverForFeature:(id)arg1 change:(id)arg2;
- (id)activeFeatureForType:(unsigned long long)arg1;
- (void)addFeature:(id)arg1;
- (void)addFeature:(id)arg1 withDependencyToPreferredFeatures:(id)arg2;
- (id)allFeatures;
- (id)boundaryTimeObserverInfos;
- (void)deactivateFeature:(id)arg1 animated:(bool)arg2;
- (void)dealloc;
- (id)delegate;
- (id)elapsedTimeObserverToken;
- (id)elapsedTimes;
- (void)enableUIMode:(long long)arg1 enabled:(bool)arg2;
- (id)enabledUIModes;
- (id)featureBoundaryInfos;
- (id)featureDependencies;
- (id)featureLastRequestedUI;
- (id)featureTimers;
- (id)featureTokens;
- (id)features;
- (id)featuresForType:(unsigned long long)arg1;
- (id)init;
- (double)lastProcessedElapsedTime;
- (bool)mediaPlaybackManager:(id)arg1 shouldEnableUIModeImplicitly:(long long)arg2;
- (void)mediaPlaybackManager:(id)arg1 shouldHideUI:(bool)arg2 animated:(bool)arg3 animations:(id /* block */)arg4 completion:(id /* block */)arg5;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (bool)observingElapsedTime;
- (id)playbackManager;
- (id)player;
- (void)removeFeature:(id)arg1;
- (void)removeFeaturesMatching:(id)arg1;
- (void)setBoundaryTimeObserverInfos:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setElapsedTimeObserverToken:(id)arg1;
- (void)setElapsedTimes:(id)arg1;
- (void)setEnabledUIModes:(id)arg1;
- (void)setFeatureBoundaryInfos:(id)arg1;
- (void)setFeatureDependencies:(id)arg1;
- (void)setFeatureLastRequestedUI:(id)arg1;
- (void)setFeatureTimers:(id)arg1;
- (void)setFeatureTokens:(id)arg1;
- (void)setFeatures:(id)arg1;
- (void)setLastProcessedElapsedTime:(double)arg1;
- (void)setObservingElapsedTime:(bool)arg1;
- (void)setPlaybackManager:(id)arg1;
- (void)setPlayer:(id)arg1;

@end
