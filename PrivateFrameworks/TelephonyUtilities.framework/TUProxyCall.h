/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUProxyCall : TUCall <AVCRemoteVideoClientDelegate, NSSecureCoding> {
    bool  _accessoryButtonEventsEnabled;
    TUParticipant * _activeRemoteParticipant;
    NSString * _announceProviderIdentifier;
    NSString * _audioCategory;
    NSString * _audioMode;
    bool  _blocked;
    long long  _bluetoothAudioFormat;
    NSUUID * _callGroupUUID;
    int  _callRelaySupport;
    int  _callStatus;
    NSString * _callUUID;
    NSString * _callerNameFromNetwork;
    long long  _cameraType;
    NSURL * _channelImageURL;
    bool  _conversation;
    TUCallDisplayContext * _displayContext;
    bool  _domestic;
    bool  _downlinkMuted;
    bool  _emergency;
    NSSet * _emergencyMediaItems;
    NSString * _endedErrorString;
    NSString * _endedReasonString;
    NSDictionary * _endedReasonUserInfo;
    bool  _failureExpected;
    TUHandle * _handle;
    bool  _hasEmergencyVideoStream;
    bool  _hostedOnCurrentDevice;
    TUHandle * _initiator;
    long long  _inputAudioPowerSpectrumToken;
    bool  _international;
    bool  _isReRing;
    bool  _isSendingAudio;
    bool  _isSendingVideo;
    bool  _isVideo;
    NSString * _isoCountryCode;
    NSData * _localFrequency;
    NSString * _localMemberHandleValue;
    float  _localMeterLevel;
    NSUUID * _localSenderIdentityAccountUUID;
    NSUUID * _localSenderIdentityUUID;
    <TURemoteVideoClient> * _localVideo;
    NSMutableDictionary * _localVideoModeToLayer;
    bool  _mediaStalled;
    bool  _mixesVoiceWithMedia;
    bool  _mutuallyExclusiveCall;
    bool  _needsManualInCallSounds;
    int  _originatingUIType;
    bool  _outgoing;
    long long  _outputAudioPowerSpectrumToken;
    bool  _prefersExclusiveAccessToCellularNetwork;
    TUCallProvider * _provider;
    NSDictionary * _providerContext;
    <TUCallServicesProxyCallActions> * _proxyCallActionsDelegate;
    bool  _ptt;
    bool  _receivingTransmission;
    int  _recordingAvailability;
    struct CGSize { 
        double width; 
        double height; 
    }  _remoteAspectRatio;
    long long  _remoteCameraOrientation;
    NSData * _remoteFrequency;
    float  _remoteMeterLevel;
    NSSet * _remoteParticipantHandles;
    struct CGSize { 
        double width; 
        double height; 
    }  _remoteScreenLandscapeAspectRatio;
    long long  _remoteScreenOrientation;
    struct CGSize { 
        double width; 
        double height; 
    }  _remoteScreenPortraitAspectRatio;
    bool  _remoteUplinkMuted;
    <TURemoteVideoClient> * _remoteVideo;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _remoteVideoContentRect;
    NSMutableDictionary * _remoteVideoModeToLayer;
    bool  _requiresRemoteVideo;
    TUCallScreenShareAttributes * _screenShareAttributes;
    long long  _screenSharingIntention;
    unsigned long long  _screenSharingType;
    bool  _sendingTransmission;
    long long  _serviceStatus;
    bool  _sharingScreen;
    bool  _shouldSuppressInCallUI;
    bool  _sos;
    bool  _supportsEmergencyFallback;
    bool  _supportsScreening;
    bool  _supportsTTYWithVoice;
    bool  _thirdPartyVideo;
    TUMediaTokens * _tokens;
    long long  _transmissionMode;
    int  _ttyType;
    bool  _uplinkMuted;
    bool  _usingBaseband;
    bool  _videoDegraded;
    bool  _videoMirrored;
    bool  _videoPaused;
    long long  _videoStreamToken;
    bool  _voicemail;
    bool  _wantsStagingArea;
}

@property (nonatomic) bool accessoryButtonEventsEnabled;
@property (nonatomic, copy) TUParticipant *activeRemoteParticipant;
@property (nonatomic, copy) NSString *announceProviderIdentifier;
@property (nonatomic, copy) NSString *audioCategory;
@property (nonatomic, copy) NSString *audioMode;
@property (nonatomic, retain) TUCallProvider *backingProvider;
@property (getter=isBlocked, nonatomic) bool blocked;
@property (nonatomic) long long bluetoothAudioFormat;
@property (nonatomic, copy) NSUUID *callGroupUUID;
@property (nonatomic) int callRelaySupport;
@property (nonatomic) int callStatus;
@property (nonatomic, copy) NSString *callUUID;
@property (nonatomic, copy) NSString *callerNameFromNetwork;
@property (nonatomic) long long cameraType;
@property (getter=isConversation, nonatomic) bool conversation;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) TUCallDisplayContext *displayContext;
@property (nonatomic, retain) TUCallProvider *displayProvider;
@property (getter=isDomestic, nonatomic) bool domestic;
@property (getter=isEmergency, nonatomic) bool emergency;
@property (nonatomic, copy) NSSet *emergencyMediaItems;
@property (nonatomic, copy) NSString *endedErrorString;
@property (nonatomic, copy) NSString *endedReasonString;
@property (nonatomic, copy) NSDictionary *endedReasonUserInfo;
@property (getter=isFailureExpected, nonatomic) bool failureExpected;
@property (nonatomic, retain) TUHandle *handle;
@property (nonatomic) bool hasEmergencyVideoStream;
@property (readonly) unsigned long long hash;
@property (getter=isHostedOnCurrentDevice, nonatomic) bool hostedOnCurrentDevice;
@property (nonatomic, retain) TUHandle *initiator;
@property (nonatomic) long long inputAudioPowerSpectrumToken;
@property (getter=isInternational, nonatomic) bool international;
@property (nonatomic) bool isSendingAudio;
@property (nonatomic) bool isVideo;
@property (nonatomic, copy) NSString *isoCountryCode;
@property (nonatomic, retain) NSData *localFrequency;
@property (nonatomic) float localMeterLevel;
@property (nonatomic, copy) NSUUID *localSenderIdentityAccountUUID;
@property (nonatomic, copy) NSUUID *localSenderIdentityUUID;
@property (nonatomic, retain) <TURemoteVideoClient> *localVideo;
@property (nonatomic, retain) NSMutableDictionary *localVideoModeToLayer;
@property (getter=isMediaStalled, nonatomic) bool mediaStalled;
@property (getter=isMutuallyExclusiveCall, nonatomic) bool mutuallyExclusiveCall;
@property (nonatomic) bool needsManualInCallSounds;
@property (nonatomic) int originatingUIType;
@property (getter=isOutgoing, nonatomic) bool outgoing;
@property (nonatomic) long long outputAudioPowerSpectrumToken;
@property (nonatomic) bool prefersExclusiveAccessToCellularNetwork;
@property (nonatomic, retain) TUCallProvider *provider;
@property (nonatomic, retain) NSDictionary *providerContext;
@property (nonatomic) <TUCallServicesProxyCallActions> *proxyCallActionsDelegate;
@property (getter=isReceivingTransmission, nonatomic) bool receivingTransmission;
@property (nonatomic) struct CGSize { double x1; double x2; } remoteAspectRatio;
@property (nonatomic) long long remoteCameraOrientation;
@property (nonatomic, retain) NSData *remoteFrequency;
@property (nonatomic) float remoteMeterLevel;
@property (nonatomic, copy) NSSet *remoteParticipantHandles;
@property (nonatomic) struct CGSize { double x1; double x2; } remoteScreenLandscapeAspectRatio;
@property (nonatomic) long long remoteScreenOrientation;
@property (nonatomic) struct CGSize { double x1; double x2; } remoteScreenPortraitAspectRatio;
@property (getter=isRemoteUplinkMuted, nonatomic) bool remoteUplinkMuted;
@property (nonatomic, retain) <TURemoteVideoClient> *remoteVideo;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } remoteVideoContentRect;
@property (nonatomic, retain) NSMutableDictionary *remoteVideoModeToLayer;
@property (nonatomic) long long screenSharingIntention;
@property (getter=isSendingTransmission, nonatomic) bool sendingTransmission;
@property (nonatomic) long long serviceStatus;
@property (getter=isSharingScreen, nonatomic) bool sharingScreen;
@property (nonatomic) bool shouldSuppressInCallUI;
@property (getter=isSOS, setter=setSOS:, nonatomic) bool sos;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsEmergencyFallback;
@property (nonatomic) bool supportsTTYWithVoice;
@property (getter=isThirdPartyVideo, nonatomic) bool thirdPartyVideo;
@property (nonatomic) long long transmissionMode;
@property (nonatomic) int ttyType;
@property (getter=isUsingBaseband, nonatomic) bool usingBaseband;
@property (getter=isVideoDegraded, nonatomic) bool videoDegraded;
@property (getter=isVideoMirrored, nonatomic) bool videoMirrored;
@property (getter=isVideoPaused, nonatomic) bool videoPaused;
@property (nonatomic) long long videoStreamToken;
@property (getter=isVoicemail, nonatomic) bool voicemail;
@property (nonatomic) bool wantsStagingArea;

+ (id)proxyCallWithCall:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)_cameraTypeForVideoAttributeCamera:(int)arg1;
- (void)_createLocalVideoIfNecessary;
- (void)_createRemoteVideoIfNecessary;
- (long long)_orientationForVideoAttributesOrientation:(int)arg1;
- (void)_synchronizeLocalVideo;
- (void)_synchronizeRemoteVideo;
- (void)_updateVideoCallAttributes:(id)arg1;
- (void)_updateVideoStreamToken:(long long)arg1;
- (bool)accessoryButtonEventsEnabled;
- (id)activeRemoteParticipant;
- (void)addScreenSharingType:(unsigned long long)arg1;
- (id)announceProviderIdentifier;
- (void)answerWithRequest:(id)arg1;
- (id)audioCategory;
- (id)audioMode;
- (int)avcRemoteVideoModeForMode:(long long)arg1;
- (long long)bluetoothAudioFormat;
- (id)callGroupUUID;
- (int)callRelaySupport;
- (int)callStatus;
- (id)callUUID;
- (id)callerNameFromNetwork;
- (long long)cameraType;
- (id)channelImageURL;
- (void)disconnectWithReason:(int)arg1;
- (id)displayContext;
- (id)emergencyMediaItems;
- (void)encodeWithCoder:(id)arg1;
- (id)endedErrorString;
- (id)endedReasonString;
- (id)endedReasonUserInfo;
- (id)handle;
- (bool)hasEmergencyVideoStream;
- (id)initWithCoder:(id)arg1;
- (id)initWithUniqueProxyIdentifier:(id)arg1 endpointOnCurrentDevice:(bool)arg2;
- (id)initiator;
- (long long)inputAudioPowerSpectrumToken;
- (bool)isBlocked;
- (bool)isConversation;
- (bool)isDomestic;
- (bool)isDownlinkMuted;
- (bool)isEmergency;
- (bool)isFailureExpected;
- (bool)isHostedOnCurrentDevice;
- (bool)isInternational;
- (bool)isMediaStalled;
- (bool)isMutuallyExclusiveCall;
- (bool)isOutgoing;
- (bool)isPTT;
- (bool)isReRing;
- (bool)isReceivingTransmission;
- (bool)isRemoteUplinkMuted;
- (bool)isSOS;
- (bool)isSendingAudio;
- (bool)isSendingTransmission;
- (bool)isSendingVideo;
- (bool)isSharingScreen;
- (bool)isThirdPartyVideo;
- (bool)isUplinkMuted;
- (bool)isUsingBaseband;
- (bool)isVideo;
- (bool)isVideoDegraded;
- (bool)isVideoMirrored;
- (bool)isVideoPaused;
- (bool)isVoicemail;
- (id)isoCountryCode;
- (struct CGSize { double x1; double x2; })localAspectRatioForOrientation:(long long)arg1;
- (id)localFrequency;
- (id)localMemberHandleValue;
- (float)localMeterLevel;
- (id)localSenderIdentityAccountUUID;
- (id)localSenderIdentityUUID;
- (id)localVideo;
- (id)localVideoModeToLayer;
- (bool)mixesVoiceWithMedia;
- (bool)needsManualInCallSounds;
- (int)originatingUIType;
- (long long)outputAudioPowerSpectrumToken;
- (void)playDTMFToneForKey:(unsigned char)arg1;
- (bool)prefersExclusiveAccessToCellularNetwork;
- (id)provider;
- (id)providerContext;
- (id)proxyCallActionsDelegate;
- (int)recordingAvailability;
- (struct CGSize { double x1; double x2; })remoteAspectRatio;
- (long long)remoteCameraOrientation;
- (id)remoteFrequency;
- (float)remoteMeterLevel;
- (id)remoteParticipantHandles;
- (struct CGSize { double x1; double x2; })remoteScreenAspectRatio;
- (struct CGSize { double x1; double x2; })remoteScreenLandscapeAspectRatio;
- (long long)remoteScreenOrientation;
- (struct CGSize { double x1; double x2; })remoteScreenPortraitAspectRatio;
- (id)remoteVideo;
- (void)remoteVideoClient:(id)arg1 remoteMediaDidStall:(bool)arg2;
- (void)remoteVideoClient:(id)arg1 remoteScreenAttributesDidChange:(id)arg2;
- (void)remoteVideoClient:(id)arg1 remoteVideoAttributesDidChange:(id)arg2;
- (void)remoteVideoClient:(id)arg1 remoteVideoDidPause:(bool)arg2;
- (void)remoteVideoClient:(id)arg1 videoDidDegrade:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })remoteVideoContentRect;
- (id)remoteVideoModeToLayer;
- (bool)requiresRemoteVideo;
- (id)screenShareAttributes;
- (long long)screenSharingIntention;
- (unsigned long long)screenSharingType;
- (void)sendHardPauseDigits;
- (long long)serviceStatus;
- (void)setAccessoryButtonEventsEnabled:(bool)arg1;
- (void)setActiveRemoteParticipant:(id)arg1;
- (void)setAnnounceProviderIdentifier:(id)arg1;
- (void)setAudioCategory:(id)arg1;
- (void)setAudioMode:(id)arg1;
- (void)setBackingProvider:(id)arg1;
- (void)setBlocked:(bool)arg1;
- (void)setBluetoothAudioFormat:(long long)arg1;
- (void)setCallDisconnectedDueToComponentCrash;
- (void)setCallGroupUUID:(id)arg1;
- (void)setCallRelaySupport:(int)arg1;
- (void)setCallStatus:(int)arg1;
- (void)setCallUUID:(id)arg1;
- (void)setCallerNameFromNetwork:(id)arg1;
- (void)setCameraType:(long long)arg1;
- (void)setChannelImageURL:(id)arg1;
- (void)setConversation:(bool)arg1;
- (void)setDisconnectedReason:(int)arg1;
- (void)setDisplayContext:(id)arg1;
- (void)setDisplayProvider:(id)arg1;
- (void)setDomestic:(bool)arg1;
- (void)setDownlinkMuted:(bool)arg1;
- (void)setEmergency:(bool)arg1;
- (void)setEmergencyMediaItems:(id)arg1;
- (void)setEndedErrorString:(id)arg1;
- (void)setEndedReasonString:(id)arg1;
- (void)setEndedReasonUserInfo:(id)arg1;
- (void)setEndpointOnCurrentDevice:(bool)arg1;
- (void)setFailureExpected:(bool)arg1;
- (void)setHandle:(id)arg1;
- (void)setHasEmergencyVideoStream:(bool)arg1;
- (void)setHostedOnCurrentDevice:(bool)arg1;
- (void)setInitiator:(id)arg1;
- (void)setInputAudioPowerSpectrumToken:(long long)arg1;
- (void)setInternational:(bool)arg1;
- (void)setIsSendingAudio:(bool)arg1;
- (void)setIsSendingVideo:(bool)arg1;
- (void)setIsVideo:(bool)arg1;
- (void)setIsoCountryCode:(id)arg1;
- (void)setLocalFrequency:(id)arg1;
- (void)setLocalMeterLevel:(float)arg1;
- (void)setLocalSenderIdentityAccountUUID:(id)arg1;
- (void)setLocalSenderIdentityUUID:(id)arg1;
- (void)setLocalVideo:(id)arg1;
- (void)setLocalVideoLayer:(id)arg1 forMode:(long long)arg2;
- (void)setLocalVideoModeToLayer:(id)arg1;
- (void)setMediaStalled:(bool)arg1;
- (void)setMixesVoiceWithMedia:(bool)arg1;
- (void)setMutuallyExclusiveCall:(bool)arg1;
- (void)setNeedsManualInCallSounds:(bool)arg1;
- (void)setOriginatingUIType:(int)arg1;
- (void)setOutgoing:(bool)arg1;
- (void)setOutputAudioPowerSpectrumToken:(long long)arg1;
- (void)setPrefersExclusiveAccessToCellularNetwork:(bool)arg1;
- (void)setProvider:(id)arg1;
- (void)setProviderContext:(id)arg1;
- (void)setProxyCallActionsDelegate:(id)arg1;
- (void)setReceivingTransmission:(bool)arg1;
- (void)setRemoteAspectRatio:(struct CGSize { double x1; double x2; })arg1;
- (void)setRemoteCameraOrientation:(long long)arg1;
- (void)setRemoteFrequency:(id)arg1;
- (void)setRemoteMeterLevel:(float)arg1;
- (void)setRemoteParticipantHandles:(id)arg1;
- (void)setRemoteScreenLandscapeAspectRatio:(struct CGSize { double x1; double x2; })arg1;
- (void)setRemoteScreenOrientation:(long long)arg1;
- (void)setRemoteScreenPortraitAspectRatio:(struct CGSize { double x1; double x2; })arg1;
- (void)setRemoteUplinkMuted:(bool)arg1;
- (void)setRemoteVideo:(id)arg1;
- (void)setRemoteVideoContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setRemoteVideoLayer:(id)arg1 forMode:(long long)arg2;
- (void)setRemoteVideoModeToLayer:(id)arg1;
- (void)setRemoteVideoPresentationSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setRemoteVideoPresentationState:(int)arg1;
- (void)setRequiresRemoteVideo:(bool)arg1;
- (void)setSOS:(bool)arg1;
- (void)setScreenShareAttributes:(id)arg1;
- (void)setScreenSharingIntention:(long long)arg1;
- (void)setScreenSharingType:(unsigned long long)arg1;
- (void)setScreening:(bool)arg1;
- (void)setSendingTransmission:(bool)arg1;
- (void)setServiceStatus:(long long)arg1;
- (void)setSharingScreen:(bool)arg1;
- (void)setSharingScreen:(bool)arg1 attributes:(id)arg2;
- (void)setShouldSuppressInCallUI:(bool)arg1;
- (void)setShouldSuppressRingtone:(bool)arg1;
- (void)setSupportsEmergencyFallback:(bool)arg1;
- (void)setSupportsTTYWithVoice:(bool)arg1;
- (void)setThirdPartyVideo:(bool)arg1;
- (void)setTransitionStatus:(int)arg1;
- (void)setTransmissionMode:(long long)arg1;
- (void)setTtyType:(int)arg1;
- (void)setUplinkMuted:(bool)arg1;
- (void)setUsingBaseband:(bool)arg1;
- (void)setVideoDegraded:(bool)arg1;
- (void)setVideoMirrored:(bool)arg1;
- (void)setVideoPaused:(bool)arg1;
- (void)setVideoStreamToken:(long long)arg1;
- (void)setVoicemail:(bool)arg1;
- (void)setWantsHoldMusic:(bool)arg1;
- (void)setWantsStagingArea:(bool)arg1;
- (bool)shouldSuppressInCallUI;
- (bool)supportsEmergencyFallback;
- (bool)supportsScreening;
- (bool)supportsTTYWithVoice;
- (id)tokens;
- (long long)transmissionMode;
- (int)ttyType;
- (void)updateProxyCallWithDaemon;
- (void)updateWithCall:(id)arg1;
- (long long)videoStreamToken;
- (bool)wantsStagingArea;

@end
