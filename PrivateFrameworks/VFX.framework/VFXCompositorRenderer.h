/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VFX.framework/VFX
 */

@interface VFXCompositorRenderer : NSObject <MTKViewDelegate, VFXWorldRenderer> {
    unsigned long long  _attachmentCount;
    struct { 
        unsigned long long drawableIndex; 
        MTLRenderPassColorAttachmentDescriptor *colorAttachment; 
        MTLRenderPassDepthAttachmentDescriptor *depthAttachment; 
    }  _attachments;
    NSObject<OS_dispatch_source> * _coalescingSource;
    <MTLTexture> * _colorTextures;
    <MTLTexture> * _depthTextures;
    unsigned long long  _layout;
    unsigned int  _logicalHeight;
    unsigned int  _logicalWidth;
    <MTLTexture> * _msaaColorTextures;
    <MTLTexture> * _msaaDepthTextures;
    MTKView * _mtkView;
    <MTLRasterizationRateMap> * _rasterizationRateMap;
    <MTLComputePipelineState> * _rasterizationRateMapBlitPipeline;
    <MTLBuffer> * _rasterizationRateMapDataBuffer;
    VFXRenderer * _renderer;
    unsigned long long  _sampleCount;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _viewMatrix0;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _viewMatrix1;
    unsigned long long  _viewpointCoordinateSpace;
    NSArray * _viewpoints;
}

@property (nonatomic) bool additiveWritesToAlpha;
@property (nonatomic) unsigned long long antialiasingMode;
@property (nonatomic, readonly) AVAudioEngine *audioEngine;
@property (nonatomic, readonly) AVAudioEnvironmentNode *audioEnvironmentNode;
@property (nonatomic, retain) VFXNode *audioListener;
@property (nonatomic) bool autoenablesDefaultLighting;
@property (nonatomic, copy) UIColor *backgroundColor;
@property (nonatomic, readonly) unsigned long long colorPixelFormat;
@property (nonatomic, readonly) <MTLCommandQueue> *commandQueue;
@property (nonatomic, readonly) <MTLRenderCommandEncoder> *currentRenderCommandEncoder;
@property (nonatomic, readonly) MTLRenderPassDescriptor *currentRenderPassDescriptor;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } currentViewport;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) unsigned long long debugOptions;
@property (nonatomic) <VFXWorldRendererDelegate> *delegate;
@property (nonatomic, readonly) unsigned long long depthPixelFormat;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <MTLDevice> *device;
@property (readonly) unsigned long long hash;
@property (getter=isJitteringEnabled, nonatomic) bool jitteringEnabled;
@property (nonatomic, retain) VFXNode *pointOfView;
@property (nonatomic, retain) VFXRenderGraph *renderGraph;
@property (nonatomic) bool showsStatistics;
@property (nonatomic, readonly) unsigned long long stencilPixelFormat;
@property (readonly) Class superclass;
@property (getter=isTemporalAntialiasingEnabled, nonatomic) bool temporalAntialiasingEnabled;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } viewMatrix0;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } viewMatrix1;
@property (nonatomic, readonly) struct CGColorSpace { }*workingColorSpace;
@property (nonatomic, retain) VFXWorld *world;

+ (unsigned char)frameBufferFeatures;
+ (Class)rendererClass;

- (void*)__CFObject;
- (void)_addGPUFrameCompletedHandler:(id /* block */)arg1;
- (void)_addGPUFramePresentedHandler:(id /* block */)arg1;
- (void)_addGPUFrameScheduledHandler:(id /* block */)arg1;
- (void)_allowGPUBackgroundExecution;
- (id)_commandBufferStatusMonitor;
- (void)_discardTextures;
- (void)_drawInRenderingQueueWithDrawable:(id)arg1 renderPassDescriptor:(id)arg2;
- (void)_initRendererWithOptions:(id)arg1;
- (void)_rebuildRasterizationRateMap;
- (void)_rebuildTextures;
- (id)_resourceManagerMonitor;
- (void)_setAntialiasingMode:(unsigned long long)arg1 forcingReset:(bool)arg2;
- (bool)_usesLayeredRendering;
- (bool)_usesMultipleViewportRendering;
- (bool)_wantsWorldRendererDelegationMessages;
- (bool)additiveWritesToAlpha;
- (unsigned long long)antialiasingMode;
- (id)audioEngine;
- (id)audioEnvironmentNode;
- (id)audioListener;
- (bool)autoenablesDefaultLighting;
- (id)backgroundColor;
- (unsigned long long)colorPixelFormat;
- (id)commandQueue;
- (id)currentRenderCommandEncoder;
- (id)currentRenderPassDescriptor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })currentViewport;
- (void)dealloc;
- (unsigned long long)debugOptions;
- (id)delegate;
- (unsigned long long)depthPixelFormat;
- (id)description;
- (id)device;
- (void)drawInMTKView:(id)arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 options:(id)arg2;
- (id)init;
- (id)initWithMTKView:(id)arg1 options:(id)arg2;
- (bool)isJitteringEnabled;
- (bool)isNodeInsideFrustum:(id)arg1 withPointOfView:(id)arg2;
- (bool)isTemporalAntialiasingEnabled;
- (void)mtkView:(id)arg1 drawableSizeWillChange:(struct CGSize { double x1; double x2; })arg2;
- (id)nodesInsideFrustumWithPointOfView:(id)arg1;
- (id)pointOfView;
- (bool)prepareObject:(id)arg1 shouldAbortBlock:(id /* block */)arg2;
- (void)prepareObjects:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)projectPoint;
- (id)renderGraph;
- (id)renderer;
- (void)setAdditiveWritesToAlpha:(bool)arg1;
- (void)setAntialiasingMode:(unsigned long long)arg1;
- (void)setAudioListener:(id)arg1;
- (void)setAutoenablesDefaultLighting:(bool)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setDebugOptions:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setJitteringEnabled:(bool)arg1;
- (void)setPointOfView:(id)arg1;
- (void)setRenderGraph:(id)arg1;
- (void)setShowsStatistics:(bool)arg1;
- (void)setTemporalAntialiasingEnabled:(bool)arg1;
- (void)setViewMatrix0:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setViewMatrix1:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setViewpointCoordinateSpace:(unsigned long long)arg1;
- (void)setWorld:(id)arg1;
- (void)set_commandBufferStatusMonitor:(id)arg1;
- (void)set_resourceManagerMonitor:(id)arg1;
- (void)set_wantsWorldRendererDelegationMessages:(bool)arg1;
- (bool)showsStatistics;
- (unsigned long long)stencilPixelFormat;
- (void)unprojectPoint;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })viewMatrix0;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })viewMatrix1;
- (unsigned long long)viewpointCoordinateSpace;
- (struct CGColorSpace { }*)workingColorSpace;
- (id)world;

@end
