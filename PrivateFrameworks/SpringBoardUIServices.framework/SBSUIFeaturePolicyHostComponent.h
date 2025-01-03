/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBSUIFeaturePolicyHostComponent : FBSSceneComponent {
    <SBSUIFeaturePolicyHostComponentDelegate> * _delegate;
}

@property (nonatomic, readonly) bool allowsMenuButtonDismissal;
@property (nonatomic) <SBSUIFeaturePolicyHostComponentDelegate> *delegate;
@property (nonatomic, readonly, copy) NSSet *desiredBackgroundActivities;
@property (nonatomic, readonly) unsigned long long desiredHardwareButtonEvents;
@property (nonatomic, readonly) bool shouldDisableAlertItems;
@property (nonatomic, readonly) bool shouldDisableBanners;
@property (nonatomic, readonly) bool shouldDisableControlCenter;
@property (nonatomic, readonly) bool shouldDisableInteractiveScreenshotGesture;
@property (nonatomic, readonly) bool shouldDisableReachability;
@property (nonatomic, readonly) bool shouldDisableSiri;

- (void).cxx_destruct;
- (bool)allowsMenuButtonDismissal;
- (id)delegate;
- (id)desiredBackgroundActivities;
- (unsigned long long)desiredHardwareButtonEvents;
- (void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
- (void)sendActions:(id)arg1;
- (void)setDelegate:(id)arg1;
- (bool)shouldDisableAlertItems;
- (bool)shouldDisableBanners;
- (bool)shouldDisableControlCenter;
- (bool)shouldDisableInteractiveScreenshotGesture;
- (bool)shouldDisableReachability;
- (bool)shouldDisableSiri;

@end
