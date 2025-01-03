/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCHardwareSettings : NSObject {
    NSMutableDictionary * _hardwareUsageModeSettings;
    bool  _isMLEnhanceOneToOneSupported;
    bool  _isSiriVoicePlayoutSupported;
    bool  _isSiriVoiceTapSupported;
    NSMutableSet * _pixelFormatCollections;
    int  _supportHEVC;
    bool  _supportVCPEncoder;
    bool  _supportVCPEncoderInitialized;
}

@property (nonatomic, retain) NSMutableDictionary *hardwareUsageModeSettings;
@property (nonatomic, readonly) bool isMLEnhanceOneToOneSupported;
@property (nonatomic, readonly) bool isSiriVoicePlayoutSupported;
@property (nonatomic, readonly) bool isSiriVoiceTapSupported;
@property (nonatomic, readonly) bool isVideoRenderingSupported;
@property (nonatomic, readonly) NSSet *pixelFormatCollections;
@property (nonatomic, readonly) bool supportHEVC;
@property (nonatomic, readonly) bool vcpSupportsHEVCEncoder;

+ (bool)allowScreenShareResolutionModuloAdjustment;
+ (unsigned int)builtinMicCount;
+ (bool)captureFormatPrefer16by9ForSquare;
+ (long long)deviceClass;
+ (bool)disableMLScalarDuringSharing;
+ (bool)disableViewPointCorrectionForSharing;
+ (id)featureListStringForPayload:(int)arg1 hardwareSettingsMode:(unsigned char)arg2 version:(long long)arg3;
+ (bool)isAppleSilicon;
+ (bool)isCaptionsSupported;
+ (bool)isCaptureSIFRPreferred;
+ (bool)isCellularTappingSupported;
+ (bool)isDataCollectionSupported;
+ (bool)isDeviceLargeScreen;
+ (bool)isDisplayPortrait;
+ (bool)isExternalCameraSupported;
+ (bool)isHEVCDecodeSupportedForHardwareSettingsMode:(unsigned char)arg1;
+ (bool)isHEVCEncodeSupportedForHardwareSettingsMode:(unsigned char)arg1;
+ (bool)isMLEnhanceOneToOneSupported;
+ (bool)isMediaRecordingSupported;
+ (bool)isRemoteCameraSenderSupported;
+ (bool)isSiriVoicePlayoutSupported;
+ (bool)isSiriVoiceTapSupported;
+ (bool)isSpatialAudioSupported;
+ (bool)isVideoRenderingSupported;
+ (bool)isViewPointCorrectionSupported;
+ (bool)isVoiceProcessingAt24KSupported;
+ (bool)limitCameraDownlinkBitrateDuringSharing;
+ (unsigned int)maxActiveScreenEncoders;
+ (unsigned int)maxActiveVideoDecoders;
+ (unsigned int)maxActiveVideoEncoders;
+ (unsigned int)maxFpsCameraCaptureDuringSharing;
+ (unsigned int)maxFrameRateSupportedBackgroundBlur;
+ (unsigned int)maxFrameRateSupportedScreenShare;
+ (unsigned int)maxHighTierMLEnhanceParticipants;
+ (unsigned int)maxMultiwayFramerateSupported;
+ (unsigned int)maxOneToOneFramerateSupported;
+ (unsigned int)maxRemoteParticipants30fps;
+ (unsigned long long)maxScreenEncodingSizeSupported;
+ (unsigned int)maxVCPSupportedTemporalLayers;
+ (bool)preferPresentationTimestamp;
+ (double)previewPreferredAspectRatio;
+ (bool)retainPixelBufferForMediaRecordingEnabled;
+ (unsigned int)screenHeight;
+ (unsigned int)screenHeightForDisplayID:(unsigned int)arg1;
+ (long long)screenShareCapabilities;
+ (unsigned int)screenWidth;
+ (unsigned int)screenWidthForDisplayID:(unsigned int)arg1;
+ (id)sharedInstance;
+ (bool)shouldEnforceScreenFrameRateLimit;
+ (bool)shouldOverrideGPUMuxing;
+ (id)supportedVideoPayloads;
+ (bool)supportsCompressedPixelFormat;
+ (bool)supportsDecodingSquareCameraVideo;
+ (bool)supportsDedicatedSystemAudioStream;
+ (bool)supportsFilteredScreenCapture;
+ (bool)supportsFoveation;
+ (bool)supportsHEIFEncoding;
+ (bool)supportsHEVCDecoding;
+ (bool)supportsHEVCEncoding;
+ (bool)supportsMultiway1080pStream;
+ (bool)supportsMultiway720pStream;
+ (bool)supportsOptimizedHandoversForTelephony;
+ (bool)supportsOutOfProcessAudioDecoding;
+ (bool)supportsOutOfProcessVideoDecoding;
+ (bool)supportsPSVoiceOnAP;
+ (bool)supportsScreenCapture;
+ (bool)supportsSystemAudioTap;
+ (bool)supportsVideoPriority;
+ (unsigned int)tilesPerVideoFrameForHardwareSettingsMode:(unsigned char)arg1;
+ (unsigned int)tilesPerVideoFrameForHardwareSettingsMode:(unsigned char)arg1 hdrMode:(unsigned long long)arg2;
+ (id)virtualHardwareSettings:(id)arg1;

- (void)dealloc;
- (id)featureListStringForPayload:(int)arg1 hardwareSettingsMode:(unsigned char)arg2 version:(long long)arg3;
- (id)hardwareUsageModeSettings;
- (id)init;
- (bool)isMLEnhanceOneToOneSupported;
- (bool)isSiriVoicePlayoutSupported;
- (bool)isSiriVoiceTapSupported;
- (bool)isVideoRenderingSupported;
- (unsigned int)maxNetworkBitrateMultiwayAudioOnWifi:(bool)arg1 isLowLatencyAudio:(bool)arg2;
- (id)pixelFormatCollections;
- (void)setHardwareUsageModeSettings:(id)arg1;
- (bool)storeHardwareSettingsForAllOperatingModes;
- (bool)supportHEVC;
- (bool)vcpSupportsHEVCEncoder;

@end
