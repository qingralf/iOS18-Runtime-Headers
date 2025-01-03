/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VFX.framework/VFX
 */

@interface VFXSceneLoadOptions : NSObject {
    void allowLoadingFromFuture;
    void asyncRuntimeLock;
    void automaticallyPrepareScene;
    void clientID;
    void colorPixelFormat;
    void commandQueue;
    void counterStorage;
    void depthPixelFormat;
    void device;
    void doNotClearRenderOutput;
    void enableDeferredRendering;
    void enableParallelDecoding;
    void enableRuntimeScriptCompilation;
    void internalPixelFormatDepth;
    void isAuthoringWorld;
    void isVFX2;
    void loadBindingsMetadata;
    void loadPrecompiledScripts;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  metalLibraryURL;
    void peerPid;
    void peerTaskIdentity;
    void setupAsTemplate;
    void setupAsyncRuntime;
    void setupRenderer;
    void systemRegistrationOptions;
    void useGammaBlending;
    void world;
}

@property (nonatomic) bool allowLoadingFromFuture;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long x1; BOOL x2[56]; }*asyncRuntimeLock;
@property (nonatomic) bool automaticallyPrepareScene;
@property (nonatomic, copy) NSString *clientID;
@property (nonatomic) unsigned long long colorPixelFormat;
@property (nonatomic, retain) <MTLCommandQueue> *commandQueue;
@property (nonatomic) struct { struct __vfx_counters {} *x1; } counterStorage;
@property (nonatomic) unsigned long long depthPixelFormat;
@property (nonatomic, retain) <MTLDevice> *device;
@property (nonatomic) bool doNotClearRenderOutput;
@property (nonatomic) bool enableDeferredRendering;
@property (nonatomic) bool enableParallelDecoding;
@property (nonatomic) bool enableRuntimeScriptCompilation;
@property (nonatomic) BOOL internalPixelFormatDepth;
@property (nonatomic) bool isAuthoringWorld;
@property (nonatomic) bool isVFX2;
@property (nonatomic) bool loadBindingsMetadata;
@property (nonatomic, copy) NSURL *metalLibraryURL;
@property (nonatomic) int peerPid;
@property (nonatomic) unsigned int peerTaskIdentity;
@property (nonatomic) bool setupAsTemplate;
@property (nonatomic) bool setupAsyncRuntime;
@property (nonatomic) bool setupRenderer;
@property (nonatomic) bool useGammaBlending;
@property (nonatomic) struct __CFXWorld { }*world;

- (void).cxx_destruct;
- (bool)allowLoadingFromFuture;
- (struct _opaque_pthread_mutex_t { long long x1; BOOL x2[56]; }*)asyncRuntimeLock;
- (bool)automaticallyPrepareScene;
- (id)clientID;
- (unsigned long long)colorPixelFormat;
- (id)commandQueue;
- (struct { struct __vfx_counters {} *x1; })counterStorage;
- (unsigned long long)depthPixelFormat;
- (id)device;
- (bool)doNotClearRenderOutput;
- (bool)enableDeferredRendering;
- (bool)enableParallelDecoding;
- (bool)enableRuntimeScriptCompilation;
- (id)init;
- (BOOL)internalPixelFormatDepth;
- (bool)isAuthoringWorld;
- (bool)isVFX2;
- (bool)loadBindingsMetadata;
- (id)metalLibraryURL;
- (int)peerPid;
- (unsigned int)peerTaskIdentity;
- (void)registerVFX2AuthoringSystems:(bool)arg1;
- (void)setAllowLoadingFromFuture:(bool)arg1;
- (void)setAsyncRuntimeLock:(struct _opaque_pthread_mutex_t { long long x1; BOOL x2[56]; }*)arg1;
- (void)setAutomaticallyPrepareScene:(bool)arg1;
- (void)setClientID:(id)arg1;
- (void)setColorPixelFormat:(unsigned long long)arg1;
- (void)setCommandQueue:(id)arg1;
- (void)setCounterStorage:(struct { struct __vfx_counters {} *x1; })arg1;
- (void)setDepthPixelFormat:(unsigned long long)arg1;
- (void)setDevice:(id)arg1;
- (void)setDoNotClearRenderOutput:(bool)arg1;
- (void)setEnableDeferredRendering:(bool)arg1;
- (void)setEnableParallelDecoding:(bool)arg1;
- (void)setEnableRuntimeScriptCompilation:(bool)arg1;
- (void)setInternalPixelFormatDepth:(BOOL)arg1;
- (void)setIsAuthoringWorld:(bool)arg1;
- (void)setIsVFX2:(bool)arg1;
- (void)setLoadBindingsMetadata:(bool)arg1;
- (void)setMetalLibraryURL:(id)arg1;
- (void)setPeerPid:(int)arg1;
- (void)setPeerTaskIdentity:(unsigned int)arg1;
- (void)setSetupAsTemplate:(bool)arg1;
- (void)setSetupAsyncRuntime:(bool)arg1;
- (void)setSetupRenderer:(bool)arg1;
- (void)setUseGammaBlending:(bool)arg1;
- (void)setWorld:(struct __CFXWorld { }*)arg1;
- (bool)setupAsTemplate;
- (bool)setupAsyncRuntime;
- (bool)setupRenderer;
- (bool)useGammaBlending;
- (struct __CFXWorld { }*)world;

@end
