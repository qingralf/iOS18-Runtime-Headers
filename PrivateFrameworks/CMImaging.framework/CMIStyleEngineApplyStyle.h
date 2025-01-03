/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMImaging.framework/CMImaging
 */

@interface CMIStyleEngineApplyStyle : NSObject <CMIStyleEngineProcessingStage> {
    <MTLComputePipelineState> * _applyComputePipelineStates;
    bool  _applyDithering;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _ccmRGBToYUV;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _ccmYUVToRGB;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _ccmYUVToRGBDelta;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _ccmYUVToRGBOriginal;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _deltaImageRect;
    bool  _fastCoeffSampling;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    <MTLTexture> * _inputChromaTexture;
    <MTLTexture> * _inputDeltaChromaTexture;
    <MTLTexture> * _inputDeltaLumaTexture;
    <MTLTexture> * _inputDeltaTexture;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _inputImageRect;
    <MTLTexture> * _inputIntegratedCoefficientsTexture;
    bool  _inputIsLinear;
    <MTLTexture> * _inputLumaTexture;
    <MTLTexture> * _inputOriginalChromaTexture;
    <MTLTexture> * _inputOriginalLumaTexture;
    <MTLTexture> * _inputOriginalTexture;
    float  _inputReadNoiseVar;
    float  _inputShotNoiseVar;
    float  _inputSquaredNoiseVar;
    <MTLTexture> * _inputTexture;
    bool  _inputThumbnailIsLinear;
    <MTLTexture> * _inputThumbnailTexture;
    <MTLBuffer> * _linearSystemStatus;
    <MTLBuffer> * _lumaGradientHistogramBuffer;
    <MTLBuffer> * _maxLumaGradient90thPercentileBuffer;
    <MTLComputePipelineState> * _nonApplyComputePipelineStates;
    <MTLTexture> * _outputChromaTexture;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _outputImageRect;
    <MTLTexture> * _outputLumaGradientTexture;
    <MTLTexture> * _outputLumaTexture;
    bool  _outputShouldBeLinear;
    <MTLTexture> * _outputTexture;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _regionToRender;
    float  _residualScaleFactor;
    <MTLTexture> * _residualTexture;
    bool  _targetThumbnailIsLinear;
    <MTLTexture> * _targetThumbnailTexture;
}

@property (nonatomic) bool applyDithering;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } ccmRGBToYUV;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } ccmYUVToRGB;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } ccmYUVToRGBDelta;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } ccmYUVToRGBOriginal;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } deltaImageRect;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool fastCoeffSampling;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGSize { double x1; double x2; } imageSize;
@property (nonatomic) <MTLTexture> *inputChromaTexture;
@property (nonatomic) <MTLTexture> *inputDeltaChromaTexture;
@property (nonatomic) <MTLTexture> *inputDeltaLumaTexture;
@property (nonatomic) <MTLTexture> *inputDeltaTexture;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } inputImageRect;
@property (nonatomic) <MTLTexture> *inputIntegratedCoefficientsTexture;
@property (nonatomic) bool inputIsLinear;
@property (nonatomic) <MTLTexture> *inputLumaTexture;
@property (nonatomic) <MTLTexture> *inputOriginalChromaTexture;
@property (nonatomic) <MTLTexture> *inputOriginalLumaTexture;
@property (nonatomic) <MTLTexture> *inputOriginalTexture;
@property (nonatomic) float inputReadNoiseVar;
@property (nonatomic) float inputShotNoiseVar;
@property (nonatomic) float inputSquaredNoiseVar;
@property (nonatomic) <MTLTexture> *inputTexture;
@property (nonatomic) bool inputThumbnailIsLinear;
@property (nonatomic) <MTLTexture> *inputThumbnailTexture;
@property (nonatomic) <MTLBuffer> *linearSystemStatus;
@property (nonatomic) <MTLBuffer> *lumaGradientHistogramBuffer;
@property (nonatomic) <MTLBuffer> *maxLumaGradient90thPercentileBuffer;
@property (nonatomic) <MTLTexture> *outputChromaTexture;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } outputImageRect;
@property (nonatomic) <MTLTexture> *outputLumaGradientTexture;
@property (nonatomic) <MTLTexture> *outputLumaTexture;
@property (nonatomic) bool outputShouldBeLinear;
@property (nonatomic) <MTLTexture> *outputTexture;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } regionToRender;
@property (nonatomic) float residualScaleFactor;
@property (nonatomic) <MTLTexture> *residualTexture;
@property (readonly) Class superclass;
@property (nonatomic) bool targetThumbnailIsLinear;
@property (nonatomic) <MTLTexture> *targetThumbnailTexture;

- (void).cxx_destruct;
- (id*)_applyComputePipelineStateWithConstantsIsFast:(bool)arg1 doManualInputYUVToRGBConversion:(bool)arg2 doManualOutputRGBToYUVConversion:(bool)arg3 isWithLumaGrad:(bool)arg4 doGenerateSyntheticNoise:(bool)arg5 applyDithering:(bool)arg6;
- (int)_compileShaders:(id)arg1;
- (struct CGVector { double x1; double x2; })_displacementFrom:(struct CGPoint { double x1; double x2; })arg1 to:(struct CGPoint { double x1; double x2; })arg2;
- (void)_ushort2FromCGPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_ushort2FromCGSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_ushort2FromCGVector:(struct CGVector { double x1; double x2; })arg1;
- (bool)applyDithering;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })ccmRGBToYUV;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })ccmYUVToRGB;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })ccmYUVToRGBDelta;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })ccmYUVToRGBOriginal;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })deltaImageRect;
- (int)enqueueToCommandBuffer:(id)arg1;
- (bool)fastCoeffSampling;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)initWithMetalContext:(id)arg1;
- (id)inputChromaTexture;
- (id)inputDeltaChromaTexture;
- (id)inputDeltaLumaTexture;
- (id)inputDeltaTexture;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })inputImageRect;
- (id)inputIntegratedCoefficientsTexture;
- (bool)inputIsLinear;
- (id)inputLumaTexture;
- (id)inputOriginalChromaTexture;
- (id)inputOriginalLumaTexture;
- (id)inputOriginalTexture;
- (float)inputReadNoiseVar;
- (float)inputShotNoiseVar;
- (float)inputSquaredNoiseVar;
- (id)inputTexture;
- (bool)inputThumbnailIsLinear;
- (id)inputThumbnailTexture;
- (id)linearSystemStatus;
- (id)lumaGradientHistogramBuffer;
- (id)maxLumaGradient90thPercentileBuffer;
- (id)outputChromaTexture;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })outputImageRect;
- (id)outputLumaGradientTexture;
- (id)outputLumaTexture;
- (bool)outputShouldBeLinear;
- (id)outputTexture;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })regionToRender;
- (float)residualScaleFactor;
- (id)residualTexture;
- (void)setApplyDithering:(bool)arg1;
- (void)setCcmRGBToYUV:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setCcmYUVToRGB:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setCcmYUVToRGBDelta:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setCcmYUVToRGBOriginal:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setDeltaImageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFastCoeffSampling:(bool)arg1;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setInputChromaTexture:(id)arg1;
- (void)setInputDeltaChromaTexture:(id)arg1;
- (void)setInputDeltaLumaTexture:(id)arg1;
- (void)setInputDeltaTexture:(id)arg1;
- (void)setInputImageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setInputIntegratedCoefficientsTexture:(id)arg1;
- (void)setInputIsLinear:(bool)arg1;
- (void)setInputLumaTexture:(id)arg1;
- (void)setInputOriginalChromaTexture:(id)arg1;
- (void)setInputOriginalLumaTexture:(id)arg1;
- (void)setInputOriginalTexture:(id)arg1;
- (void)setInputReadNoiseVar:(float)arg1;
- (void)setInputShotNoiseVar:(float)arg1;
- (void)setInputSquaredNoiseVar:(float)arg1;
- (void)setInputTexture:(id)arg1;
- (void)setInputThumbnailIsLinear:(bool)arg1;
- (void)setInputThumbnailTexture:(id)arg1;
- (void)setLinearSystemStatus:(id)arg1;
- (void)setLumaGradientHistogramBuffer:(id)arg1;
- (void)setMaxLumaGradient90thPercentileBuffer:(id)arg1;
- (void)setOutputChromaTexture:(id)arg1;
- (void)setOutputImageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setOutputLumaGradientTexture:(id)arg1;
- (void)setOutputLumaTexture:(id)arg1;
- (void)setOutputShouldBeLinear:(bool)arg1;
- (void)setOutputTexture:(id)arg1;
- (void)setRegionToRender:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setResidualScaleFactor:(float)arg1;
- (void)setResidualTexture:(id)arg1;
- (void)setTargetThumbnailIsLinear:(bool)arg1;
- (void)setTargetThumbnailTexture:(id)arg1;
- (bool)targetThumbnailIsLinear;
- (id)targetThumbnailTexture;

@end
