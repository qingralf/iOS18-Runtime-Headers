/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface BWPocketDetectionFFTProcessor : NSObject {
    <MTLComputePipelineState> * _computePipelines;
    struct OpaqueVTPixelRotationSession { } * _cropSession;
    BWPixelBufferPool * _fftBufferPool;
    <MTLBuffer> * _fftMetalBuffer;
    <MTLTexture> * _fftMetalTexture;
    <MTLBuffer> * _fftResultAccumulationMetalBuffer;
    <MTLTexture> * _fftResultAccumulationMetalTexture;
    <CMIFFTTransform> * _fftTransform;
    <MTLCommandQueue> * _metalCommandQueue;
    FigMetalContext * _metalContext;
    bool  _resourcesCleaned;
    bool  _useMetalForScalingAndResultAccumulation;
}

+ (void)initialize;
+ (int)prewarmShaders;

- (int)_loadKernel:(id*)arg1 name:(id)arg2;
- (int)_processFFTOnInputPixelBuffer:(struct __CVBuffer { }*)arg1 usingSourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 cumulativeScoreOut:(float*)arg3;
- (int)_processMetalOptimizedFFTOnInputPixelBuffer:(struct __CVBuffer { }*)arg1 usingSourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 cumulativeScoreOut:(float*)arg3;
- (int)_setupPipelines;
- (int)allocateResources;
- (void)cleanupResources;
- (void)dealloc;
- (id)initWithMetalCommandQueue:(id)arg1;
- (int)processFFTOnInputPixelBuffer:(struct __CVBuffer { }*)arg1 usingSourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 cumulativeScoreOut:(float*)arg3;

@end
