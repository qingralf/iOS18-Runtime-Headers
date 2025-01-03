/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCAudioSessionAVAS : VCAudioSession {
    AVAudioSession * _avAudioSession;
    NSOrderedSet * _avAudioSessionNotifications;
    NSDictionary * _cmSessionToAVAudioSessionMapping;
    double  _externalInputAudioLatency;
    double  _externalOutputAudioLatency;
    NSSet * _genericSessionProperties;
    bool  _isMicrophoneMuted;
    bool  _isMuteStateCached;
    id /* block */  _muteStateChangedHandler;
    NSObject<OS_dispatch_queue> * _muteStateChangedHandlerQueue;
    unsigned long long  _networkUplinkClockScheduledTime;
    bool  _pendingVPBlockUpdate;
}

@property (nonatomic) double externalInputAudioLatency;
@property (nonatomic) double externalOutputAudioLatency;

+ (unsigned char)muteReasonFromMuteChangedInfo:(id)arg1;
+ (SEL)selectorForNotification:(id)arg1;

- (bool)applyAudioSessionMediaProperties:(id)arg1;
- (void)applyAudioSessionMediaPropertiesForSystemAudio;
- (void)applyAudioSessionProperties;
- (void)applyClientPid;
- (bool)applyRequestedProperties:(id)arg1 propertyOrder:(id)arg2;
- (bool)applyRequestedProperty:(id)arg1 defaultValue:(void*)arg2;
- (unsigned long long)avAudioSessionAllowedRouteTypesFromCMSession:(id)arg1;
- (id)avAudioSessionKeyFromCMSessionKey:(id)arg1;
- (void)dealloc;
- (void)deregisterObserverNotifications;
- (void)destroyAudioSession;
- (void)dispatchedApplyMicrophoneMute:(bool)arg1;
- (void)dispatchedInvokeMuteStateChangedHandlerWithIsMuted:(bool)arg1 reason:(unsigned char)arg2;
- (void)dispatchedSetVPBlockConfigurationProperties:(bool)arg1;
- (double)externalInputAudioLatency;
- (double)externalOutputAudioLatency;
- (void)handleAudioSessionInputMuteChangeNotification:(id)arg1;
- (void)handleAudioSessionInterruption:(id)arg1;
- (void)handleAudioSessionMediaServicesWereLostNotification:(id)arg1;
- (void)handleAudioSessionMediaServicesWereResetNotification:(id)arg1;
- (void)handleAudioSessionRouteChangeNotification:(id)arg1;
- (bool)handleNetworkUplinkClockConfigurationUpdate:(id)arg1;
- (void)handleOutputSampleRateChange:(id)arg1;
- (void)handleSecureMicNotificationWithInterruptionInfo:(id)arg1;
- (bool)hasStarted;
- (id)initWithMode:(int)arg1;
- (bool)internalSelectMicrophoneWithType:(unsigned int)arg1;
- (bool)isInputAvailable;
- (bool)isInputSupported;
- (bool)microphoneMuted;
- (void)registerObserverNotifications;
- (void)resetOverrideRoute;
- (void)scheduleDeferredNetworkUplinkClockUpdate;
- (void)setAudioClockDeviceEnabled:(bool)arg1;
- (void)setBlockSize:(double)arg1 sampleRate:(double)arg2 force:(bool)arg3;
- (void)setExternalInputAudioLatency:(double)arg1;
- (void)setExternalOutputAudioLatency:(double)arg1;
- (void)setMicrophoneMuted:(bool)arg1;
- (void)setMuteStateChangedHandler:(id /* block */)arg1 delegateQueue:(id)arg2;
- (void)setOptimizedTelephonyHandoverSettings:(bool)arg1 networkUplinkClockUsesBaseband:(bool)arg2;
- (bool)setSampleRate:(double)arg1;
- (bool)setSessionProperty:(id)arg1 value:(id)arg2;
- (void)setSpeakerProperty:(id)arg1;
- (bool)setUpCMSessionToAVAudioSessionMapping;
- (bool)setUpGenericSessionProperties;
- (bool)setUpNotificationsArray;
- (bool)setVPBlockConfigurationProperties:(id)arg1;
- (void)setupInputBeamforming;
- (bool)shouldSetupSharePlayWithOperatingMode:(unsigned int)arg1 isSharePlayCapable:(bool*)arg2;
- (bool)startInternal;
- (bool)startSessionWithMediaProperties:(id)arg1 sessionRef:(unsigned int*)arg2;
- (bool)stopSession;

@end
