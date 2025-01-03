/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GPUToolsCapture.framework/GPUToolsCapture
 */

@interface CaptureMTLFXTemporalScaler : NSObject <CaptureMTLObject, MTLFXTemporalScalerSPI> {
    <MTLFXTemporalScalerSPI> * _baseObject;
    CaptureMTLTexture * _captureColorTexture;
    CaptureMTLTexture * _captureDebugTexture;
    CaptureMTLTexture * _captureDepthTexture;
    CaptureMTLDevice * _captureDevice;
    CaptureMTLTexture * _captureExposureTexture;
    CaptureMTLFence * _captureFence;
    CaptureMTLTexture * _captureMotionTexture;
    CaptureMTLTexture * _captureOutputTexture;
    CaptureMTLTexture * _captureReactiveMaskTexture;
    struct GTTraceContext { } * _traceContext;
    struct GTTraceStream { } * _traceStream;
}

@property (readonly) <MTLFXTemporalScaler> *baseObject;
@property (nonatomic, retain) <MTLTexture> *colorTexture;
@property (nonatomic, readonly) unsigned long long colorTextureFormat;
@property (nonatomic, readonly) unsigned long long colorTextureUsage;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } currentViewToClipMatrix;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } currentWorldToViewMatrix;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, retain) <MTLTexture> *debugTexture;
@property (getter=isDepthReversed, nonatomic) bool depthReversed;
@property (nonatomic, retain) <MTLTexture> *depthTexture;
@property (nonatomic, readonly) unsigned long long depthTextureFormat;
@property (nonatomic, readonly) unsigned long long depthTextureUsage;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long executionMode;
@property (nonatomic, retain) <MTLTexture> *exposureTexture;
@property (nonatomic, retain) <MTLFence> *fence;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long inputContentHeight;
@property (nonatomic, readonly) float inputContentMaxScale;
@property (nonatomic, readonly) float inputContentMinScale;
@property (nonatomic) unsigned long long inputContentWidth;
@property (nonatomic, readonly) unsigned long long inputHeight;
@property (nonatomic, readonly) unsigned long long inputWidth;
@property (nonatomic) float jitterOffsetX;
@property (nonatomic) float jitterOffsetY;
@property (nonatomic, retain) <MTLTexture> *motionTexture;
@property (nonatomic, readonly) unsigned long long motionTextureFormat;
@property (nonatomic, readonly) unsigned long long motionTextureUsage;
@property (nonatomic) float motionVectorScaleX;
@property (nonatomic) float motionVectorScaleY;
@property (nonatomic, readonly) unsigned long long outputHeight;
@property (nonatomic, retain) <MTLTexture> *outputTexture;
@property (nonatomic, readonly) unsigned long long outputTextureFormat;
@property (nonatomic, readonly) unsigned long long outputTextureUsage;
@property (nonatomic, readonly) unsigned long long outputWidth;
@property (nonatomic) float preExposure;
@property (nonatomic) struct CGPoint { double x1; double x2; } previousJitterOffset;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } previousViewToClipMatrix;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } previousWorldToViewMatrix;
@property (nonatomic, retain) <MTLTexture> *reactiveMaskTexture;
@property (nonatomic, readonly) unsigned long long reactiveTextureUsage;
@property (nonatomic) bool reset;
@property (readonly) unsigned long long streamReference;
@property (readonly) Class superclass;
@property (readonly) struct GTTraceContext { }*traceContext;
@property (readonly) struct GTTraceStream { }*traceStream;

- (void).cxx_destruct;
- (id)baseObject;
- (id)colorTexture;
- (unsigned long long)colorTextureFormat;
- (unsigned long long)colorTextureUsage;
- (bool)conformsToProtocol:(id)arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })currentViewToClipMatrix;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })currentWorldToViewMatrix;
- (void)dealloc;
- (id)debugTexture;
- (id)depthTexture;
- (unsigned long long)depthTextureFormat;
- (unsigned long long)depthTextureUsage;
- (id)description;
- (void)encodeToCommandBuffer:(id)arg1;
- (void)encodeToCommandQueue:(id)arg1;
- (unsigned long long)executionMode;
- (id)exposureTexture;
- (id)fence;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithBaseObject:(id)arg1 captureDevice:(id)arg2;
- (unsigned long long)inputContentHeight;
- (float)inputContentMaxScale;
- (float)inputContentMinScale;
- (unsigned long long)inputContentWidth;
- (unsigned long long)inputHeight;
- (unsigned long long)inputWidth;
- (bool)isDepthReversed;
- (float)jitterOffsetX;
- (float)jitterOffsetY;
- (id)motionTexture;
- (unsigned long long)motionTextureFormat;
- (unsigned long long)motionTextureUsage;
- (float)motionVectorScaleX;
- (float)motionVectorScaleY;
- (id)originalObject;
- (unsigned long long)outputHeight;
- (id)outputTexture;
- (unsigned long long)outputTextureFormat;
- (unsigned long long)outputTextureUsage;
- (unsigned long long)outputWidth;
- (float)preExposure;
- (struct CGPoint { double x1; double x2; })previousJitterOffset;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })previousViewToClipMatrix;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })previousWorldToViewMatrix;
- (id)reactiveMaskTexture;
- (unsigned long long)reactiveTextureUsage;
- (bool)reset;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setColorTexture:(id)arg1;
- (void)setDebugTexture:(id)arg1;
- (void)setDepthReversed:(bool)arg1;
- (void)setDepthTexture:(id)arg1;
- (void)setExposureTexture:(id)arg1;
- (void)setFence:(id)arg1;
- (void)setInputContentHeight:(unsigned long long)arg1;
- (void)setInputContentWidth:(unsigned long long)arg1;
- (void)setJitterOffsetX:(float)arg1;
- (void)setJitterOffsetY:(float)arg1;
- (void)setMotionTexture:(id)arg1;
- (void)setMotionVectorScaleX:(float)arg1;
- (void)setMotionVectorScaleY:(float)arg1;
- (void)setOutputTexture:(id)arg1;
- (void)setPreExposure:(float)arg1;
- (void)setReactiveMaskTexture:(id)arg1;
- (void)setReset:(bool)arg1;
- (unsigned long long)streamReference;
- (void)touch;
- (struct GTTraceContext { }*)traceContext;
- (struct GTTraceStream { }*)traceStream;

@end
