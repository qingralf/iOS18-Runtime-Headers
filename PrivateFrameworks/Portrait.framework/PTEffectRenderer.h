/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Portrait.framework/Portrait
 */

@interface PTEffectRenderer : NSObject {
    NSObject<OS_dispatch_queue> * _asyncInitQueue;
    NSObject<OS_dispatch_queue> * _asyncQueue;
    bool  _asynchronous;
    unsigned long long  _availableEffectTypes;
    PTBackgroundReplacement * _backgroundReplacement;
    PTColorConversion * _colorConversion;
    PTCVMNetwork * _cvmNetwork;
    PTEffectDebugLayer * _debugLayer;
    long long  _debugType;
    PTDepthConverter * _depthConverter;
    <MTLTexture> * _diffuse;
    PTNormalAndDiffuseEstimation * _diffuseEstimation;
    <MTLTexture> * _disparityCenteredUpscaledReactions;
    <MTLTexture> * _disparityCenteredUpscaledSDOF;
    <MTLTexture> * _disparityCenteredUpscaledWithScreenCaptureRect;
    struct PTDisparityFocusOffset { 
        float disparityOffsetFactor; 
        float offsetInMeters; 
    }  _disparityFocusOffsetReactions;
    struct PTDisparityFocusOffset { 
        float disparityOffsetFactor; 
        float offsetInMeters; 
    }  _disparityFocusOffsetSDOF;
    struct PTDisparityFocusOffset { 
        float disparityOffsetFactor; 
        float offsetInMeters; 
    }  _disparityFocusOffsetStudioLight;
    PTEffectDescriptor * _effectDescriptor;
    PTEffectRelighting * _effectRelighting;
    PTEffectUtil * _effectUtil;
    bool  _externalHandDetectionsAvailable;
    <MTLBuffer> * _faceDisparityArray;
    float  _focusDisparityMax;
    <MTLBuffer> * _focusDisparityModifiers;
    <MTLBuffer> * _focusDisparityRaw;
    float  _focusDisparityUpdateCoefficientSDOF;
    float  _focusDisparityUpdateCoefficientStudioLight;
    int  _frameIndex;
    <MTLTexture> * _guideRGBACoefficients;
    <MTLTexture> * _guideRGBAUpscale;
    PTGuidedFilter * _guidedFilter;
    PTHumanDetections * _humanDetections;
    PTTextureYUV * _intermediateYUV;
    unsigned long long  _lastEffectType;
    <MTLBuffer> * _lastFocus;
    double  _lastFrameTime;
    PTMetalContext * _metalContext;
    PTMSRResize * _msrColorPyramid;
    int  _networkFrameIndex;
    PTEffectPersonSegmentation * _personSegmentation;
    struct __CVBuffer { } * _personSegmentationInput;
    PTEffectReactionProvider * _reactionProvider;
    PTRenderPipeline * _renderPipeline;
    bool  _renderSegmentationPreviousFrame;
    <PTRenderState> * _renderState;
    bool  _renderStudioLightPreviousFrame;
    bool  _runCVMNetworkPreviousFrame;
    PTRenderRequest * _sdofRenderRequest;
    PTEffectResources * _sharedResources;
    <MTLBuffer> * _studioLightEffectModifier;
    bool  _studiolightFromSegmentation;
    PTEffectTemporalFilter * _temporalFilter;
    struct __CVMetalTextureCache { } * _textureCache;
    <MTLTexture> * _upscaledPersonSegmentation;
    <MTLBuffer> * _useDisparityBufferForReactions;
    PTUtil * _util;
    <MTLTexture> * _vfxDepthBuffer;
    PTVFXRenderEffect * _vfxEffect;
    <MTLTexture> * _vfxRenderTarget;
    long long  effectQuality;
}

@property long long effectQuality;

+ (struct PTEffectPixelBufferDescriptor { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; unsigned int x2; })segmentationMatteFormatForColorSize:(struct CGSize { double x1; double x2; })arg1;
+ (bool)useStudioLightFromSegmentation:(id)arg1;

- (void).cxx_destruct;
- (id)activeReactions;
- (void)copyInYUV:(id)arg1 toOutYUV:(id)arg2;
- (id)copyTemporalState:(id)arg1;
- (void)createVfxTextures:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1;
- (void)dealloc;
- (long long)effectQuality;
- (id)initWithDescriptor:(id)arg1 metalContext:(id)arg2 useHighResNetwork:(bool)arg3 faceAttributesNetwork:(id)arg4 humanDetections:(id)arg5 prevTemporalState:(id)arg6 asyncInitQueue:(id)arg7 sharedResources:(id)arg8;
- (bool)isRenderRequiredForRequest:(id)arg1;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })lowResDisparitySizeFromEffectDescriptor;
- (void)removeAllActiveReactions;
- (int)render:(id)arg1 waitUntilCompleted:(bool)arg2 gpuCompleted:(id /* block */)arg3;
- (int)renderReaction:(id)arg1 effectRenderRequest:(id)arg2;
- (void)reset:(id)arg1;
- (int)runGestureDetection:(id)arg1 asyncWork:(id)arg2;
- (void)setDebug:(long long)arg1;
- (void)setEffectQuality:(long long)arg1;

@end
