/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIPopoverPresentationController : UIPresentationController <UIGestureRecognizerDelegatePrivate, _UIPopoverDimmingViewDelegate> {
    bool  __allowsFocusInPresentingViewController;
    bool  __allowsSourceViewInDifferentWindowThanInitialPresentationViewController;
    bool  __centersPopoverIfSourceViewNotSet;
    struct CGSize { 
        double width; 
        double height; 
    }  __defaultPopoverSizeOverride;
    double  __dimmingViewTopEdgeInset;
    bool  __ignoreBarButtonItemSiblings;
    long long  __preferredHorizontalAlignment;
    bool  __shouldHideArrow;
    bool  __softAssertWhenNoSourceViewOrBarButtonItemSpecified;
    UISheetPresentationController * _adaptiveSheetPresentationController;
    bool  _adaptivityEnabled;
    bool  _allowDismissalTapsToPassThrough;
    UIColor * _arrowBackgroundColor;
    bool  _backgroundBlurDisabled;
    long long  _backgroundBlurEffectStyle;
    UIColor * _backgroundColor;
    bool  _canOverlapSourceViewRect;
    UIViewController * _contentViewController;
    double  _cornerRadius;
    unsigned long long  _currentArrowDirection;
    UIPanGestureRecognizer * _detachGestureRecognizer;
    bool  _didPresentInActiveSequence;
    _UIPopoverDimmingView * _dimmingView;
    UIPanGestureRecognizer * _dimmingViewGestureRecognizer;
    bool  _dismissesOnRotation;
    <_UIPopoverHostManager> * _hostManager;
    bool  _ignoresKeyboardNotifications;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _lastSourceRectInContainerView;
    UIView * _layoutConstraintView;
    bool  _overrideAllowsHitTestingOnBackgroundViews;
    unsigned long long  _permittedArrowDirections;
    unsigned long long  _popoverArrowDirection;
    long long  _popoverBackgroundStyle;
    Class  _popoverBackgroundViewClass;
    struct CGSize { 
        double width; 
        double height; 
    }  _popoverContentSize;
    struct { 
        unsigned int isPresentingModalViewController : 1; 
        unsigned int isPresentingActionSheet : 1; 
        unsigned int wasIgnoringDimmingViewTouchesBeforeScrolling : 1; 
        unsigned int isInTextEffectsWindow : 1; 
        unsigned int isEmbeddingInView : 1; 
        unsigned int embeddedPresentationBounces : 1; 
        unsigned int isRepositioningRectDisabled : 1; 
        unsigned int sendingDelegateWillRepositionToRect : 1; 
        unsigned int isObservingFocusUpdateNotification : 1; 
    }  _popoverControllerFlags;
    long long  _popoverControllerStyle;
    NSString * _popoverIdentifier;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _popoverLayoutMargins;
    _UIPopoverView * _popoverView;
    _UIPopoverLayoutInfo * _preferredLayoutInfo;
    long long  _presentationDirection;
    unsigned long long  _presentationEdge;
    int  _presentationState;
    UIView * _presentingView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _previousContainerViewRect;
    UIPopoverPresentationController * _retainedSelf;
    bool  _retainsSelfWhilePresented;
    _UIRoundedRectShadowView * _shadowView;
    bool  _shouldDimPresentingViewTint;
    bool  _shouldDisableInteractionDuringTransitions;
    bool  _shouldPreserveFirstResponder;
    bool  _shouldSendDidDismiss;
    bool  _showsOrientationMarker;
    bool  _showsPresentationArea;
    bool  _showsTargetRect;
    unsigned long long  _slideTransitionCount;
    UIView * _sourceOverlayView;
    NSArray * _sourceOverlayViewConstraints;
    UIBarButtonItem * _targetBarButtonItem;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _targetRectInEmbeddingView;
    UIView * _targetRectView;
    bool  _useSourceViewBoundsAsSourceRect;
    UIPanGestureRecognizer * _vendedGestureRecognizer;
    bool  _wasDetached;
    unsigned int  draggingChildScrollViewCount;
}

@property (setter=_setAllowDismissalTapsToPassThrough:, nonatomic) bool _allowDismissalTapsToPassThrough;
@property (setter=_setAllowsFocusInPresentingViewController:, nonatomic) bool _allowsFocusInPresentingViewController;
@property (setter=_setAllowsSourceViewInDifferentWindowThanInitialPresentationViewController:, nonatomic) bool _allowsSourceViewInDifferentWindowThanInitialPresentationViewController;
@property (getter=_arrowOffset, setter=_setArrowOffset:, nonatomic) double _arrowOffset;
@property (getter=_centersPopoverIfSourceViewNotSet, setter=_setCentersPopoverIfSourceViewNotSet:, nonatomic) bool _centersPopoverIfSourceViewNotSet;
@property (setter=_setCornerRadius:, nonatomic) double _cornerRadius;
@property (nonatomic) struct CGSize { double x1; double x2; } _defaultPopoverSizeOverride;
@property (setter=_setDimmingViewTopEdgeInset:, nonatomic) double _dimmingViewTopEdgeInset;
@property (setter=_setIgnoreBarButtonItemSiblings:, nonatomic) bool _ignoreBarButtonItemSiblings;
@property (setter=_setIgnoresKeyboardNotifications:, nonatomic) bool _ignoresKeyboardNotifications;
@property (setter=_setPopoverBackgroundStyle:, nonatomic) long long _popoverBackgroundStyle;
@property (setter=_setPreferredHorizontalAlignment:, nonatomic) long long _preferredHorizontalAlignment;
@property (setter=_setShouldDimPresentingViewTint:, nonatomic) bool _shouldDimPresentingViewTint;
@property (getter=_shouldHideArrow, setter=_setShouldHideArrow:, nonatomic) bool _shouldHideArrow;
@property (setter=_setSoftAssertWhenNoSourceViewOrBarButtonItemSpecified:, nonatomic) bool _softAssertWhenNoSourceViewOrBarButtonItemSpecified;
@property (nonatomic, readonly) UISheetPresentationController *adaptiveSheetPresentationController;
@property (getter=_isAdaptivityEnabled, setter=_setAdaptivityEnabled:, nonatomic) bool adaptivityEnabled;
@property (nonatomic, readonly) unsigned long long arrowDirection;
@property (nonatomic, copy) UIColor *backgroundColor;
@property (nonatomic, retain) UIBarButtonItem *barButtonItem;
@property (nonatomic) bool canOverlapSourceViewRect;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <UIPopoverPresentationControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIDimmingView *dimmingView;
@property (nonatomic) bool dismissesOnRotation;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *passthroughViews;
@property (nonatomic) unsigned long long permittedArrowDirections;
@property (nonatomic) unsigned long long popoverArrowDirection;
@property (nonatomic, retain) Class popoverBackgroundViewClass;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } popoverLayoutMargins;
@property (nonatomic, retain) _UIPopoverLayoutInfo *preferredLayoutInfo;
@property (getter=_presentationEdge, setter=_setPresentationEdge:, nonatomic) unsigned long long presentationEdge;
@property (getter=_presentingView, setter=_setPresentingView:, nonatomic) UIView *presentingView;
@property (nonatomic, retain) UIPopoverPresentationController *retainedSelf;
@property (getter=_retainsSelfWhilePresented, setter=_setRetainsSelfWhilePresented:, nonatomic) bool retainsSelfWhilePresented;
@property (getter=_shouldDisableInteractionDuringTransitions, setter=_setShouldDisableInteractionDuringTransitions:, nonatomic) bool shouldDisableInteractionDuringTransitions;
@property (getter=_shouldPreserveFirstResponder, setter=_setShouldPreserveFirstResponder:, nonatomic) bool shouldPreserveFirstResponder;
@property (nonatomic) bool showsOrientationMarker;
@property (nonatomic) bool showsPresentationArea;
@property (nonatomic) bool showsTargetRect;
@property (nonatomic, retain) <UIPopoverPresentationControllerSourceItem> *sourceItem;
@property (getter=_sourceOverlayView, setter=_setSourceOverlayView:, nonatomic, retain) UIView *sourceOverlayView;
@property (getter=_sourceOverlayViewConstraints, setter=_setSourceOverlayViewConstraints:, nonatomic, retain) NSArray *sourceOverlayViewConstraints;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } sourceRect;
@property (nonatomic, retain) UIView *sourceView;
@property (readonly) Class superclass;
@property (getter=_targetRectView, setter=_setTargetRectView:, nonatomic, retain) UIView *targetRectView;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (bool)_alwaysAllowPopoverPresentations;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_defaultPopoverLayoutMarginsForPopoverControllerStyle:(long long)arg1 andContentViewController:(id)arg2;
+ (bool)_forceAttemptsToAvoidKeyboard;
+ (id)_platformHostManagerForController:(id)arg1;
+ (Class)_popoverViewClass;
+ (void)_setAlwaysAllowPopoverPresentations:(bool)arg1;
+ (bool)_showTargetRectPref;

- (void).cxx_destruct;
- (id)_adaptiveFormSheetPresentationController;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_additionalSafeAreaInsets;
- (bool)_allowDismissalTapsToPassThrough;
- (bool)_allowsFocusBehindDimmingView;
- (bool)_allowsFocusInPresentingViewController;
- (bool)_allowsSourceViewInDifferentWindowThanInitialPresentationViewController;
- (double)_arrowOffset;
- (bool)_attemptDismissalWithCompletion:(id /* block */)arg1;
- (bool)_attemptsToAvoidKeyboard;
- (void)_autoDismissIfFocusedItemSufficientlyIntersectsPresentedView;
- (bool)_backgroundBlurDisabled;
- (long long)_backgroundBlurEffectStyle;
- (id)_backgroundView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_baseContentInsetsWithLeftMargin:(double*)arg1 rightMargin:(double*)arg2;
- (void)_cancelDelayedFocusAutoDismiss;
- (struct CGPoint { double x1; double x2; })_centerPointForScale:(double)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 anchor:(struct CGPoint { double x1; double x2; })arg3;
- (bool)_centersPopoverIfSourceViewNotSet;
- (void)_clearCachedPopoverContentSize;
- (void)_closeScene;
- (id /* block */)_completionBlockForDismissalWhenNotifyingDelegate:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_containingFrame;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_containingFrameInsets;
- (void)_convertToSceneFromPresentingViewController:(id)arg1;
- (double)_cornerRadius;
- (void)_createHostManagerIfNeeded;
- (id)_createHostManagerPopoverWithConfiguration:(id)arg1;
- (id)_createVisualStyleForProvider:(id)arg1;
- (struct CGSize { double x1; double x2; })_currentPopoverContentSize;
- (Class)_defaultChromeViewClass;
- (struct CGSize { double x1; double x2; })_defaultPopoverSize;
- (struct CGSize { double x1; double x2; })_defaultPopoverSizeOverride;
- (long long)_defaultPresentationStyleForTraitCollection:(id)arg1;
- (id)_dimmingView;
- (double)_dimmingViewTopEdgeInset;
- (void)_dismissWithCompletion:(id /* block */)arg1;
- (double)_dismissalAnimationDuration;
- (bool)_embedsInView;
- (id)_exceptionStringForNilSourceViewOrBarButtonItem;
- (bool)_fallbackShouldDismiss;
- (bool)_focusedItemFrameIntersectsSufficientlyWithPresentedView:(id)arg1;
- (bool)_forcesPreferredAnimationControllers;
- (void)_handlePan:(id)arg1;
- (bool)_handlesKeyboardAvoidance;
- (id)_hostManagerPopoverCloseConfiguration;
- (id)_hostManagerPopoverCreationConfiguration;
- (id)_hostManagerPopoverUpdateConfiguration;
- (bool)_ignoreBarButtonItemSiblings;
- (bool)_ignoresKeyboardNotifications;
- (void)_incrementSlideTransitionCount:(bool)arg1;
- (id)_initialPresentationViewControllerForViewController:(id)arg1;
- (void)_invalidateLayoutInfo;
- (bool)_isAdaptivityEnabled;
- (bool)_isDismissing;
- (bool)_isPresenting;
- (bool)_isShimmingPopoverControllerPresentation;
- (void)_keyboardDidHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (id)_layoutInfoForCurrentKeyboardState;
- (id)_layoutInfoForCurrentKeyboardStateAndHostingWindow:(id)arg1;
- (id)_layoutInfoFromLayoutInfo:(id)arg1 forCurrentKeyboardStateAndHostingWindow:(id)arg2;
- (id)_lowerWindowDismissalGestureViews;
- (bool)_manuallyHandlesContentViewControllerAppearanceCalls;
- (id)_metrics;
- (void)_moveAwayFromTheKeyboard:(id)arg1 showing:(bool)arg2;
- (void)_observeFocusDidUpdateNotification:(id)arg1;
- (bool)_overrideAllowsHitTestingOnBackgroundViews;
- (id)_passthroughViews;
- (void)_performHierarchyCheckOnViewController:(id)arg1;
- (long long)_popoverBackgroundStyle;
- (long long)_popoverControllerStyle;
- (id)_popoverHostingWindow;
- (bool)_popoverIsDismissingBecauseDismissInteractionOccurred;
- (Class)_popoverLayoutInfoForChromeClass:(Class)arg1;
- (void)_postludeForDismissal;
- (id)_preferredAnimationControllerForDismissal;
- (id)_preferredAnimationControllerForPresentation;
- (long long)_preferredHorizontalAlignment;
- (void)_prepareForWindowDeallocRecursively:(bool)arg1;
- (double)_presentationAnimationDuration;
- (unsigned long long)_presentationEdge;
- (bool)_presentationPotentiallyUnderlapsStatusBar;
- (int)_presentationState;
- (id)_presentationView;
- (void)_presentedViewControllerUserInterfaceStyleChanged;
- (id)_presentingView;
- (void)_presentingViewControllerWindowSceneDidUpdateEffectiveGeometry:(id)arg1;
- (struct CGSize { double x1; double x2; })_proposedSize;
- (void)_realSourceViewDidChangeFromView:(id)arg1 toView:(id)arg2;
- (void)_realSourceViewGeometryDidChange;
- (void)_resetSlideTransitionCount;
- (bool)_retainsSelfWhilePresented;
- (void)_scrollViewDidEndDragging:(id)arg1;
- (void)_scrollViewWillBeginDragging:(id)arg1;
- (void)_sendDelegateWillRepositionToRect;
- (void)_sendFallbackDidDismiss;
- (void)_sendFallbackWillDismiss;
- (void)_setAdaptivityEnabled:(bool)arg1;
- (void)_setAllowDismissalTapsToPassThrough:(bool)arg1;
- (void)_setAllowsFocusInPresentingViewController:(bool)arg1;
- (void)_setAllowsSourceViewInDifferentWindowThanInitialPresentationViewController:(bool)arg1;
- (void)_setArrowOffset:(double)arg1;
- (void)_setBackgroundBlurDisabled:(bool)arg1;
- (void)_setBackgroundBlurEffectStyle:(long long)arg1;
- (void)_setCentersPopoverIfSourceViewNotSet:(bool)arg1;
- (void)_setContentViewController:(id)arg1 animated:(bool)arg2;
- (void)_setContentViewController:(id)arg1 backgroundStyle:(long long)arg2 animated:(bool)arg3;
- (void)_setCornerRadius:(double)arg1;
- (void)_setDimmingViewTopEdgeInset:(double)arg1;
- (void)_setGesturesEnabled:(bool)arg1;
- (void)_setIgnoreBarButtonItemSiblings:(bool)arg1;
- (void)_setIgnoresKeyboardNotifications:(bool)arg1;
- (void)_setLowerWindowDismissalGestureViews:(id)arg1;
- (void)_setOverrideAllowsHitTestingOnBackgroundViews:(bool)arg1;
- (void)_setPopoverBackgroundStyle:(long long)arg1;
- (void)_setPopoverFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 animated:(bool)arg2 coordinator:(id)arg3;
- (void)_setPopoverView:(id)arg1;
- (void)_setPreferredHorizontalAlignment:(long long)arg1;
- (void)_setPresentationEdge:(unsigned long long)arg1;
- (void)_setPresentationState:(int)arg1;
- (void)_setPresentingView:(id)arg1;
- (void)_setRetainsSelfWhilePresented:(bool)arg1;
- (void)_setShouldDimPresentingViewTint:(bool)arg1;
- (void)_setShouldDisableInteractionDuringTransitions:(bool)arg1;
- (void)_setShouldHideArrow:(bool)arg1;
- (void)_setShouldPreserveFirstResponder:(bool)arg1;
- (void)_setSoftAssertWhenNoSourceViewOrBarButtonItemSpecified:(bool)arg1;
- (void)_setSourceOverlayView:(id)arg1;
- (void)_setSourceOverlayViewConstraints:(id)arg1;
- (void)_setTargetRectView:(id)arg1;
- (bool)_shouldAutoDismissOnFocusedItemIntersection;
- (bool)_shouldConvertToScene;
- (bool)_shouldDimPresentingViewTint;
- (bool)_shouldDisableInteractionDuringTransitions;
- (bool)_shouldHideArrow;
- (bool)_shouldKeepCurrentFirstResponder;
- (bool)_shouldOccludeDuringPresentation;
- (bool)_shouldPopoverContentExtendOverArrowForViewController:(id)arg1 backgroundViewClass:(Class)arg2;
- (bool)_shouldPresentedViewControllerControlStatusBarAppearance;
- (bool)_shouldPresentedViewControllerServeAsBaseForScrollToTop;
- (bool)_shouldPreserveFirstResponder;
- (bool)_shouldUseNewPopoverAnimations;
- (unsigned long long)_slideTransitionCount;
- (bool)_softAssertWhenNoSourceViewOrBarButtonItemSpecified;
- (id)_sourceOverlayView;
- (id)_sourceOverlayViewConstraints;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_sourceRectInContainerView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_sourceRectInCoordinateSpace:(id)arg1;
- (void)_startWatchingForKeyboardNotificationsIfNecessary;
- (void)_startWatchingForScrollViewNotifications;
- (void)_stopWatchingForKeyboardNotifications;
- (void)_stopWatchingForNotifications;
- (void)_stopWatchingForScrollViewNotifications;
- (id)_targetRectView;
- (void)_transitionFromDidEnd;
- (void)_transitionFromViewController:(id)arg1 toViewController:(id)arg2 animated:(bool)arg3;
- (void)_transitionFromWillBegin;
- (void)_transitionToDidEnd;
- (void)_transitionToWillBegin;
- (void)_updateShouldObserveFocusUpdateNotification:(bool)arg1;
- (void)_updateSourceOverlayViewConstraints;
- (id)adaptiveSheetPresentationController;
- (id)arrowBackgroundColor;
- (unsigned long long)arrowDirection;
- (id)backgroundColor;
- (bool)canOverlapSourceViewRect;
- (void)containerViewWillLayoutSubviews;
- (void)dealloc;
- (id)dimmingView;
- (bool)dimmingViewWasTapped:(id)arg1 withDismissCompletion:(id /* block */)arg2;
- (void)dismissalTransitionDidEnd:(bool)arg1;
- (void)dismissalTransitionWillBegin;
- (bool)dismissesOnRotation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameOfPresentedViewInContainerView;
- (id)init;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (bool)isPopoverVisible;
- (bool)isPresentingOrDismissing;
- (id)passthroughViews;
- (unsigned long long)permittedArrowDirections;
- (unsigned long long)popoverArrowDirection;
- (Class)popoverBackgroundViewClass;
- (struct CGSize { double x1; double x2; })popoverContentSize;
- (bool)popoverDimmingViewDidReceiveDismissalInteraction:(id)arg1;
- (bool)popoverDimmingViewShouldAllowInteraction:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })popoverLayoutMargins;
- (id)popoverView;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (id)preferredLayoutInfo;
- (long long)presentationStyle;
- (void)presentationTransitionDidEnd:(bool)arg1;
- (void)presentationTransitionWillBegin;
- (id)presentedView;
- (id)retainedSelf;
- (void)setArrowBackgroundColor:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setCanOverlapSourceViewRect:(bool)arg1;
- (void)setDimmingView:(id)arg1;
- (void)setDismissesOnRotation:(bool)arg1;
- (void)setPassthroughViews:(id)arg1;
- (void)setPermittedArrowDirections:(unsigned long long)arg1;
- (void)setPopoverArrowDirection:(unsigned long long)arg1;
- (void)setPopoverBackgroundViewClass:(Class)arg1;
- (void)setPopoverContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPopoverContentSize:(struct CGSize { double x1; double x2; })arg1 animated:(bool)arg2;
- (void)setPopoverFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 animated:(bool)arg2;
- (void)setPopoverLayoutMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPreferredLayoutInfo:(id)arg1;
- (void)setRetainedSelf:(id)arg1;
- (void)setShowsOrientationMarker:(bool)arg1;
- (void)setShowsPresentationArea:(bool)arg1;
- (void)setShowsTargetRect:(bool)arg1;
- (void)set_defaultPopoverSizeOverride:(struct CGSize { double x1; double x2; })arg1;
- (void)set_ignoreBarButtonItemSiblings:(bool)arg1;
- (id)shadowView;
- (bool)shouldPresentInFullscreen;
- (bool)showsOrientationMarker;
- (bool)showsPresentationArea;
- (bool)showsTargetRect;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

// Image: /System/Library/PrivateFrameworks/WorkflowUICore.framework/WorkflowUICore

- (void)wf_forcePresentationInPresenterSceneIfNeeded;

@end