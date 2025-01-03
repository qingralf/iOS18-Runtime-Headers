/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCPlayerAudioFormat : NSObject <MPCPlaybackEngineEventPayloadValueJSONConvertible, NSCopying> {
    NSString * _audioChannelLayoutDescription;
    long long  _bitDepth;
    long long  _bitrate;
    unsigned int  _channelLayout;
    unsigned int  _codec;
    NSString * _groupID;
    bool  _multiChannel;
    unsigned int  _originChannelLayout;
    long long  _renderingMode;
    long long  _sampleRate;
    bool  _spatialized;
    NSString * _stableVariantID;
    long long  _tier;
}

@property (nonatomic, readonly) NSString *audioChannelLayoutDescription;
@property (nonatomic, readonly) long long bitDepth;
@property (nonatomic, readonly) long long bitrate;
@property (nonatomic, readonly) unsigned int channelLayout;
@property (nonatomic, readonly) unsigned int codec;
@property (nonatomic, readonly) NSString *debugBitDepthDescription;
@property (nonatomic, readonly) NSString *debugBitRateDescription;
@property (nonatomic, readonly) NSString *debugChannelCountDescription;
@property (nonatomic, readonly) NSString *debugChannelLayoutDescription;
@property (nonatomic, readonly) NSString *debugCodecDescription;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, readonly) NSString *debugSampleRateDescription;
@property (nonatomic, readonly) NSString *debugTierDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly, copy) NSString *groupID;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *humanDescription;
@property (getter=isMultiChannel, nonatomic, readonly) bool multiChannel;
@property (nonatomic, readonly) MPNowPlayingInfoAudioFormat *nowPlayingAudioFormat;
@property (nonatomic) unsigned int originChannelLayout;
@property (nonatomic, readonly) long long renderingMode;
@property (nonatomic, readonly) long long sampleRate;
@property (getter=isSpatialized, nonatomic, readonly) bool spatialized;
@property (nonatomic, readonly, copy) NSString *stableVariantID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long tier;

+ (id)lossyHighQualityStereoFormat;
+ (id)lossyLowQualityStereoFormat;
+ (id)payloadValueFromJSONValue:(id)arg1;

- (void).cxx_destruct;
- (unsigned int)_computedChannelLayoutTagFromHLSData:(id)arg1 channelCount:(long long)arg2;
- (long long)_computedTierFromHLSDataWithChannelCount:(long long)arg1;
- (id)_descriptionForChannelLayoutTag:(unsigned int)arg1;
- (bool)_isBinauralFormat:(id)arg1;
- (bool)_isDerivedFromSpatialFormat:(id)arg1;
- (bool)_isHLSVersion:(id)arg1 greatherThanOrEqualTo:(id)arg2;
- (bool)_isMultichannelFormat:(id)arg1;
- (bool)_isSpatialFormat:(id)arg1;
- (id)analyticsFormatInfo;
- (id)audioChannelLayoutDescription;
- (id)audioFormatWithRenderingMode:(long long)arg1;
- (long long)bitDepth;
- (long long)bitrate;
- (unsigned int)channelLayout;
- (unsigned int)codec;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugBitDepthDescription;
- (id)debugBitRateDescription;
- (id)debugChannelCountDescription;
- (id)debugChannelLayoutDescription;
- (id)debugCodecDescription;
- (id)debugOriginChannelCountDescription;
- (id)debugOriginChannelLayoutDescription;
- (id)debugSampleRateDescription;
- (id)debugTierDescription;
- (id)description;
- (id)dictionaryRepresentation;
- (id)groupID;
- (id)humanDescription;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithJSONDictionaryRepresentation:(id)arg1 stableVariantID:(id)arg2;
- (id)initWithNowPlayingInfoAudioFormat:(id)arg1;
- (id)initWithTier:(long long)arg1 codec:(unsigned int)arg2 spatialized:(bool)arg3 multiChannel:(bool)arg4 channelLayout:(unsigned int)arg5 sampleRate:(long long)arg6 stableVariantID:(id)arg7;
- (bool)isEqual:(id)arg1;
- (bool)isMultiChannel;
- (bool)isSpatialized;
- (id)mpc_jsonValue;
- (id)nowPlayingAudioFormat;
- (unsigned int)originChannelLayout;
- (long long)renderingMode;
- (long long)sampleRate;
- (void)setOriginChannelLayout:(unsigned int)arg1;
- (id)stableVariantID;
- (long long)tier;

@end
