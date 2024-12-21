/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
 */

@interface ISDimmingConversion : NSObject {
    unsigned int  _alphaInfo;
    struct CGImage { } * _cgImage;
    struct __CFData { } * _data;
    bool  _hasDimmingParameters;
    int  _height;
    float  _highlightBrightnessAdjustmentFactor;
    bool  _isDimmable;
    float  _meanBrightnessAfterHighlightAdjustment;
    float  _minMeanBrightnessAdjustmentFactor;
    int  _numberOfSamples;
    bool  _shouldAdjustHighlightBrightness;
    bool  _shouldAdjustMeanBrightness;
    float  _targetHighlightBrightnessLevel;
    float  _targetMeanBrightnessLevel;
    /* Warning: Unrecognized filer type: '' using 'void*' */ void** _ucharDimmed;
    const /* Warning: Unrecognized filer type: '' using 'void*' */ void** _ucharSamples;
    int  _width;
}

@property (nonatomic, readonly) bool isDimmable;
@property (nonatomic) float minMeanBrightnessAdjustmentFactor;
@property (nonatomic) float targetHighlightBrightnessLevel;
@property (nonatomic) float targetMeanBrightnessLevel;

- (bool)_computeDimmedImage;
- (void)_computeDimmingParameters;
- (bool)_prepareSamplesIfNeeded;
- (struct CGImage { }*)createDimmedImage;
- (void)dealloc;
- (id)initWithCGImage:(struct CGImage { }*)arg1;
- (bool)isDimmable;
- (float)minMeanBrightnessAdjustmentFactor;
- (void)setMinMeanBrightnessAdjustmentFactor:(float)arg1;
- (void)setTargetHighlightBrightnessLevel:(float)arg1;
- (void)setTargetMeanBrightnessLevel:(float)arg1;
- (float)targetHighlightBrightnessLevel;
- (float)targetMeanBrightnessLevel;

@end