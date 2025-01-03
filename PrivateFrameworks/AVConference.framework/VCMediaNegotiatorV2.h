/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCMediaNegotiatorV2 : VCMediaNegotiatorBase

+ (bool)addFeatureListStringsToStreamGroupConfig:(id)arg1 fromStreamGroupBlob:(id)arg2;
+ (bool)addV1FeatureListStringsToStreamGroupConfig:(id)arg1 mediaType:(unsigned char)arg2;
+ (bool)addV2FeatureListStringsToStreamGroupConfig:(id)arg1 fromStreamGroupBlob:(id)arg2;
+ (unsigned int)capabilitiesWithMomentSettings:(id)arg1;
+ (void)dumpRemoteNegotiationData:(id)arg1 forceFileDump:(bool)arg2;
+ (id)featureStringWithMediaBlob:(id)arg1;
+ (int)filteredCipherSuitesFromNegotiatedCipherSuites:(int)arg1 u1AuthTagEnabled:(bool)arg2;
+ (float)frameRateForMediaType:(unsigned char)arg1;
+ (bool)initializeLocalConfiguration:(id)arg1 negotiationData:(id)arg2 deviceRole:(int)arg3 preferredAudioPayload:(int)arg4;
+ (id)newCompressedBlob:(id)arg1;
+ (id)newDecompressedBlob:(id)arg1;
+ (id)newUnserializedMediaBlob:(id)arg1;
+ (struct CGSize { double x1; double x2; })resolutionForStreamGroupConfig:(id)arg1;
+ (id)streamGroupIDsWithMediaBlob:(id)arg1;
+ (id)u1RemoteSupportedCipherSuitesForBlob:(id)arg1 mediaType:(unsigned char)arg2 u1AuthTagEnabled:(bool)arg3;
+ (bool)updateCameraU1Config:(id)arg1 forNegotiationBlob:(id)arg2 localSupportedVideoPayloads:(id)arg3 u1AuthTagEnabled:(bool)arg4;
+ (bool)updateStreamGroupU1Config:(id)arg1 forGroupId:(unsigned int)arg2 withNegotiationBlob:(id)arg3 streamGroupBlob:(id)arg4 localSupportedVideoPayloads:(id)arg5 u1AuthTagEnabled:(bool)arg6;
+ (bool)updateVideoU1ConfigWithStreamGroupConfig:(id)arg1 forNegotiationBlob:(id)arg2 streamGroupBlob:(id)arg3 localSupportedVideoPayloads:(id)arg4 u1AuthTagEnabled:(bool)arg5;

- (bool)appendBandwidthSettingsToMediaBlob:(id)arg1;
- (bool)appendCameraOneToOneSettingsToMediaBlob:(id)arg1;
- (bool)appendCodecFeaturesToMediaBlob:(id)arg1;
- (bool)appendGeneralInfoToMediaBlob:(id)arg1;
- (bool)appendMicrophoneOneToOneSettingsToMediaBlob:(id)arg1;
- (bool)appendMomentsSettingsToMediaBlob:(id)arg1;
- (bool)appendStreamGroupsToMediaBlob:(id)arg1;
- (bool)mediaBlobHasFLSPerCodec:(id)arg1;
- (bool)negotiateStreamGroupConfig:(id)arg1 remoteInviteBlob:(id)arg2;
- (bool)negotiateU1SettingsForStreamGroup:(id)arg1;
- (id)negotiationData;
- (bool)processRemoteNegotiationData:(id)arg1;
- (unsigned int)remoteMaxBandwidthForArbiterMode:(unsigned char)arg1 connectionType:(int)arg2;
- (bool)selectBestDecodeVideoRuleForTransport:(unsigned char)arg1 payload:(int)arg2 localVideoRuleCollection:(id)arg3 remoteVideoRuleCollection:(id)arg4;
- (void)setUpNegotiatedSystemAudioResultsWithRemoteMediaBlob:(id)arg1;
- (void)setupNegotiatedAudioResultsWithRemoteMediaBlob:(id)arg1;
- (void)setupNegotiatedFaceTimeSettingsWithRemoteMediaBlob:(id)arg1;
- (bool)setupNegotiatedMomentsResultsWithRemoteMediaBlob:(id)arg1;
- (bool)setupNegotiatedResultsWithRemoteMediaBlob:(id)arg1;
- (bool)setupNegotiatedVideoSettingsWithRemoteMediaBlob:(id)arg1;
- (bool)setupStreamGroupsWithRemoteMediaBlob:(id)arg1;

@end
