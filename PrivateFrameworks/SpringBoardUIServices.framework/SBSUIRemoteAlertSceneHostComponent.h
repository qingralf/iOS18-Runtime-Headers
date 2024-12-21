/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBSUIRemoteAlertSceneHostComponent : FBSSceneComponent <FBSceneObserver> {
    SBSRemoteAlertActivationContext * _activationContext;
    SBSRemoteAlertConfigurationContext * _configurationContext;
    NSString * _configurationIdentifier;
    <SBSUIRemoteAlertSceneHostComponentDelegate> * _delegate;
    NSMutableArray * _pendingTransitioners;
}

@property (nonatomic, copy) SBSRemoteAlertActivationContext *activationContext;
@property (nonatomic, readonly) bool allowsAlertStacking;
@property (getter=isAttachedToWindowedAccessory, nonatomic, readonly) bool attachedToWindowedAccessory;
@property (nonatomic, readonly, copy) NSSet *backgroundActivitiesToSuppress;
@property (nonatomic, retain) SBSRemoteAlertConfigurationContext *configurationContext;
@property (nonatomic, copy) NSString *configurationIdentifier;
@property (getter=isContentOpaque, nonatomic, readonly) bool contentOpaque;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <SBSUIRemoteAlertSceneHostComponentDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double desiredAutoLockDuration;
@property (nonatomic, readonly) SBUIRemoteAlertIdleTimerSettings *desiredIdleTimerSettings;
@property (nonatomic, readonly) long long dismissalAnimationStyle;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool hidEventDeferringDisabled;
@property (nonatomic, readonly) NSNumber *preferredSceneDeactivationReason;
@property (nonatomic, readonly) long long preferredStatusBarStyle;
@property (nonatomic, readonly) int preferredStatusBarVisibility;
@property (nonatomic, readonly) bool shouldDisableOrientationUpdates;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;
@property (nonatomic, readonly) long long swipeDismissalStyle;
@property (nonatomic, readonly) long long whitePointAdaptivityStyle;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } windowedAccessoryCutoutFrameInScreen;

- (void).cxx_destruct;
- (void)_flushPendingTransitionersWithContext:(id)arg1;
- (void)_performSafeSettingsUpdate:(id /* block */)arg1;
- (void)_performSafeTransition:(id /* block */)arg1;
- (id)activationContext;
- (bool)allowsAlertStacking;
- (id)backgroundActivitiesToSuppress;
- (id)configurationContext;
- (id)configurationIdentifier;
- (id)delegate;
- (double)desiredAutoLockDuration;
- (id)desiredIdleTimerSettings;
- (void)didInvalidateForRemoteAlertServiceInvalidation;
- (void)didTransitionToAttachedToWindowedAccessory:(bool)arg1 windowedAccessoryCutoutFrameInScreen:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (long long)dismissalAnimationStyle;
- (void)handleButtonActions:(id)arg1;
- (bool)hidEventDeferringDisabled;
- (bool)isAttachedToWindowedAccessory;
- (bool)isContentOpaque;
- (id)preferredSceneDeactivationReason;
- (long long)preferredStatusBarStyle;
- (int)preferredStatusBarVisibility;
- (void)scene:(id)arg1 didPrepareUpdateWithContext:(id)arg2;
- (void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
- (void)scene:(id)arg1 willUpdateSettings:(id)arg2;
- (void)scene:(id)arg1 willUpdateSettings:(id)arg2 withTransitionContext:(id)arg3;
- (void)setActivationContext:(id)arg1;
- (void)setConfigurationContext:(id)arg1;
- (void)setConfigurationIdentifier:(id)arg1;
- (void)setDefaultStatusBarHeightsForWindowScene:(id)arg1;
- (void)setDelegate:(id)arg1;
- (bool)shouldDisableOrientationUpdates;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)swipeDismissalStyle;
- (long long)whitePointAdaptivityStyle;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })windowedAccessoryCutoutFrameInScreen;

@end