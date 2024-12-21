/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIHostedWindowScene : UIWindowScene <_UISceneHostingViewAppearanceActionHandler>

@property (setter=_setPreferredContentSize:, nonatomic) struct CGSize { double x1; double x2; } _preferredContentSize;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_installLocalSheetPresentationControllerForWindow:(id)arg1;
- (void)_invalidate;
- (struct CGSize { double x1; double x2; })_preferredContentSize;
- (bool)_pushesTraitCollectionToScreen;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_safeAreaInsetsForInterfaceOrientation:(long long)arg1;
- (void)_setPreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)_usesMinimumSafeAreaInsets;
- (void)hostViewDidDisappear;
- (void)hostViewWillAppear;
- (void)hostViewWillDisappear;
- (id)initWithSession:(id)arg1 connectionOptions:(id)arg2;
- (void)sendAction:(id)arg1;

@end