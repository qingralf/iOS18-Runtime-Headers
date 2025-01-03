/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKit.framework/NanoTimeKit
 */

@interface NTKUtilityComplicationView : UIView <CDComplicationDisplay, CDTemplateComplicationDisplay, NTKUtilityComplicationView> {
    UIColor * _accentColor;
    bool  _alwaysEnforcePlatterInset;
    UIImageView * _backgroundPlatter;
    NTKFaceColorScheme * _colorScheme;
    CLKComplicationTemplate * _complicationTemplate;
    double  _computedForegroundAlpha;
    UIColor * _computedForegroundColor;
    double  _computedForegroundImageAlpha;
    UIColor * _computedPlatterColor;
    CLKDevice * _device;
    bool  _editing;
    double  _editingRotationAngle;
    CLKFont * _font;
    double  _fontSize;
    double  _fontWeight;
    double  _foregroundAlpha;
    UIColor * _foregroundColor;
    double  _foregroundImageAlpha;
    UIView * _highlightView;
    bool  _highlighted;
    struct CGSize { 
        double width; 
        double height; 
    }  _maxSize;
    double  _minimumWidth;
    UIColor * _overrideColor;
    unsigned long long  _placement;
    UIColor * _platterColor;
    UIColor * _shadowColor;
    bool  _shouldScaleAndFadeWhenHighlighting;
    bool  _shouldUseBackgroundPlatter;
    bool  _suppressesInternalColorOverrides;
    unsigned long long  _textLayoutStyle;
    NSDate * _timeTravelDate;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _touchEdgeInsets;
    bool  _useAlternativePunctuation;
    bool  _useBlockyHighlightCorners;
    bool  _useRoundedFontDesign;
    bool  _usesLegibility;
    <CDComplicationDisplayObserver> * displayObserver;
}

@property (nonatomic, retain) UIColor *accentColor;
@property (nonatomic) bool alwaysEnforcePlatterInset;
@property (nonatomic, retain) UIImageView *backgroundPlatter;
@property (nonatomic, retain) NTKFaceColorScheme *colorScheme;
@property (nonatomic, readonly) CLKComplicationTemplate *complicationTemplate;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CLKDevice *device;
@property (nonatomic) <CDComplicationDisplayObserver> *displayObserver;
@property (nonatomic, readonly) bool editing;
@property (nonatomic) double editingRotationAngle;
@property (nonatomic, retain) CLKFont *font;
@property (nonatomic) double fontSize;
@property (nonatomic) double fontWeight;
@property (nonatomic) double foregroundAlpha;
@property (nonatomic, retain) UIColor *foregroundColor;
@property (nonatomic) double foregroundImageAlpha;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *highlightView;
@property (getter=isHighlighted, nonatomic) bool highlighted; /* unknown property attribute: ? */
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } maxSize;
@property (nonatomic) double minimumWidth;
@property (nonatomic, retain) UIColor *overrideColor;
@property (nonatomic) unsigned long long placement;
@property (nonatomic, retain) UIColor *platterColor;
@property (nonatomic, retain) UIColor *shadowColor;
@property (nonatomic) bool shouldScaleAndFadeWhenHighlighting;
@property (nonatomic) bool shouldUseBackgroundPlatter;
@property (nonatomic) bool shouldUseTemplateColors; /* unknown property attribute: ? */
@property (readonly) Class superclass;
@property (nonatomic) bool suppressesInternalColorOverrides;
@property (nonatomic) unsigned long long textLayoutStyle;
@property (readonly) NSDate *timeTravelDate;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } touchEdgeInsets;
@property (nonatomic) bool useAlternativePunctuation;
@property (nonatomic) bool useBlockyHighlightCorners;
@property (nonatomic) bool useRoundedFontDesign;
@property (nonatomic) bool usesLegibility;

+ (id)_alarmImageProviderActive:(bool)arg1;
+ (id)_preferredAdditionalFontSettings;
+ (id)_stopwatchImageProvider;
+ (id)_timerImageProvider;
+ (bool)handlesComplicationTemplate:(id)arg1;
+ (id)largeComplicationViewForType:(unsigned long long)arg1 narrow:(bool)arg2;
+ (long long)layoutOverride;
+ (id)smallComplicationViewForType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_applyColorScheme:(id)arg1;
- (void)_applyForegroundAlpha;
- (id)_backgroundPlatterImage;
- (void)_computeForegroundAlpha;
- (void)_computeForegroundColor;
- (void)_computeForegroundImageAlpha;
- (void)_computePlatterColor;
- (id)_computedForegroundColor;
- (id)_computedPlatterColor;
- (void)_enumerateColoringStackedImagesViewsWithBlock:(id /* block */)arg1;
- (void)_enumerateColoringViewsWithBlock:(id /* block */)arg1;
- (double)_imageViewOriginYWithBaseImageSize:(struct CGSize { double x1; double x2; })arg1 labelFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)_newCurvedCircularHighlightView;
- (id)_newCurvedPathHighlightView;
- (id)_newDigitalTimeLabelSubviewWithOptions:(unsigned long long)arg1;
- (id)_newHighlightView;
- (id)_newHighlightViewVariant:(unsigned long long)arg1;
- (id)_newImageViewSubview;
- (id)_newImageViewSubviewWithAlpha:(double)arg1;
- (id)_newLabelSubviewWithFont:(id)arg1 variant:(unsigned long long)arg2;
- (id)_newStandardCurvedLabelSubview;
- (id)_newStandardLabelSubview;
- (id)_newStandardLabelSubviewVariant:(unsigned long long)arg1;
- (id)_smallCapsFont;
- (id)_standardFont;
- (void)_updateContentForEditingChange;
- (void)_updateContentForMaxSizeChange;
- (void)_updateForTemplateChange;
- (void)_updateForegroundAlpha;
- (void)_updateForegroundColor;
- (void)_updateForegroundImageAlpha;
- (void)_updateImageViewAlpha:(id)arg1;
- (void)_updateImageViewColor:(id)arg1;
- (void)_updateLabelsForFontChange;
- (void)_updatePlatterColor;
- (double)_widthThatFits;
- (id)accentColor;
- (bool)alwaysEnforcePlatterInset;
- (void)applyFaceColorPalette:(id)arg1 units:(unsigned long long)arg2;
- (void)applyTransitionFraction:(double)arg1 fromFaceColorPalette:(id)arg2 toFaceColorPalette:(id)arg3 units:(unsigned long long)arg4 brightenedUnits:(unsigned long long)arg5;
- (id)backgroundPlatter;
- (id)colorScheme;
- (id)complicationTemplate;
- (id)device;
- (id)displayObserver;
- (bool)editing;
- (double)editingRotationAngle;
- (id)font;
- (double)fontSize;
- (double)fontWeight;
- (double)foregroundAlpha;
- (id)foregroundColor;
- (double)foregroundImageAlpha;
- (id)highlightView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isPlacementForTopBezelComplication;
- (void)layoutLabelVertically:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })maxSize;
- (double)minimumWidth;
- (id)overrideColor;
- (unsigned long long)placement;
- (id)platterColor;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setAccentColor:(id)arg1;
- (void)setAlwaysEnforcePlatterInset:(bool)arg1;
- (void)setBackgroundPlatter:(id)arg1;
- (void)setColorScheme:(id)arg1;
- (void)setComplicationTemplate:(id)arg1 reason:(long long)arg2;
- (void)setDevice:(id)arg1;
- (void)setDisplayObserver:(id)arg1;
- (void)setEditing:(bool)arg1;
- (void)setEditingRotationAngle:(double)arg1;
- (void)setFont:(id)arg1;
- (void)setFontSize:(double)arg1;
- (void)setFontWeight:(double)arg1;
- (void)setForegroundAlpha:(double)arg1;
- (void)setForegroundColor:(id)arg1;
- (void)setForegroundImageAlpha:(double)arg1;
- (void)setHighlightView:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setMaxSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setMinimumWidth:(double)arg1;
- (void)setOverrideColor:(id)arg1;
- (void)setPlacement:(unsigned long long)arg1;
- (void)setPlatterColor:(id)arg1;
- (void)setShadowColor:(id)arg1;
- (void)setShouldScaleAndFadeWhenHighlighting:(bool)arg1;
- (void)setShouldUseBackgroundPlatter:(bool)arg1;
- (void)setSuppressesInternalColorOverrides:(bool)arg1;
- (void)setTextLayoutStyle:(unsigned long long)arg1;
- (void)setTimeTravelDate:(id)arg1 animated:(bool)arg2;
- (void)setTouchEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setUseAlternativePunctuation:(bool)arg1;
- (void)setUseBlockyHighlightCorners:(bool)arg1;
- (void)setUseRoundedFontDesign:(bool)arg1;
- (void)setUsesLegibility:(bool)arg1;
- (id)shadowColor;
- (bool)shouldScaleAndFadeWhenHighlighting;
- (bool)shouldUseBackgroundPlatter;
- (bool)shouldUsePlatterInset;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)suppressesInternalColorOverrides;
- (unsigned long long)textLayoutStyle;
- (id)timeTravelDate;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })touchEdgeInsets;
- (void)traitCollectionDidChange:(id)arg1;
- (bool)useAlternativePunctuation;
- (bool)useBlockyHighlightCorners;
- (bool)useRoundedFontDesign;
- (bool)usesLegibility;

@end
