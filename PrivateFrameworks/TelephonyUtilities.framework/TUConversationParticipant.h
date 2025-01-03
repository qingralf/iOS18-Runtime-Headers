/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUConversationParticipant : NSObject <NSCopying, NSSecureCoding> {
    NSString * _activeIDSDestination;
    TUConversationParticipantAssociation * _association;
    bool  _audioEnabled;
    bool  _audioPaused;
    long long  _audioPriority;
    unsigned long long  _audioVideoMode;
    NSString * _avcIdentifier;
    bool  _cameraMixedWithScreen;
    TUConversationParticipantCapabilities * _capabilities;
    long long  _captionsToken;
    bool  _guestModeEnabled;
    TUHandle * _handle;
    unsigned long long  _identifier;
    bool  _lightweight;
    bool  _localAccountHandle;
    bool  _muted;
    unsigned long long  _presentationMode;
    bool  _screenEnabled;
    long long  _screenToken;
    NSString * _senderCorrelationIdentifier;
    bool  _spatialPersonaEnabled;
    long long  _streamToken;
    bool  _videoEnabled;
    long long  _videoPriority;
}

@property (nonatomic, copy) NSString *activeIDSDestination;
@property (nonatomic, copy) TUConversationParticipantAssociation *association;
@property (getter=isAudioEnabled, nonatomic) bool audioEnabled;
@property (getter=isAudioPaused, nonatomic) bool audioPaused;
@property (nonatomic) long long audioPriority;
@property (nonatomic) unsigned long long audioVideoMode;
@property (nonatomic, copy) NSString *avcIdentifier;
@property (getter=isCameraMixedWithScreen, nonatomic) bool cameraMixedWithScreen;
@property (nonatomic, copy) TUConversationParticipantCapabilities *capabilities;
@property (nonatomic) long long captionsToken;
@property (getter=isGuestModeEnabled, nonatomic) bool guestModeEnabled;
@property (nonatomic, readonly, copy) TUHandle *handle;
@property (nonatomic, readonly) unsigned long long identifier;
@property (getter=isLightweight, nonatomic) bool lightweight;
@property (getter=isLocalAccountHandle, nonatomic) bool localAccountHandle;
@property (getter=isMuted, nonatomic) bool muted;
@property (nonatomic) unsigned long long presentationMode;
@property (getter=isScreenEnabled, nonatomic) bool screenEnabled;
@property (nonatomic) long long screenToken;
@property (nonatomic, readonly, copy) NSString *senderCorrelationIdentifier;
@property (getter=isSpatialPersonaEnabled, nonatomic) bool spatialPersonaEnabled;
@property (nonatomic) long long streamToken;
@property (getter=isVideoEnabled, nonatomic) bool videoEnabled;
@property (nonatomic) long long videoPriority;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activeIDSDestination;
- (id)association;
- (long long)audioPriority;
- (unsigned long long)audioVideoMode;
- (id)avcIdentifier;
- (id)capabilities;
- (long long)captionsToken;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)handle;
- (unsigned long long)hash;
- (unsigned long long)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithConversationParticipant:(id)arg1;
- (id)initWithIdentifier:(unsigned long long)arg1 handle:(id)arg2;
- (id)initWithIdentifier:(unsigned long long)arg1 handle:(id)arg2 senderCorrelationIdentifier:(id)arg3;
- (bool)isAudioEnabled;
- (bool)isAudioPaused;
- (bool)isCameraMixedWithScreen;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToParticipant:(id)arg1;
- (bool)isGuestModeEnabled;
- (bool)isLightweight;
- (bool)isLocalAccountHandle;
- (bool)isMuted;
- (bool)isScreenEnabled;
- (bool)isSpatialPersonaEnabled;
- (bool)isVideoEnabled;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)presentationMode;
- (long long)screenToken;
- (id)senderCorrelationIdentifier;
- (void)setActiveIDSDestination:(id)arg1;
- (void)setAssociation:(id)arg1;
- (void)setAudioEnabled:(bool)arg1;
- (void)setAudioPaused:(bool)arg1;
- (void)setAudioPriority:(long long)arg1;
- (void)setAudioVideoMode:(unsigned long long)arg1;
- (void)setAvcIdentifier:(id)arg1;
- (void)setCameraMixedWithScreen:(bool)arg1;
- (void)setCapabilities:(id)arg1;
- (void)setCaptionsToken:(long long)arg1;
- (void)setGuestModeEnabled:(bool)arg1;
- (void)setLightweight:(bool)arg1;
- (void)setLocalAccountHandle:(bool)arg1;
- (void)setMuted:(bool)arg1;
- (void)setPresentationMode:(unsigned long long)arg1;
- (void)setScreenEnabled:(bool)arg1;
- (void)setScreenToken:(long long)arg1;
- (void)setSpatialPersonaEnabled:(bool)arg1;
- (void)setStreamToken:(long long)arg1;
- (void)setVideoEnabled:(bool)arg1;
- (void)setVideoPriority:(long long)arg1;
- (long long)streamToken;
- (long long)videoPriority;

@end
