/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCMediaNegotiatorStreamGroupU1Configuration : NSObject <NSCopying> {
    bool  _allowAudioRecording;
    NSSet * _audioPayloads;
    NSArray * _payloadPreference;
    unsigned int  _screenPixelCount;
    unsigned int  _ssrc;
    NSOrderedSet * _supportedCipherSuites;
    unsigned char  _supportedDirection;
    NSDictionary * _videoFeatureStrings;
    NSDictionary * _videoFeatureStringsFixedPosition;
    NSArray * _videoParameterSet;
    NSArray * _videoPayloads;
    VCVideoRuleCollections * _videoRuleCollections;
}

@property (nonatomic) bool allowAudioRecording;
@property (nonatomic, retain) NSSet *audioPayloads;
@property (nonatomic, retain) NSArray *payloadPreference;
@property (nonatomic) unsigned int screenPixelCount;
@property (nonatomic) unsigned int ssrc;
@property (nonatomic, retain) NSOrderedSet *supportedCipherSuites;
@property (nonatomic) unsigned char supportedDirection;
@property (nonatomic, retain) NSDictionary *videoFeatureStrings;
@property (nonatomic, retain) NSDictionary *videoFeatureStringsFixedPosition;
@property (nonatomic, retain) NSArray *videoParameterSet;
@property (nonatomic, retain) NSArray *videoPayloads;
@property (nonatomic, retain) VCVideoRuleCollections *videoRuleCollections;

+ (void)negotiateFeatureStrings:(id)arg1 localU1Config:(id)arg2 remoteU1Config:(id)arg3;
+ (long long)negotiateU1CipherSuiteForStreamGroupID:(unsigned int)arg1 remoteSupportedCipherSuites:(id)arg2;
+ (id)negotiatedAudioSettingsForGroupID:(unsigned int)arg1 localU1Config:(id)arg2 remoteU1Config:(id)arg3;
+ (id)negotiatedMicrophoneSettingsBetweenLocalU1Config:(id)arg1 remoteU1Config:(id)arg2;
+ (id)negotiatedScreenSettingsBetweenLocalU1Config:(id)arg1 remoteU1Config:(id)arg2;
+ (id)negotiatedSystemAudioSettingsBetweenLocalU1Config:(id)arg1 remoteU1Config:(id)arg2;
+ (id)negotiatedVideoSettingsBetweenLocalU1Config:(id)arg1 remoteU1Config:(id)arg2 streamGroupID:(unsigned int)arg3;
+ (id)negotiatedVideoSettingsForGroupID:(unsigned int)arg1 localU1Config:(id)arg2 remoteU1Config:(id)arg3;
+ (bool)ssrcForStreamGroup:(unsigned int)arg1 localConfig:(id)arg2 ssrc:(unsigned int*)arg3;
+ (void)updateBodyDataU1Config:(id)arg1 bodyDataConfiguration:(id)arg2;
+ (void)updateCameraU1Config:(id)arg1 cameraConfiguration:(id)arg2;
+ (bool)updateCommonNegotiatedVideoSettings:(id)arg1 localU1Config:(id)arg2 remoteU1Config:(id)arg3;
+ (void)updateFaceTextureU1Config:(id)arg1 faceTextureConfiguration:(id)arg2;
+ (void)updateScreenU1Config:(id)arg1 screenConfiguration:(id)arg2;
+ (bool)updateVideoPayloadsAndParametersForU1Config:(id)arg1;

- (bool)allowAudioRecording;
- (id)audioPayloads;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (id)initStreamGroupU1ConfigForGroupId:(unsigned int)arg1 withLocalConfig:(id)arg2;
- (id)initWithSSRC:(unsigned int)arg1;
- (bool)isEqual:(id)arg1;
- (id)payloadPreference;
- (unsigned int)screenPixelCount;
- (void)setAllowAudioRecording:(bool)arg1;
- (void)setAudioPayloads:(id)arg1;
- (void)setPayloadPreference:(id)arg1;
- (void)setScreenPixelCount:(unsigned int)arg1;
- (void)setSsrc:(unsigned int)arg1;
- (void)setSupportedCipherSuites:(id)arg1;
- (void)setSupportedDirection:(unsigned char)arg1;
- (void)setVideoFeatureStrings:(id)arg1;
- (void)setVideoFeatureStringsFixedPosition:(id)arg1;
- (void)setVideoParameterSet:(id)arg1;
- (void)setVideoPayloads:(id)arg1;
- (void)setVideoRuleCollections:(id)arg1;
- (unsigned int)ssrc;
- (id)supportedCipherSuites;
- (unsigned char)supportedDirection;
- (void)updateWithAudioConfiguration:(id)arg1 mediaType:(unsigned char)arg2;
- (id)videoFeatureStrings;
- (id)videoFeatureStringsFixedPosition;
- (id)videoParameterSet;
- (id)videoPayloads;
- (id)videoRuleCollections;

@end