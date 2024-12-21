/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Matter.framework/Matter
 */

@interface MTRCameraAVStreamManagementClusterAudioCapabilitiesStruct : NSObject <NSCopying> {
    NSNumber * _maxNumberOfChannels;
    NSArray * _supportedBitDepths;
    NSArray * _supportedCodecs;
    NSArray * _supportedSampleRates;
}

@property (nonatomic, copy) NSNumber *maxNumberOfChannels;
@property (nonatomic, copy) NSArray *supportedBitDepths;
@property (nonatomic, copy) NSArray *supportedCodecs;
@property (nonatomic, copy) NSArray *supportedSampleRates;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)maxNumberOfChannels;
- (void)setMaxNumberOfChannels:(id)arg1;
- (void)setSupportedBitDepths:(id)arg1;
- (void)setSupportedCodecs:(id)arg1;
- (void)setSupportedSampleRates:(id)arg1;
- (id)supportedBitDepths;
- (id)supportedCodecs;
- (id)supportedSampleRates;

@end