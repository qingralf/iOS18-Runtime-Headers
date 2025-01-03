/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UINavigationBarVisualProvider : NSObject {
    bool  _activeTabBarHost;
    UINavigationItem * _itemForMeasuring;
    UINavigationBar * _navigationBar;
    _UINavigationBarItemStack * _stack;
}

@property (getter=isActiveTabBarHost, nonatomic) bool activeTabBarHost;
@property (nonatomic, readonly) bool allowsUserInteractionDuringTransitions;
@property (getter=isAnimatingNavItemContentLayoutGuideForStaticButtonVisibilityChange, nonatomic, readonly) bool animatingNavItemContentLayoutGuideForStaticButtonVisibilityChange;
@property (nonatomic) long long appearanceAPIVersion;
@property (nonatomic, readonly) <_UIBarAppearanceChangeObserver> *appearanceObserver;
@property (nonatomic) double backgroundAlpha;
@property (getter=isContentViewHidden, nonatomic, readonly) bool contentViewHidden;
@property (nonatomic, readonly) long long currentContentSize;
@property (nonatomic) bool forceScrollEdgeAppearance;
@property (nonatomic, readonly) bool isInCustomization;
@property (nonatomic, readonly) double navItemContentLayoutGuideAnimationDistance;
@property (nonatomic, readonly) UINavigationBar *navigationBar;
@property (nonatomic, retain) _UINavigationControllerRefreshControlHost *refreshControlHost;
@property (nonatomic, readonly) bool scrollEdgeAppearanceHasChromelessBehavior;
@property (nonatomic) bool shouldFadeStaticNavBarButton;
@property (nonatomic, retain) _UINavigationBarItemStack *stack;
@property (nonatomic, retain) UIBarButtonItem *staticNavBarButtonItem;
@property (nonatomic) bool staticNavBarButtonLingers;
@property (nonatomic, retain) _UITabContainerView *tabBarHostedView;
@property (nonatomic) double titleAlpha;
@property (nonatomic) bool useInlineBackgroundHeightWhenLarge;
@property (nonatomic) bool wantsHostedTabBarMetrics;
@property (nonatomic, readonly) bool wantsLargeTitleDisplayed;

+ (bool)shouldDecodeSubviews;

- (void).cxx_destruct;
- (id)_accessibility_HUDItemForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)_accessibility_controlToActivateForHUDGestureLiftAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)_accessibility_shouldBeginHUDGestureAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_beginRenaming;
- (void)_endRenaming;
- (id /* block */)_immediatelyFinishRunningTransition;
- (void)_installContentClippingView:(id)arg1;
- (void)_refreshBackButtonMenu;
- (void)_removeContentClippingView;
- (bool)_shim_107516167;
- (void)_shim_30244716;
- (bool)_shim_34415965;
- (id)_shim_backIndicatorView;
- (long long)_shim_backdropStyle;
- (double)_shim_backgroundHeight;
- (id)_shim_compatibilityBackgroundView;
- (id)_shim_contentView;
- (bool)_shim_disableBlurTinting;
- (id)_shim_displayViewsIncludingHiddenBackButtonViews:(bool)arg1;
- (id)_shim_layoutView;
- (void)_shim_popForCarplayPressAtFakePoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_shim_pressBackIndicator:(bool)arg1 initialPress:(bool)arg2;
- (id)_shim_promptText;
- (void)_shim_setCustomBackgroundView:(id)arg1;
- (void)_shim_setDisableBlurTinting:(bool)arg1;
- (void)_shim_setPromptText:(id)arg1 animated:(bool)arg2;
- (void)_shim_setShadowAlpha:(double)arg1;
- (void)_shim_setUseContentView:(bool)arg1;
- (double)_shim_shadowAlpha;
- (bool)_shim_throwConstraintExceptions;
- (void)_shim_touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_shim_touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_shim_touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)_shim_touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)_shim_updateBackIndicator;
- (void)_shim_updateBackgroundViewIgnoringFlag;
- (void)_shim_updateUserContentGuideForTopItem:(id)arg1 backItem:(id)arg2;
- (id)_shim_userContentGuide;
- (bool)_shim_wantsCustomTouchHandlingForTouches:(id)arg1;
- (bool)allowsUserInteractionDuringTransitions;
- (void)animateForSearchPresentation:(bool)arg1;
- (long long)appearanceAPIVersion;
- (id)appearanceObserver;
- (void)appendToDescription:(id)arg1;
- (double)backgroundAlpha;
- (void)barDidAddSubview:(id)arg1;
- (void)barDidMoveToWindow;
- (void)barSizeChanged;
- (void)beginAnimatingNavItemContentLayoutGuideForStaticButtonVisibilityChange;
- (bool)canHandleStatusBarTouchAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)changeAppearance;
- (void)changeLayout;
- (id)contentViewVisualProvider;
- (long long)currentContentSize;
- (void)deferSearchSuggestionsMenuRefreshForGeometryChange;
- (id)description;
- (void)dismissHostedSearchWithTransitionCoordinator:(id)arg1;
- (void)endAnimatingNavItemContentLayoutGuideForStaticButtonVisibilityChange;
- (bool)forceScrollEdgeAppearance;
- (bool)gestureRecognizerShouldBegin:(id)arg1 defaultAnswer:(id /* block */)arg2;
- (double)heightForRestoringFromCancelledTransition;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 defaultViewHit:(id)arg2;
- (id)initWithNavigationBar:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)intrinsicContentSizeInvalidatedForChildView:(id)arg1;
- (void)invalidateIntrinsicContentSize;
- (bool)isActiveTabBarHost;
- (bool)isAnimatingNavItemContentLayoutGuideForStaticButtonVisibilityChange;
- (bool)isContentViewHidden;
- (bool)isInCustomization;
- (struct { double x1; double x2; double x3; })layoutHeightsFittingWidth:(double)arg1;
- (void)layoutSubviews;
- (double)leadingMarginForContentViewsWithContentMargin:(double)arg1;
- (double)navItemContentLayoutGuideAnimationDistance;
- (id)navigationBar;
- (void)navigationBarInvalidatedResolvedLayoutMargins;
- (void)popAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (id)preferredFocusedView;
- (void)prepare;
- (void)prepareForPop;
- (void)prepareForPush;
- (void)prepareForStackChange;
- (void)presentHostedSearchWithTransitionCoordinator:(id)arg1;
- (void)presentSearchWithTransitionCoordinator:(id)arg1;
- (void)provideViewsForContents:(id)arg1 topItem:(id)arg2 backItem:(id)arg3;
- (void)pushAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)recordBarSize:(struct CGSize { double x1; double x2; })arg1;
- (id)refreshControlHost;
- (void)refreshSearchSuggestionsMenuAfterGeometryChange;
- (void)removeContentForItem:(id)arg1;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })resolvedLargeTitleMargins;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })resolvedSearchBarMargins;
- (id)restingHeights;
- (void)safeAreaInsetsDidChange;
- (bool)scrollEdgeAppearanceHasChromelessBehavior;
- (void)searchScopeBarWillManuallyShowOrHideForNavigationItem:(id)arg1;
- (void)setActiveTabBarHost:(bool)arg1;
- (void)setAppearanceAPIVersion:(long long)arg1;
- (void)setBackButtonVisible:(bool)arg1 animated:(bool)arg2;
- (void)setBackgroundAlpha:(double)arg1;
- (void)setForceScrollEdgeAppearance:(bool)arg1;
- (void)setNeedsStaticNavBarButtonUpdate;
- (void)setRefreshControlHost:(id)arg1;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)setShouldFadeStaticNavBarButton:(bool)arg1;
- (void)setStack:(id)arg1;
- (void)setStaticNavBarButtonItem:(id)arg1;
- (void)setStaticNavBarButtonItem:(id)arg1 trailingPosition:(bool)arg2;
- (void)setStaticNavBarButtonLingers:(bool)arg1;
- (void)setTabBarHostedView:(id)arg1;
- (void)setTitleAlpha:(double)arg1;
- (void)setUseInlineBackgroundHeightWhenLarge:(bool)arg1;
- (void)setWantsHostedTabBarMetrics:(bool)arg1;
- (void)setupTopNavigationItem;
- (bool)shouldFadeStaticNavBarButton;
- (bool)shouldUseHeightRangeFittingWidth;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)stack;
- (void)stackDidChangeFrom:(id)arg1;
- (id)staticNavBarButtonItem;
- (bool)staticNavBarButtonLingers;
- (long long)statusBarStyle;
- (bool)supportsRefreshControlHosting;
- (id)tabBarHostedView;
- (void)teardown;
- (double)titleAlpha;
- (bool)topItemHasVariableHeight;
- (void)traitCollectionDidChange:(id)arg1;
- (void)traitCollectionDidChangeOnSubtree:(id)arg1;
- (id)traitCollectionForChild:(id)arg1 baseTraitCollection:(id)arg2;
- (void)updateArchivedSubviews:(id)arg1;
- (void)updateBackgroundGroupName;
- (void)updateBarVisibilityForTopItem;
- (void)updateConstraints;
- (bool)updateNavItemContentLayoutGuideAnimationConstraintConstant:(double)arg1;
- (void)updateSearchBarForPlacementChangeIfApplicable;
- (void)updateTopNavigationItemAnimated:(bool)arg1;
- (void)updateTopNavigationItemTitleView;
- (bool)useInlineBackgroundHeightWhenLarge;
- (bool)wantsHostedTabBarMetrics;
- (bool)wantsLargeTitleDisplayed;

@end
