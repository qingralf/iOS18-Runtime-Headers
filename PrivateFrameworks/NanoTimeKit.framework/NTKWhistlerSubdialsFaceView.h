/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKit.framework/NanoTimeKit
 */

@interface NTKWhistlerSubdialsFaceView : NTKFaceView <CLKMonochromeFilterProvider, CLKSensitiveUIStateObserver, NTKRichComplicationRectangularBaseViewDelegate> {
    unsigned long long  _backgroundStyle;
    NSCache * _backgroundSwatchesCache;
    NTKMonochromeModel * _bottomFilterProvider;
    NTKMonochromeModel * _centerFilterProvider;
    NSArray * _complicationPlaceholderViews;
    NTKGradientComposedView * _composedView;
    NTKInterpolatedColorPalette * _editingComplicationsPalette;
    double  _monochromeFraction;
    unsigned long long  _numberSystem;
    double  _paletteTritiumFraction;
    double  _scaleFactor;
    NSCache * _styleSwatchesCache;
    NTKFace * _swatchesFace;
    NTKFaceViewController * _swatchesFaceViewController;
    UIView * _timeViewContainerView;
    double  _tintedFraction;
    NTKMonochromeModel * _topFilterProvider;
}

@property unsigned long long backgroundStyle;
@property (nonatomic, readonly) NSCache *backgroundSwatchesCache;
@property (nonatomic, readonly) NTKMonochromeModel *bottomFilterProvider;
@property (nonatomic, readonly) NTKMonochromeModel *centerFilterProvider;
@property (nonatomic, readonly) NSArray *complicationPlaceholderViews;
@property (retain) NTKGradientComposedView *composedView;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (retain) NTKInterpolatedColorPalette *editingComplicationsPalette;
@property (readonly) unsigned long long hash;
@property double monochromeFraction;
@property double scaleFactor;
@property (nonatomic, readonly) bool showGossamerUI;
@property (nonatomic, readonly) NSCache *styleSwatchesCache;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NTKFace *swatchesFace;
@property (nonatomic, readonly) NTKFaceViewController *swatchesFaceViewController;
@property double tintedFraction;
@property (nonatomic, readonly) NTKMonochromeModel *topFilterProvider;

+ (id)_swatchForEditModeDependsOnOptions:(long long)arg1 forDevice:(id)arg2;

- (void).cxx_destruct;
- (void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyColorsFromPalette:(id)arg1;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyTransitionFraction:(double)arg1 fromNumeralOption:(unsigned long long)arg2 toNumeralOption:(unsigned long long)arg3;
- (void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5;
- (void)_applyTransitionFraction:(double)arg1 fromPalette:(id)arg2 toPalette:(id)arg3;
- (void)_cleanupAfterEditing;
- (double)_complicationAlphaForEditMode:(long long)arg1;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (void)_configureForEditMode:(long long)arg1;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (id)_filterProviderForSlot:(id)arg1;
- (double)_horizontalPaddingForStatusBar;
- (bool)_isAnalog;
- (double)_keylineCornerRadiusForComplicationSlot:(id)arg1;
- (unsigned long long)_keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (long long)_keylineStyleForComplicationSlot:(id)arg1;
- (id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (void)_loadLayoutRules;
- (void)_loadSnapshotContentViews;
- (double)_minimumBreathingScaleForComplicationSlot:(id)arg1;
- (id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (void)_prepareForEditing;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_relativeKeylineFrameForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (void)_removeDialView;
- (id)_renderDialSwatchImageForStyle:(unsigned long long)arg1 colorOption:(id)arg2;
- (void)_setNumerals:(unsigned long long)arg1;
- (void)_setupDialView;
- (id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3;
- (double)_timeViewAlphaForEditMode:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_timeViewFrameRelativeToFaceView;
- (void)_unloadSnapshotContentViews;
- (double)_verticalPaddingForStatusBar;
- (bool)_wantsStatusBarIconShadow;
- (unsigned long long)backgroundStyle;
- (id)backgroundSwatchesCache;
- (id)bottomFilterProvider;
- (id)centerFilterProvider;
- (id)complicationPlaceholderViews;
- (id)composedView;
- (id)createFaceColorPalette;
- (void)dealloc;
- (id)dialView;
- (id)editingComplicationsPalette;
- (id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3;
- (void)layoutSubviews;
- (void)loadComplicationPlaceholderViews;
- (double)monochromeFraction;
- (void)rectangularViewDidBecomeInteractive:(id)arg1;
- (void)rectangularViewDidEndInteractive:(id)arg1;
- (double)scaleFactor;
- (void)sensitiveUIStateChanged;
- (void)setBackgroundStyle:(unsigned long long)arg1;
- (void)setComposedView:(id)arg1;
- (void)setEditingComplicationsPalette:(id)arg1;
- (void)setMonochromeFraction:(double)arg1;
- (void)setScaleFactor:(double)arg1;
- (void)setTintedFraction:(double)arg1;
- (bool)showGossamerUI;
- (id)styleSwatchesCache;
- (id)swatchesFace;
- (id)swatchesFaceViewController;
- (double)tintedFraction;
- (id)topFilterProvider;
- (void)updateMonochromeColorForRichComplicationView:(id)arg1;
- (void)updateWithColorPalette:(id)arg1;

@end
