/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDStyledInfo : TSDDrawableInfo <TSSStyleClient>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) float opacity;
@property (nonatomic, copy) TSDReflection *reflection;
@property (nonatomic, copy) TSDShadow *shadow;
@property (nonatomic, copy) TSDStroke *stroke;
@property (nonatomic, retain) TSSStyle *style;
@property (readonly) Class superclass;

- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (id)boxedValueForProperty:(int)arg1;
- (void)i_setValue:(id)arg1 forProperty:(int)arg2;
- (id)objectForProperty:(int)arg1;
- (float)opacity;
- (id)propertyMapForNewPreset;
- (id)referencedStyles;
- (id)reflection;
- (void)replaceReferencedStylesUsingBlock:(id /* block */)arg1;
- (void)setBoxedValue:(id)arg1 forProperty:(int)arg2;
- (void)setOpacity:(float)arg1;
- (void)setReflection:(id)arg1;
- (void)setShadow:(id)arg1;
- (void)setStroke:(id)arg1;
- (void)setStyle:(id)arg1;
- (void)setValuesForProperties:(id)arg1;
- (id)shadow;
- (id)stroke;
- (id)style;
- (Class)styleClass;
- (id)styleIdentifierTemplateForNewPreset;
- (id)stylesForCopyStyle;

@end
