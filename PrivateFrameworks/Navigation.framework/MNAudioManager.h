/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNAudioManager : NSObject <MNAudioHardwareEngineObserver, MNAudioSystemOptionsObserver> {
    MNAudioHardwareEngine * _audioEngine;
    MNAudioSystemOptions * _audioSystemOptions;
    MNObserverHashTable * _observers;
    MNUserOptions * _options;
    int  _transportType;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int transportType;
@property (nonatomic, readonly) unsigned long long voiceGuidanceLevel;

- (void).cxx_destruct;
- (bool)_deviceIsMuted;
- (bool)_deviceSettingsAllowSpeech;
- (int)_supportedTransportTypeForTransportType:(int)arg1;
- (void)audioHardwareEngine:(id)arg1 didActivateAudioSession:(bool)arg2;
- (void)audioHardwareEngine:(id)arg1 didStartSpeakingPrompt:(id)arg2;
- (void)audioSystemOptions:(id)arg1 didChangeGuidanceLevel:(unsigned long long)arg2 transportType:(int)arg3;
- (void)changeTransportType:(int)arg1;
- (void)clearAllAnnouncements;
- (void)dealloc;
- (void)didChangeUserOptionsFrom:(id)arg1 to:(id)arg2;
- (double)durationOf:(id)arg1;
- (void)forceDeactivate;
- (id)initWithTransportType:(int)arg1 voiceLanguage:(id)arg2 guidanceLevelOverride:(unsigned long long)arg3;
- (bool)isSpeaking;
- (void)registerObserver:(id)arg1;
- (void)requestSpeech:(id)arg1 guidanceLevel:(unsigned long long)arg2 modifier:(unsigned long long)arg3 shortPromptType:(unsigned long long)arg4 completionHandler:(id /* block */)arg5;
- (void)setVoiceGuidanceLevelOverride:(unsigned long long)arg1;
- (void)stopSpeaking;
- (int)transportType;
- (void)unregisterObserver:(id)arg1;
- (bool)vibrateForShortPrompt:(unsigned long long)arg1;
- (bool)voiceGuidanceEnabled;
- (unsigned long long)voiceGuidanceLevel;

@end