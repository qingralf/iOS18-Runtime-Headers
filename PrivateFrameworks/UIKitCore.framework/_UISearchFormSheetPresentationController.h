/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UISearchFormSheetPresentationController : UIPresentationController <_UISearchControllerPresenting> {
    _UISearchPresentationAssistant * _assistant;
    UIView * _wrapperView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  finalFrameForContainerView;
}

@property (nonatomic, readonly) UIPresentationController<_UISearchControllerPresenting> *adaptivePresentationController;
@property (nonatomic, readonly) bool animatorShouldLayoutPresentationViews;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long edgeForHidingNavigationBar;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } finalFrameForContainerView;
@property (nonatomic, readonly) bool forceObeyNavigationBarInsets;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double resultsControllerContentOffset;
@property (nonatomic, readonly) bool resultsUnderlapsSearchBar;
@property (nonatomic, readonly) bool searchBarCanContainScopeBar;
@property (nonatomic, readonly, retain) UIView *searchBarContainerView;
@property (nonatomic, readonly) bool searchBarShouldClipToBounds;
@property (nonatomic, readonly) bool searchBarToBecomeTopAttached;
@property (nonatomic, readonly) bool shouldAccountForStatusBar;
@property (nonatomic, readonly) double statusBarAdjustment;
@property (readonly) Class superclass;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameOfPresentedViewControllerViewInSuperview;
- (void)_horizontalSizeClassChanged;
- (id)_presentationControllerForTraitCollection:(id)arg1;
- (void)_presentedView:(id)arg1 enableFormSheetAccoutrements:(bool)arg2;
- (id)_presentedViewControllerForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (bool)_shouldKeepCurrentFirstResponder;
- (bool)_shouldRespectDefinesPresentationContext;
- (bool)_shouldSubscribeToKeyboardNotifications;
- (void)_transitionFromDidEnd;
- (void)_transitionFromWillBegin;
- (void)_transitionToDidEnd;
- (void)_transitionToPresentationController:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)_transitionToWillBegin;
- (id)adaptivePresentationController;
- (long long)adaptivePresentationStyle;
- (bool)animatorShouldLayoutPresentationViews;
- (void)containerViewWillLayoutSubviews;
- (void)dealloc;
- (void)dismissalTransitionDidEnd:(bool)arg1;
- (void)dismissalTransitionWillBegin;
- (unsigned long long)edgeForHidingNavigationBar;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })finalFrameForContainerView;
- (bool)forceObeyNavigationBarInsets;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameOfPresentedViewInContainerView;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)presentationTransitionDidEnd:(bool)arg1;
- (void)presentationTransitionWillBegin;
- (id)presentedView;
- (double)resultsControllerContentOffset;
- (bool)resultsUnderlapsSearchBar;
- (bool)searchBarCanContainScopeBar;
- (id)searchBarContainerView;
- (bool)searchBarShouldClipToBounds;
- (bool)searchBarToBecomeTopAttached;
- (void)setContentVisible:(bool)arg1;
- (bool)shouldAccountForStatusBar;
- (double)statusBarAdjustment;

@end
