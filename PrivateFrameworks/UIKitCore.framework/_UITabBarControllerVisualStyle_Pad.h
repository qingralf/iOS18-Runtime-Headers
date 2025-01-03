/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UITabBarControllerVisualStyle_Pad : _UITabBarControllerVisualStyle_iOS <_UITabContainerViewDelegate> {
    bool  _needsContentLayout;
    _UITabContainerView * _tabContainerView;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double maximumSidebarWidth;
@property (nonatomic) double minimumSidebarWidth;
@property (nonatomic, retain) UIAction *overrideTidebarButtonAction;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsResizingSidebar;
@property (nonatomic, readonly) _UITabContainerView *tabContainerView;

- (void).cxx_destruct;
- (long long)_effectivePartStyleForEdge:(long long)arg1;
- (void)_setNeedsContentLayout;
- (id)_tabCustomizationProxy;
- (void)_updateBarAvailabilityAnimated:(bool)arg1;
- (void)_updateContentLayoutForSidebarAppearanceIfNeeded;
- (void)_updateHostedNavigationBarsWithWantsHostedTabBarMetrics:(bool)arg1;
- (void)_updateNavigationBarHostingWithSelectedViewController:(id)arg1;
- (void)_updateSidebarResolvedLayout;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })additionalContentMargins;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })adjustedTransitionViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)canDisplaySidebar;
- (bool)canDisplayTabBar;
- (bool)canDisplayUITabBar;
- (bool)canToggleSidebar;
- (id)childViewControllerForStatusBarStyle;
- (unsigned long long)defaultMaxItems;
- (void)didLayoutSidebarView;
- (void)didUpdateVisibleAppearance;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsetsForChildViewController:(id)arg1;
- (void)editingStateDidChange;
- (id)initWithTabBarController:(id)arg1;
- (void)loadViews;
- (double)maximumSidebarWidth;
- (double)minimumSidebarWidth;
- (id)overrideTidebarButtonAction;
- (bool)overrideUISplitViewControllerToCompact;
- (long long)preferredCenterStatusBarStyle;
- (long long)preferredLeadingStatusBarStyle;
- (void)preferredSidebarModeDidChange;
- (long long)preferredTrailingStatusBarStyle;
- (id)resolvedPopoverPresentationControllerSourceItemForTab:(id)arg1;
- (void)safeAreaInsetsDidChange;
- (void)selectedViewControllerDidChange;
- (void)setBarHidden:(bool)arg1 animated:(bool)arg2;
- (void)setMaximumSidebarWidth:(double)arg1;
- (void)setMinimumSidebarWidth:(double)arg1;
- (void)setOverrideTidebarButtonAction:(id)arg1;
- (void)setSupportsResizingSidebar:(bool)arg1;
- (bool)shouldEnforceChildSelectionInGroupTabs;
- (id)sidebar;
- (void)sidebarLayoutDidChange;
- (void)sidebarVisibilityDidChangeWithAnimator:(id)arg1;
- (bool)supportsOverlaySidebarMode;
- (bool)supportsResizingSidebar;
- (bool)supportsTabBar;
- (id)tabBarView;
- (id)tabContainerView;
- (void)tabContentDidChange:(id)arg1;
- (void)titleDidChange;
- (void)updateContentLayoutForSidebarAppearanceWithTransitionCoordinator:(id)arg1;
- (void)updateFocusForSelectedViewControllerChange;
- (void)updateTabBarLayout;
- (void)updateViewControllerForReselection:(id)arg1;
- (void)updateViewControllers:(bool)arg1;
- (bool)wantsDefaultTabBar;
- (void)willUpdateViewControllers;

@end
