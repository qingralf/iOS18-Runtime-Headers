/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriMessageTypes.framework/SiriMessageTypes
 */

@interface SMTRequestContextDataMutating : NSObject {
    NSDateInterval * _approximatePreviousTTSInterval;
    NSString * _audioDestination;
    NSString * _audioSource;
    NSArray * _bargeInModes;
    NSArray * _deviceRestrictions;
    bool  _isDeviceLocked;
    bool  _isDeviceShowingLockScreen;
    bool  _isEyesFree;
    bool  _isInAmbient;
    bool  _isLiveActivitiesSupported;
    bool  _isSystemApertureEnabled;
    bool  _isTextToSpeechEnabled;
    bool  _isTriggerlessFollowup;
    bool  _isVoiceTriggerEnabled;
    NSString * _responseMode;
    unsigned int  _voiceAudioSessionId;
    NSDictionary * _voiceTriggerEventInfo;
}

@property (nonatomic, copy) NSDateInterval *approximatePreviousTTSInterval;
@property (nonatomic, copy) NSString *audioDestination;
@property (nonatomic, copy) NSString *audioSource;
@property (nonatomic, copy) NSArray *bargeInModes;
@property (nonatomic, copy) NSArray *deviceRestrictions;
@property (nonatomic) bool isDeviceLocked;
@property (nonatomic) bool isDeviceShowingLockScreen;
@property (nonatomic) bool isEyesFree;
@property (nonatomic) bool isInAmbient;
@property (nonatomic) bool isLiveActivitiesSupported;
@property (nonatomic) bool isSystemApertureEnabled;
@property (nonatomic) bool isTextToSpeechEnabled;
@property (nonatomic) bool isTriggerlessFollowup;
@property (nonatomic) bool isVoiceTriggerEnabled;
@property (nonatomic, copy) NSString *responseMode;
@property (nonatomic) unsigned int voiceAudioSessionId;
@property (nonatomic, copy) NSDictionary *voiceTriggerEventInfo;

- (void).cxx_destruct;
- (id)approximatePreviousTTSInterval;
- (id)audioDestination;
- (id)audioSource;
- (id)bargeInModes;
- (id)deviceRestrictions;
- (bool)isDeviceLocked;
- (bool)isDeviceShowingLockScreen;
- (bool)isEyesFree;
- (bool)isInAmbient;
- (bool)isLiveActivitiesSupported;
- (bool)isSystemApertureEnabled;
- (bool)isTextToSpeechEnabled;
- (bool)isTriggerlessFollowup;
- (bool)isVoiceTriggerEnabled;
- (id)responseMode;
- (void)setApproximatePreviousTTSInterval:(id)arg1;
- (void)setAudioDestination:(id)arg1;
- (void)setAudioSource:(id)arg1;
- (void)setBargeInModes:(id)arg1;
- (void)setDeviceRestrictions:(id)arg1;
- (void)setIsDeviceLocked:(bool)arg1;
- (void)setIsDeviceShowingLockScreen:(bool)arg1;
- (void)setIsEyesFree:(bool)arg1;
- (void)setIsInAmbient:(bool)arg1;
- (void)setIsLiveActivitiesSupported:(bool)arg1;
- (void)setIsSystemApertureEnabled:(bool)arg1;
- (void)setIsTextToSpeechEnabled:(bool)arg1;
- (void)setIsTriggerlessFollowup:(bool)arg1;
- (void)setIsVoiceTriggerEnabled:(bool)arg1;
- (void)setResponseMode:(id)arg1;
- (void)setVoiceAudioSessionId:(unsigned int)arg1;
- (void)setVoiceTriggerEventInfo:(id)arg1;
- (unsigned int)voiceAudioSessionId;
- (id)voiceTriggerEventInfo;

@end
