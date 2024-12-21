/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

@interface AVTARMaskRenderer : NSObject <AVTRendererTechnique> {
    unsigned long long  _antialiasingMode;
    ARFrame * _arFrame;
    unsigned long long  _capturedDataHeight;
    unsigned long long  _capturedDataWidth;
    bool  _clearWithCamera;
    MTLRenderPassDescriptor * _currentRenderPassDescriptor;
    <MTLRenderPipelineState> * _debugCamDepthPipelineState;
    bool  _debugMode;
    <MTLRenderPipelineState> * _debugVisualizationPipelineState;
    bool  _depthDataIsMirrored;
    float  _depthSmoothingFactor;
    bool  _flipDepth;
    <MTLRenderPipelineState> * _generateMasksPipelineState;
    <MTLRenderPipelineState> * _horizontalBlurPipelineState;
    long long  _interfaceOrientation;
    bool  _isFirstFrame;
    <MTLTexture> * _lastCapturedDepth;
    ARMatteGenerator * _matteGenerator;
    <MTLTexture> * _matteTexture;
    AVTMetalHelper * _metalHelper;
    <AVTRendererTechniqueSupport><AVTSceneRenderer> * _owner;
    bool  _ownerIsView;
    unsigned long long  _pipelineKind;
    AVTPresentationConfiguration * _presentationConfiguration;
    <MTLTexture> * _rawMaskTexture;
    struct CGSize { 
        double width; 
        double height; 
    }  _renderSize;
    SCNTechnique * _technique;
    id /* block */  _techniqueDidChangeHandler;
    struct __CVMetalTextureCache { } * _textureCache;
    <MTLTexture> * _tmpMaskBlurTexture;
    struct { 
        float headZ; 
        float shadowUVOffset; 
        float shadowMaskSizeU; 
        float shadowMaskSizeV; 
        float neckU; 
        float neckV; 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*chromaKeyColorComponents; 
    }  _uniforms;
    <MTLRenderPipelineState> * _verticalBlurPipelineState;
    bool  _writeID;
}

@property (retain) <MTLTexture> *capturedDepth;
@property (nonatomic) float depthSmoothingFactor;
@property (nonatomic) bool flipDepth;
@property (nonatomic, retain) AVTPresentationConfiguration *presentationConfiguration;
@property (nonatomic, readonly) SCNTechnique *technique;

- (void).cxx_destruct;
- (id)_renderCommandEncoderWithCommandBuffer:(id)arg1 renderTarget:(id)arg2;
- (id)_renderCommandEncoderWithCommandBuffer:(id)arg1 renderTarget:(id)arg2 shouldClear:(bool)arg3 clearColor:(struct { double x1; double x2; double x3; double x4; })arg4;
- (void)_updateMaskParametersWithRootJointPivotPosition;
- (void)allocateTexturesIfNeededWithDestinationPixelFormat:(unsigned long long)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (id)capturedDepth;
- (void)dealloc;
- (float)depthSmoothingFactor;
- (void)encodeIntermediatePassesWithCommandBuffer:(id)arg1 sceneColorTexture:(id)arg2 sceneOnTopTexture:(id)arg3 generatedMasksTexture:(id)arg4 camDepthDebug:(id)arg5;
- (bool)flipDepth;
- (id)init;
- (void)initPipelineKindSpecificResourcesIfNeededWithDestinationPixelFormat:(unsigned long long)arg1;
- (void)initSharedResourcesIfNeededWithDestinationPixelFormat:(unsigned long long)arg1;
- (id)initWithOwner:(id)arg1 presentationConfiguration:(id)arg2 techniqueDidChangeHandler:(id /* block */)arg3;
- (id)presentationConfiguration;
- (void)reloadTechnique;
- (void)setCapturedDepth:(id)arg1;
- (void)setClearWithCamera:(bool)arg1 antialiasingMode:(unsigned long long)arg2;
- (void)setDepthSmoothingFactor:(float)arg1;
- (void)setFlipDepth:(bool)arg1;
- (void)setPresentationConfiguration:(id)arg1;
- (id)technique;
- (void)updateMaskParametersAtTime:(double)arg1;
- (void)updateMaskParametersWithRootJointNode:(id)arg1;
- (void)updateMaskParametersWithRootJointNodes:(id)arg1;
- (void)updateWithARFrame:(id)arg1 fallBackDepthData:(id)arg2 captureOrientation:(long long)arg3 interfaceOrientation:(long long)arg4 mirroredDepthData:(bool)arg5;
- (void)updateWithDepthTexture:(id)arg1 captureOrientation:(long long)arg2 interfaceOrientation:(long long)arg3 mirroredDepthData:(bool)arg4;

@end