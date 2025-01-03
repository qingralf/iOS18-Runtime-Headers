/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
 */

@interface ISiOSAppRecipe : NSObject <ISCompositorRecipe, ISRecipeBackground, ISRecipeOptionalAppearance, ISRecipeOptionalBorder, ISRecipeOptionalMask, ISRecipeOptionalTintColor, ISSuppliesIconSpecification> {
    bool  _allowDarkAndTintable;
    bool  _generic;
    bool  _segment;
    bool  _templateVariant;
    long long  appearance;
    unsigned long long  background;
    bool  shouldApplyMask;
    bool  shouldDrawBorder;
    IFColor * tintColor;
}

@property (nonatomic) bool allowDarkAndTintable;
@property long long appearance;
@property unsigned long long background;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) bool generic;
@property (readonly) unsigned long long hash;
@property (readonly) IFIconSpecification *iconSpecification;
@property (nonatomic) bool segment;
@property bool shouldApplyMask;
@property bool shouldDrawBorder;
@property (readonly) Class superclass;
@property (nonatomic) bool templateVariant;
@property (retain) IFColor *tintColor;

- (void).cxx_destruct;
- (bool)allowDarkAndTintable;
- (long long)appearance;
- (unsigned long long)background;
- (bool)generic;
- (id)iconSpecification;
- (id)init;
- (id)layerTreeForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (id)primaryResourceEffectReturningBackgroundContentOverride:(id*)arg1;
- (bool)segment;
- (void)setAllowDarkAndTintable:(bool)arg1;
- (void)setAppearance:(long long)arg1;
- (void)setBackground:(unsigned long long)arg1;
- (void)setGeneric:(bool)arg1;
- (void)setSegment:(bool)arg1;
- (void)setShouldApplyMask:(bool)arg1;
- (void)setShouldDrawBorder:(bool)arg1;
- (void)setTemplateVariant:(bool)arg1;
- (void)setTintColor:(id)arg1;
- (bool)shouldApplyMask;
- (bool)shouldDrawBorder;
- (bool)templateVariant;
- (id)tintColor;
- (void)updateRecipeWithImageDescriptor:(id)arg1;

@end
