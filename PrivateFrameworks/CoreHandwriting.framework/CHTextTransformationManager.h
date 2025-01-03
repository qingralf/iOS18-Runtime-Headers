/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHTextTransformationManager : NSObject {
    NSArray * _contextResults;
    NSArray * _contextStrokes;
    NSMutableArray * _correctionAngles;
    NSSet * _excludedStrokeTypes;
    NSArray * _initialStrokes;
    NSArray * _relatedNonTextStrokes;
    bool  _shouldExtractFromRefinablePath;
    CHStrokeClassificationResult * _strokeClassificationResult;
    CHStrokeGroupingResult * _strokeGroupingResult;
    <CHStrokeProvider> * _strokeProvider;
    CHTransformationParameters * _transformationParameters;
    bool  _usingInsertionPoint;
}

@property (retain) NSArray *contextResults;
@property (retain) NSArray *contextStrokes;
@property (retain) NSMutableArray *correctionAngles;
@property (retain) NSSet *excludedStrokeTypes;
@property (retain) NSArray *initialStrokes;
@property (retain) NSArray *relatedNonTextStrokes;
@property (retain) CHStrokeClassificationResult *strokeClassificationResult;
@property (retain) CHStrokeGroupingResult *strokeGroupingResult;
@property (retain) <CHStrokeProvider> *strokeProvider;
@property (retain) CHTransformationParameters *transformationParameters;
@property (nonatomic) bool usingInsertionPoint;

+ (id)_nontextGroupStrokes:(id)arg1 remainingStrokes:(id)arg2 strokeProvider:(id)arg3;
+ (id)adjustLeadingForReflowableLines:(id)arg1;
+ (void)adjustLineSpacingWithBaselines:(id)arg1 lineSpace:(unsigned long long)arg2;
+ (void)adjustLineSpacingWithBounds:(id)arg1 lineSpace:(unsigned long long)arg2;
+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })adjustTransformForAnchorPoint:(struct CGPoint { double x1; double x2; })arg1 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2;
+ (void)applyAlignmentToTextLines:(id)arg1 alignmentBehavior:(unsigned long long)arg2 leftMargin:(unsigned long long)arg3 rightMargin:(unsigned long long)arg4 alignFirstLine:(bool)arg5;
+ (void)applyLineSpacingToTextLines:(id)arg1 lineSpaceBehavior:(unsigned long long)arg2 lineSpaceTarget:(unsigned long long)arg3 linesAreParallel:(bool)arg4;
+ (id)applyMergeToTextLines:(id)arg1 alignmentBehavior:(unsigned long long)arg2 leftMargin:(unsigned long long)arg3 rightMargin:(unsigned long long)arg4 insertionPoint:(struct CGPoint { double x1; double x2; })arg5;
+ (void)applyOrientationToTextLines:(id)arg1 orientationBehavior:(unsigned long long)arg2 orientationTarget:(double)arg3;
+ (void)applyResizeToTextLines:(id)arg1 resizeBehavior:(unsigned long long)arg2 resizeTarget:(unsigned long long)arg3 resizeModifier:(double)arg4;
+ (id)applyWrapToTextLines:(id)arg1 lineSpaceBehavior:(unsigned long long)arg2 alignmentBehavior:(unsigned long long)arg3 leftMargin:(unsigned long long)arg4 rightMargin:(unsigned long long)arg5 insertionPoint:(struct CGPoint { double x1; double x2; })arg6;
+ (double)blindAscenderDeformValue:(id)arg1;
+ (double)blindDescenderDeformValue:(id)arg1;
+ (id)changeTokensToVisualOrder:(id)arg1;
+ (id)charactersForRendering;
+ (id)checkAvailableInterceptsForString:(id)arg1 skipAmbiguousCharacters:(bool)arg2;
+ (struct PrincipalLines { struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint {} *x_1_1_1; struct CGPoint {} *x_1_1_2; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint {} *x_3_2_1; } x_1_1_3; } x1; struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint {} *x_2_1_1; struct CGPoint {} *x_2_1_2; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint {} *x_3_2_1; } x_2_1_3; } x2; struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint {} *x_3_1_1; struct CGPoint {} *x_3_1_2; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint {} *x_3_2_1; } x_3_1_3; } x3; struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint {} *x_4_1_1; struct CGPoint {} *x_4_1_2; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint {} *x_3_2_1; } x_4_1_3; } x4; })convertFromCHPrincipalLines:(struct { struct { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; struct { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; struct { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_4_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_4_1_2; } x4; })arg1;
+ (struct { struct { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; struct { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; struct { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_4_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_4_1_2; } x4; })convertToCHPrincipalLines:(const void*)arg1;
+ (id)drawingForTransformedTextLines:(id)arg1;
+ (double)estimatedLeadingForPrincipalLines:(const void*)arg1 transcription:(id)arg2;
+ (struct CGSize { double x1; double x2; })estimatedRenderedTextSize:(id)arg1 fullDeformValue:(double)arg2 ascenderDeformValue:(double)arg3 descenderDeformValue:(double)arg4;
+ (struct PrincipalLines { struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint {} *x_1_1_1; struct CGPoint {} *x_1_1_2; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint {} *x_3_2_1; } x_1_1_3; } x1; struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint {} *x_2_1_1; struct CGPoint {} *x_2_1_2; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint {} *x_3_2_1; } x_2_1_3; } x2; struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint {} *x_3_1_1; struct CGPoint {} *x_3_1_2; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint {} *x_3_2_1; } x_3_1_3; } x3; struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint {} *x_4_1_1; struct CGPoint {} *x_4_1_2; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint {} *x_3_2_1; } x_4_1_3; } x4; })fixPrincipalLinesOrientation:(id)arg1 useAltString:(bool)arg2 skipAmbiguousCharacters:(bool)arg3;
+ (struct PrincipalLines { struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint {} *x_1_1_1; struct CGPoint {} *x_1_1_2; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint {} *x_3_2_1; } x_1_1_3; } x1; struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint {} *x_2_1_1; struct CGPoint {} *x_2_1_2; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint {} *x_3_2_1; } x_2_1_3; } x2; struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint {} *x_3_1_1; struct CGPoint {} *x_3_1_2; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint {} *x_3_2_1; } x_3_1_3; } x3; struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint {} *x_4_1_1; struct CGPoint {} *x_4_1_2; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint {} *x_3_2_1; } x_4_1_3; } x4; })fixPrincipalLinesPosition:(id)arg1 useAltString:(bool)arg2 skipAmbiguousCharacters:(bool)arg3;
+ (struct PrincipalLines { struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint {} *x_1_1_1; struct CGPoint {} *x_1_1_2; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint {} *x_3_2_1; } x_1_1_3; } x1; struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint {} *x_2_1_1; struct CGPoint {} *x_2_1_2; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint {} *x_3_2_1; } x_2_1_3; } x2; struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint {} *x_3_1_1; struct CGPoint {} *x_3_1_2; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint {} *x_3_2_1; } x_3_1_3; } x3; struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint {} *x_4_1_1; struct CGPoint {} *x_4_1_2; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint {} *x_3_2_1; } x_4_1_3; } x4; })flipPrincipalLine:(struct PrincipalLines { struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint {} *x_1_1_1; struct CGPoint {} *x_1_1_2; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint {} *x_3_2_1; } x_1_1_3; } x1; struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint {} *x_2_1_1; struct CGPoint {} *x_2_1_2; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint {} *x_3_2_1; } x_2_1_3; } x2; struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint {} *x_3_1_1; struct CGPoint {} *x_3_1_2; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint {} *x_3_2_1; } x_3_1_3; } x3; struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint {} *x_4_1_1; struct CGPoint {} *x_4_1_2; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint {} *x_3_2_1; } x_4_1_3; } x4; })arg1 points:(const void*)arg2 string:(id)arg3 outWasFlipped:(bool*)arg4;
+ (void)getDeformValuesForTextLine:(id)arg1 useAltString:(bool)arg2 outfullDeform:(double*)arg3 outAscenderDeform:(double*)arg4 outDescenderDeform:(double*)arg5;
+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })getInsertSpaceTransform:(id)arg1 spaceSize:(double)arg2;
+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })getItalicsTransformForTextLine:(id)arg1 skew:(double)arg2;
+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })getResizeTransformForTextLine:(id)arg1 targetSize:(double)arg2;
+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })getTranslateTransformForAnchorPoint:(struct CGPoint { double x1; double x2; })arg1 targetPoint:(struct CGPoint { double x1; double x2; })arg2;
+ (id)principalLineInterceptsForString:(id)arg1 skipAmbiguousCharacters:(bool)arg2 strokes:(id)arg3 strokePoints:(const void*)arg4 orientation:(double)arg5 medianFallbackThreshold:(double)arg6;
+ (id)principalLinePointsForString:(id)arg1 skipAmbiguousCharacters:(bool)arg2 strokes:(id)arg3 strokePoints:(const void*)arg4 orientation:(double)arg5 medianFallbackThreshold:(double)arg6;
+ (double)principalLinesFitScore:(const void*)arg1 points:(const void*)arg2 transcription:(id)arg3;
+ (struct PrincipalLines { struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint {} *x_1_1_1; struct CGPoint {} *x_1_1_2; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint {} *x_3_2_1; } x_1_1_3; } x1; struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint {} *x_2_1_1; struct CGPoint {} *x_2_1_2; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint {} *x_3_2_1; } x_2_1_3; } x2; struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint {} *x_3_1_1; struct CGPoint {} *x_3_1_2; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint {} *x_3_2_1; } x_3_1_3; } x3; struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint {} *x_4_1_1; struct CGPoint {} *x_4_1_2; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint {} *x_3_2_1; } x_4_1_3; } x4; })principalLinesForPoints:(const void*)arg1 writtenAlphaShape:(const void*)arg2 imgPointsAndPrincipalLines:(const void*)arg3 shouldCancel:(id /* block */)arg4;
+ (struct PrincipalLines { struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint {} *x_1_1_1; struct CGPoint {} *x_1_1_2; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint {} *x_3_2_1; } x_1_1_3; } x1; struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint {} *x_2_1_1; struct CGPoint {} *x_2_1_2; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint {} *x_3_2_1; } x_2_1_3; } x2; struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint {} *x_3_1_1; struct CGPoint {} *x_3_1_2; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint {} *x_3_2_1; } x_3_1_3; } x3; struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint {} *x_4_1_1; struct CGPoint {} *x_4_1_2; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint {} *x_3_2_1; } x_4_1_3; } x4; })principalLinesFromToken:(id)arg1 strokes:(id)arg2;
+ (struct PrincipalLines { struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint {} *x_1_1_1; struct CGPoint {} *x_1_1_2; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint {} *x_3_2_1; } x_1_1_3; } x1; struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint {} *x_2_1_1; struct CGPoint {} *x_2_1_2; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint {} *x_3_2_1; } x_2_1_3; } x2; struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint {} *x_3_1_1; struct CGPoint {} *x_3_1_2; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint {} *x_3_2_1; } x_3_1_3; } x3; struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint {} *x_4_1_1; struct CGPoint {} *x_4_1_2; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint {} *x_3_2_1; } x_4_1_3; } x4; })principalLinesFromTokens:(id)arg1 strokes:(id)arg2 strokePoints:(const void*)arg3 orientation:(double)arg4 useAltString:(bool)arg5;
+ (struct PrincipalLines { struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint {} *x_1_1_1; struct CGPoint {} *x_1_1_2; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint {} *x_3_2_1; } x_1_1_3; } x1; struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint {} *x_2_1_1; struct CGPoint {} *x_2_1_2; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint {} *x_3_2_1; } x_2_1_3; } x2; struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint {} *x_3_1_1; struct CGPoint {} *x_3_1_2; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint {} *x_3_2_1; } x_3_1_3; } x3; struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint {} *x_4_1_1; struct CGPoint {} *x_4_1_2; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint {} *x_3_2_1; } x_4_1_3; } x4; })refinedPrincipalLinesForTextLine:(id)arg1 points:(const void*)arg2 alphaShape:(const void*)arg3 renderedTextPointsAndLines:(struct PointsAndPrincipalLines { struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint {} *x_1_1_1; struct CGPoint {} *x_1_1_2; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint {} *x_3_2_1; } x_1_1_3; } x1; struct PrincipalLines { struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint {} *x_1_2_1; struct CGPoint {} *x_1_2_2; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint {} *x_3_3_1; } x_1_2_3; } x_2_1_1; struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint {} *x_2_2_1; struct CGPoint {} *x_2_2_2; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint {} *x_3_3_1; } x_2_2_3; } x_2_1_2; struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint {} *x_3_2_1; struct CGPoint {} *x_3_2_2; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint {} *x_3_3_1; } x_3_2_3; } x_2_1_3; struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint {} *x_4_2_1; struct CGPoint {} *x_4_2_2; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint {} *x_3_3_1; } x_4_2_3; } x_2_1_4; } x2; })arg4 useAltString:(bool)arg5 shouldCancel:(id /* block */)arg6;
+ (id)reflowableTextLinesFromTransformedTextLines:(id)arg1 mergeUnacceptableLines:(bool)arg2 progress:(id)arg3;
+ (id)reflowableTextTokensFromTransformedTextLines:(id)arg1;
+ (id)reflowableTokensFromSynthesisResult:(id)arg1 shouldCancel:(id /* block */)arg2;
+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })rotationTransformForTextLine:(id)arg1 targetAngle:(double)arg2;
+ (bool)shouldAdjustRenderString:(id)arg1;
+ (bool)shouldDeformAscendersDescenders:(id)arg1;
+ (id)splitTextLine:(id)arg1 maxLength:(double)arg2;
+ (id)stringForRendering:(id)arg1 useAltChars:(bool)arg2;
+ (id)textLineCandidate:(id)arg1 tokens:(id)arg2 locale:(id)arg3 strokeClassification:(long long)arg4 string:(id)arg5 points:(const void*)arg6 strokePoints:(const void*)arg7 alphaShape:(const void*)arg8 initialOrientationEstimate:(double)arg9 useAltString:(bool)arg10 outFitScore:(double*)arg11 shouldCancel:(id /* block */)arg12;
+ (double)textLineFitScore:(id)arg1 useAltString:(bool)arg2;
+ (id)textLineForDrawing:(id)arg1 transcriptions:(id)arg2 strokeIndexes:(id)arg3 fullText:(id)arg4 locale:(id)arg5 strokeClassification:(long long)arg6 shouldCancel:(id /* block */)arg7;
+ (id)textLineForStrokes:(id)arg1 tokens:(id)arg2 locale:(id)arg3 strokeClassification:(long long)arg4 initialOrientationEstimate:(double)arg5 shouldCancel:(id /* block */)arg6;
+ (id)textLineForTokensWithPrincipalLines:(id)arg1 strokes:(id)arg2 locale:(id)arg3 strokeClassification:(long long)arg4;
+ (id)textLineFromCachedResults:(id)arg1 tokens:(id)arg2 strokes:(id)arg3 estimatedOrientation:(double)arg4 locale:(id)arg5 strokeClassification:(long long)arg6;
+ (id /* block */)textStrokePointTransformationFromAffineTransformation:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformForInsertingToken:(id)arg1 inLineWithTokens:(id)arg2;
+ (void)transformTextLines:(id)arg1 withParameters:(id)arg2;

- (void).cxx_destruct;
- (id)_transformedTextLinesWithCancel:(id /* block */)arg1 skipLineOrientationEstimate:(bool)arg2 useCache:(bool)arg3 progress:(id)arg4;
- (id)addNonTextSegmentsAndLines:(id)arg1 remainingStrokes:(id)arg2 outNonTextStrokes:(id*)arg3;
- (void)assignRemainingStrokes:(id)arg1 toTextLines:(id)arg2;
- (id)contextResults;
- (id)contextStrokes;
- (id)correctionAngles;
- (id)createTelemetryDictionary:(double)arg1 nonTextRatio:(double)arg2;
- (id)excludedStrokeTypes;
- (id)initWithContextStrokes:(id)arg1 relatedNonTextStrokes:(id)arg2 contextResults:(id)arg3 strokeGroupingResult:(id)arg4 strokeClassificationResult:(id)arg5 strokeProvider:(id)arg6 excludedStrokeTypes:(id)arg7 extractFromRefinablePath:(bool)arg8;
- (id)initWithContextStrokes:(id)arg1 relatedNonTextStrokes:(id)arg2 parameters:(id)arg3 contextResults:(id)arg4 strokeGroupingResult:(id)arg5 strokeClassificationResult:(id)arg6 strokeProvider:(id)arg7 excludedStrokeTypes:(id)arg8 extractFromRefinablePath:(bool)arg9;
- (id)initWithContextStrokes:(id)arg1 relatedNonTextStrokes:(id)arg2 parameters:(id)arg3 contextResults:(id)arg4 strokeGroupingResult:(id)arg5 strokeClassificationResult:(id)arg6 strokeProvider:(id)arg7 excludedStrokeTypes:(id)arg8 extractFromRefinablePath:(bool)arg9 initialStrokes:(id)arg10;
- (id)initialStrokes;
- (id)majorityScriptId;
- (id)meanRotationCorrectionAngle;
- (id)numCharacters;
- (id)reflowableTextLinesWithProgress:(id)arg1 mergeUnacceptableLines:(bool)arg2 shouldCancel:(id /* block */)arg3;
- (id)reflowableTokensSkipLineOrientationEstimate:(bool)arg1 useCache:(bool)arg2 preserveTokenOrder:(bool)arg3 shouldCancel:(id /* block */)arg4;
- (id)relatedNonTextStrokes;
- (id)revertTokenOrder:(id)arg1 textResult:(id)arg2;
- (void)setContextResults:(id)arg1;
- (void)setContextStrokes:(id)arg1;
- (void)setCorrectionAngles:(id)arg1;
- (void)setExcludedStrokeTypes:(id)arg1;
- (void)setInitialStrokes:(id)arg1;
- (void)setRelatedNonTextStrokes:(id)arg1;
- (void)setStrokeClassificationResult:(id)arg1;
- (void)setStrokeGroupingResult:(id)arg1;
- (void)setStrokeProvider:(id)arg1;
- (void)setTransformationParameters:(id)arg1;
- (void)setUsingInsertionPoint:(bool)arg1;
- (id)strokeClassificationResult;
- (id)strokeGroupingResult;
- (id)strokeProvider;
- (id)tokenSupportRangesForNonTextStrokes;
- (id)tokensAlignedWithInitialStrokesForTextResult:(id)arg1;
- (struct CHTextTransformationResult { id x1; id x2; id x3; })transformWithProgress:(id)arg1 shouldCancel:(id /* block */)arg2;
- (id)transformationParameters;
- (bool)usingInsertionPoint;

@end
