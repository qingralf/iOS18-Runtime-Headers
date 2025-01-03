/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHClientStrokeProvider : NSObject <CHStrokeProvider> {
    NSMutableDictionary * __strokeIdsByEncoding;
    bool  _hasValidMathAnnotation;
    NSArray * _orderedStrokes;
    NSArray * _sectionedStrokes;
    long long  _strokeClassificationGTSource;
    NSMutableDictionary * _strokesByID;
    NSMutableDictionary * _transcriptionCache;
    long long  _version;
    long long  groupingPriority;
}

@property (nonatomic, readonly) NSMutableDictionary *_strokeIdsByEncoding;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundingBox;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) struct CGSize { double x1; double x2; } drawingCanvasSize; /* unknown property attribute: ? */
@property (readonly) long long groupingPriority;
@property (nonatomic) bool hasValidMathAnnotation;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSArray *orderedStrokes;
@property (nonatomic, readonly) NSArray *sectionedStrokes;
@property (readonly) <CHStrokeProviderVersion> *strokeProviderVersion;
@property (nonatomic, readonly) NSMutableDictionary *strokesByID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSMutableDictionary *transcriptionCache;
@property (readonly, copy) NSOrderedSet *visibleStrokeEncodedIdentifiers;

+ (bool)isNonTextSection:(id)arg1;

- (void).cxx_destruct;
- (id)_strokeIdsByEncoding;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingBox;
- (id)cachedTranscriptionForStrokeGroup:(id)arg1;
- (long long)compareOrderOfStrokeWithIdentifier:(id)arg1 toStrokeWithIdentifier:(id)arg2;
- (unsigned long long)compareStyleOfStrokeWithIdentifier:(id)arg1 toStrokeWithIdentifier:(id)arg2;
- (id)description;
- (id)drawing;
- (id)drawingWithGroups:(id)arg1 transforms:(id)arg2;
- (id)drawingWithStrokes:(id)arg1;
- (id)encodedStrokeIdentifier:(id)arg1;
- (id)getStrokeClassificationArray:(long long)arg1 ofType:(long long)arg2;
- (long long)groupingPriority;
- (bool)hasValidMathAnnotation;
- (id)initWithStrokes:(id)arg1 version:(long long)arg2;
- (id)initWithURL:(id)arg1 version:(long long)arg2 keepTextOnly:(bool)arg3;
- (id)initWithURL:(id)arg1 version:(long long)arg2 keepTextOnly:(bool)arg3 strokesFromSections:(id)arg4 channels:(id)arg5 sectionTypes:(id)arg6;
- (void)loadStrokesBasedOnSectionTypeFrom:(id)arg1 section:(id)arg2 withTime:(bool)arg3 atTimestamp:(double)arg4 channels:(id)arg5 orderedStrokes:(id)arg6;
- (void)loadStrokesBasedOnStrokeClassicationType:(id)arg1 section:(id)arg2 withTime:(bool)arg3 atTimestamp:(double)arg4 channels:(id)arg5 orderedStrokes:(id)arg6;
- (void)loadStrokesBasedOnUnicodeFrom:(id)arg1 section:(id)arg2 withTime:(bool)arg3 atTimestamp:(double)arg4 channels:(id)arg5 orderedStrokes:(id)arg6;
- (void)loadStrokesFrom:(id)arg1 section:(id)arg2 withTime:(bool)arg3 atTimestamp:(double)arg4 channels:(id)arg5 orderedStrokes:(id)arg6;
- (void)loadStrokesFrom:(id)arg1 withStrokes:(id)arg2 types:(id)arg3 withTime:(bool)arg4 atTimestamp:(double)arg5 channels:(id)arg6 orderedStrokes:(id)arg7;
- (id)orderedStrokes;
- (id)sectionedStrokes;
- (void)setHasValidMathAnnotation:(bool)arg1;
- (void)setStrokeAttributes:(unsigned long long)arg1 atIndexes:(id)arg2;
- (id)strokeForIdentifier:(id)arg1;
- (id)strokeIdentifierFromData:(id)arg1;
- (id)strokeProviderVersion;
- (id)strokesByID;
- (id)transcriptionCache;
- (void)updateWithAddedStrokes:(id)arg1 removedStrokeIds:(id)arg2;
- (void)updateWithGroups:(id)arg1 transforms:(id)arg2;
- (id)visibleStrokeEncodedIdentifiers;

@end
