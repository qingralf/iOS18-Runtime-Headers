/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UISplitViewController : UIViewController <GKContentRefresh, GKURLHandling, UIViewControllerStatusBarPartStyleProvider, _UIVisualStyleStylable> {
    bool  __alwaysAllowsSystemPreferredContentSize;
    bool  __lockedForDelegateCallback;
    <UISplitViewControllerImpl> * _impl;
    _UISplitViewControllerStyle * _styleProvider;
}

@property (getter=_allowsDimmedSecondaryAsDeepestUnambiguousResponder, setter=_setAllowsDimmedSecondaryAsDeepestUnambiguousResponder:, nonatomic) bool _allowsDimmedSecondaryAsDeepestUnambiguousResponder;
@property (nonatomic) bool _alwaysAllowsSystemPreferredContentSize;
@property (setter=_setDisplayModeButtonItemTitle:, nonatomic, copy) NSString *_displayModeButtonItemTitle;
@property (nonatomic, readonly) UIScreenEdgePanGestureRecognizer *_fluidOpenSidebarPresentationGestureRecognizer;
@property (setter=_setForceDisplayModeBarButtonHidden:, nonatomic) bool _forceDisplayModeBarButtonHidden;
@property (getter=_ignoresSheetContext, setter=_setIgnoresSheetContext:, nonatomic) bool _ignoresSheetContext;
@property (getter=_isLockedForDelegateCallback, setter=_setLockedForDelegateCallback:, nonatomic) bool _lockedForDelegateCallback;
@property (getter=_preferredPrimaryColumnWidth, setter=_setPreferredPrimaryColumnWidth:, nonatomic) double _preferredPrimaryColumnWidth;
@property (setter=_setPreferredSplitBehavior:, nonatomic) long long _preferredSplitBehavior;
@property (getter=_preferredSupplementaryColumnWidth, setter=_setPreferredSupplementaryColumnWidth:, nonatomic) double _preferredSupplementaryColumnWidth;
@property (setter=_setPrimaryOffscreenGestureMode:, nonatomic) long long _primaryOffscreenGestureMode;
@property (nonatomic, readonly) bool _shouldInitializeColumnStyle;
@property (nonatomic, readonly) long long _splitBehavior;
@property (nonatomic, readonly) _UISplitViewControllerStyle *_styleProvider;
@property (setter=_setSupplementaryColumnAdoptsPrimaryBackgroundStyle:, nonatomic) bool _supplementaryColumnAdoptsPrimaryBackgroundStyle;
@property (setter=_setTabBarHostedView:, nonatomic) _UITabContainerView *_tabBarHostedView;
@property (setter=_setVisibleToggleButtonRequiresPresentsWithGesture:, nonatomic) bool _visibleToggleButtonRequiresPresentsWithGesture;
@property (getter=isCollapsed, nonatomic, readonly) bool collapsed;
@property (nonatomic, readonly) long long composition;
@property (nonatomic, copy) UISlidingBarConfiguration *configuration;
@property (nonatomic, readonly) UISlidingBarState *currentState;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <UISplitViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long displayMode;
@property (nonatomic, readonly) UIBarButtonItem *displayModeButtonItem;
@property (nonatomic) long long displayModeButtonVisibility;
@property (nonatomic, readonly) DOCSplitViewState *doc_splitViewState;
@property (nonatomic, retain) DOCSplitViewState *doc_splitViewStateTransitionEnd;
@property (nonatomic, retain) DOCSplitViewState *doc_splitViewStateTransitionStart;
@property (nonatomic) float gutterWidth;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hidesMasterViewInPortrait;
@property (nonatomic, readonly) UIViewController *ic_primaryViewController;
@property (nonatomic) double maximumPrimaryColumnWidth;
@property (nonatomic) double maximumSupplementalColumnWidth;
@property (nonatomic) double maximumSupplementaryColumnWidth;
@property (nonatomic) double minimumPrimaryColumnWidth;
@property (nonatomic) double minimumSupplementalColumnWidth;
@property (nonatomic) double minimumSupplementaryColumnWidth;
@property (nonatomic, readonly) NSArray *possibleStates;
@property (nonatomic, readonly) long long preferredCenterStatusBarStyle;
@property (nonatomic) long long preferredDisplayMode;
@property (nonatomic, readonly) long long preferredLeadingStatusBarStyle;
@property (nonatomic) double preferredPrimaryColumnWidth;
@property (nonatomic) double preferredPrimaryColumnWidthFraction;
@property (nonatomic) long long preferredSplitBehavior;
@property (nonatomic) double preferredSupplementalColumnWidthFraction;
@property (nonatomic) double preferredSupplementaryColumnWidth;
@property (nonatomic) double preferredSupplementaryColumnWidthFraction;
@property (nonatomic, readonly) long long preferredTrailingStatusBarStyle;
@property (getter=_prefersOverlayInRegularWidthPhone, setter=_setPrefersOverlayInRegularWidthPhone:, nonatomic) bool prefersOverlayInRegularWidthPhone;
@property (nonatomic) bool prefersSecondaryOnlyShortcutButtonVisible;
@property (nonatomic) bool presentsWithGesture;
@property (nonatomic) long long primaryBackgroundStyle;
@property (nonatomic, readonly) double primaryColumnWidth;
@property (nonatomic) long long primaryEdge;
@property (nonatomic) bool showsFullScreenShortcutButtonIfApplicable;
@property (nonatomic) bool showsSecondaryOnlyButton;
@property (nonatomic, readonly) long long splitBehavior;
@property (nonatomic, copy) UISlidingBarStateRequest *stateRequest;
@property (nonatomic, readonly) long long style;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double supplementalColumnWidth;
@property (nonatomic, readonly) double supplementaryColumnWidth;
@property (getter=_usesDeviceOverlayPreferences, setter=_setUsesDeviceOverlayPreferences:, nonatomic) bool usesDeviceOverlayPreferences;
@property (getter=_usesExtraWidePrimaryColumn, setter=_setUsesExtraWidePrimaryColumn:, nonatomic) bool usesExtraWidePrimaryColumn;
@property (nonatomic, copy) NSArray *viewControllers;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (bool)_automaticDisplayModeOnPhoneUsesOverlayInLandscapeDefaultValue;
+ (bool)_devicePrefersOverlayInRegularWidth;
+ (long long)_forcedImpl;
+ (void)_setForcedImpl:(long long)arg1;
+ (bool)doesOverridePreferredInterfaceOrientationForPresentation;
+ (id)visualStyleRegistryIdentity;

- (void).cxx_destruct;
- (id)_additionalViewControllersToCheckForUserActivity;
- (id)_allContainedViewControllers;
- (void)_allowingMutationsInDelegateCallback:(id /* block */)arg1;
- (bool)_allowsDimmedSecondaryAsDeepestUnambiguousResponder;
- (bool)_alwaysAllowsSystemPreferredContentSize;
- (void)_animateToRequest:(id)arg1;
- (bool)_canTileSidebarColumn:(long long)arg1;
- (id)_childViewControllersToSendViewWillTransitionToSize;
- (long long)_columnForMonitoredNavigationController:(id)arg1;
- (long long)_columnForViewController:(id)arg1;
- (void)_commonInitForcingColumnStyle:(bool)arg1;
- (double)_contentMarginForChildViewController:(id)arg1;
- (id)_contentOrObservableScrollViewForEdge:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })_contentSizeForChildViewController:(id)arg1 inPopoverController:(id)arg2;
- (id)_deepestActionResponder;
- (void)_descendantWillPresentViewController:(id)arg1 modalSourceViewController:(id)arg2 presentationController:(id)arg3 animated:(bool)arg4;
- (void)_didChangeToFirstResponder:(id)arg1;
- (void)_didEndSnapshotSession:(id)arg1;
- (void)_didUpdateFocusInContext:(id)arg1;
- (bool)_disableAutomaticKeyboardBehavior;
- (id)_displayModeButtonItemTitle;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(bool*)arg2;
- (id)_effectiveActivityItemsConfiguration;
- (id)_effectiveInteractionActivityTrackingBaseName;
- (void)_enumerateAncestorViewControllersUntilStop:(bool*)arg1 usingBlock:(id /* block */)arg2;
- (id)_fluidOpenSidebarPresentationGestureRecognizer;
- (bool)_forceDisplayModeBarButtonHidden;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForChildContentContainer:(id)arg1;
- (void)_getRotationContentSettings:(struct { bool x1; bool x2; bool x3; bool x4; bool x5; double x6; int x7; }*)arg1;
- (bool)_handlesCounterRotationForPresentation;
- (bool)_hasPreferredInterfaceOrientationForPresentation;
- (void)_hideColumn:(long long)arg1;
- (id)_hostingNavigationBar;
- (bool)_iPhoneShouldUseOverlayInCurrentEnvironment;
- (bool)_ignoresSheetContext;
- (bool)_isAnimating;
- (bool)_isCollapsed;
- (bool)_isExpanding;
- (bool)_isLockedForDelegateCallback;
- (bool)_isRotating;
- (bool)_isSplitViewController;
- (bool)_isViewControllerForObservableScrollViewAmbiguous;
- (bool)_layoutPrimaryOnRight;
- (void)_marginInfoForChild:(id)arg1 leftMargin:(double*)arg2 rightMargin:(double*)arg3;
- (id)_multitaskingDragExclusionRects;
- (void)_navigationController:(id)arg1 navigationBar:(id)arg2 itemBackButtonUpdated:(id)arg3;
- (void)_navigationController:(id)arg1 navigationBar:(id)arg2 topItemUpdatedContentLayout:(id)arg3;
- (id)_navigationController:(id)arg1 navigationBarAdditionalActionsForBackButtonMenu:(id)arg2;
- (void)_navigationControllerDidChangeNavigationBarHidden:(id)arg1;
- (void)_navigationControllerDidUpdateStack:(id)arg1;
- (bool)_navigationControllerShouldNotAdjustTransitioningSizeForChildContainer:(id)arg1;
- (bool)_needsNSToolbarSidebarToggle;
- (id)_nextResponderUsingTargetActionStrategyFromChildViewController:(id)arg1 didTraverseToParentViewController:(bool*)arg2;
- (bool)_optsOutOfPopoverControllerHierarchyCheck;
- (id)_overridingPreferredFocusEnvironment;
- (id)_panelImpl;
- (void)_popoverController:(id)arg1 didChangeFromVisible:(bool)arg2;
- (void)_popoverController:(id)arg1 willChangeToVisible:(bool)arg2;
- (long long)_preferredModalPresentationStyle;
- (double)_preferredPrimaryColumnWidth;
- (long long)_preferredSplitBehavior;
- (double)_preferredSupplementaryColumnWidth;
- (bool)_prefersOverlayInRegularWidthPhone;
- (id)_presentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)_primaryContentResponder;
- (id)_primaryDimmingView;
- (double)_primaryDividerPosition;
- (long long)_primaryOffscreenGestureMode;
- (void)_setAllowsDimmedSecondaryAsDeepestUnambiguousResponder:(bool)arg1;
- (void)_setDisplayModeButtonItemTitle:(id)arg1;
- (void)_setForceDisplayModeBarButtonHidden:(bool)arg1;
- (void)_setIgnoresSheetContext:(bool)arg1;
- (void)_setLockedForDelegateCallback:(bool)arg1;
- (void)_setPreferredPrimaryColumnWidth:(double)arg1;
- (void)_setPreferredSplitBehavior:(long long)arg1;
- (void)_setPreferredSupplementaryColumnWidth:(double)arg1;
- (void)_setPrefersOverlayInRegularWidthPhone:(bool)arg1;
- (void)_setPrimaryOffscreenGestureMode:(long long)arg1;
- (void)_setSupplementaryColumnAdoptsPrimaryBackgroundStyle:(bool)arg1;
- (void)_setTabBarHostedView:(id)arg1;
- (void)_setUsesDeviceOverlayPreferences:(bool)arg1;
- (void)_setUsesExtraWidePrimaryColumn:(bool)arg1;
- (void)_setViewController:(id)arg1 forColumn:(long long)arg2;
- (void)_setVisibleToggleButtonRequiresPresentsWithGesture:(bool)arg1;
- (void)_setWantsFloatingSidebar:(bool)arg1;
- (bool)_shouldInitializeColumnStyle;
- (bool)_shouldOverlayTabBar;
- (bool)_shouldPersistViewWhenCoding;
- (bool)_shouldUseFluidSidebarGestures;
- (bool)_shouldUseNewStatusBarBehavior;
- (bool)_shouldUseSeparateStatusBarStyles;
- (void)_showColumn:(long long)arg1;
- (long long)_splitBehavior;
- (id)_styleProvider;
- (long long)_subclassPreferredFocusedViewPrioritizationType;
- (id)_super_childViewControllerForStatusBarStyle;
- (id)_super_childViewControllersToSendViewWillTransitionToSize;
- (id)_super_deepestActionResponder;
- (void)_super_didUpdateFocusInContext:(id)arg1;
- (bool)_super_disableAutomaticKeyboardBehavior;
- (id)_super_effectiveActivityItemsConfiguration;
- (id)_super_multitaskingDragExclusionRects;
- (id)_super_overridingPreferredFocusEnvironment;
- (struct CGSize { double x1; double x2; })_super_preferredContentSize;
- (id)_super_preferredFocusEnvironments;
- (id)_super_preferredFocusedView;
- (long long)_super_preferredInterfaceOrientationForPresentation;
- (unsigned long long)_super_preferredScreenEdgesDeferringSystemGestures;
- (void)_super_removeChildViewController:(id)arg1;
- (bool)_super_shouldUpdateFocusInContext:(id)arg1;
- (struct CGSize { double x1; double x2; })_super_sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { double x1; double x2; })arg2;
- (unsigned long long)_super_supportedInterfaceOrientations;
- (void)_super_viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)_super_willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (bool)_supplementaryColumnAdoptsPrimaryBackgroundStyle;
- (double)_supplementaryDividerPosition;
- (void)_tabBarControllerDidChangeSelection:(id)arg1;
- (id)_tabBarHostedView;
- (id)_traitOverridesForChildViewController:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_tvOSColumnStyleExtraInsetsForChildViewController:(id)arg1;
- (void)_updateChildContentMargins;
- (void)_updateDisplayModeButtonItem;
- (void)_updateLayoutForStatusBarAndInterfaceOrientation;
- (void)_updateScrollEdgeBehaviorForDetailNavigationContoller;
- (bool)_usesDeviceOverlayPreferences;
- (bool)_usesExtraWidePrimaryColumn;
- (bool)_usesPanelImpl;
- (void)_viewControllerChildViewControllersDidChange:(id)arg1;
- (id)_viewControllerForColumn:(long long)arg1;
- (id)_viewControllerForObservableScrollView;
- (bool)_visibleToggleButtonRequiresPresentsWithGesture;
- (bool)_wantsFloatingSidebar;
- (void)_willBeginSnapshotSession:(id)arg1;
- (void)_willShowCollapsedDetailViewController:(id)arg1 inTargetController:(id)arg2;
- (bool)_wrapsNavigationController:(id*)arg1;
- (void)addChildViewController:(id)arg1;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (id)childViewControllerForStatusBarStyle;
- (long long)composition;
- (id)configuration;
- (id)currentState;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (id)delegate;
- (id)description;
- (id)detailViewController;
- (void)didMoveToParentViewController:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (long long)displayMode;
- (id)displayModeButtonItem;
- (long long)displayModeButtonVisibility;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (float)gutterWidth;
- (void)hideColumn:(long long)arg1;
- (bool)hidesMasterViewInPortrait;
- (id)initWithCoder:(id)arg1;
- (id)initWithComposition:(long long)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (bool)isCollapsed;
- (void)loadView;
- (id)masterViewController;
- (double)maximumPrimaryColumnWidth;
- (double)maximumSupplementalColumnWidth;
- (double)maximumSupplementaryColumnWidth;
- (double)minimumPrimaryColumnWidth;
- (double)minimumSupplementalColumnWidth;
- (double)minimumSupplementaryColumnWidth;
- (id)possibleStates;
- (long long)preferredCenterStatusBarStyle;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (long long)preferredDisplayMode;
- (id)preferredFocusEnvironments;
- (id)preferredFocusedView;
- (long long)preferredInterfaceOrientationForPresentation;
- (long long)preferredLeadingStatusBarStyle;
- (double)preferredPrimaryColumnWidth;
- (double)preferredPrimaryColumnWidthFraction;
- (unsigned long long)preferredScreenEdgesDeferringSystemGestures;
- (long long)preferredSplitBehavior;
- (double)preferredSupplementalColumnWidthFraction;
- (double)preferredSupplementaryColumnWidth;
- (double)preferredSupplementaryColumnWidthFraction;
- (long long)preferredTrailingStatusBarStyle;
- (bool)prefersSecondaryOnlyShortcutButtonVisible;
- (bool)presentsWithGesture;
- (long long)primaryBackgroundStyle;
- (double)primaryColumnWidth;
- (long long)primaryEdge;
- (void)removeChildViewController:(id)arg1;
- (void)removeFromParentViewController;
- (void)setAutomaticallyAdjustsScrollViewInsets:(bool)arg1;
- (void)setComposition:(long long)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setDefinesPresentationContext:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayModeButtonVisibility:(long long)arg1;
- (void)setEdgesForExtendedLayout:(unsigned long long)arg1;
- (void)setExtendedLayoutIncludesOpaqueBars:(bool)arg1;
- (void)setGutterWidth:(float)arg1;
- (void)setHidesMasterViewInPortrait:(bool)arg1;
- (void)setMaximumPrimaryColumnWidth:(double)arg1;
- (void)setMaximumSupplementalColumnWidth:(double)arg1;
- (void)setMaximumSupplementaryColumnWidth:(double)arg1;
- (void)setMinimumPrimaryColumnWidth:(double)arg1;
- (void)setMinimumSupplementalColumnWidth:(double)arg1;
- (void)setMinimumSupplementaryColumnWidth:(double)arg1;
- (void)setModalPresentationCapturesStatusBarAppearance:(bool)arg1;
- (void)setModalPresentationStyle:(long long)arg1;
- (void)setModalTransitionStyle:(long long)arg1;
- (void)setOverrideTraitCollection:(id)arg1;
- (void)setPreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPreferredDisplayMode:(long long)arg1;
- (void)setPreferredPrimaryColumnWidth:(double)arg1;
- (void)setPreferredPrimaryColumnWidthFraction:(double)arg1;
- (void)setPreferredSplitBehavior:(long long)arg1;
- (void)setPreferredSupplementalColumnWidthFraction:(double)arg1;
- (void)setPreferredSupplementaryColumnWidth:(double)arg1;
- (void)setPreferredSupplementaryColumnWidthFraction:(double)arg1;
- (void)setPrefersSecondaryOnlyShortcutButtonVisible:(bool)arg1;
- (void)setPresentsWithGesture:(bool)arg1;
- (void)setPrimaryBackgroundStyle:(long long)arg1;
- (void)setPrimaryEdge:(long long)arg1;
- (void)setProvidesPresentationContextTransitionStyle:(bool)arg1;
- (void)setRestoresFocusAfterTransition:(bool)arg1;
- (void)setShowsFullScreenShortcutButtonIfApplicable:(bool)arg1;
- (void)setShowsSecondaryOnlyButton:(bool)arg1;
- (void)setStateRequest:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)setView:(id)arg1;
- (void)setViewController:(id)arg1 forColumn:(long long)arg2;
- (void)setViewControllers:(id)arg1;
- (void)setViewRespectsSystemMinimumLayoutMargins:(bool)arg1;
- (void)set_alwaysAllowsSystemPreferredContentSize:(bool)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (bool)shouldUpdateFocusInContext:(id)arg1;
- (void)showColumn:(long long)arg1;
- (void)showDetailViewController:(id)arg1 sender:(id)arg2;
- (void)showViewController:(id)arg1 sender:(id)arg2;
- (bool)showsFullScreenShortcutButtonIfApplicable;
- (bool)showsSecondaryOnlyButton;
- (struct CGSize { double x1; double x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { double x1; double x2; })arg2;
- (long long)splitBehavior;
- (id)stateRequest;
- (long long)style;
- (double)supplementalColumnWidth;
- (double)supplementaryColumnWidth;
- (unsigned long long)supportedInterfaceOrientations;
- (void)toggleMasterVisible:(id)arg1;
- (void)toggleSidebar:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)transitionCoordinator;
- (void)unloadViewForced:(bool)arg1;
- (void)validateCommand:(id)arg1;
- (id)viewControllerForColumn:(long long)arg1;
- (id)viewControllers;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

// Image: /System/Library/Frameworks/SwiftUI.framework/SwiftUI

- (id)makeDetailNavigationControllerWithRoot:(id)arg1;

// Image: /System/Library/PrivateFrameworks/DocumentManagerExecutables.framework/DocumentManagerExecutables

- (id)doc_splitViewState;
- (id)doc_splitViewStateTransitionEnd;
- (id)doc_splitViewStateTransitionStart;
- (void)setDoc_splitViewStateTransitionEnd:(id)arg1;
- (void)setDoc_splitViewStateTransitionStart:(id)arg1;

// Image: /System/Library/PrivateFrameworks/GameCenterUICore.framework/GameCenterUICore

- (void)_gkForceNextContentUpdate;
- (void)_gkHandleURLPathComponents:(id)arg1 query:(id)arg2;
- (void)_gkResetContents;
- (void)_gkSetContentsNeedUpdateWithHandler:(id /* block */)arg1;
- (void)_gkUpdateContentsWithCompletionHandlerAndError:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

- (id)ic_primaryViewController;
- (void)ic_showColumn:(long long)arg1 animated:(bool)arg2;
- (void)ic_toggleSidebar;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

- (id)_participantForDestination:(id)arg1 routingOptions:(unsigned long long*)arg2;
- (void)navigateToDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)nextExistingParticipantOnRouteToDestination:(id)arg1;
- (unsigned long long)routingOptionsForDestination:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI

- (void)togglePrimaryViewVisibilityAnimated:(bool)arg1;
- (void)ts_columnSeparatorsExtendToTitlebar:(bool)arg1;
- (bool)ts_isCollapsedOrCollapsing;
- (bool)ts_isCollapsing;
- (void)ts_setGutterWidth:(double)arg1;
- (void)ts_setPrefersOverlayInRegularWidthPhone:(bool)arg1;
- (void)ts_setPrimaryBackgroundStyle:(long long)arg1;

@end
