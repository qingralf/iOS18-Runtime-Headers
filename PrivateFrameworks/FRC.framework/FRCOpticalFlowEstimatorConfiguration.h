/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FRC.framework/FRC
 */

@interface FRCOpticalFlowEstimatorConfiguration : NSObject {
    bool  _adaptationLayerOnly;
    bool  _disableOutputFlowScaling;
    bool  _legacyNormalization;
    unsigned int  _matchOutputDimensions;
    long long  _mode;
    unsigned int  _outputPixelFormat;
    long long  _revision;
    bool  _skipLastLevel;
    bool  _streamingMode;
}

@property (nonatomic) bool adaptationLayerOnly;
@property (nonatomic) bool disableOutputFlowScaling;
@property (nonatomic) bool legacyNormalization;
@property (nonatomic) unsigned int matchOutputDimensions;
@property (nonatomic) long long mode;
@property (nonatomic) unsigned int outputPixelFormat;
@property (nonatomic) long long revision;
@property (nonatomic) bool skipLastLevel;
@property (nonatomic) bool streamingMode;

- (bool)adaptationLayerOnly;
- (bool)disableOutputFlowScaling;
- (id)init;
- (bool)legacyNormalization;
- (unsigned int)matchOutputDimensions;
- (long long)mode;
- (unsigned int)outputPixelFormat;
- (long long)revision;
- (void)setAdaptationLayerOnly:(bool)arg1;
- (void)setDisableOutputFlowScaling:(bool)arg1;
- (void)setLegacyNormalization:(bool)arg1;
- (void)setMatchOutputDimensions:(unsigned int)arg1;
- (void)setMode:(long long)arg1;
- (void)setOutputPixelFormat:(unsigned int)arg1;
- (void)setRevision:(long long)arg1;
- (void)setSkipLastLevel:(bool)arg1;
- (void)setStreamingMode:(bool)arg1;
- (bool)skipLastLevel;
- (bool)streamingMode;

@end
