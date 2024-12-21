/* Generated by RuntimeBrowser.
 */

@protocol NSCustomTextRendering <NSObject>

@required

- (void)beginLayout;
- (<NSCustomTextRenderingDelegate> *)delegate;
- (void)didLayoutFragment:(NSTextLayoutFragment *)arg1;
- (void)endLayoutWithConsumer:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSTextLayoutFragment *, <NSCustomTextSurface> *, void*
- (void)setDelegate:(id <NSCustomTextRenderingDelegate>)arg1;

@optional

- (double)contentsScale;
- (struct CGPoint { double x1; double x2; })convertPointFromRenderSpace:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })convertPointToRenderSpace:(struct CGPoint { double x1; double x2; })arg1 textRange:(NSTextRange *)arg2;
- (struct CGPoint { double x1; double x2; })convertPointToTextAnimationsCoordinateSpace:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })convertPointToTextAnimationsCoordinateSpace:(struct CGPoint { double x1; double x2; })arg1 textRange:(NSTextRange *)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })customTextBounds;
- (void)enumerateTextSegmentsInRange:(void *)arg1 type:(void *)arg2 options:(void *)arg3 textLayoutManager:(void *)arg4 usingBlock:(void *)arg5; // needs 5 arg types, found 13: NSTextRange *, long long, unsigned long long, NSTextLayoutManager *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, NSTextRange *, struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }, double, NSTextContainer *, void*
- (<_NSCustomTextRenderingDisplayLink> *)externalDisplayLink;
- (bool)fragmentsValid;
- (void)invalidateTemporaryAttributesInRange:(NSTextRange *)arg1;
- (void)postLayoutNotify;
- (void)preLayoutNotify;
- (void)setContentsScale:(double)arg1;
- (void)setExternalDisplayLink:(id <_NSCustomTextRenderingDisplayLink>)arg1;
- (void)setNeedsDisplay;
- (void)textDidEditRange:(NSTextRange *)arg1 replacementLength:(unsigned long long)arg2;

@end