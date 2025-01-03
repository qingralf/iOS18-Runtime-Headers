/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface BufferFillMetal : NSObject {
    <MTLCommandQueue> * _commandQueue;
    <MTLDevice> * _device;
    <MTLComputePipelineState> * _fillBoundaryLeftRightChroma;
    <MTLComputePipelineState> * _fillBoundaryLeftRightLuma;
    <MTLComputePipelineState> * _fillBoundaryTopBottomCornersChroma;
    <MTLComputePipelineState> * _fillBoundaryTopBottomCornersLuma;
    <MTLLibrary> * _library;
    <MTLComputePipelineState> * _preFillChroma;
    <MTLComputePipelineState> * _preFillLuma;
    NSDictionary * _readWriteAttributes;
    bool  _supportsNonuniformThreadgroups;
    struct CF<__CVMetalTextureCache *> { 
        struct __CVMetalTextureCache {} *value_; 
    }  _textureCacheChroma;
    struct CF<__CVMetalTextureCache *> { 
        struct __CVMetalTextureCache {} *value_; 
    }  _textureCacheLuma;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)CompileBufferFill;
- (int)ExtendEdges:(struct __CVBuffer { }*)arg1 padSize:(unsigned int)arg2;
- (int)FillBoundary:(struct __CVBuffer { }*)arg1 padSize:(unsigned int)arg2 fillValues:(int)arg3;
- (int)FillBoundaryOrExtendEdges:(struct __CVBuffer { }*)arg1 padSize:(unsigned int)arg2 fillValues:(int)arg3;
- (int)PreFill:(struct __CVBuffer { }*)arg1 values:(int)arg2;
- (id)compileFunction:(id)arg1;
- (id)compileFunction:(id)arg1 constantValues:(id)arg2;
- (id)init;
- (int)initWithDevice:(struct __CVBuffer { }*)arg1;
- (id)unormTexture:(struct __CVBuffer { }*)arg1 forPlane:(int)arg2 withAttributes:(id)arg3;

@end
