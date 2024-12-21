/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUIPrivate.framework/PhotosUIPrivate
 */

@interface PhotosUIPrivate.PUPhotoStyleToolController : PUPhotoEditToolController <CEKWheelScrubberViewDelegate> {
    void adjustmentLabelConstraints;
    void castIntensitySlider;
    void controlView;
    void creativeStyleCollections;
    void dPad;
    void expandedPadPulsingTimer;
    void hasShownPadPulsing;
    void impactGenerator;
    void isDraggingScrubberView;
    void isShowingOriginal;
    void labelValueFormatter;
    void labelsView;
    void lastdPadCollapsedFrame;
    void overlayPadMap;
    void overlayPadPulsingTimer;
    void padDismissAnimator;
    void padDismissalMediaViewGestureRecognizer;
    void padDismissalToolViewGestureRecognizer;
    void padRevealAnimator;
    void scrubberImageSources;
    void scrubberThumbnailsDimension;
    void scrubberThumbnailsSize;
    void scrubberView;
    void standardStyleCollections;
    void staticDottedGridImage;
    void styleLabel;
    void styleLabelConstraints;
    void styleLabelHeightConstraint;
    void styleLabelWidthConstraint;
    void styleSectionLabel;
    void styleSectionLabelConstraints;
    void styleSectionLabelTargetAlpha;
    void styleSectionLabelVisibilityTimer;
    void swipeDownGestureRecognizer;
    void systemStyleCollections;
    void thumbnailsBaseCompositionController;
    void toggleOriginalCustomGesture;
    void toolConstraints;
    void toolTitleLabel;
    void viewMode;
    void viewModel;
}

@property (nonatomic, readonly) UIView *centerToolbarView;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) NSString *selectedToolbarIconGlyphName;
@property (nonatomic, readonly) long long toolControllerTag;
@property (nonatomic, readonly) NSString *toolbarIconAccessibilityLabel;
@property (nonatomic, readonly) NSString *toolbarIconGlyphName;
@property (nonatomic, readonly) bool wantsFullscreen;
@property (nonatomic, readonly) bool wantsScrubberKeyControl;
@property (nonatomic, readonly) bool wantsShadowViews;
@property (nonatomic, readonly) bool wantsTapToToggleOriginalEnabled;
@property (nonatomic, readonly) bool wantsZoomAndPanEnabled;

- (void).cxx_destruct;
- (void)castIntensityInteractionDidBegin;
- (void)castIntensityInteractionDidEnd;
- (id)centerToolbarView;
- (void)compositionControllerDidChangeForAdjustments:(id)arg1;
- (void)decreaseScrubberValue:(bool)arg1;
- (void)didResignActiveTool;
- (id)disabledToolAlertTitle;
- (void)handleCastIntensitySliderValueChangedTo:(double)arg1;
- (void)handlePadDismissalWithGestureRecognizer:(id)arg1;
- (void)handlePadValueChangedWithSlider:(id)arg1;
- (void)handleToggleOriginalWithGestureRecognizer:(id)arg1;
- (void)increaseScrubberValue:(bool)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (id)localizedName;
- (void)mediaView:(id)arg1 didZoom:(double)arg2;
- (void)mediaViewIsReady;
- (void)ppt_selectWithStyle:(id)arg1;
- (void)previewingOriginalDidStart;
- (void)previewingOriginalDidStop;
- (void)reactivate;
- (id)selectedToolbarIconGlyphName;
- (void)setLayoutOrientation:(long long)arg1 withTransitionCoordinator:(id)arg2;
- (void)setupWithAsset:(id)arg1 compositionController:(id)arg2 editSource:(id)arg3 valuesCalculator:(id)arg4;
- (bool)shouldObserveGenericFocusingViewForInteractionDelay;
- (bool)shouldSlideMainToolbarOutOfScreenWhenFocusingForInteractionIfApplicable;
- (bool)supportsGesturesOfType:(unsigned long long)arg1;
- (long long)toolControllerTag;
- (id)toolbarIconAccessibilityLabel;
- (id)toolbarIconGlyphName;
- (void)updateViewConstraints;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (bool)wantsFullscreen;
- (bool)wantsScrubberKeyControl;
- (bool)wantsShadowViews;
- (bool)wantsTapToToggleOriginalEnabled;
- (bool)wantsZoomAndPanEnabled;
- (void)wheelScrubberView:(id)arg1 didTapOnSelectedCellWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (long long)wheelScrubberView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)wheelScrubberView:(id)arg1 updateCell:(id)arg2 forItemAtIndex:(long long)arg3;
- (void)wheelScrubberViewDidChangeSelectedIndex:(id)arg1;
- (void)wheelScrubberViewDidEndDragging:(id)arg1;
- (void)wheelScrubberViewDidEndScrolling:(id)arg1;
- (long long)wheelScrubberViewNumberOfSections:(id)arg1;
- (void)wheelScrubberViewWillBeginDragging:(id)arg1;
- (void)wheelScrubberViewWillBeginScrolling:(id)arg1;
- (void)willBecomeActiveTool;
- (void)willBecomeEnabled;
- (void)willResignActiveTool;

@end