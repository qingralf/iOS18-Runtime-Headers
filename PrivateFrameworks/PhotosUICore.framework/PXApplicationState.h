/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXApplicationState : PXObservable {
    UIApplication * _application;
    NSMutableSet * _disabledIdleTimerTokens;
    bool  _isHidden;
    bool  _isInactive;
    bool  _needsUpdateVisibilityState;
    long long  _visibilityState;
}

@property (nonatomic, readonly) UIApplication *application;
@property (nonatomic, readonly) bool isHidden;
@property (nonatomic, readonly) bool isInactive;
@property (nonatomic, readonly) bool isLaunchedForTesting;
@property (nonatomic, readonly) long long visibilityState;

+ (bool)isLaunchedForTesting;
+ (bool)isRunningInPhotosApp;
+ (bool)isRunningInPhotosTopShelfExtension;
+ (id)sharedState;

- (void).cxx_destruct;
- (void)_appDidBecomeActive:(id)arg1;
- (void)_appDidBecomeHidden:(id)arg1;
- (void)_appDidBecomeInactive:(id)arg1;
- (void)_appDidBecomeUnhidden:(id)arg1;
- (void)_invalidateVisibilityState;
- (void)_sceneDidActivate:(id)arg1;
- (void)_sceneDidEnterBackground:(id)arg1;
- (void)_sceneWillDeactivate:(id)arg1;
- (void)_sceneWillEnterBackground:(id)arg1;
- (void)_updateIfNeeded;
- (void)_updateVisibilityState;
- (id)application;
- (id)beginDisablingIdleTimerForReason:(id)arg1;
- (void)didPerformChanges;
- (void)endDisablingIdleTimer:(id)arg1;
- (id)init;
- (id)initWithApplication:(id)arg1;
- (id)initWithApplication:(id)arg1 isExtension:(bool)arg2;
- (bool)isDisablingIdleTimerForReasons:(id*)arg1;
- (bool)isHidden;
- (bool)isInactive;
- (bool)isLaunchedForTesting;
- (void)setIsHidden:(bool)arg1;
- (void)setIsInactive:(bool)arg1;
- (void)setVisibilityState:(long long)arg1;
- (long long)visibilityState;

@end