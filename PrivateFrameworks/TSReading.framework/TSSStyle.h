/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSSStyle : TSPObject <NSCopying, TSKModel, TSKTransformableObject, TSSPropertySource, TSSPropertyValueValidator, TSSStyleClient, TSSStyleObject, TSSThemeAsset> {
    bool  mIsVariation;
    NSString * mName;
    TSSPropertyMap * mOverridePropertyMap;
    TSSStyle * mParent;
    NSString * mStyleIdentifier;
    TSSStylesheet * mStylesheet;
}

@property (nonatomic, readonly) TSSStyle *baseStyleForVariation;
@property (nonatomic, readonly) NSSet *children;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) TSSStyle *firstIdentifiedAncestor;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isIdentified;
@property (nonatomic, readonly) bool isNamed;
@property (nonatomic, readonly) bool isVariation;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) TSSPropertyMap *overridePropertyMap;
@property (nonatomic, readonly) TSSStyle *parent;
@property (nonatomic, readonly) TSSStyle *rootAncestor;
@property (nonatomic, readonly) TSSStyle *rootIdentifiedAncestor;
@property (nonatomic, readonly) NSString *styleIdentifier;
@property (nonatomic, readonly) TSSStylesheet *stylesheet;
@property (readonly) Class superclass;

+ (id)boxedDefaultValueForProperty:(int)arg1;
+ (double)defaultDoubleValueForProperty:(int)arg1;
+ (float)defaultFloatValueForProperty:(int)arg1;
+ (int)defaultIntValueForProperty:(int)arg1;
+ (id)defaultPropertyMap;
+ (id)defaultStyleWithContext:(id)arg1;
+ (id)defaultValueForProperty:(int)arg1;
+ (id)description;
+ (double)fontSizeForFontSize:(double)arg1 scalingFactor:(double)arg2;
+ (id)properties;
+ (id)propertiesAllowingNSNull;
+ (bool)validateDoubleValue:(double*)arg1 forProperty:(int)arg2;
+ (bool)validateFloatValue:(float*)arg1 forProperty:(int)arg2;
+ (bool)validateIntValue:(int*)arg1 forProperty:(int)arg2;
+ (bool)validateIntValue:(int*)arg1 forProperty:(int)arg2 min:(int)arg3 max:(int)arg4;
+ (bool)validateIntValueAsBool:(int*)arg1 forProperty:(int)arg2;
+ (bool)validateObjectValue:(id*)arg1 withClass:(Class)arg2 forProperty:(int)arg3;

- (double)CGFloatValueForProperty:(int)arg1;
- (id)baseStyleForVariation;
- (id)boxedObjectForProperty:(int)arg1;
- (id)boxedOverrideValueForProperty:(int)arg1;
- (id)boxedValueForProperty:(int)arg1;
- (id)boxedValueForProperty:(int)arg1 oldBoxedValue:(id)arg2 transformedByTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3;
- (id)children;
- (void)constrainShadowForSwatchGeneration;
- (id)constrainShapeStyleForContext:(id)arg1;
- (void)constrainStrokeForSwatchGeneration;
- (bool)containsProperty:(int)arg1;
- (id)copyFlattenedWithContext:(id)arg1;
- (id)copyPropertyMap;
- (id)copyWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1 context:(id)arg2;
- (void)dealloc;
- (bool)definesProperty:(int)arg1;
- (double)doubleValueForProperty:(int)arg1;
- (void)fadeReflectionForSwatchGeneration;
- (id)firstIdentifiedAncestor;
- (float)floatValueForProperty:(int)arg1;
- (id)fullPropertyMap;
- (bool)hasEqualPropertyValues:(id)arg1;
- (bool)hasEqualValues:(id)arg1 forProperties:(id)arg2;
- (bool)hasEqualValuesToPropertyMap:(id)arg1 forProperties:(id)arg2;
- (unsigned long long)hash;
- (id)init;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 name:(id)arg2 overridePropertyMap:(id)arg3 isVariation:(bool)arg4;
- (int)intValueForProperty:(int)arg1;
- (bool)isAncestorOf:(id)arg1;
- (bool)isChildOf:(id)arg1;
- (bool)isDescendentOf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isIdentified;
- (bool)isNamed;
- (bool)isParentOf:(id)arg1;
- (bool)isThemeEquivalent:(id)arg1;
- (bool)isVariation;
- (SEL)mapThemeAssetSelector;
- (id)name;
- (id)newOverridePropertyMapWithPropertyMap:(id)arg1;
- (id)objectForProperty:(int)arg1;
- (id)overriddenProperties;
- (double)overrideCGFloatValueForProperty:(int)arg1;
- (unsigned long long)overrideCount;
- (double)overrideDoubleValueForProperty:(int)arg1;
- (float)overrideFloatValueForProperty:(int)arg1;
- (int)overrideIntValueForProperty:(int)arg1;
- (id)overridePropertyMap;
- (bool)overridePropertyMapIsEqualTo:(id)arg1;
- (id)overridePropertyMapWithPropertyMap:(id)arg1 overridePropertyMap:(id)arg2 collapseSourceOverrides:(bool)arg3;
- (id)overrideValueForProperty:(int)arg1;
- (bool)overridesAnyProperty;
- (bool)overridesProperty:(int)arg1;
- (bool)p_hasEqualValuesTo:(id)arg1 forProperty:(int)arg2;
- (id)parent;
- (id)propertyMap;
- (id)propertyMapIgnoringStyle:(id)arg1;
- (id)referencedStyles;
- (void)removeAllValues;
- (void)removeValueForProperty:(int)arg1;
- (void)replaceReferencedStylesUsingBlock:(id /* block */)arg1;
- (id)rootAncestor;
- (id)rootIdentifiedAncestor;
- (void)setBoxedValue:(id)arg1 forProperty:(int)arg2;
- (void)setCGFloatValue:(double)arg1 forProperty:(int)arg2;
- (void)setDoubleValue:(double)arg1 forProperty:(int)arg2;
- (void)setFloatValue:(float)arg1 forProperty:(int)arg2;
- (void)setIntValue:(int)arg1 forProperty:(int)arg2;
- (void)setName:(id)arg1;
- (void)setOverridePropertyMap:(id)arg1;
- (void)setParent:(id)arg1;
- (void)setStyleIdentifier:(id)arg1;
- (void)setStylesheet:(id)arg1;
- (void)setValue:(id)arg1 forProperty:(int)arg2;
- (void)setValuesForProperties:(id)arg1;
- (id)styleIdentifier;
- (id)stylesheet;
- (bool)transformsFontSizes;
- (bool)validateDoubleValue:(double*)arg1 forProperty:(int)arg2;
- (bool)validateFloatValue:(float*)arg1 forProperty:(int)arg2;
- (bool)validateIntValue:(int*)arg1 forProperty:(int)arg2;
- (bool)validateIntValue:(int*)arg1 forProperty:(int)arg2 min:(int)arg3 max:(int)arg4;
- (bool)validateIntValueAsBool:(int*)arg1 forProperty:(int)arg2;
- (bool)validateObjectValue:(id*)arg1 withClass:(Class)arg2 forProperty:(int)arg3;
- (id)valueForProperty:(int)arg1;
- (id)valuesForProperties:(id)arg1;

@end
