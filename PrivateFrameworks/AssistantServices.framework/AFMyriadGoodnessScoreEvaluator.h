/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFMyriadGoodnessScoreEvaluator : NSObject <AFSettingsDelegate> {
    AFInstanceContext * _deviceInstanceContext;
    NSString * _endpointModelName;
    bool  _evaluateForAudioAccessory;
    bool  _isExponentialBoostDefined;
    bool  _isRecentSiriBoostTrialEnabled;
    bool  _isSpeakerEndpoint;
    double  _lastActivationTime;
    unsigned char  _mediaPlaybackBoost;
    AFMyriadInstrumentation * _myriadInstrumentation;
    unsigned char  _myriadPlatformBias;
    unsigned long long  _platformBiasAcquisitionState;
    AFPreferences * _pref;
    NSObject<OS_dispatch_queue> * _queue;
    double  _recentSiriFirstDegreeCoefficient;
    double  _recentSiriIntercept;
    double  _recentSiriSecondDegreeCoefficient;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _scoreEvaluationLock;
    AFSettingsConnection * _settingsConnection;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool evaluateForAudioAccessory;
@property (readonly) unsigned long long hash;
@property (nonatomic) double lastActivationTime;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned char)_bumpGoodnessScore:(id)arg1 lastActivationTime:(double)arg2 mediaPlaybackInterruptedTime:(double)arg3 ignoreAdjustedBoost:(bool)arg4 recentlyWonBySmallAmount:(bool)arg5;
- (id)_createSettingsConnectionIfRequired;
- (void)_fetchDevicePlatformBiasIfRequired;
- (unsigned long long)_findSidekickBoost:(id)arg1 isSpeaker:(bool)arg2 model:(id)arg3;
- (unsigned char)_getRecentBump:(double)arg1 ignoreAdjustedBoost:(bool)arg2 recentlyWonBySmallAmount:(bool)arg3;
- (id)_readSidekickBoostsFile:(id)arg1;
- (void)_reloadTrialConfiguredBoostValues;
- (void)_setSidekickPlatformBiasForSpeaker:(bool)arg1 model:(id)arg2;
- (void)_settingsConnectionDidDisconnect;
- (void)_updateMediaPlaybackBoost:(unsigned char)arg1;
- (void)_updatePlatformBias:(unsigned char)arg1;
- (void)_updateRecentSiriBoostTrialEnabled:(bool)arg1;
- (void)_updateRecentSiriExponentialBoostDefined:(bool)arg1 withSecondDegree:(double)arg2 andFirstDegree:(double)arg3 andIntercept:(double)arg4;
- (void)_updateSidekickBoosts:(id)arg1;
- (void)dealloc;
- (bool)evaluateForAudioAccessory;
- (unsigned char)getMyriadAdjustedBoostForGoodnessScoreContext:(id)arg1;
- (unsigned char)getPlatformBias;
- (id)initWithDeviceInstanceContext:(id)arg1 preferences:(id)arg2 queue:(id)arg3;
- (id)initWithDeviceInstanceContext:(id)arg1 preferences:(id)arg2 queue:(id)arg3 instrumentation:(id)arg4;
- (id)initWithDeviceInstanceContext:(id)arg1 queue:(id)arg2;
- (double)lastActivationTime;
- (void)myriadTrialBoostsUpdated:(id)arg1;
- (void)preheat;
- (void)setLastActivationTime:(double)arg1;

@end
