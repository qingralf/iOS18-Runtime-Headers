/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIVectorGlyphLayer : NSObject {
    bool  _alwaysBreathes;
    bool  _alwaysPulses;
    bool  _alwaysRotates;
    struct CGPath { } * _clipPathFromSublayers;
    <CUIVectorGlyhLayerDelegate> * _delegate;
    unsigned long long  _index;
    bool  _isEraserLayer;
    bool  _isPassthrough;
    int  _lineCap;
    int  _lineJoin;
    unsigned long long  _motionGroup;
    NSString * _name;
    double  _opacity;
    CUIVectorGlyphPath * _referencePath;
    double  _strokeWidth;
    NSArray * _sublayers;
    NSArray * _tags;
    double  _valueThreshold;
}

@property (nonatomic, readonly) bool alwaysBreathes;
@property (nonatomic, readonly) bool alwaysPulses;
@property (nonatomic, readonly) bool alwaysRotates;
@property (nonatomic) <CUIVectorGlyhLayerDelegate> *delegate;
@property (nonatomic, readonly) unsigned long long index;
@property (nonatomic, readonly) bool isEraserLayer;
@property (nonatomic, readonly) bool isPassthrough;
@property (nonatomic, readonly) int lineCap;
@property (nonatomic, readonly) int lineJoin;
@property (nonatomic, readonly) unsigned long long motionGroup;
@property (nonatomic, readonly, retain) NSString *name;
@property (nonatomic, readonly) bool needsWideGamut;
@property (nonatomic, readonly) double opacity;
@property (nonatomic, readonly, retain) CUIVectorGlyphPath *referencePath;
@property (nonatomic, readonly, retain) id referenceShape;
@property (nonatomic, readonly) double strokeWidth;
@property (nonatomic, readonly, retain) NSArray *sublayers;
@property (nonatomic, readonly, retain) NSArray *tags;
@property (nonatomic, readonly) double valueThreshold;

+ (unsigned int)_alwaysBreathesAtom;
+ (unsigned int)_alwaysPulsesAtom;
+ (unsigned int)_alwaysRotatesAtom;
+ (bool)_classesContainRenderModeClass:(id)arg1;
+ (unsigned int)_clearBehindAtom;
+ (id)_colorNameForRenderingStyle:(id)arg1;
+ (id)_createLayerWithLayerTreeNode:(struct CGSVGNode { }*)arg1 layerName:(id)arg2 index:(unsigned long long)arg3 subpaths:(id)arg4 delegate:(id)arg5;
+ (id)_createPathFromStyle:(struct CGSVGAttributeMap { }*)arg1 subpaths:(id)arg2;
+ (id)_createShapeLayerWithLayerTreeNode:(struct CGSVGNode { }*)arg1 layerName:(id)arg2 index:(unsigned long long)arg3 shapes:(id)arg4 delegate:(id)arg5;
+ (id)_createSimpleLayerWithLayerTreeNode:(struct CGSVGNode { }*)arg1 layerName:(id)arg2 index:(unsigned long long)arg3 subpaths:(id)arg4 delegate:(id)arg5;
+ (id)_createTreeWithLayerTreeNode:(struct CGSVGNode { }*)arg1 modePrefix:(id)arg2 layerName:(id)arg3 index:(unsigned long long)arg4 subpaths:(id)arg5 delegate:(id)arg6;
+ (unsigned int)_fillActionAtom;
+ (struct CGColor { }*)_fillColorFromStyle:(struct CGSVGAttributeMap { }*)arg1;
+ (bool)_indexFromStyleSuffix:(id)arg1 integer:(unsigned long long*)arg2;
+ (id)_layerHierarchyStyleNames;
+ (unsigned int)_layerTagsAtom;
+ (int)_lineCapFromStyle:(struct CGSVGAttributeMap { }*)arg1;
+ (int)_lineJoinFromStyle:(struct CGSVGAttributeMap { }*)arg1;
+ (unsigned int)_motionGroupAtom;
+ (struct CGColor { }*)_strokeColorFromStyle:(struct CGSVGAttributeMap { }*)arg1;
+ (double)_strokeWidthForNode:(struct CGSVGNode { }*)arg1;
+ (double)_strokeWidthFromStyle:(struct CGSVGAttributeMap { }*)arg1;
+ (unsigned int)_subpathIndicesAtom;
+ (id)_suffixForNamedStyleWithPrefix:(id)arg1 styles:(id)arg2;
+ (unsigned int)_variableThresholdAtom;
+ (id)createLayerGroupWithLayerNames:(id)arg1 delegate:(id)arg2;
+ (id)createLayerGroupWithLayerTree:(struct CGSVGNode { }*)arg1 layerNames:(id)arg2 shapes:(id)arg3 delegate:(id)arg4;
+ (id)createLayerGroupWithLayerTree:(struct CGSVGNode { }*)arg1 modePrefix:(id)arg2 shapes:(id)arg3 delegate:(id)arg4;

- (void).cxx_destruct;
- (id)__initGroupWithName:(id)arg1 index:(unsigned long long)arg2 sublayers:(id)arg3 attributes:(struct CGSVGAttributeMap { }*)arg4 style:(struct CGSVGAttributeMap { }*)arg5 passthrough:(bool)arg6 delegate:(id)arg7;
- (id)__initTreeWithName:(id)arg1 index:(unsigned long long)arg2 sublayers:(id)arg3 attributes:(struct CGSVGAttributeMap { }*)arg4 style:(struct CGSVGAttributeMap { }*)arg5 delegate:(id)arg6;
- (bool)_anyLayerAlwaysPulses;
- (bool)_anyLayerAlwaysRotates;
- (struct CGColor { }*)_colorForVariableThreshold:(double)arg1 variableMinValue:(double)arg2 variableMaxValue:(double)arg3 onFillColor:(struct CGColor { }*)arg4 offFillColor:(struct CGColor { }*)arg5;
- (id)_initWithName:(id)arg1 index:(unsigned long long)arg2 shape:(id)arg3 strokeWidth:(double)arg4 attributes:(struct CGSVGAttributeMap { }*)arg5 style:(struct CGSVGAttributeMap { }*)arg6 delegate:(id)arg7;
- (id)_initWithName:(id)arg1 index:(unsigned long long)arg2 sublayers:(id)arg3 attributes:(struct CGSVGAttributeMap { }*)arg4 style:(struct CGSVGAttributeMap { }*)arg5 delegate:(id)arg6;
- (void)_readCSSAttributes:(struct CGSVGAttributeMap { }*)arg1 styleAttributes:(struct CGSVGAttributeMap { }*)arg2;
- (void)_setAllLayersAlwaysPulse:(bool)arg1;
- (void)_setAllLayersAlwaysRotate:(bool)arg1;
- (void)_setAlwaysPulses:(bool)arg1;
- (void)_setAlwaysRotates:(bool)arg1;
- (bool)alwaysBreathes;
- (bool)alwaysPulses;
- (bool)alwaysRotates;
- (bool)anyLayerNeedsWideGamutColor;
- (struct CGPath { }*)copyClipShape;
- (struct CGImage { }*)createImageUsingScaleFactor:(double)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 variableMinValue:(double)arg3 variableMaxValue:(double)arg4 onFillColor:(struct CGColor { }*)arg5 offFillColor:(struct CGColor { }*)arg6;
- (struct CGImage { }*)createSublayerMaskUsingScaleFactor:(double)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 maskColor:(struct CGColor { }*)arg3;
- (void)dealloc;
- (id)debugDescription;
- (id)debugDescriptionWithIndentLevel:(unsigned long long)arg1;
- (id)delegate;
- (void)drawInContext:(struct CGContext { }*)arg1 scaleFactor:(double)arg2 targetSize:(struct CGSize { double x1; double x2; })arg3 variableMinValue:(double)arg4 variableMaxValue:(double)arg5 onFillColor:(struct CGColor { }*)arg6 offFillColor:(struct CGColor { }*)arg7;
- (unsigned long long)index;
- (bool)isEraserLayer;
- (bool)isPassthrough;
- (int)lineCap;
- (int)lineJoin;
- (unsigned long long)motionGroup;
- (id)name;
- (bool)needsWideGamut;
- (double)opacity;
- (id)path;
- (id)pathAtScale:(double)arg1;
- (id)referencePath;
- (id)referenceShape;
- (void)setDelegate:(id)arg1;
- (struct CGPath { }*)shape;
- (struct CGPath { }*)shapeAtScale:(double)arg1;
- (double)strokeWidth;
- (id)sublayers;
- (id)tags;
- (double)valueThreshold;

@end
