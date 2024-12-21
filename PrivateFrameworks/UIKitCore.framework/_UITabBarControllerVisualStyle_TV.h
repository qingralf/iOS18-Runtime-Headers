/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UITabBarControllerVisualStyle_TV : _UITabBarControllerVisualStyle <UIGestureRecognizerDelegate, _UITVScrollViewManagerDelegate> {
    UIFocusContainerGuide * _contentFocusContainerGuide;
    struct { 
        unsigned int hidNavigationBar : 1; 
    }  _flags;
    _UITVScrollViewManager * _scrollViewManager;
    UIView * _tabBarContainerView;
    UIFocusGuide * _tabBarOffscreenFocusGuide;
    UIGestureRecognizer * _touchDetectionGestureRecognizer;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)_childViewControllerModernBarTopInset;
- (bool)_isModernBar;
- (void)_performTouchDetectionGesture:(id)arg1;
- (void)_scrollViewManagerDidFinishScrolling:(id)arg1;
- (bool)_shouldAdjustContentViewFrameForOffscreenFocus:(id)arg1 adjustedTabBarFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_updateOffscreenState:(bool)arg1 withFocusAnimationCoordinator:(id)arg2;
- (void)adjustTabBarForContentScrollView:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })adjustedContentViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 viewController:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })adjustedTabBarFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)backGestureRecognizerPressType;
- (id)defaultAnimatorForFromViewController:(id)arg1 toViewController:(id)arg2;
- (unsigned long long)defaultMaxItems;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsetsForChildViewController:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)isScrollViewObservationInCompatibilityMode;
- (void)loadViews;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })overlayInsetsAdjustment;
- (bool)prefersTabBarFocusedOnViewDidLoad;
- (bool)removeTabBarFocusedOnViewDidDisappear;
- (void)sendSelectionEventsForControl:(id)arg1;
- (bool)shouldForgetRememberedFocusItemForSelectedViewController:(id)arg1 context:(id)arg2;
- (bool)shouldTrackContentScrollView:(id)arg1 viewController:(id)arg2 tabBarBackgroundRequired:(bool)arg3;
- (bool)supportsFocusGestures;
- (bool)supportsShowingMoreItem;
- (unsigned long long)tabBarFocusSpeedBumpEdges;
- (long long)tabBarPosition;
- (id)tabBarView;
- (void)tabContentDidChange:(id)arg1;
- (void)teardown;
- (void)updateFocusForSelectedViewControllerChange;
- (void)updateGestureRecognizers;
- (void)updateTabBarLayout;
- (void)updateViewControllerForReselection:(id)arg1;
- (void)updateViewControllers:(bool)arg1;
- (id)viewControllerForObservableScrollViewFromViewController:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end