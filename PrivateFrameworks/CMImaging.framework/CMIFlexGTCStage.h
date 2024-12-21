/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMImaging.framework/CMImaging
 */

@interface CMIFlexGTCStage : NSObject {
    <MTLComputePipelineState> * _FlexGTCConvertSDRLA_NLGM_to_HDRLA;
    <MTLComputePipelineState> * _FlexGTCDownsampleGM10_to_NLGM;
    <MTLComputePipelineState> * _FlexGTCDownsampleGM8_to_NLGM;
    <MTLComputePipelineState> * _FlexGTCDownsampleRGBA8_to_LA;
    <MTLComputePipelineState> * _FlexGTCHistogramLumaAndGain;
    <MTLCommandBuffer> * _currentCommandBuffer;
    <MTLBuffer> * _extractBuffer;
    float  _gainMapAlternateOffsetConstant;
    float  _gainMapBaselineOffsetConstant;
    int  _gainMapHeight;
    <MTLBuffer> * _gainMapMetadataBuffer;
    int  _gainMapWidth;
    FigMetalContext * _metal;
    float  _meteorPlusHeadroom;
}

- (void).cxx_destruct;
- (int)_compileShaders;
- (int)computeFlexGTCWithSDRImage:(struct __CVBuffer { }*)arg1 gainMap:(struct __CVBuffer { }*)arg2 gainMapMetadata:(id)arg3 config:(struct { float x1; float x2; bool x3; }*)arg4 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 gainMapCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg6;
- (id)initWithOptionalCommandQueue:(id)arg1;

@end