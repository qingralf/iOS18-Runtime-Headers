/* Generated by RuntimeBrowser.
 */

@protocol PKAttachment <NSObject>

@required

- (NSArray *)_firstStrokesInSelectedStrokes:(NSOrderedSet *)arg1;
- (bool)_handleSingleTapAtDrawingLocation:(struct CGPoint { double x1; double x2; })arg1;
- (NSArray *)_lastStrokesInSelectedStrokes:(NSOrderedSet *)arg1;
- (UIView *)attachmentContainerView;
- (PKAttachmentView *)attachmentView;
- (long long)contentTypeForIntersectedStrokes:(NSOrderedSet *)arg1;
- (PKDrawing *)drawing;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })drawingTransform;
- (void)fetchIntersectedStrokesAtPoint:(void *)arg1 selectionType:(void *)arg2 inputType:(void *)arg3 visibleOnscreenStrokes:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: struct CGPoint { double x1; double x2; }, long long, long long, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKIntersectionResult *, void*
- (void)fetchIntersectedStrokesBetweenTopPoint:(void *)arg1 bottomPoint:(void *)arg2 liveScrollOffset:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: struct CGPoint { double x1; double x2; }, struct CGPoint { double x1; double x2; }, struct CGPoint { double x1; double x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKIntersectionResult *, void*
- (bool)hitByTouchLocation:(struct CGPoint { double x1; double x2; })arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (bool)isAtEndOfDocument;
- (bool)isExternalAttachment;
- (PKRecognitionController *)recognitionController;
- (void)setDrawing:(PKDrawing *)arg1;
- (PKStrokeSpatialCache *)strokeSpatialCache;
- (UIView *)tileContainerView;
- (UIView *)tileMaskView;
- (UIView *)viewRep;
- (void)visibleOnscreenBoundsDidChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@optional

- (bool)_handleSingleTapAtDrawingLocation:(struct CGPoint { double x1; double x2; })arg1 fromTapStroke:(bool)arg2;
- (<UICoordinateSpace> *)contentScaledCoordinateSpace;
- (<UICoordinateSpace> *)contentUnscaledCoordinateSpace;
- (<UICoordinateSpace> *)contentWindowCoordinateSpace;
- (void)didDeselectAllStrokes;
- (void)didSelectPreviouslySelectedStrokes:(NSArray *)arg1;
- (void)externalAttachmentDidChangeDrawing:(PKDrawing *)arg1;
- (void)installSelectionView:(UIView *)arg1;
- (void)translationDidFinishedInViewController:(UIViewController *)arg1;
- (void)updateLiveSelectionForStrokesInLayer:(CALayer *)arg1 inDrawing:(PKDrawing *)arg2;
- (double)viewScaleForExternalAttachment;

@end
