/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UISceneHostingSheetPresentationHostComponent : FBSSceneComponent <_UISceneHostingSheetPresentationHostProviding> {
    UIViewController * _targetViewController;
}

@property (nonatomic, readonly) bool _allowsConnection; /* unknown property attribute: ? */
@property (setter=_setSheetConfiguration:, nonatomic, retain) _UISheetPresentationControllerConfiguration *_sheetConfiguration;
@property (setter=_setTargetViewController:, nonatomic) UIViewController *_targetViewController;
@property (setter=_setViewClipsToBounds:, nonatomic) bool _viewClipsToBounds;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setSheetConfiguration:(id)arg1;
- (void)_setTargetViewController:(id)arg1;
- (void)_setViewClipsToBounds:(bool)arg1;
- (id)_sheetConfiguration;
- (id)_targetViewController;
- (bool)_viewClipsToBounds;
- (id)currentPresentationController;
- (void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
- (id)scene:(id)arg1 handleActions:(id)arg2;

@end