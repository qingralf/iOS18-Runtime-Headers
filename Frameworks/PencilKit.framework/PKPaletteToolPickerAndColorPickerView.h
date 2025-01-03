/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

@interface PKPaletteToolPickerAndColorPickerView : UIView <PKPaletteEdgeLocating, PKPalettePopoverDismissing, PKPaletteViewSizeScaling> {
    PKPaletteColorPickerContainerView * _colorPickerContainerView;
    NSLayoutConstraint * _compactColorPickerContainerViewHeightConstraint;
    NSLayoutConstraint * _compactColorPickerContainerViewWidthConstraint;
    NSLayoutConstraint * _compactToolPickerContainerViewHeightConstraint;
    NSLayoutConstraint * _compactToolPickerContainerViewWidthConstraint;
    long long  _contextEditingMode;
    unsigned long long  _cornerLocation;
    unsigned long long  _edgeLocation;
    bool  _inputAssistantViewVisible;
    bool  _isSmallestSupportedCompactWidth;
    UIView * _lassoToolEditingContainerView;
    NSLayoutConstraint * _lassoToolEditingContainerViewCompactHeightConstraint;
    NSLayoutConstraint * _lassoToolEditingContainerViewCompactWidthConstraint;
    NSLayoutConstraint * _lassoToolEditingContainerViewHeightConstraint;
    NSLayoutConstraint * _lassoToolEditingContainerViewWidthConstraint;
    UIView * _lassoToolEditingView;
    NSMutableDictionary * _lassoToolEditingViewForIdentifierTable;
    UIView * _lassoToolEditingViewForNilIdentifier;
    NSString * _lassoToolEditingViewIdentifier;
    bool  _lassoToolEditingViewVisible;
    PKDrawingPaletteInputAssistantView * _paletteInputAssistantView;
    double  _scalingFactor;
    UIStackView * _stackView;
    PKPaletteToolPickerContainerView * _toolPickerContainerView;
    NSLayoutConstraint * _toolPickerContainerViewHeightConstraint;
    NSLayoutConstraint * _toolPickerContainerViewWidthConstraint;
    bool  _wantsColorPickerContainerViewInHierarchy;
}

@property (nonatomic, retain) PKPaletteColorPickerContainerView *colorPickerContainerView;
@property (nonatomic, readonly) PKPaletteColorPickerView *colorPickerView;
@property (nonatomic, retain) NSLayoutConstraint *compactColorPickerContainerViewHeightConstraint;
@property (nonatomic, retain) NSLayoutConstraint *compactColorPickerContainerViewWidthConstraint;
@property (nonatomic, retain) NSLayoutConstraint *compactToolPickerContainerViewHeightConstraint;
@property (nonatomic, retain) NSLayoutConstraint *compactToolPickerContainerViewWidthConstraint;
@property (nonatomic) long long contextEditingMode;
@property (nonatomic) unsigned long long cornerLocation;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long edgeLocation;
@property (readonly) unsigned long long hash;
@property (getter=isInputAssistantViewVisible, nonatomic) bool inputAssistantViewVisible;
@property (nonatomic) bool isSmallestSupportedCompactWidth;
@property (nonatomic, retain) UIView *lassoToolEditingContainerView;
@property (nonatomic, retain) NSLayoutConstraint *lassoToolEditingContainerViewCompactHeightConstraint;
@property (nonatomic, retain) NSLayoutConstraint *lassoToolEditingContainerViewCompactWidthConstraint;
@property (nonatomic, retain) NSLayoutConstraint *lassoToolEditingContainerViewHeightConstraint;
@property (nonatomic, retain) NSLayoutConstraint *lassoToolEditingContainerViewWidthConstraint;
@property (nonatomic, readonly) UIView *lassoToolEditingView;
@property (nonatomic, copy) NSString *lassoToolEditingViewIdentifier;
@property (getter=isLassoToolEditingViewVisible, nonatomic) bool lassoToolEditingViewVisible;
@property (nonatomic, readonly) PKDrawingPaletteInputAssistantView *paletteInputAssistantView;
@property (nonatomic) double scalingFactor;
@property (nonatomic, retain) UIStackView *stackView;
@property (readonly) Class superclass;
@property (nonatomic, retain) PKPaletteToolPickerContainerView *toolPickerContainerView;
@property (nonatomic, retain) NSLayoutConstraint *toolPickerContainerViewHeightConstraint;
@property (nonatomic, retain) NSLayoutConstraint *toolPickerContainerViewWidthConstraint;
@property (nonatomic, readonly) PKPaletteToolPickerView *toolPickerView;
@property (nonatomic) bool wantsColorPickerContainerViewInHierarchy;

- (void).cxx_destruct;
- (double)_compactToolsContainerWidth;
- (bool)_hasColorPickerContainerView;
- (double)_stackViewSpacing;
- (void)_updateUI;
- (bool)_useCompactSize;
- (id)colorPickerContainerView;
- (id)colorPickerView;
- (id)compactColorPickerContainerViewHeightConstraint;
- (id)compactColorPickerContainerViewWidthConstraint;
- (id)compactToolPickerContainerViewHeightConstraint;
- (id)compactToolPickerContainerViewWidthConstraint;
- (long long)contextEditingMode;
- (unsigned long long)cornerLocation;
- (void)dismissPalettePopoverWithCompletion:(id /* block */)arg1;
- (unsigned long long)edgeLocation;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)init;
- (bool)isInputAssistantViewVisible;
- (bool)isLassoToolEditingViewVisible;
- (bool)isSmallestSupportedCompactWidth;
- (id)lassoToolEditingContainerView;
- (id)lassoToolEditingContainerViewCompactHeightConstraint;
- (id)lassoToolEditingContainerViewCompactWidthConstraint;
- (id)lassoToolEditingContainerViewHeightConstraint;
- (id)lassoToolEditingContainerViewWidthConstraint;
- (id)lassoToolEditingView;
- (id)lassoToolEditingViewIdentifier;
- (id)paletteInputAssistantView;
- (double)scalingFactor;
- (void)setColorPickerContainerView:(id)arg1;
- (void)setCompactColorPickerContainerViewHeightConstraint:(id)arg1;
- (void)setCompactColorPickerContainerViewWidthConstraint:(id)arg1;
- (void)setCompactToolPickerContainerViewHeightConstraint:(id)arg1;
- (void)setCompactToolPickerContainerViewWidthConstraint:(id)arg1;
- (void)setContextEditingMode:(long long)arg1;
- (void)setCornerLocation:(unsigned long long)arg1;
- (void)setEdgeLocation:(unsigned long long)arg1;
- (void)setInputAssistantViewVisible:(bool)arg1;
- (void)setIsSmallestSupportedCompactWidth:(bool)arg1;
- (void)setLassoToolEditingContainerView:(id)arg1;
- (void)setLassoToolEditingContainerViewCompactHeightConstraint:(id)arg1;
- (void)setLassoToolEditingContainerViewCompactWidthConstraint:(id)arg1;
- (void)setLassoToolEditingContainerViewHeightConstraint:(id)arg1;
- (void)setLassoToolEditingContainerViewWidthConstraint:(id)arg1;
- (void)setLassoToolEditingViewIdentifier:(id)arg1;
- (void)setLassoToolEditingViewVisible:(bool)arg1;
- (void)setScalingFactor:(double)arg1;
- (void)setStackView:(id)arg1;
- (void)setToolPickerContainerView:(id)arg1;
- (void)setToolPickerContainerViewHeightConstraint:(id)arg1;
- (void)setToolPickerContainerViewWidthConstraint:(id)arg1;
- (void)setWantsColorPickerContainerViewInHierarchy:(bool)arg1;
- (id)stackView;
- (id)toolPickerContainerView;
- (id)toolPickerContainerViewHeightConstraint;
- (id)toolPickerContainerViewWidthConstraint;
- (id)toolPickerView;
- (void)traitCollectionDidChange:(id)arg1;
- (bool)wantsColorPickerContainerViewInHierarchy;

@end
