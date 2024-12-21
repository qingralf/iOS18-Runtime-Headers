/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FRC.framework/FRC
 */

@interface Pyramid : FRCMetalBase {
    <MTLComputePipelineState> * _bicubicSubsampleKernel;
    <MTLComputePipelineState> * _blendKernel;
    <MTLComputePipelineState> * _featureBackwarpKernel;
    <MTLBuffer> * _gaussian3x3CoefficientBuffer;
    <MTLComputePipelineState> * _gaussian3x3FilterKernel;
    <MTLComputePipelineState> * _gaussian3x3SubsampleKernel;
    <MTLBuffer> * _gaussianCoefficientBuffer;
    <MTLComputePipelineState> * _gaussianSubsampleKernel;
    <MTLComputePipelineState> * _paddingKernel;
    <MTLComputePipelineState> * _residueInplaceKernel;
    <MTLComputePipelineState> * _residueKernel;
    <MTLComputePipelineState> * _shuffleConcatenateKernel;
    <MTLComputePipelineState> * _subsampleKernel;
    bool  _supportsSIMDShuffle;
    <MTLComputePipelineState> * _twoLayerBlendKernel;
}

- (void).cxx_destruct;
- (void)blendWarpedResidueForward:(struct __CVBuffer { }*)arg1 backward:(struct __CVBuffer { }*)arg2 withGridNetOutput:(struct __CVBuffer { }*)arg3 timeScale:(float)arg4 destination:(struct __CVBuffer { }*)arg5 callback:(id /* block */)arg6;
- (void)createResiduePyramidFromBuffer:(struct __CVBuffer { }*)arg1 toBuffer:(struct __CVBuffer {}**)arg2 levels:(unsigned long long)arg3;
- (void)encode3x3GaussianFilterToCommandBuffer:(id)arg1 source:(id)arg2 destination:(id)arg3;
- (void)encodeAddBottomPaddingToCommandBuffer:(id)arg1 source:(id)arg2 destination:(id)arg3;
- (void)encodeBicubicSubsampleTextureToCommandBuffer:(id)arg1 source:(id)arg2 destination:(id)arg3;
- (void)encodeFeatureBackwarpToCommandBuffer:(id)arg1 feature:(id)arg2 forwardFlow:(id)arg3 backwardFlow:(id)arg4 timeScale:(float)arg5 destination:(id)arg6;
- (void)encodeLayerBlendToCommandBuffer:(id)arg1 baseLayer:(id)arg2 toDestination:(id)arg3;
- (void)encodeLayerBlendToCommandBuffer:(id)arg1 forwardResidue:(id)arg2 backwardResidue:(id)arg3 withBaseLayer:(id)arg4 timeScale:(float)arg5 destination:(id)arg6;
- (void)encodeResidueInplaceToCommandBuffer:(id)arg1 base:(id)arg2 low:(id)arg3;
- (void)encodeResiduePyramidToCommandBuffer:(id)arg1 fromTexture:(id)arg2 toTexture:(const id*)arg3 levels:(unsigned long long)arg4;
- (void)encodeResidueToCommandBuffer:(id)arg1 base:(id)arg2 low:(id)arg3 destination:(id)arg4;
- (void)encodeShuffleToCommandBuffer:(id)arg1 full:(id)arg2 quarter:(id)arg3 destination:(id)arg4;
- (void)encodeSubsampleTextureWith3x3GaussianToCommandBuffer:(id)arg1 source:(id)arg2 destination:(id)arg3;
- (void)encodeSubsampleTextureWith5x5GaussianToCommandBuffer:(id)arg1 source:(id)arg2 destination:(id)arg3 clampToEdge:(bool)arg4;
- (id)initWithDevice:(id)arg1 commmandQueue:(id)arg2;

@end