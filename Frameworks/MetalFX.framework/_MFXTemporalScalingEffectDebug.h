/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MetalFX.framework/MetalFX
 */

@interface _MFXTemporalScalingEffectDebug : _MTLFXTemporalScaler <MTLFXTemporalScalerSPI> {
    <MTLComputePipelineState> * _blendUnjitterCurrAndPrev;
    <MTLTexture> * _colorTexture;
    unsigned long long  _colorTextureFormat;
    unsigned long long  _colorTextureUsage;
    <MTLComputePipelineState> * _copyHistoryToCurrent;
    unsigned char  _currHistoryIdx;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _currentViewToClipMatrix;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _currentWorldToViewMatrix;
    <MTLTexture> * _debugTexture;
    <MTLTexture> * _depthTexture;
    unsigned long long  _depthTextureFormat;
    unsigned long long  _depthTextureUsage;
    <MTLComputePipelineState> * _dilateFlowPSO;
    <MTLTexture> * _dilatedFlow;
    <MTLTexture> * _exposureTexture;
    <MTLFence> * _fence;
    <MTLTexture> * _history;
    unsigned long long  _inputContentHeight;
    float  _inputContentMaxScale;
    float  _inputContentMinScale;
    unsigned long long  _inputContentWidth;
    unsigned long long  _inputHeight;
    unsigned long long  _inputWidth;
    void _jitterOffset;
    <MTLComputePipelineState> * _jitterViz;
    bool  _jitterVizEnabled;
    void _jitterVizOffset;
    unsigned long long  _mode;
    <MTLTexture> * _motionTexture;
    unsigned long long  _motionTextureFormat;
    unsigned long long  _motionTextureUsage;
    void _motionVectorScale;
    unsigned long long  _outputHeight;
    <MTLTexture> * _outputTexture;
    unsigned long long  _outputTextureFormat;
    unsigned long long  _outputTextureUsage;
    unsigned long long  _outputWidth;
    float  _preExposure;
    struct CGPoint { 
        double x; 
        double y; 
    }  _previousJitterOffset;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _previousViewToClipMatrix;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _previousWorldToViewMatrix;
    <MTLTexture> * _reactiveMaskTexture;
    unsigned long long  _reactiveTextureUsage;
    bool  _reset;
    bool  _reversedDepth;
    <MTLComputePipelineState> * _unjitterCurrent;
}

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
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)colorTexture;
- (unsigned long long)colorTextureFormat;
- (unsigned long long)colorTextureUsage;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })currentViewToClipMatrix;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })currentWorldToViewMatrix;
- (id)debugTexture;
- (id)depthTexture;
- (unsigned long long)depthTextureFormat;
- (unsigned long long)depthTextureUsage;
- (void)encodeToCommandBuffer:(id)arg1;
- (void)encodeToCommandQueue:(id)arg1;
- (id)exposureTexture;
- (id)fence;
- (id)initWithDevice:(id)arg1 descriptor:(id)arg2 mode:(unsigned long long)arg3 enableJitterViz:(bool)arg4;
- (unsigned long long)inputContentHeight;
- (float)inputContentMaxScale;
- (float)inputContentMinScale;
- (unsigned long long)inputContentWidth;
- (unsigned long long)inputHeight;
- (unsigned long long)inputWidth;
- (bool)isDepthReversed;
- (struct CGPoint { double x1; double x2; })jitterOffset;
- (float)jitterOffsetX;
- (float)jitterOffsetY;
- (id)motionTexture;
- (unsigned long long)motionTextureFormat;
- (unsigned long long)motionTextureUsage;
- (struct CGPoint { double x1; double x2; })motionVectorScale;
- (float)motionVectorScaleX;
- (float)motionVectorScaleY;
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
- (bool)reversedDepth;
- (void)setColorTexture:(id)arg1;
- (void)setCurrentViewToClipMatrix:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setCurrentWorldToViewMatrix:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setDebugTexture:(id)arg1;
- (void)setDepthReversed:(bool)arg1;
- (void)setDepthTexture:(id)arg1;
- (void)setExposureTexture:(id)arg1;
- (void)setFence:(id)arg1;
- (void)setInputContentHeight:(unsigned long long)arg1;
- (void)setInputContentWidth:(unsigned long long)arg1;
- (void)setJitterOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setJitterOffsetX:(float)arg1;
- (void)setJitterOffsetY:(float)arg1;
- (void)setMotionTexture:(id)arg1;
- (void)setMotionVectorScale:(struct CGPoint { double x1; double x2; })arg1;
- (void)setMotionVectorScaleX:(float)arg1;
- (void)setMotionVectorScaleY:(float)arg1;
- (void)setOutputTexture:(id)arg1;
- (void)setPreExposure:(float)arg1;
- (void)setPreviousJitterOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPreviousViewToClipMatrix:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setPreviousWorldToViewMatrix:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setReactiveMaskTexture:(id)arg1;
- (void)setReset:(bool)arg1;
- (void)setReversedDepth:(bool)arg1;

@end
