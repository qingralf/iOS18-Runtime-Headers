/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface TDVectorGlyphReader : NSObject <CUIVectorGlyhLayerDelegate> {
    double  _defaultPointSize;
    double  _drawingPointSize;
    double  _drawingScale;
    struct CGSVGDocument { } * _drawingSymbol;
    NSURL * _fileURL;
    NSDictionary * _guideNodes;
    bool  _isInterpolatable;
    struct CGSVGNode { } * _layerTreeNode;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    long long  _platform;
    double  _sourcePointSize;
    struct CGSVGDocument { } * _svgDocument;
    float  _templateVersion;
    NSDictionary * _vectorGlyphNodes;
    NSDictionary * _vectorGlyphRotateAnchorNodes;
    NSMutableDictionary * _vectorGlyphWithWeightSize;
}

@property (readonly) float templateVersion;

+ (struct CGPoint { double x1; double x2; })_anchorInOutlineCoordinateSpaceForAnchor:(struct CGSVGNode { }*)arg1 glyph:(struct CGSVGNode { }*)arg2;
+ (void)clearInstanceCache;
+ (id)vectorGlyphReaderWithURL:(id)arg1 error:(id*)arg2;
+ (id)vectorGlyphReaderWithURL:(id)arg1 platform:(long long)arg2 error:(id*)arg3;

- (id)_baselineNodeIDForGlyphSize:(long long)arg1;
- (void)_calcInterpolatability;
- (id)_caplineNodeIDForGlyphSize:(long long)arg1;
- (bool)_commonInitWithData:(id)arg1 platform:(long long)arg2 error:(id*)arg3;
- (struct { double x1; double x2; double x3; double x4; })_fixedAlignmentRectInsetsForVectorGlyphWithWeight:(long long)arg1 size:(long long)arg2 foundExactMargins:(bool*)arg3;
- (id)_glyphNodeIDForWeight:(long long)arg1 size:(long long)arg2;
- (struct { double x1; double x2; double x3; double x4; })_interpolatedAlignmentRectInsetsForVectorGlyphWithWeight:(long long)arg1 size:(long long)arg2;
- (id)_layerNamesForRenderingMode:(id)arg1;
- (void)_legacy_drawHierarchicalLayerNamed:(id)arg1 inContext:(struct CGContext { }*)arg2 scaleFactor:(double)arg3 targetSize:(struct CGSize { double x1; double x2; })arg4 colorResolver:(id /* block */)arg5;
- (void)_legacy_drawMonochromeLayerNamed:(id)arg1 inContext:(struct CGContext { }*)arg2 scaleFactor:(double)arg3 targetSize:(struct CGSize { double x1; double x2; })arg4 onFillColor:(struct CGColor { }*)arg5 offFillColor:(struct CGColor { }*)arg6;
- (void)_legacy_drawMulticolorLayerNamed:(id)arg1 inContext:(struct CGContext { }*)arg2 scaleFactor:(double)arg3 targetSize:(struct CGSize { double x1; double x2; })arg4 colorResolver:(id /* block */)arg5;
- (id)_marginNodeIDForWeight:(long long)arg1 size:(long long)arg2 direction:(long long)arg3;
- (id)_pathForLayerNamed:(id)arg1 inDocument:(struct CGSVGDocument { }*)arg2;
- (bool)_readSVGNodesError:(id*)arg1;
- (double)_requestedPointSizeRatio;
- (double)_sourcePointSize;
- (id)_symbolDefaults;
- (bool)_validateVectorGlyphsWithError:(id*)arg1;
- (struct { double x1; double x2; double x3; double x4; })alignmentRectInsetsForVectorGlyphWithWeight:(long long)arg1 size:(long long)arg2;
- (struct CGSVGAttributeMap { }*)attributesForLayerNamed:(id)arg1;
- (double)baselineForVectorGlyphWithWeight:(long long)arg1 size:(long long)arg2;
- (bool)canDrawWithWeight:(long long)arg1 size:(long long)arg2;
- (struct CGSize { double x1; double x2; })canvasSizeForWeight:(long long)arg1 size:(long long)arg2;
- (double)capHeightForVectorGlyphWithWeight:(long long)arg1 size:(long long)arg2;
- (bool)containsHierarchicalLayers;
- (bool)containsMulticolorLayers;
- (bool)containsWideGamutContent;
- (id)createMonochromeLayerGroupForSymbol:(struct CGSVGDocument { }*)arg1 layerNames:(id)arg2;
- (void)dealloc;
- (double)defaultPointSize;
- (void)drawInContext:(struct CGContext { }*)arg1 atPointSize:(double)arg2 scaleFactor:(double)arg3 weight:(long long)arg4 size:(long long)arg5;
- (id)fillImageNames;
- (struct CGImage { }*)fillImageWithName:(id)arg1;
- (id)hierarchicalLayerNodeNames;
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (id)initWithData:(id)arg1 platform:(long long)arg2 error:(id*)arg3;
- (id)initWithURL:(id)arg1 error:(id*)arg2;
- (id)initWithURL:(id)arg1 platform:(long long)arg2 error:(id*)arg3;
- (bool)interpolatedRotateAnchorForWeight:(long long)arg1 size:(long long)arg2 scaleFactor:(double)arg3 point:(struct CGPoint { double x1; double x2; }*)arg4;
- (struct CGSVGNode { }*)interpolatedSymbolForWeight:(long long)arg1 size:(long long)arg2;
- (bool)isInterpolatableForWeight:(long long)arg1 size:(long long)arg2;
- (id)monochromeLayerNodeNames;
- (id)multicolorLayerNodeNames;
- (unsigned long long)numberOfVectorGlyphs;
- (id)pathForLayerNamed:(id)arg1;
- (struct CGSize { double x1; double x2; })referenceCanvasSize;
- (double)scale;
- (double)strokeWidthForLayerNamed:(id)arg1;
- (struct CGSVGAttributeMap { }*)styleForLayerName:(id)arg1;
- (float)templateVersion;
- (bool)vectorGlyphExistsWithWeight:(long long)arg1 size:(long long)arg2 error:(id*)arg3;
- (struct CGSVGDocument { }*)vectorGlyphWithWeight:(long long)arg1 size:(long long)arg2 error:(id*)arg3;

@end