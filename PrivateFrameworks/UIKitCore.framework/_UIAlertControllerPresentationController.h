/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIAlertControllerPresentationController : UIPresentationController <UIAdaptivePresentationControllerDelegate, UIForcePresentationController> {
    bool  __isCurrentContext;
    bool  __shouldRespectNearestCurrentContextPresenter;
    NSLayoutConstraint * _bottomAvailableSpaceConstraint;
    bool  _chromeHidden;
    UIView * _dimmingView;
    _UIStatesFeedbackGenerator * _feedbackGenerator;
    <_UIForcePresentationControllerDelegate> * _forcePresentationControllerDelegate;
    UIGestureRecognizer * _panningGestureRecognizer;
    id /* block */  _presentationPhaseCompletionBlock;
    UIView * _revealContainerView;
    bool  _sourceViewSnapshotAndScaleTransformSuppressed;
    NSLayoutConstraint * _topAvailableSpaceConstraint;
    UIAlertVisualStyleUpdatableConstraints * _visualStyleUpdatableConstraints;
    bool  constraintsPrepared;
    UIView * keyboardLayoutAlignmentAvailableSpaceView;
    _UIKeyboardLayoutAlignmentView * keyboardLayoutAlignmentView;
}

@property (getter=_isChromeHidden, setter=_setChromeHidden:, nonatomic) bool _chromeHidden;
@property (readonly) UIView *_dimmingView;
@property (setter=_setIsCurrentContext:) bool _isCurrentContext;
@property (nonatomic, readonly) UIView *_revealContainerView;
@property (setter=_setShouldRespectNearestCurrentContextPresenter:) bool _shouldRespectNearestCurrentContextPresenter;
@property (nonatomic) bool _sourceViewSnapshotAndScaleTransformSuppressed;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _UIStatesFeedbackGenerator *feedbackGenerator;
@property (nonatomic) <_UIForcePresentationControllerDelegate> *forcePresentationControllerDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIGestureRecognizer *panningGestureRecognizer;
@property (nonatomic, copy) id /* block */ presentationPhaseCompletionBlock;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canCommitPresentation;
- (bool)_canDismissPresentation;
- (id)_createVisualStyleForProvider:(id)arg1;
- (id)_dimmingView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForTransitionViewInPresentationSuperview:(id)arg1;
- (bool)_isChromeHidden;
- (bool)_isCurrentContext;
- (bool)_keyboardShouldAnimateAlongsideForInteractiveTransitions;
- (void)_prepareConstraintsIfNecessary;
- (void)_prepareDimmingViewIfNecessary;
- (id)_presentedAlertController;
- (void)_presentedAlertControllerDidAdapt;
- (bool)_preserveResponderAcrossWindows;
- (id)_revealContainerView;
- (void)_setChromeHidden:(bool)arg1;
- (void)_setIsCurrentContext:(bool)arg1;
- (void)_setShouldRespectNearestCurrentContextPresenter:(bool)arg1;
- (bool)_shouldOccludeDuringPresentation;
- (bool)_shouldRespectDefinesPresentationContext;
- (bool)_shouldRespectNearestCurrentContextPresenter;
- (bool)_sourceViewSnapshotAndScaleTransformSuppressed;
- (void)_updateConstraintsIfNecessary;
- (void)_willRunTransitionForCurrentStateDeferred:(bool)arg1;
- (long long)adaptivePresentationStyle;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (void)containerViewDidLayoutSubviews;
- (void)containerViewWillLayoutSubviews;
- (id)feedbackGenerator;
- (id)forcePresentationControllerDelegate;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (id)panningGestureRecognizer;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (id)presentationController:(id)arg1 viewControllerForAdaptivePresentationStyle:(long long)arg2;
- (id /* block */)presentationPhaseCompletionBlock;
- (void)presentationTransitionWillBegin;
- (void)setDelegate:(id)arg1;
- (void)setFeedbackGenerator:(id)arg1;
- (void)setForcePresentationControllerDelegate:(id)arg1;
- (void)setPanningGestureRecognizer:(id)arg1;
- (void)setPresentationPhaseCompletionBlock:(id /* block */)arg1;
- (void)set_sourceViewSnapshotAndScaleTransformSuppressed:(bool)arg1;
- (bool)shouldPresentInFullscreen;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
