/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

@interface PKPaletteToolPreview : UIView <PKPaletteColorPickerControllerDelegate, PKPaletteEdgeLocating, PKPalettePopoverDismissing, PKPaletteViewSizeScaling, UIPopoverPresentationControllerDelegate> {
    <PKPaletteColorPickerController> * _colorPickerController;
    long long  _colorUserInterfaceStyle;
    unsigned long long  _cornerLocation;
    <PKPalettePopoverPresenting><PKPaletteToolPreviewDelegate> * _delegate;
    unsigned long long  _edgeLocation;
    UILayoutGuide * _layoutGuide;
    NSLayoutConstraint * _layoutGuideCenterXConstraint;
    NSLayoutConstraint * _layoutGuideHeightConstraint;
    NSLayoutConstraint * _layoutGuideTopConstraint;
    NSLayoutConstraint * _layoutGuideWidthConstraint;
    NSString * _localeIdentifier;
    double  _scalingFactor;
    PKPaletteToolView * _toolView;
    NSLayoutConstraint * _toolViewHeightAnchor;
    NSLayoutConstraint * _toolViewTopAnchor;
    bool  _toolViewVisible;
}

@property (nonatomic, retain) <PKPaletteColorPickerController> *colorPickerController;
@property (nonatomic) long long colorUserInterfaceStyle;
@property (nonatomic) unsigned long long cornerLocation;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <PKPalettePopoverPresenting><PKPaletteToolPreviewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long edgeLocation;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UILayoutGuide *layoutGuide;
@property (nonatomic, retain) NSLayoutConstraint *layoutGuideCenterXConstraint;
@property (nonatomic, retain) NSLayoutConstraint *layoutGuideHeightConstraint;
@property (nonatomic, retain) NSLayoutConstraint *layoutGuideTopConstraint;
@property (nonatomic, retain) NSLayoutConstraint *layoutGuideWidthConstraint;
@property (nonatomic, copy) NSString *localeIdentifier;
@property (nonatomic) double scalingFactor;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIColor *toolColor;
@property (nonatomic, retain) PKPaletteToolView *toolView;
@property (nonatomic, retain) NSLayoutConstraint *toolViewHeightAnchor;
@property (nonatomic, retain) NSLayoutConstraint *toolViewTopAnchor;
@property (getter=isToolViewVisible, nonatomic) bool toolViewVisible;

- (void).cxx_destruct;
- (void)_animateToolViewToVisible:(bool)arg1 completion:(id /* block */)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_popoverPresentingSourceRect;
- (id)_popoverPresentingSourceView;
- (void)_replaceCurrentToolWithTool:(id)arg1;
- (void)_showColorSelectionPopover;
- (double)_toolViewTopSpacing;
- (void)_updateLayoutGuideConstraints;
- (void)_updateToolViewInkingToolAttributesFromTool:(id)arg1;
- (void)_updateUI;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (id)colorPickerController;
- (void)colorPickerControllerDidChangeSelectedColor:(id)arg1 isContinuousColorSelection:(bool)arg2;
- (long long)colorUserInterfaceStyle;
- (unsigned long long)cornerLocation;
- (id)delegate;
- (void)dismissPalettePopoverWithCompletion:(id /* block */)arg1;
- (unsigned long long)edgeLocation;
- (void)flashAlternatePreviewView:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isToolViewVisible;
- (id)layoutGuide;
- (id)layoutGuideCenterXConstraint;
- (id)layoutGuideHeightConstraint;
- (id)layoutGuideTopConstraint;
- (id)layoutGuideWidthConstraint;
- (id)localeIdentifier;
- (double)scalingFactor;
- (void)setColorPickerController:(id)arg1;
- (void)setColorUserInterfaceStyle:(long long)arg1;
- (void)setCornerLocation:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEdgeLocation:(unsigned long long)arg1;
- (void)setLayoutGuide:(id)arg1;
- (void)setLayoutGuideCenterXConstraint:(id)arg1;
- (void)setLayoutGuideHeightConstraint:(id)arg1;
- (void)setLayoutGuideTopConstraint:(id)arg1;
- (void)setLayoutGuideWidthConstraint:(id)arg1;
- (void)setLocaleIdentifier:(id)arg1;
- (void)setScalingFactor:(double)arg1;
- (void)setToolView:(id)arg1;
- (void)setToolViewHeightAnchor:(id)arg1;
- (void)setToolViewTopAnchor:(id)arg1;
- (void)setToolViewVisible:(bool)arg1;
- (void)showPreviewForTool:(id)arg1 animated:(bool)arg2;
- (void)toggleColorSelectionPopover;
- (id)toolColor;
- (id)toolView;
- (id)toolViewHeightAnchor;
- (id)toolViewTopAnchor;
- (void)updateConstraints;

@end
