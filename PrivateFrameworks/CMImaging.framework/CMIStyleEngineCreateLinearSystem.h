/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMImaging.framework/CMImaging
 */

@interface CMIStyleEngineCreateLinearSystem : NSObject <CMIStyleEngineProcessingStage> {
    <MTLComputePipelineState> * _computePipelineStates;
    bool  _inputIsLinear;
    <MTLBuffer> * _inputLHSDiagSumsBuffer;
    <MTLTexture> * _inputLearningModulationMaskTexture;
    <MTLBuffer> * _inputPairExpandedWeightsBuffer;
    <MTLBuffer> * _inputPolyExpandedInputBuffer;
    <MTLTexture> * _inputPolyExpandedTargetTexture;
    <MTLBuffer> * _inputPriorFactorForLHSBuffer;
    <MTLBuffer> * _inputPriorFactorForRHSBuffer;
    <MTLTexture> * _inputSpotlightTextureBottomEdge;
    <MTLTexture> * _inputSpotlightTextureBottomLeft;
    <MTLTexture> * _inputSpotlightTextureBottomRight;
    <MTLTexture> * _inputSpotlightTextureCentral;
    <MTLTexture> * _inputSpotlightTextureLeftEdge;
    <MTLTexture> * _inputSpotlightTextureRightEdge;
    <MTLTexture> * _inputSpotlightTextureTopEdge;
    <MTLTexture> * _inputSpotlightTextureTopLeft;
    <MTLTexture> * _inputSpotlightTextureTopRight;
    <MTLTexture> * _inputThumbnailTexture;
    <MTLTexture> * _inputWeightPlanesTexture;
    <MTLBuffer> * _outputLHSBuffer;
    <MTLBuffer> * _outputRHSBuffer;
    struct { 
        unsigned int polynomialCount; 
        unsigned int systemCount; 
        unsigned int systemSize; 
        unsigned int weightPlaneCount; 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*spotlightCount; 
    }  _params;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  _priorMatrix;
    bool  _spatialAverageSystems;
    bool  _targetIsLinear;
    <MTLTexture> * _targetThumbnailTexture;
    NSMutableData * _weightPlanePriorScaleFactors;
}

@property (nonatomic) bool applyDifferenceModulation;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) float endLambda;
@property (nonatomic) float extLambda;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool inputIsLinear;
@property (nonatomic) <MTLBuffer> *inputLHSDiagSumsBuffer;
@property (nonatomic) <MTLTexture> *inputLearningModulationMaskTexture;
@property (nonatomic) <MTLBuffer> *inputPairExpandedWeightsBuffer;
@property (nonatomic) <MTLBuffer> *inputPolyExpandedInputBuffer;
@property (nonatomic) <MTLTexture> *inputPolyExpandedTargetTexture;
@property (nonatomic) <MTLBuffer> *inputPriorFactorForLHSBuffer;
@property (nonatomic) <MTLBuffer> *inputPriorFactorForRHSBuffer;
@property (nonatomic) <MTLTexture> *inputSpotlightTextureBottomEdge;
@property (nonatomic) <MTLTexture> *inputSpotlightTextureBottomLeft;
@property (nonatomic) <MTLTexture> *inputSpotlightTextureBottomRight;
@property (nonatomic) <MTLTexture> *inputSpotlightTextureCentral;
@property (nonatomic) <MTLTexture> *inputSpotlightTextureLeftEdge;
@property (nonatomic) <MTLTexture> *inputSpotlightTextureRightEdge;
@property (nonatomic) <MTLTexture> *inputSpotlightTextureTopEdge;
@property (nonatomic) <MTLTexture> *inputSpotlightTextureTopLeft;
@property (nonatomic) <MTLTexture> *inputSpotlightTextureTopRight;
@property (nonatomic) <MTLTexture> *inputThumbnailTexture;
@property (nonatomic) <MTLTexture> *inputWeightPlanesTexture;
@property (nonatomic) float modulationDifferenceOffset;
@property (nonatomic) float modulationDifferenceStrength;
@property (nonatomic) float modulationMaskOffset;
@property (nonatomic) float modulationMaskStrength;
@property (nonatomic) <MTLBuffer> *outputLHSBuffer;
@property (nonatomic) <MTLBuffer> *outputRHSBuffer;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } priorMatrix;
@property (nonatomic) bool spatialAverageSystems;
@property (readonly) Class superclass;
@property (nonatomic) bool targetIsLinear;
@property (nonatomic) <MTLTexture> *targetThumbnailTexture;
@property (nonatomic) float tikLambdaConstant;
@property (nonatomic) float tikLambdaLinear;
@property (nonatomic) float tikLambdaQuadratic;

- (void).cxx_destruct;
- (int)_compileShaders:(id)arg1;
- (bool)_setWeightPlane:(unsigned int)arg1 term:(unsigned int)arg2 priorScaleFactor:(float)arg3;
- (bool)applyDifferenceModulation;
- (float)endLambda;
- (int)enqueueToCommandBuffer:(id)arg1;
- (float)extLambda;
- (id)initWithMetalContext:(void *)arg1 polynomialCount:(void *)arg2 systemCount:(void *)arg3 systemSize:(void *)arg4 weightPlaneCount:(void *)arg5 spotlightCount:(void *)arg6; // needs 6 arg types, found 5: id, unsigned int, unsigned int, unsigned int, unsigned int
- (bool)inputIsLinear;
- (id)inputLHSDiagSumsBuffer;
- (id)inputLearningModulationMaskTexture;
- (id)inputPairExpandedWeightsBuffer;
- (id)inputPolyExpandedInputBuffer;
- (id)inputPolyExpandedTargetTexture;
- (id)inputPriorFactorForLHSBuffer;
- (id)inputPriorFactorForRHSBuffer;
- (id)inputSpotlightTextureBottomEdge;
- (id)inputSpotlightTextureBottomLeft;
- (id)inputSpotlightTextureBottomRight;
- (id)inputSpotlightTextureCentral;
- (id)inputSpotlightTextureLeftEdge;
- (id)inputSpotlightTextureRightEdge;
- (id)inputSpotlightTextureTopEdge;
- (id)inputSpotlightTextureTopLeft;
- (id)inputSpotlightTextureTopRight;
- (id)inputThumbnailTexture;
- (id)inputWeightPlanesTexture;
- (float)modulationDifferenceOffset;
- (float)modulationDifferenceStrength;
- (float)modulationMaskOffset;
- (float)modulationMaskStrength;
- (id)outputLHSBuffer;
- (id)outputRHSBuffer;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })priorMatrix;
- (void)setApplyDifferenceModulation:(bool)arg1;
- (bool)setConstantPriorScaleFactor:(float)arg1 forWeightPlane:(unsigned int)arg2;
- (void)setEndLambda:(float)arg1;
- (void)setExtLambda:(float)arg1;
- (void)setInputIsLinear:(bool)arg1;
- (void)setInputLHSDiagSumsBuffer:(id)arg1;
- (void)setInputLearningModulationMaskTexture:(id)arg1;
- (void)setInputPairExpandedWeightsBuffer:(id)arg1;
- (void)setInputPolyExpandedInputBuffer:(id)arg1;
- (void)setInputPolyExpandedTargetTexture:(id)arg1;
- (void)setInputPriorFactorForLHSBuffer:(id)arg1;
- (void)setInputPriorFactorForRHSBuffer:(id)arg1;
- (void)setInputSpotlightTextureBottomEdge:(id)arg1;
- (void)setInputSpotlightTextureBottomLeft:(id)arg1;
- (void)setInputSpotlightTextureBottomRight:(id)arg1;
- (void)setInputSpotlightTextureCentral:(id)arg1;
- (void)setInputSpotlightTextureLeftEdge:(id)arg1;
- (void)setInputSpotlightTextureRightEdge:(id)arg1;
- (void)setInputSpotlightTextureTopEdge:(id)arg1;
- (void)setInputSpotlightTextureTopLeft:(id)arg1;
- (void)setInputSpotlightTextureTopRight:(id)arg1;
- (void)setInputThumbnailTexture:(id)arg1;
- (void)setInputWeightPlanesTexture:(id)arg1;
- (bool)setLinearPriorScaleFactor:(float)arg1 forWeightPlane:(unsigned int)arg2;
- (void)setModulationDifferenceOffset:(float)arg1;
- (void)setModulationDifferenceStrength:(float)arg1;
- (void)setModulationMaskOffset:(float)arg1;
- (void)setModulationMaskStrength:(float)arg1;
- (void)setOutputLHSBuffer:(id)arg1;
- (void)setOutputRHSBuffer:(id)arg1;
- (void)setPriorMatrix:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1;
- (bool)setQuadraticPriorScaleFactor:(float)arg1 forWeightPlane:(unsigned int)arg2;
- (void)setSpatialAverageSystems:(bool)arg1;
- (void)setTargetIsLinear:(bool)arg1;
- (void)setTargetThumbnailTexture:(id)arg1;
- (void)setTikLambdaConstant:(float)arg1;
- (void)setTikLambdaLinear:(float)arg1;
- (void)setTikLambdaQuadratic:(float)arg1;
- (bool)spatialAverageSystems;
- (bool)targetIsLinear;
- (id)targetThumbnailTexture;
- (float)tikLambdaConstant;
- (float)tikLambdaLinear;
- (float)tikLambdaQuadratic;

@end
