/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface BWStreamingRaytracingSDOFRenderer : NSObject <BWFilterRenderer> {
    long long  _YCbCrColorDepth;
    struct { 
        int width; 
        int height; 
    }  _alignment;
    BWFigVideoCaptureDevice * _captureDevice;
    <MTLCommandQueue> * _commandQueue;
    <MTLTexture> * _disparityTextureWhileWaitingForCamera;
    bool  _isFullRange;
    bool  _isTenBit;
    FigMetalContext * _metalContext;
    float  _networkBias;
    NSString * _portTypeProvidingTuningParameters;
    PTRenderPipeline * _ptRenderPipeline;
    PTRenderRequest * _ptRenderRequest;
    <PTRenderState> * _ptRenderState;
    bool  _renderStateIsConfigured;
    unsigned long long  _smartStyleCoefficientsFilterType;
    BWPixelBufferPool * _smartStyleCoefficientsPixelBufferPool;
    unsigned int  _smartStyleFilteredCoefficientsPixelBufferPoolSize;
    <CMISmartStyleProcessor> * _smartStyleProcessor;
    Class  _smartStyleProcessorClass;
    Class  _smartStyleProcessorInputOutputClass;
    bool  _smartStyleRenderingEnabled;
    MTLTextureDescriptor * _texDesc;
    MTLTextureDescriptor * _texDescDisparity;
    MTLTextureDescriptor * _texDescUV;
    struct __CVMetalTextureCache { } * _textureCache;
}

@property (nonatomic, readonly) bool adjustsMetadata;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsAnimation;
@property (nonatomic, readonly) short type;

+ (void)initialize;

- (void)adjustMetadataOfSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (bool)adjustsMetadata;
- (void)dealloc;
- (id)displayName;
- (id)initWithCaptureDevice:(id)arg1 commandQueue:(id)arg2 smartStyleRenderingEnabled:(bool)arg3;
- (int)prepareForRenderingWithParameters:(id)arg1 inputVideoFormat:(id)arg2 inputMediaPropertiesByAttachedMediaKey:(id)arg3;
- (void)renderUsingParameters:(id)arg1 inputPixelBuffer:(struct __CVBuffer { }*)arg2 inputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg3 originalPixelBuffer:(struct __CVBuffer { }*)arg4 processedPixelBuffer:(struct __CVBuffer { }*)arg5 completionHandler:(id /* block */)arg6;
- (bool)supportsAnimation;
- (short)type;

@end