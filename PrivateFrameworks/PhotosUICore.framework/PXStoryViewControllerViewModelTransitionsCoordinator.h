/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXStoryViewControllerViewModelTransitionsCoordinator : PXStoryController {
    UIImpactFeedbackGenerator * _dismissalFeedbackGenerator;
    PXNumberAnimator * _dismissalPreviewFraction;
    PXGViewControllerTransition * _dismissalTransition;
    PXRegionOfInterest * _fullsizeContentBoundingBox;
    bool  _isDismisallTriggered;
    bool  _isDismissalPreviewFractionInitialized;
    bool  _isFinishingDismissal;
    bool  _isPreparedForDismissal;
    bool  _shouldFinish;
    UIViewController * _viewController;
    PXStoryViewModeTransition * _viewModeTransition;
    double  _viewModeTransitionStartTime;
    PXStoryViewModel * _viewModel;
}

@property (nonatomic, retain) UIImpactFeedbackGenerator *dismissalFeedbackGenerator;
@property (nonatomic, readonly) PXNumberAnimator *dismissalPreviewFraction;
@property (nonatomic, retain) PXGViewControllerTransition *dismissalTransition;
@property (nonatomic, retain) PXRegionOfInterest *fullsizeContentBoundingBox;
@property (nonatomic) bool isDismisallTriggered;
@property (nonatomic) bool isDismissalPreviewFractionInitialized;
@property (nonatomic) bool isFinishingDismissal;
@property (nonatomic) bool isPreparedForDismissal;
@property (nonatomic) bool shouldFinish;
@property (nonatomic, readonly) UIViewController *viewController;
@property (nonatomic, retain) PXStoryViewModeTransition *viewModeTransition;
@property (nonatomic) double viewModeTransitionStartTime;
@property (nonatomic, readonly) PXStoryViewModel *viewModel;

- (void).cxx_destruct;
- (void)_dismissalTransition:(id)arg1 didEnd:(bool)arg2;
- (void)_endDismissal:(bool)arg1;
- (void)_forceDismissViewController;
- (void)_handleViewModeTransitionStartDelay;
- (void)_invalidateDesiredDismissalState;
- (void)_invalidateFractionCompleted;
- (void)_invalidateFullsizeContentBoundingBox;
- (void)_invalidateShouldFinish;
- (void)_invalidateSummaryItemPlacementOverride;
- (void)_invalidateSwipeDownDismissalPreview;
- (void)_invalidateSwipeDownTriggeringDismissal;
- (void)_invalidateViewControllerDismissalTargetPlacement;
- (void)_invalidateViewModeTransition;
- (void)_tryDismissingViewController;
- (void)_updateDesiredDismissalState;
- (void)_updateFractionCompleted;
- (void)_updateFullsizeContentBoundingBox;
- (void)_updateShouldFinish;
- (void)_updateSummaryItemPlacementOverride;
- (void)_updateSwipeDownDismissalPreview;
- (void)_updateSwipeDownTriggeringDismissal;
- (void)_updateViewControllerDismissalTargetPlacement;
- (void)_updateViewModeTransition;
- (void)configureUpdater:(id)arg1;
- (id)dismissalFeedbackGenerator;
- (id)dismissalPreviewFraction;
- (id)dismissalTransition;
- (id)fullsizeContentBoundingBox;
- (void)handleModelChange:(unsigned long long)arg1;
- (id)initWithObservableModel:(id)arg1;
- (id)initWithViewModel:(id)arg1 viewController:(id)arg2;
- (bool)isDismisallTriggered;
- (bool)isDismissalPreviewFractionInitialized;
- (bool)isFinishingDismissal;
- (bool)isPreparedForDismissal;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)setDismissalFeedbackGenerator:(id)arg1;
- (void)setDismissalTransition:(id)arg1;
- (void)setFullsizeContentBoundingBox:(id)arg1;
- (void)setIsDismisallTriggered:(bool)arg1;
- (void)setIsDismissalPreviewFractionInitialized:(bool)arg1;
- (void)setIsFinishingDismissal:(bool)arg1;
- (void)setIsPreparedForDismissal:(bool)arg1;
- (void)setShouldFinish:(bool)arg1;
- (void)setViewModeTransition:(id)arg1;
- (void)setViewModeTransitionStartTime:(double)arg1;
- (bool)shouldFinish;
- (id)viewController;
- (id)viewModeTransition;
- (double)viewModeTransitionStartTime;
- (id)viewModel;

@end
