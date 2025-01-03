/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSScene : NSObject <BSDescriptionProviding, FBSSceneAgentProxy, FBSSceneExtensible, FBSSceneHandle, FBSSceneSnapshotRequestDelegate, FBSSceneUpdaterDelegate> {
    FBSSerialQueue * _callOutQueue;
    <FBSSceneClientAgent> * _callOutQueue_agent;
    id /* block */  _callOutQueue_agentMessageHandler;
    NSMutableArray * _callOutQueue_agentSessions;
    bool  _callOutQueue_mutationLocked;
    BKSAnimationFenceHandle * _calloutQueue_animationFence;
    bool  _callout_coalesceUpdates;
    FBSSceneUpdate * _callout_sceneUpdate;
    FBSSceneDefinition * _definition;
    bool  _everActivated;
    bool  _hasAgent;
    FBSSceneIdentity * _identity;
    FBSSceneIdentityToken * _identityToken;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    FBSSceneClientSettings * _lock_clientSettings;
    NSMapTable * _lock_components;
    <FBSSceneDelegate> * _lock_delegate;
    FBSSceneHostHandle * _lock_hostHandle;
    NSMutableArray * _lock_sceneObservers;
    FBSSceneSettings * _lock_settings;
    <FBSSceneUpdater> * _lock_updater;
}

@property (nonatomic, readonly) _UIHomeAffordanceClientSceneComponent *_homeAffordanceClientSceneComponent;
@property (nonatomic, readonly) <SBSUICameraOverlaySceneClientMonitor> *cameraOverlaySceneClientMonitor;
@property (nonatomic, readonly) FBSSceneClientSettings *clientSettings;
@property (nonatomic, readonly) SBUIContinuitySessionParticipantClientComponent *continuitySessionParticipantClientComponent;
@property (nonatomic, readonly) <SBContinuitySessionSceneParticipant> *continuitySessionSceneParticipant;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, readonly) FBSSceneDefinition *definition;
@property (nonatomic) <FBSSceneDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool everActivated;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) BSAuditToken *hostAuditToken;
@property (nonatomic, readonly) FBSSceneHostHandle *hostHandle;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) FBSSceneIdentity *identity;
@property (nonatomic, readonly) FBSSceneIdentityToken *identityToken;
@property (nonatomic, readonly) FBSSceneSettings *settings;
@property (nonatomic, readonly) FBSSceneSpecification *specification;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <FBSSceneUpdater> *updater;
@property (nonatomic, readonly) FBSWorkspaceService *workspaceService;

// Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices

+ (id)pseudoSceneWithIdentifier:(id)arg1 specification:(id)arg2;

- (void).cxx_destruct;
- (id)_beginUpdate;
- (id)_callOutQueue;
- (void)_callOutQueue_coalesceClientSettingsUpdates:(id /* block */)arg1;
- (void)_callOutQueue_didCreateWithTransitionContext:(id)arg1 alternativeCreationCallout:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)_callOutQueue_didUpdateHostHandle:(id)arg1;
- (void)_callOutQueue_invalidate;
- (void)_callOutQueue_updateExtensionsFromSettings:(id)arg1 toSettings:(id)arg2 withDiff:(id)arg3;
- (bool)_callOutQueue_willDestroyWithTransitionContext:(id)arg1 completion:(id /* block */)arg2;
- (void)_configureParameters:(id /* block */)arg1;
- (id)_createTransitionContext;
- (id)_initWithUpdater:(id)arg1 identityToken:(id)arg2 identity:(id)arg3 parameters:(id)arg4 hostHandle:(id)arg5;
- (id)_lock_allComponents;
- (id)_observers;
- (void)_sendUpdate:(id)arg1;
- (void)_updateClientSettings:(id /* block */)arg1;
- (void)activateWithCompletion:(id /* block */)arg1;
- (void)add:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)addObserver:(id)arg1 withConfiguration:(id /* block */)arg2;
- (void)agent:(id)arg1 registerMessageHandler:(id /* block */)arg2;
- (void)agent:(id)arg1 sendMessage:(id)arg2 withResponse:(id /* block */)arg3;
- (void)attachContext:(id)arg1;
- (void)attachLayer:(id)arg1;
- (void)attachSceneContext:(id)arg1;
- (id)callOutQueue;
- (id)clientProcess;
- (id)clientSettings;
- (void)closeSession:(id)arg1;
- (id)componentForExtension:(Class)arg1 ofClass:(Class)arg2;
- (void)configureParameters:(id /* block */)arg1;
- (bool)conformsToExtension:(Class)arg1;
- (id)contexts;
- (id)counterpartAgent;
- (id)definition;
- (id)delegate;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)detachContext:(id)arg1;
- (void)detachLayer:(id)arg1;
- (void)detachSceneContext:(id)arg1;
- (id)display;
- (bool)everActivated;
- (id)fbsDisplay;
- (id)hostAuditToken;
- (id)hostHandle;
- (id)hostProcess;
- (id)identifier;
- (id)identity;
- (id)identityToken;
- (id)init;
- (void)invalidate;
- (bool)invalidateSnapshotWithContext:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)layers;
- (id)loggingIdentifier;
- (id)openSessionWithName:(id)arg1 executionPolicy:(id)arg2;
- (id)parameters;
- (bool)performSnapshotWithContext:(id)arg1;
- (void)remove:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)sendActions:(id)arg1;
- (void)sendActions:(id)arg1 toExtension:(Class)arg2;
- (void)setDelegate:(id)arg1;
- (id)settings;
- (id)snapshotRequest;
- (bool)snapshotRequest:(id)arg1 performWithContext:(id)arg2;
- (bool)snapshotRequestAllowSnapshot:(id)arg1;
- (id)specification;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)updateClientSettings:(id /* block */)arg1;
- (void)updateClientSettings:(id)arg1 withTransitionContext:(id)arg2;
- (void)updateClientSettingsWithBlock:(id /* block */)arg1;
- (void)updateClientSettingsWithTransitionBlock:(id /* block */)arg1;
- (void)updateSettings:(id /* block */)arg1;
- (id)updater;
- (void)updater:(id)arg1 didReceiveActions:(id)arg2 forExtension:(Class)arg3;
- (void)updater:(id)arg1 didReceiveMessage:(id)arg2 withResponse:(id /* block */)arg3;
- (void)updater:(id)arg1 didUpdateSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 completion:(id /* block */)arg5;
- (id)workspaceService;

// Image: /System/Library/PrivateFrameworks/AXFrontBoardUtils.framework/AXFrontBoardUtils

- (bool)accessibilityIsSceneOnContinuityDisplay;
- (bool)accessibilitySceneIsCallServiceBanner;

// Image: /System/Library/PrivateFrameworks/BacklightServices.framework/BacklightServices

- (id)backlightSceneEnvironment;
- (id)backlightSceneEnvironmentWithCreationBlock:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/BannerKit.framework/BannerKit

- (id)bn_presentableUniqueIdentifier;

// Image: /System/Library/PrivateFrameworks/CarPlayServices.framework/CarPlayServices

- (id)crs_applicationBundleIdentifier;

// Image: /System/Library/PrivateFrameworks/PosterKit.framework/PosterKit

- (void)pr_performUpdate:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/PosterUIFoundation.framework/PosterUIFoundation

- (id)pui_forwardKeyboardFocusToClientScene:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ShellSceneKit.framework/ShellSceneKit

- (id)SSKDisplayEndpoint;

// Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices

- (id)SBSUI_remoteAlertComponent;
- (id)cameraOverlaySceneClientMonitor;
- (id)continuitySessionParticipantClientComponent;
- (id)continuitySessionSceneParticipant;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (id)_homeAffordanceClientSceneComponent;
- (bool)isPersistable;
- (id)renderingEnvironment;
- (id)traitCollectionModificationComponent;
- (bool)uiAlwaysSupportsAllInterfaceOrientations;
- (bool)uiCanReceiveDeviceOrientationEvents;
- (id)uiClientSettings;
- (id)uiSettings;
- (void)updateUIClientSettingsWithBlock:(id /* block */)arg1;
- (void)updateUIClientSettingsWithTransitionBlock:(id /* block */)arg1;

@end
