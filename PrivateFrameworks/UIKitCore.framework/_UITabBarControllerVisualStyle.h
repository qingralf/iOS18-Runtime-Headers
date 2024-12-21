/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UITabBarControllerVisualStyle : NSObject <UIGestureRecognizerDelegate, _UITabContentProviding, _UIVisualStyleProviding> {
    UILongPressGestureRecognizer * _accessibilityLongPressGestureRecognizer;
    UITapGestureRecognizer * _backGestureRecognizer;
    bool  _barHidden;
    UITapGestureRecognizer * _selectGestureRecognizer;
    bool  _suppressTabBarControllerNotification;
    UITabBarController * _tabBarController;
}

@property (nonatomic, readonly) long long backGestureRecognizerPressType;
@property (getter=isBarHidden, nonatomic) bool barHidden;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isTabBarEffectivelyHidden;
@property (nonatomic, readonly) bool overrideUISplitViewControllerToCompact;
@property (nonatomic, readonly) bool prefersTabBarFocusedOnViewDidLoad;
@property (nonatomic, readonly) bool removeTabBarFocusedOnViewDidDisappear;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsFocusGestures;
@property (nonatomic, readonly) bool supportsShowingMoreItem;
@property (nonatomic, readonly) bool suppressesEditingUI;
@property (nonatomic, readonly) UITabBarController *tabBarController;
@property (nonatomic, readonly) unsigned long long tabBarFocusSpeedBumpEdges;
@property (nonatomic, readonly) bool updatesTabBarFocusHeadingOnChange;
@property (nonatomic, readonly) bool wantsDefaultTabBar;

- (void).cxx_destruct;
- (void)_accessibilityLongPressChanged:(id)arg1;
- (void)_performBackGesture:(id)arg1;
- (void)_performSelectGesture:(id)arg1;
- (id)_tabCustomizationProxy;
- (void)_updateAccessibilityGestureEnableState;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })additionalContentMargins;
- (void)adjustTabBarForContentScrollView:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })adjustedContentViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 viewController:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })adjustedTabBarFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })adjustedTransitionViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)backGestureRecognizerPressType;
- (bool)canDisplaySidebar;
- (bool)canDisplayTabBar;
- (bool)canDisplayUITabBar;
- (bool)canToggleSidebar;
- (id)childViewControllerForStatusBarStyle;
- (void)configureTransitionView:(id)arg1;
- (id)defaultAnimatorForFromViewController:(id)arg1 toViewController:(id)arg2;
- (unsigned long long)defaultMaxItems;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsetsForChildViewController:(id)arg1;
- (void)editingStateDidChange;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithTabBarController:(id)arg1;
- (bool)isBarHidden;
- (bool)isScrollViewObservationInCompatibilityMode;
- (bool)isTabBarEffectivelyHidden;
- (void)loadViews;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })overlayInsetsAdjustment;
- (bool)overrideUISplitViewControllerToCompact;
- (void)performWithoutNotifyingTabBarController:(id /* block */)arg1;
- (long long)preferredCenterStatusBarStyle;
- (long long)preferredLeadingStatusBarStyle;
- (void)preferredSidebarModeDidChange;
- (long long)preferredTrailingStatusBarStyle;
- (bool)prefersTabBarFocusedOnViewDidLoad;
- (void)prepare;
- (bool)removeTabBarFocusedOnViewDidDisappear;
- (id)resolvedPopoverPresentationControllerSourceItemForTab:(id)arg1;
- (void)selectedViewControllerDidChange;
- (void)sendSelectionEventsForControl:(id)arg1;
- (void)setBarHidden:(bool)arg1;
- (void)setBarHidden:(bool)arg1 animated:(bool)arg2;
- (bool)shouldEnforceChildSelectionInGroupTabs;
- (bool)shouldForgetRememberedFocusItemForSelectedViewController:(id)arg1 context:(id)arg2;
- (bool)shouldSuppressPresses:(id)arg1 withEvent:(id)arg2;
- (bool)shouldTrackContentScrollView:(id)arg1 viewController:(id)arg2 tabBarBackgroundRequired:(bool)arg3;
- (void)sidebarLayoutDidChange;
- (void)sidebarVisibilityDidChange;
- (void)sidebarVisibilityDidChangeWithAnimator:(id)arg1;
- (bool)supportsFocusGestures;
- (bool)supportsShowingMoreItem;
- (bool)suppressesEditingUI;
- (id)tabBarController;
- (unsigned long long)tabBarFocusSpeedBumpEdges;
- (long long)tabBarPosition;
- (id)tabBarView;
- (void)tabContentDidChange:(id)arg1;
- (void)teardown;
- (void)titleDidChange;
- (bool)transitionFromViewController:(id)arg1 toViewController:(id)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (void)updateConstraints;
- (void)updateFocusForSelectedViewControllerChange;
- (void)updateGestureRecognizers;
- (void)updateTabBarLayout;
- (void)updateTabForChildViewController:(id)arg1;
- (void)updateViewControllerForReselection:(id)arg1;
- (void)updateViewControllers:(bool)arg1;
- (bool)updatesTabBarFocusHeadingOnChange;
- (id)viewControllerForObservableScrollViewFromViewController:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (bool)wantsDefaultTabBar;
- (void)willUpdateViewControllers;

@end