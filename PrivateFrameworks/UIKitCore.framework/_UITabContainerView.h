/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UITabContainerView : _UITouchPassthroughView <UIDropInteractionDelegate, UIGestureRecognizerDelegate, _UITabContentProviding, _UITabOutlineViewDelegate> {
    _UITabBarControllerSidebarAnimator * _alongsideAnimator;
    long long  _availableComponent;
    _UITabSidebarBorderView * _borderView;
    _UIRopeAnimation * _currentRopeAnimation;
    double  _currentSidebarWidth;
    <_UITabContainerViewDelegate> * _delegate;
    bool  _didChangeVisibleBars;
    UIView * _dimmingView;
    _UIFloatingTabBar * _floatingTabBar;
    <_UITabContainerViewFloatingTabBarHost> * _floatingTabBarHost;
    UIBarButtonItem * _hostingNavigationBarPlaceholderItem;
    bool  _isAnimating;
    bool  _isAnimatingEditModeAppearance;
    bool  _isAnimatingToTabBar;
    double  _maximumSidebarWidth;
    double  _minimumSidebarWidth;
    UIView * _outlineTransitionView;
    UIAction * _overrideTidebarButtonAction;
    double  _pendingSidebarTranslation;
    UITabBarControllerSidebar * _sidebar;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _sidebarAdditionalEditingInsets;
    long long  _sidebarLayout;
    UIAction * _sidebarToggleAction;
    long long  _supportedComponent;
    bool  _supportsResizingSidebar;
    bool  _suppressTabBar;
    bool  _suppressesEditingInsetsChanges;
    UITabBar * _tabBar;
    UIView * _tabBarTransitionView;
    _UITabModel * _tabModel;
    UIVisualEffectView * _transitionBackgroundView;
    UIView * _transitionContainerView;
    _UIGroupCompletion * _transitionGroupCompletion;
    bool  _wantsHostingNavigationBarPlaceholder;
}

@property (nonatomic, readonly) _UITabSidebarBorderView *_borderView;
@property (nonatomic, readonly) UIView *_dimmingView;
@property (nonatomic, readonly) UIAction *_sidebarToggleAction;
@property (nonatomic) long long availableComponent;
@property (nonatomic, readonly) bool canShowFloatingTabBar;
@property (nonatomic, readonly) bool canShowFloatingUI;
@property (nonatomic) double currentSidebarWidth;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <_UITabContainerViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) _UIFloatingTabBar *floatingTabBar;
@property (nonatomic) <_UITabContainerViewFloatingTabBarHost> *floatingTabBarHost;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIBarButtonItem *hostingNavigationBarPlaceholderItem;
@property (nonatomic, readonly) bool isSidebarOverlappingContent;
@property (nonatomic) double maximumSidebarWidth;
@property (nonatomic) double minimumSidebarWidth;
@property (nonatomic, readonly) _UITabOutlineView *outlineView;
@property (nonatomic, retain) UIAction *overrideTidebarButtonAction;
@property (nonatomic) double pendingSidebarTranslation;
@property (getter=isShowingFloatingTabBar, nonatomic, readonly) bool showingFloatingTabBar;
@property (nonatomic, readonly) UITabBarControllerSidebar *sidebar;
@property (nonatomic) long long sidebarLayout;
@property (readonly) Class superclass;
@property (nonatomic) long long supportedComponent;
@property (nonatomic) bool supportsResizingSidebar;
@property (nonatomic) bool suppressTabBar;
@property (nonatomic, readonly) UITabBar *tabBar;
@property (nonatomic, readonly) _UITabModel *tabModel;
@property (nonatomic, readonly) bool wantsHostingNavigationBarPlaceholder;

- (void).cxx_destruct;
- (id)_borderView;
- (void)_commitSidebarTranslation;
- (id)_configuredGroupCompletion;
- (void)_createViewHierarchy;
- (double)_currentSidebarWidth;
- (long long)_currentVisibleComponents;
- (void)_didDragBorderView:(id)arg1;
- (id)_dimmingView;
- (void)_finalizeEditingState;
- (double)_floatingTabBarFittingHeight;
- (double)_floatingTabBarTopOffset;
- (void)_handleDimmingViewTap:(id)arg1;
- (bool)_hasActiveMorphTransition;
- (void)_horizontalSizeClassDidChange;
- (bool)_isShowingSidebar;
- (bool)_isTabBarHidden;
- (id)_sidebarToggleAction;
- (void)_updateFloatingTabBarFrame;
- (void)_updateOutlineViewFrame;
- (void)_updateSidebarAppearanceForMorphTransitionAnimated:(bool)arg1;
- (void)_updateSidebarContentMarginsWithTabBarContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_updateToggleAction;
- (void)_updateVisibleBarAnimated:(bool)arg1;
- (void)_updateVisibleBarAnimated:(bool)arg1 requireLayout:(bool)arg2 updateDimmingView:(bool)arg3;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })additionalContentMargins;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })adjustedFrameForContentTransitionViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)availableComponent;
- (bool)canShowFloatingTabBar;
- (bool)canShowFloatingUI;
- (double)currentSidebarWidth;
- (id)delegate;
- (void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsetsForChildViewController:(id)arg1;
- (id)floatingTabBar;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })floatingTabBarContentFrameInCoordinateSpace:(id)arg1;
- (id)floatingTabBarHost;
- (double)floatingTabBarTopInsetForViewController:(id)arg1;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)hostingNavigationBarPlaceholderItem;
- (id)initWithSidebar:(id)arg1 tabBar:(id)arg2;
- (bool)isShowingFloatingTabBar;
- (bool)isSidebarOverlappingContent;
- (void)layoutSubviews;
- (double)maximumSidebarWidth;
- (double)minimumSidebarWidth;
- (id)outlineView;
- (void)outlineView:(id)arg1 didSelectTab:(id)arg2;
- (void)outlineViewDidChangeCustomizationStore:(id)arg1;
- (id)overrideTidebarButtonAction;
- (double)pendingSidebarTranslation;
- (id)preferredFocusEnvironments;
- (id)resolvedPopoverPresentationControllerSourceItemForTab:(id)arg1;
- (void)safeAreaInsetsDidChange;
- (void)setAvailableComponent:(long long)arg1;
- (void)setAvailableComponent:(long long)arg1 animated:(bool)arg2;
- (void)setCurrentSidebarWidth:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFloatingTabBarHost:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setMaximumSidebarWidth:(double)arg1;
- (void)setMinimumSidebarWidth:(double)arg1;
- (void)setOverrideTidebarButtonAction:(id)arg1;
- (void)setPendingSidebarTranslation:(double)arg1;
- (void)setSidebarLayout:(long long)arg1;
- (void)setSupportedComponent:(long long)arg1;
- (void)setSupportsResizingSidebar:(bool)arg1;
- (void)setSuppressTabBar:(bool)arg1;
- (id)sidebar;
- (long long)sidebarLayout;
- (long long)supportedComponent;
- (bool)supportsResizingSidebar;
- (bool)suppressTabBar;
- (id)tabBar;
- (id)tabModel;
- (void)updateDimmingViewAnimated:(bool)arg1;
- (void)updateEditModeAppearanceAnimated:(bool)arg1;
- (void)updateSidebarAppearanceStateAnimated:(bool)arg1 animator:(id)arg2;
- (bool)wantsHostingNavigationBarPlaceholder;

@end