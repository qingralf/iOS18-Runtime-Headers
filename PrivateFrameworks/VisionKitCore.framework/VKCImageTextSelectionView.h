/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VisionKitCore.framework/VisionKitCore
 */

@interface VKCImageTextSelectionView : VKCImageBaseOverlayView {
    NSArray * _allLineQuads;
    NSObject<OS_dispatch_queue> * _analyticsQueue;
    UIBezierPath * _borderedNormalizedHighlightPath;
    VKTextRange * _documentRange;
    CAShapeLayer * _highlightLayer;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _highlightLayerStartContentsRect;
    bool  _highlightSelectableItems;
    CALayer * _highlightShadowLayer;
    bool  _longPressDataDetectorsInTextMode;
    UIBezierPath * _normalizedHighlightPath;
    VKTextRange * _selectedVKRange;
    id /* block */  _textQueryProvider;
    <VKCImageTextSelectionViewDelegate> * _textSelectionDelegate;
}

@property (nonatomic, retain) NSArray *allLineQuads;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *analyticsQueue;
@property (nonatomic, readonly) NSAttributedString *attributedText;
@property (nonatomic, retain) UIBezierPath *borderedNormalizedHighlightPath;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } currentContentsRectInLayerCoordinates;
@property (nonatomic, retain) VKTextRange *documentRange;
@property (nonatomic, retain) CAShapeLayer *highlightLayer;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } highlightLayerStartContentsRect;
@property (nonatomic) bool highlightSelectableItems;
@property (nonatomic, retain) CALayer *highlightShadowLayer;
@property (nonatomic) bool longPressDataDetectorsInTextMode;
@property (nonatomic, retain) UIBezierPath *normalizedHighlightPath;
@property (nonatomic, readonly) NSAttributedString *selectedAttributedText;
@property (nonatomic, readonly) NSString *selectedText;
@property (nonatomic, retain) VKTextRange *selectedVKRange;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } selectionQuadsVertexCentroid;
@property (nonatomic, readonly) NSString *text;
@property (nonatomic, copy) id /* block */ textQueryProvider;
@property (nonatomic) <VKCImageTextSelectionViewDelegate> *textSelectionDelegate;

+ (bool)sceneAwareLookupEnabled;

- (void).cxx_destruct;
- (id)allLineQuads;
- (id)analyticsQueue;
- (id)attributedText;
- (id)attributedTextInRange:(id)arg1;
- (long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(unsigned long long)arg2;
- (id)borderedNormalizedHighlightPath;
- (id)boundedPositionFromPosition:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })caretRectForPosition:(id)arg1;
- (id)characterRangeAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(unsigned long long)arg2;
- (id)closestBlockOfType:(unsigned long long)arg1 toPoint:(struct CGPoint { double x1; double x2; })arg2 maxDistance:(double)arg3;
- (id)closestPositionToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)closestPositionToPoint:(struct CGPoint { double x1; double x2; })arg1 withinRange:(id)arg2;
- (id)closestQuadForBlockOfType:(unsigned long long)arg1 toPoint:(struct CGPoint { double x1; double x2; })arg2 maxDistance:(double)arg3;
- (long long)comparePosition:(id)arg1 toPosition:(id)arg2;
- (bool)containsSelectedTextAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)containsTextAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })currentContentsRectInLayerCoordinates;
- (id)documentRange;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })firstRectForRange:(id)arg1;
- (id)highlightLayer;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })highlightLayerStartContentsRect;
- (bool)highlightSelectableItems;
- (id)highlightShadowLayer;
- (bool)imageContainsPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)longPressDataDetectorsInTextMode;
- (id)normalizedHighlightPath;
- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (void)performHighlightSelectableTextAnimated:(bool)arg1;
- (id)positionFromPosition:(id)arg1 inDirection:(unsigned long long)arg2 offset:(long long)arg3;
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(unsigned long long)arg2;
- (id)quadsForAllWordsForCurrentLayout;
- (id)selectedAttributedText;
- (id)selectedText;
- (id)selectedVKRange;
- (struct CGPoint { double x1; double x2; })selectionQuadsVertexCentroid;
- (id)selectionRectsForRange:(id)arg1;
- (void)sendAnalyticsEventWithSelector:(SEL)arg1 type:(long long)arg2 source:(long long)arg3;
- (void)setAllLineQuads:(id)arg1;
- (void)setAnalyticsQueue:(id)arg1;
- (void)setBorderedNormalizedHighlightPath:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDocumentRange:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHighlightLayer:(id)arg1;
- (void)setHighlightLayerStartContentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHighlightSelectableItems:(bool)arg1;
- (void)setHighlightSelectableItems:(bool)arg1 animated:(bool)arg2;
- (void)setHighlightShadowLayer:(id)arg1;
- (void)setLongPressDataDetectorsInTextMode:(bool)arg1;
- (void)setNormalizedHighlightPath:(id)arg1;
- (void)setRecognitionResult:(id)arg1;
- (void)setSelectedVKRange:(id)arg1;
- (void)setTextQueryProvider:(id /* block */)arg1;
- (void)setTextSelectionDelegate:(id)arg1;
- (id)summaryDescription;
- (void)suppressSelectionViewGrabbers;
- (id)text;
- (id)textInRange:(id)arg1;
- (id /* block */)textQueryProvider;
- (id)textSelectionDelegate;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformForHighlightLayerInCurrentBounds;
- (void)unsuppressSelectionViewGrabbers;
- (void)updateHighlightLayerContentIfVisible;
- (void)updateHighlightLayerGeometry;
- (void)updateHighlightLayerGeometryIfVisible;
- (void)updateSelectionRectsForBoundsChange;

@end
