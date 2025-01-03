/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AudioAccessoryServices.framework/AudioAccessoryServices
 */

@interface AADeviceConfig : NSObject <NSSecureCoding> {
    unsigned char  _acceptReplyPlayPauseConfig;
    BOOL  _aclPriority;
    unsigned char  _adaptiveVolumeConfig;
    BOOL  _allowsAutoRoute;
    BOOL  _audioRouteHidden;
    NSDate * _audiogramEnrolledTimestamp;
    unsigned int  _autoANCStrength;
    unsigned char  _bobbleConfig;
    unsigned char  _clickHoldModeLeft;
    unsigned char  _clickHoldModeRight;
    unsigned char  _conversationDetectConfig;
    unsigned char  _crownRotationDirection;
    unsigned char  _declineDismissSkipConfig;
    BOOL  _doubleTapActionLeft;
    BOOL  _doubleTapActionRight;
    BOOL  _enableHearingAidGainSwipe;
    BOOL  _enableHearingAssist;
    BOOL  _enableHeartRateMonitor;
    BOOL  _enableSiriMultitone;
    unsigned char  _endCallConfig;
    BOOL  _headGestureProxCardShown;
    BOOL  _headGestureToggle;
    BOOL  _hearingAidEnrolled;
    BOOL  _hearingAidToggle;
    int  _listeningMode;
    unsigned int  _listeningModeConfigs;
    BOOL  _listeningModeOffAllowed;
    BOOL  _microphoneMode;
    unsigned char  _muteControlConfig;
    NSString * _name;
    BOOL  _placementMode;
    BOOL  _relinquishAudioRoute;
    unsigned char  _selectiveSpeechListeningConfig;
    BOOL  _smartRoutingMode;
    BOOL  _spatialAudioAllowed;
    int  _spatialAudioMode;
}

@property (nonatomic) unsigned char acceptReplyPlayPauseConfig;
@property (nonatomic) BOOL aclPriority;
@property (nonatomic) unsigned char adaptiveVolumeConfig;
@property (nonatomic) BOOL allowsAutoRoute;
@property (nonatomic) BOOL audioRouteHidden;
@property (nonatomic, copy) NSDate *audiogramEnrolledTimestamp;
@property (nonatomic) unsigned int autoANCStrength;
@property (nonatomic) unsigned char bobbleConfig;
@property (nonatomic) unsigned char clickHoldModeLeft;
@property (nonatomic) unsigned char clickHoldModeRight;
@property (nonatomic) unsigned char conversationDetectConfig;
@property (nonatomic) unsigned char crownRotationDirection;
@property (nonatomic) unsigned char declineDismissSkipConfig;
@property (nonatomic) BOOL doubleTapActionLeft;
@property (nonatomic) BOOL doubleTapActionRight;
@property (nonatomic) BOOL enableHearingAidGainSwipe;
@property (nonatomic) BOOL enableHearingAssist;
@property (nonatomic) BOOL enableHeartRateMonitor;
@property (nonatomic) BOOL enableSiriMultitone;
@property (nonatomic) unsigned char endCallConfig;
@property (nonatomic) BOOL headGestureProxCardShown;
@property (nonatomic) BOOL headGestureToggle;
@property (nonatomic) BOOL hearingAidEnrolled;
@property (nonatomic) BOOL hearingAidToggle;
@property (nonatomic) int listeningMode;
@property (nonatomic) unsigned int listeningModeConfigs;
@property (nonatomic) BOOL listeningModeOffAllowed;
@property (nonatomic) BOOL microphoneMode;
@property (nonatomic) unsigned char muteControlConfig;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) BOOL placementMode;
@property (nonatomic) BOOL relinquishAudioRoute;
@property (nonatomic) unsigned char selectiveSpeechListeningConfig;
@property (nonatomic) BOOL smartRoutingMode;
@property (nonatomic) BOOL spatialAudioAllowed;
@property (nonatomic) int spatialAudioMode;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned char)acceptReplyPlayPauseConfig;
- (BOOL)aclPriority;
- (unsigned char)adaptiveVolumeConfig;
- (BOOL)allowsAutoRoute;
- (BOOL)audioRouteHidden;
- (id)audiogramEnrolledTimestamp;
- (unsigned int)autoANCStrength;
- (unsigned char)bobbleConfig;
- (unsigned char)clickHoldModeLeft;
- (unsigned char)clickHoldModeRight;
- (unsigned char)conversationDetectConfig;
- (unsigned char)crownRotationDirection;
- (unsigned char)declineDismissSkipConfig;
- (id)description;
- (id)descriptionWithLevel:(int)arg1;
- (BOOL)doubleTapActionLeft;
- (BOOL)doubleTapActionRight;
- (BOOL)enableHearingAidGainSwipe;
- (BOOL)enableHearingAssist;
- (BOOL)enableHeartRateMonitor;
- (BOOL)enableSiriMultitone;
- (void)encodeWithCoder:(id)arg1;
- (unsigned char)endCallConfig;
- (BOOL)headGestureProxCardShown;
- (BOOL)headGestureToggle;
- (BOOL)hearingAidEnrolled;
- (BOOL)hearingAidToggle;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (int)listeningMode;
- (unsigned int)listeningModeConfigs;
- (BOOL)listeningModeOffAllowed;
- (BOOL)microphoneMode;
- (unsigned char)muteControlConfig;
- (id)name;
- (bool)needsUpdateToAAController;
- (bool)needsUpdateToDeviceCloudRecord;
- (BOOL)placementMode;
- (BOOL)relinquishAudioRoute;
- (unsigned char)selectiveSpeechListeningConfig;
- (void)setAcceptReplyPlayPauseConfig:(unsigned char)arg1;
- (void)setAclPriority:(BOOL)arg1;
- (void)setAdaptiveVolumeConfig:(unsigned char)arg1;
- (void)setAllowsAutoRoute:(BOOL)arg1;
- (void)setAudioRouteHidden:(BOOL)arg1;
- (void)setAudiogramEnrolledTimestamp:(id)arg1;
- (void)setAutoANCStrength:(unsigned int)arg1;
- (void)setBobbleConfig:(unsigned char)arg1;
- (void)setClickHoldModeLeft:(unsigned char)arg1;
- (void)setClickHoldModeRight:(unsigned char)arg1;
- (void)setConversationDetectConfig:(unsigned char)arg1;
- (void)setCrownRotationDirection:(unsigned char)arg1;
- (void)setDeclineDismissSkipConfig:(unsigned char)arg1;
- (void)setDoubleTapActionLeft:(BOOL)arg1;
- (void)setDoubleTapActionRight:(BOOL)arg1;
- (void)setEnableHearingAidGainSwipe:(BOOL)arg1;
- (void)setEnableHearingAssist:(BOOL)arg1;
- (void)setEnableHeartRateMonitor:(BOOL)arg1;
- (void)setEnableSiriMultitone:(BOOL)arg1;
- (void)setEndCallConfig:(unsigned char)arg1;
- (void)setHeadGestureProxCardShown:(BOOL)arg1;
- (void)setHeadGestureToggle:(BOOL)arg1;
- (void)setHearingAidEnrolled:(BOOL)arg1;
- (void)setHearingAidToggle:(BOOL)arg1;
- (void)setListeningMode:(int)arg1;
- (void)setListeningModeConfigs:(unsigned int)arg1;
- (void)setListeningModeOffAllowed:(BOOL)arg1;
- (void)setMicrophoneMode:(BOOL)arg1;
- (void)setMuteControlConfig:(unsigned char)arg1;
- (void)setName:(id)arg1;
- (void)setPlacementMode:(BOOL)arg1;
- (void)setRelinquishAudioRoute:(BOOL)arg1;
- (void)setSelectiveSpeechListeningConfig:(unsigned char)arg1;
- (void)setSmartRoutingMode:(BOOL)arg1;
- (void)setSpatialAudioAllowed:(BOOL)arg1;
- (void)setSpatialAudioMode:(int)arg1;
- (BOOL)smartRoutingMode;
- (BOOL)spatialAudioAllowed;
- (int)spatialAudioMode;

@end
