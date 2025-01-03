/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNMetalLayer : CAMetalLayer <SCNSceneRenderer, SCNTechniqueSupport> {
    SCNDisplayLink * _displayLink;
    bool  _drawForJittering;
    SCNJitterer * _jitterer;
    double  _lastRenderedTime;
    double  _lastUpdate;
    long long  _preferredFramePerSeconds;
    SCNRenderer * _renderer;
    bool  _rendersIntoMaterial;
    SCNScene * _scene;
    bool  _syncTimeWithCoreAnimation;
}

@property (nonatomic) unsigned long long antialiasingMode;
@property (nonatomic, readonly) AVAudioEngine *audioEngine;
@property (nonatomic, readonly) AVAudioEnvironmentNode *audioEnvironmentNode;
@property (nonatomic, retain) SCNNode *audioListener;
@property (nonatomic) bool autoenablesDefaultLighting;
@property (nonatomic, readonly) unsigned long long colorPixelFormat;
@property (nonatomic, readonly) <MTLCommandQueue> *commandQueue;
@property (nonatomic, readonly) void*context;
@property (nonatomic, readonly) <MTLRenderCommandEncoder> *currentRenderCommandEncoder;
@property (nonatomic, readonly) MTLRenderPassDescriptor *currentRenderPassDescriptor;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } currentViewport;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) unsigned long long debugOptions;
@property (nonatomic) <SCNSceneRendererDelegate> *delegate;
@property (nonatomic, readonly) unsigned long long depthPixelFormat;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <MTLDevice> *device;
@property (readonly) unsigned long long hash;
@property (getter=isJitteringEnabled, nonatomic) bool jitteringEnabled;
@property (nonatomic) bool loops;
@property (nonatomic, retain) SKScene *overlaySKScene;
@property (getter=isPlaying) bool playing;
@property (nonatomic, retain) SCNNode *pointOfView;
@property (nonatomic, readonly) unsigned long long renderingAPI;
@property (nonatomic, retain) SCNScene *scene;
@property (nonatomic) double sceneTime;
@property (nonatomic) bool showsStatistics;
@property (nonatomic, readonly) unsigned long long stencilPixelFormat;
@property (readonly) Class superclass;
@property (nonatomic) bool syncTimeWithCoreAnimation;
@property (nonatomic, copy) SCNTechnique *technique;
@property (getter=isTemporalAntialiasingEnabled, nonatomic) bool temporalAntialiasingEnabled;
@property (nonatomic) bool usesReverseZ;
@property (nonatomic, readonly) struct CGColorSpace { }*workingColorSpace;

+ (id)_kvoKeysForwardedToRenderer;
+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;

- (void)SCN_displayLinkCallback:(double)arg1;
- (id)_authoringEnvironment;
- (bool)_canJitter;
- (void)_cancelJitterRedisplay;
- (bool)_checkAndUpdateDisplayLinkStateIfNeeded;
- (void)_drawAtTime:(double)arg1;
- (bool)_isGLLayerBacked;
- (void)_jitterRedisplay;
- (void)_sceneDidUpdate:(id)arg1;
- (bool)_showsAuthoringEnvironment;
- (bool)_supportsJitteringSyncRedraw;
- (void)_systemTimeAnimationStarted:(id)arg1;
- (struct SCNVector4 { float x1; float x2; float x3; float x4; })_viewport;
- (unsigned long long)antialiasingMode;
- (id)audioEngine;
- (id)audioEnvironmentNode;
- (id)audioListener;
- (bool)autoenablesDefaultLighting;
- (bool)canDrawConcurrently;
- (unsigned long long)colorPixelFormat;
- (id)commandQueue;
- (void)commonInit;
- (id)contentLayer;
- (void*)context;
- (id)currentRenderCommandEncoder;
- (id)currentRenderPassDescriptor;
- (double)currentTime;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })currentViewport;
- (void)dealloc;
- (unsigned long long)debugOptions;
- (id)delegate;
- (unsigned long long)depthPixelFormat;
- (id)description;
- (id)device;
- (void)display;
- (id)displayLink;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 options:(id)arg2;
- (id)hitTestWithSegmentFromPoint:(struct SCNVector3 { float x1; float x2; float x3; })arg1 toPoint:(struct SCNVector3 { float x1; float x2; float x3; })arg2 options:(id)arg3;
- (id)init;
- (id)initWithLayer:(id)arg1;
- (bool)isJitteringEnabled;
- (bool)isNodeInsideFrustum:(id)arg1 withPointOfView:(id)arg2;
- (bool)isPlaying;
- (bool)isTemporalAntialiasingEnabled;
- (id)layer;
- (bool)loops;
- (id)nodesInsideFrustumWithPointOfView:(id)arg1;
- (id)overlaySKScene;
- (void)pause;
- (void)pause:(id)arg1;
- (void)pauseDisplayLink;
- (void)play;
- (void)play:(id)arg1;
- (id)pointOfCulling;
- (id)pointOfView;
- (long long)preferredFramesPerSecond;
- (bool)prepareObject:(id)arg1 shouldAbortBlock:(id /* block */)arg2;
- (void)prepareObjects:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)presentScene:(id)arg1 withTransition:(id)arg2 incomingPointOfView:(id)arg3 completionHandler:(id /* block */)arg4;
- (struct SCNVector3 { float x1; float x2; float x3; })projectPoint:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (void)projectPoints:(struct SCNVector3 { float x1; float x2; float x3; }*)arg1 count:(unsigned long long)arg2;
- (id)renderer;
- (id)rendererOptions;
- (unsigned long long)renderingAPI;
- (bool)rendersIntoMaterial;
- (void)resumeDisplayLink;
- (id)scene;
- (double)sceneTime;
- (id)scn_backingLayer;
- (bool)scn_inLiveResize;
- (void)setAntialiasingMode:(unsigned long long)arg1;
- (void)setAudioListener:(id)arg1;
- (void)setAutoenablesDefaultLighting:(bool)arg1;
- (void)setBackgroundColor:(struct CGColor { }*)arg1;
- (void)setCurrentTime:(double)arg1;
- (void)setDebugOptions:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setJitteringEnabled:(bool)arg1;
- (void)setLoops:(bool)arg1;
- (void)setNeedsDisplay;
- (void)setOverlaySKScene:(id)arg1;
- (void)setPlaying:(bool)arg1;
- (void)setPointOfCulling:(id)arg1;
- (void)setPointOfView:(id)arg1;
- (void)setPreferredFramesPerSecond:(long long)arg1;
- (void)setRenderer:(id)arg1;
- (void)setRendersIntoMaterial:(bool)arg1;
- (void)setScene:(id)arg1;
- (void)setSceneTime:(double)arg1;
- (void)setShowsStatistics:(bool)arg1;
- (void)setSyncTimeWithCoreAnimation:(bool)arg1;
- (void)setTechnique:(id)arg1;
- (void)setTemporalAntialiasingEnabled:(bool)arg1;
- (void)setUsesReverseZ:(bool)arg1;
- (void)set_showsAuthoringEnvironment:(bool)arg1;
- (bool)showsStatistics;
- (unsigned long long)stencilPixelFormat;
- (void)stop;
- (void)stop:(id)arg1;
- (bool)syncTimeWithCoreAnimation;
- (id)technique;
- (struct SCNVector3 { float x1; float x2; float x3; })unprojectPoint:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (bool)usesReverseZ;
- (struct CGColorSpace { }*)workingColorSpace;

@end
