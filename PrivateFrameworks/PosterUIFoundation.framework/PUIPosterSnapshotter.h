/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PosterUIFoundation.framework/PosterUIFoundation
 */

@interface PUIPosterSnapshotter : NSObject <BSInvalidatable, PFPosterExtensionInstanceObserver, PUIPosterSceneSnapshotterDelegate> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _assertionLock;
    RBSAssertion * _assertionLock_memoryAssertion;
    RBSAssertion * _assertionLock_runtimeAssertion;
    PFPosterExtensionInstance * _extensionInstance;
    BSAtomicSignal * _invalidationSignal;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableArray * _lock_enqueuedSnapshots;
    _EXExtensionProcess * _lock_mainQueue_process;
    PUIPosterSceneSnapshotter * _lock_sceneSnapshotter;
    unsigned long long  _lock_state;
    bool  _lock_waitingForRetry;
    bool  _lock_waitingForStartExtension;
    NSString * _providerBundleIdentifier;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PFPosterExtensionInstance *extensionInstance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)completionQueue;

- (void).cxx_destruct;
- (void)_assertionLock_invalidateSessionAssertions;
- (bool)_assertionLock_mainQueue_updateAssertionsForExtension;
- (void)_lock_retryStartupLater;
- (void)_mainQueue_executeNextSnapshotIfPossible;
- (void)_mainQueue_extensionProcessDidInterrupt;
- (void)_mainQueue_lock_startExtension;
- (void)_teardownAllSnapshots;
- (void)dealloc;
- (id)description;
- (void)enqueueSnapshotRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)extensionInfoString;
- (id)extensionInstance;
- (void)extensionInstanceDidInvalidate:(id)arg1;
- (void)extensionInstanceProcessDidInterrupt:(id)arg1;
- (void)fireSceneDeactivationErrorForTesting:(id)arg1;
- (id)initWithExtensionInstance:(id)arg1;
- (void)installRequestAsActive:(id)arg1 completion:(id /* block */)arg2;
- (void)invalidate;
- (bool)isValid;
- (id)logIdentifier;
- (void)sceneSnapshotterDidFinish:(id)arg1 result:(id)arg2 error:(id)arg3;

@end