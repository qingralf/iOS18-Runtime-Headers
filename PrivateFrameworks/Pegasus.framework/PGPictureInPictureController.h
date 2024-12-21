/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
 */

@interface PGPictureInPictureController : NSObject <NSXPCListenerDelegate, PGBackgroundPIPServiceDelegate, PGPictureInPictureRemoteObjectDelegate> {
    PGPictureInPictureApplication * _activePictureInPictureApplication;
    NSMutableSet * _activePictureInPictureRemoteObjects;
    <PGPictureInPictureAnalyticsDelegate> * _analyticsDelegate;
    PGBackgroundPIPService * _backgroundPIPService;
    <PGPictureInPictureControllerDelegate> * _delegate;
    struct { 
        unsigned int pictureInPictureController_didCreatePictureInPictureViewController : 1; 
        unsigned int pictureInPictureController_willDestroyPictureInPictureViewController : 1; 
        unsigned int pictureInPictureController_willHidePictureInPictureViewController : 1; 
        unsigned int pictureInPictureController_didHidePictureInPictureViewController : 1; 
        unsigned int pictureInPictureController_shouldCancelPictureInPictureForApplication_whenStartingPictureInPictureForApplication : 1; 
        unsigned int pictureInPictureController_shouldDenyNewConnection : 1; 
        unsigned int pictureInPictureController_didRequestStopForPictureInPictureViewController_sourceSceneSessionIdentifier_animated : 1; 
    }  _delegateRespondsTo;
    PGInterruptionAssistant * _interruptionAssistant;
    NSXPCListener * _listener;
    NSObject<OS_dispatch_queue> * _listenerQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableSet * _lock_pictureInPictureRemoteObjects;
    bool  _pictureInPictureActive;
    NSSet * _pictureInPictureApplications;
    NSMutableSet * _pictureInPictureRemoteObjectsSupportingActiveSessionCancellationOnStart;
    PGPictureInPictureRemoteObject * _remoteObjectThatRequestedStop;
    PGPictureInPictureRemoteObject * _suspendedPictureInPictureRemoteObject;
}

@property (nonatomic, readonly) PGPictureInPictureApplication *activePictureInPictureApplication;
@property (nonatomic, readonly) NSSet *activePictureInPictureApplications;
@property (nonatomic, readonly) NSSet *activePictureInPictureApplicationsStoppingOrCancelling;
@property (nonatomic, readonly) NSDictionary *activeSceneSessionIdentifiersByApplication;
@property (nonatomic) <PGPictureInPictureAnalyticsDelegate> *analyticsDelegate;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <PGPictureInPictureControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isStartingStoppingOrCancellingPictureInPicture;
@property (getter=isPictureInPictureActive, nonatomic, readonly) bool pictureInPictureActive;
@property (nonatomic, readonly) NSSet *pictureInPictureApplications;
@property (readonly) Class superclass;

+ (bool)isPictureInPictureSupported;

- (void).cxx_destruct;
- (void)_addRemoteObject:(id)arg1;
- (id)_continuityCameraInterruptionExemption;
- (id)_faceTimeVideoCallInterruptionExemption;
- (id)_faceTimeVideoCallRemoteObject;
- (bool)_hasActiveNonVideoCallRemoteObjectAuthorizedForBackgroundPIP;
- (id)_pictureInPictureRemoteObjects;
- (id)_remoteObjectForPictureInPictureApplication:(id)arg1 passingTest:(id /* block */)arg2 error:(id*)arg3;
- (id)_remoteObjectForPictureInPictureApplication:(id)arg1 sceneSessionPersistentIdentifier:(id)arg2 error:(id*)arg3;
- (id)_remoteObjectForTestApplicationWithBundleIdentifier:(id)arg1;
- (id)_remoteObjectThatCanCancelPictureInPictureApplication:(id)arg1 sceneSessionPersistentIdentifier:(id)arg2 error:(id*)arg3;
- (id)_remoteObjectThatCanEndTwoStageStopPictureInPictureApplication:(id)arg1 error:(id*)arg2;
- (id)_remoteObjectThatCanStopPictureInPictureApplication:(id)arg1 sceneSessionPersistentIdentifier:(id)arg2 error:(id*)arg3;
- (id)_remoteObjectThatShouldStartPictureInPictureEnteringBackgroundForPictureInPictureApplication:(id)arg1 sceneSessionPersistentIdentifier:(id)arg2 error:(id*)arg3;
- (id)_remoteObjectsForPictureInPictureApplication:(id)arg1;
- (void)_removeRemoteObject:(id)arg1;
- (void)_updateAllRemoteObjectsForPIPPossibleAndExemptAttributions;
- (void)activateBackgroundPIPAuthorizationService;
- (id)activePictureInPictureApplication;
- (id)activePictureInPictureApplications;
- (id)activePictureInPictureApplicationsStoppingOrCancelling;
- (id)activeSceneSessionIdentifiersByApplication;
- (id)analyticsDelegate;
- (bool)backgroundPIPService:(id)arg1 canAuthorizeBackgroundPIPForActivitySessionWithIdentifier:(id)arg2 appBundleIdentifier:(id)arg3;
- (void)backgroundPIPService:(id)arg1 didGrantBackgroundPIPAuthorizationForActivitySessionWithIdentifier:(id)arg2;
- (void)backgroundPIPService:(id)arg1 didRevokeBackgroundPIPAuthorizationForActivitySessionWithIdentifier:(id)arg2;
- (void)beginTwoStageStopPictureInPictureForApplication:(id)arg1 withSceneSessionPersistentIdentifier:(id)arg2 animated:(bool)arg3 byRestoringUserInterfaceWithCompletionHandler:(id /* block */)arg4;
- (void)cancelPictureInPictureForApplication:(id)arg1;
- (void)cancelPictureInPictureForApplication:(id)arg1 sceneSessionPersistentIdentifier:(id)arg2;
- (long long)contentTypePictureInPictureApplication:(id)arg1 sceneSessionPersistentIdentifier:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (void)endTwoStageStopPictureInPictureForApplication:(id)arg1 withSceneSessionPersistentIdentifier:(id)arg2 animated:(bool)arg3 completionHandler:(id /* block */)arg4;
- (id)existingPictureInPictureApplicationForBundleIdentifier:(id)arg1;
- (id)init;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })initialFrameForInteractivePictureInPictureAnimationEnteringBackgroundForApplication:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })initialFrameForInteractivePictureInPictureAnimationEnteringBackgroundForApplication:(id)arg1 sceneSessionPersistentIdentifier:(id)arg2;
- (bool)isPictureInPictureActive;
- (bool)isStartingStoppingOrCancellingPictureInPicture;
- (bool)isStoppingOrCancellingPictureInPictureForApplication:(id)arg1 sceneSessionPersistentIdentifier:(id)arg2;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)pagingSkipByNumberOfPages:(long long)arg1 application:(id)arg2;
- (id)pictureInPictureApplications;
- (void)pictureInPictureInterruptionBegan;
- (void)pictureInPictureInterruptionBeganWithReason:(long long)arg1;
- (bool)pictureInPictureInterruptionBeganWithReason:(long long)arg1 attribution:(id)arg2;
- (void)pictureInPictureInterruptionEnded;
- (void)pictureInPictureInterruptionEndedWithReason:(long long)arg1;
- (void)pictureInPictureInterruptionEndedWithReason:(long long)arg1 attribution:(id)arg2;
- (void)pictureInPictureRemoteObject:(id)arg1 didCreatePictureInPictureViewController:(id)arg2;
- (void)pictureInPictureRemoteObject:(id)arg1 didHidePictureInPictureViewController:(id)arg2;
- (void)pictureInPictureRemoteObject:(id)arg1 didRequestPictureInPictureStopForViewController:(id)arg2 sourceSceneSessionIdentifier:(id)arg3 animated:(bool)arg4;
- (void)pictureInPictureRemoteObject:(id)arg1 didShowPictureInPictureViewController:(id)arg2;
- (void)pictureInPictureRemoteObject:(id)arg1 requestActivationOfSceneWithPersistenceIdentier:(id)arg2 completion:(id /* block */)arg3;
- (void)pictureInPictureRemoteObject:(id)arg1 willDestroyPictureInPictureViewController:(id)arg2;
- (void)pictureInPictureRemoteObject:(id)arg1 willHidePictureInPictureViewController:(id)arg2;
- (void)pictureInPictureRemoteObject:(id)arg1 willShowPictureInPictureViewController:(id)arg2;
- (bool)pictureInPictureRemoteObjectHasBackgroundPIPAuthorization:(id)arg1;
- (id)pictureInPictureRemoteObjectInterruptionAssistant:(id)arg1;
- (void)pictureInPictureRemoteObjectNeedsActivationAndInterruptionPolicyUpdate:(id)arg1;
- (bool)pictureInPictureRemoteObjectShouldAcceptSetupRequest:(id)arg1;
- (bool)pictureInPictureRemoteObjectShouldCancelActivePictureInPictureOnStart:(id)arg1;
- (bool)pictureInPictureRemoteObjectShouldUpdateCancellationPolicyOnStart:(id)arg1;
- (struct CGSize { double x1; double x2; })preferredContentSizeForActivePictureInPictureWithApplication:(id)arg1 sceneSessionPersistentIdentifier:(id)arg2;
- (struct CGSize { double x1; double x2; })preferredContentSizeForInteractivePictureInPictureAnimationEnteringBackgroundForApplication:(id)arg1;
- (struct CGSize { double x1; double x2; })preferredContentSizeForInteractivelyEnteringBackgroundForApplication:(id)arg1 sceneSessionPersistentIdentifier:(id)arg2;
- (void)restorePictureInPictureTestActionForApplicationWithBundleIdentifier:(id)arg1;
- (void)setAnalyticsDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (bool)shouldStartPictureInPictureForApplicationEnteringBackground:(id)arg1;
- (bool)shouldStartPictureInPictureForApplicationEnteringBackground:(id)arg1 sceneSessionPersistentIdentifier:(id)arg2;
- (void)startMicroPIPIfPossibleForVideoCallWithScenePersistenceIdentifier:(id)arg1;
- (void)startPictureInPictureForApplicationEnteringBackground:(id)arg1 animated:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)startPictureInPictureForApplicationEnteringBackground:(id)arg1 sceneSessionPersistentIdentifier:(id)arg2 animated:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)startPictureInPictureResourcesUsageReductionForApplication:(id)arg1 requestingViewController:(id)arg2;
- (void)startPictureInPictureTestActionForApplicationWithBundleIdentifier:(id)arg1;
- (void)stopPictureInPictureForApplication:(id)arg1 animated:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)stopPictureInPictureForApplication:(id)arg1 sceneSessionPersistentIdentifier:(id)arg2 animated:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)stopPictureInPictureResourcesUsageReductionForApplication:(id)arg1 requestingViewController:(id)arg2;
- (id)suspendedPictureInPictureApplication;
- (long long)tetheringModeForSceneSessionPersistentIdentifier:(id)arg1;

@end