/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UISceneHostingController : NSObject <BSInvalidatable, FBSceneDelegate, _UIRemoteSheet, _UISceneHostingActivating, _UISceneRelationshipManagementHostComponentObserver> {
    <_UISceneHostingActivationControlling> * _activationController;
    _UISceneHostingActivationHandle * _activationHandle;
    <_UISceneHostingControllerDelegate> * _delegate;
    FBScene * _fbScene;
    bool  _fencesDisabled;
    struct { 
        unsigned int _clientIsReady : 1; 
        unsigned int _activationControllerImplementsIsMovingToParentScene : 1; 
        unsigned int _activationControllerImplementsActivationHandleUpdated : 1; 
    }  _flags;
    UIScene<_UISceneUIWindowHosting> * _parentScene;
    NSMutableArray * _queuedActions;
    _UISceneHostingView * _sceneView;
    _UISceneHostingViewController * _sceneViewController;
    NSPointerArray * _settingsProviders;
    NSUserActivity * _userActivity;
}

@property (nonatomic, readonly) bool _allowsConnection; /* unknown property attribute: ? */
@property (nonatomic, readonly) <_UISceneHostingSheetPresentationHostProviding> *_remoteSheetProvider;
@property (setter=_setSheetConfiguration:, nonatomic, retain) _UISheetPresentationControllerConfiguration *_sheetConfiguration;
@property (setter=_setViewClipsToBounds:, nonatomic) bool _viewClipsToBounds;
@property (nonatomic, retain) <_UISceneHostingActivationControlling> *activationController;
@property (getter=isActive, nonatomic, readonly) bool active;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <_UISceneHostingControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <_UISceneHostingIntelligenceSupportHost> *intelligenceHostSceneComponent;
@property (nonatomic, readonly) _UISceneHostingView *sceneView;
@property (nonatomic, readonly) UIViewController *sceneViewController;
@property (readonly) Class superclass;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_clientIsReady;
- (id)_eventDeferringComponent;
- (void)_objc_initiateDealloc;
- (void)_prototype_requestSettingsUpdateWithFence:(bool)arg1;
- (id)_remoteSheetProvider;
- (void)_scene:(id)arg1 isMovingToParent:(id)arg2;
- (void)_updateSceneSettingsFromSettingsProvidersWithFence:(bool)arg1;
- (void)activate:(id /* block */)arg1;
- (id)activationController;
- (id)activationStateComponent;
- (void)addSettingsProvider:(id)arg1;
- (void)addSettingsProvider:(id)arg1 atIndexPath:(long long)arg2;
- (void)beginObservingNotifications;
- (id)contentSizePreferenceProvider;
- (void)createSceneWithConfiguration:(id)arg1;
- (void)deactivate:(id /* block */)arg1;
- (void)dealloc;
- (id)delegate;
- (void)endObservingNotifications;
- (id)initWithAdvancedConfiguration:(id)arg1;
- (id)initWithProcessIdentity:(id)arg1 sceneSpecification:(id)arg2;
- (id)intelligenceHostSceneComponent;
- (void)invalidate;
- (bool)isActive;
- (id)keyboardSuppressionController;
- (void)removeSettingsProvider:(id)arg1;
- (id)scene:(id)arg1 handleActions:(id)arg2;
- (void)sceneContentStateDidChange:(id)arg1;
- (void)sceneDidActivate:(id)arg1;
- (void)sceneDidDeactivate:(id)arg1 withError:(id)arg2;
- (id)sceneView;
- (id)sceneViewController;
- (void)sceneWillEnterBackground:(id)arg1;
- (void)sendAction:(id)arg1;
- (void)setActivationController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)traitCollectionReceiver;

@end