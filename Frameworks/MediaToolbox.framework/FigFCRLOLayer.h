/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

@interface FigFCRLOLayer : FigBaseCALayer {
    struct OpaqueFigCaptionRendererRenderedLegibleOutputInternal { id x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; void *x3; int (*x4)(); int (*x5)(); struct CGSize { double x_6_1_1; double x_6_1_2; } x6; id x7; unsigned char x8; } * layerInternal;
}

- (void)clear:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)compose;
- (void)dealloc;
- (id)init;
- (void)layoutSublayers;
- (void)setCallbacks:(id)arg1 viewportChanged:(int (*)arg2 drawInContext:(int (*)arg3;
- (void)setVideoBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setVideoDisplaySize:(struct CGSize { double x1; double x2; })arg1;

@end
