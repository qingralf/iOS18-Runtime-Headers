/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXGHostingController : NSObject <PXChangeObserver, PXGEngineDelegate> {
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSHashTable * _clientQueue_activePresenters;
    PXGConcreteEngineControllerConfiguration * _clientQueue_configuration;
    bool  _clientQueue_isPerformingChanges;
    NSObject<OS_dispatch_queue> * _layoutQueue;
    PXGConcreteEngineControllerConfiguration * _layoutQueue_configuration;
    PXGEngine * _layoutQueue_engine;
    bool  _layoutQueue_isAppInactive;
    PXGHostingControllerProposedSize * _layoutQueue_pendingProposedSize;
    bool  _layoutQueue_pendingProposedSizeWasDelayed;
    id /* block */  _layoutQueue_pendingRootLayoutPromise;
    PXGLayout * _layoutQueue_placeholderLayout;
    PXGPixelBufferMetalRenderDestination * _layoutQueue_renderDestination;
    PXGAsyncScrollController * _layoutQueue_scrollController;
    long long  _layoutQueue_skipDegradedFramesCount;
    long long  _layoutQueue_skipFramesCount;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    PXGRenderFrame * _lock_lastFrame;
    NSHashTable * _lock_observers;
    PXApplicationState * _mainQueue_applicationState;
    id /* block */  _onPresentersDidChange;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, readonly) NSHashTable *clientQueue_activePresenters;
@property (nonatomic, readonly) PXGConcreteEngineControllerConfiguration *clientQueue_configuration;
@property (nonatomic, readonly) bool clientQueue_isPerformingChanges;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) PXGRenderFrame *lastFrame;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *layoutQueue;
@property (nonatomic, retain) PXGConcreteEngineControllerConfiguration *layoutQueue_configuration;
@property (nonatomic, readonly) PXGEngine *layoutQueue_engine;
@property (nonatomic) bool layoutQueue_isAppInactive;
@property (nonatomic, retain) PXGHostingControllerProposedSize *layoutQueue_pendingProposedSize;
@property (nonatomic) bool layoutQueue_pendingProposedSizeWasDelayed;
@property (nonatomic, copy) id /* block */ layoutQueue_pendingRootLayoutPromise;
@property (nonatomic, readonly) PXGLayout *layoutQueue_placeholderLayout;
@property (nonatomic, readonly) PXGPixelBufferMetalRenderDestination *layoutQueue_renderDestination;
@property (nonatomic, readonly) PXGAsyncScrollController *layoutQueue_scrollController;
@property (nonatomic) long long layoutQueue_skipDegradedFramesCount;
@property (nonatomic) long long layoutQueue_skipFramesCount;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (nonatomic, readonly) PXGRenderFrame *lock_lastFrame;
@property (nonatomic, readonly) NSHashTable *lock_observers;
@property (nonatomic, readonly) PXApplicationState *mainQueue_applicationState;
@property (nonatomic, copy) id /* block */ onPresentersDidChange;
@property (nonatomic, readonly, copy) NSArray *presenters;
@property (readonly) Class superclass;

+ (id)sharedQueue;

- (void).cxx_destruct;
- (void)_clientQueue_propagateConfigurationToEngine;
- (void)_dispatchFrame:(id)arg1 async:(bool)arg2 toObserver:(id)arg3;
- (void)_distributeFrame:(id)arg1;
- (void)_layoutQueue_applyConfiguration;
- (void)_layoutQueue_performInitialEngineSetupIfNeeded;
- (void)_mainQueue_initialize;
- (void)_mainQueue_updateIsAppInactive;
- (void)_notePresentersDidChange;
- (id)addPresenter;
- (id)clientQueue;
- (id)clientQueue_activePresenters;
- (id)clientQueue_configuration;
- (bool)clientQueue_isPerformingChanges;
- (void)clientQueue_presenterDidChange:(id)arg1;
- (void)dealloc;
- (bool)engine:(id)arg1 shouldRenderLayout:(id)arg2 sprites:(id)arg3;
- (void)engineSetNeedsUpdate:(id)arg1;
- (id)init;
- (id)initWithClientQueue:(id)arg1 layoutQueue:(id)arg2;
- (id)initWithClientQueue:(id)arg1 layoutQueue:(id)arg2 initialConfiguration:(id /* block */)arg3;
- (id)lastFrame;
- (id)layoutQueue;
- (bool)layoutQueue_acceptSize:(id)arg1;
- (void)layoutQueue_applySize:(struct CGSize { double x1; double x2; })arg1;
- (id)layoutQueue_configuration;
- (id)layoutQueue_engine;
- (bool)layoutQueue_isAppInactive;
- (id)layoutQueue_pendingProposedSize;
- (bool)layoutQueue_pendingProposedSizeWasDelayed;
- (id /* block */)layoutQueue_pendingRootLayoutPromise;
- (id)layoutQueue_placeholderLayout;
- (id)layoutQueue_renderDestination;
- (id)layoutQueue_scrollController;
- (long long)layoutQueue_skipDegradedFramesCount;
- (void)layoutQueue_skipFrameCount:(long long)arg1 forProposedSize:(id)arg2;
- (long long)layoutQueue_skipFramesCount;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (id)lock_lastFrame;
- (id)lock_observers;
- (id)mainQueue_applicationState;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id /* block */)onPresentersDidChange;
- (void)performChanges:(id /* block */)arg1;
- (id)presenters;
- (void)registerFrameObserver:(id)arg1;
- (void)setLayoutQueue_configuration:(id)arg1;
- (void)setLayoutQueue_isAppInactive:(bool)arg1;
- (void)setLayoutQueue_pendingProposedSize:(id)arg1;
- (void)setLayoutQueue_pendingProposedSizeWasDelayed:(bool)arg1;
- (void)setLayoutQueue_pendingRootLayoutPromise:(id /* block */)arg1;
- (void)setLayoutQueue_skipDegradedFramesCount:(long long)arg1;
- (void)setLayoutQueue_skipFramesCount:(long long)arg1;
- (void)setOnPresentersDidChange:(id /* block */)arg1;
- (void)unregisterFrameObserver:(id)arg1;

@end
