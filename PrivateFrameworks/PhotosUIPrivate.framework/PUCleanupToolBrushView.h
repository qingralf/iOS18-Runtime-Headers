/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUIPrivate.framework/PhotosUIPrivate
 */

@interface PUCleanupToolBrushView : UIView {
    id  _bridgedExclusionMaskCGImage;
    UIBezierPath * _brushPath;
    CAShapeLayer * _brushPathLayer;
    CIImage * _brushStrokeExclusionMask;
    CAShapeLayer * _cursorLayer;
    CALayer * _exclusionMaskLayer;
    bool  _isHDR;
    double  _lastCursorRadius;
    NUMediaView * _mediaView;
    bool  _needsClearing;
    bool  _shouldDrawCursor;
}

@property (nonatomic, retain) id bridgedExclusionMaskCGImage;
@property (nonatomic, retain) UIBezierPath *brushPath;
@property (nonatomic, retain) CAShapeLayer *brushPathLayer;
@property (nonatomic, retain) CIImage *brushStrokeExclusionMask;
@property (nonatomic, retain) CAShapeLayer *cursorLayer;
@property (nonatomic, retain) CALayer *exclusionMaskLayer;
@property (nonatomic) bool isHDR;
@property (nonatomic) double lastCursorRadius;
@property (nonatomic) NUMediaView *mediaView;
@property (nonatomic) bool needsClearing;
@property (nonatomic) bool shouldDrawCursor;

- (void).cxx_destruct;
- (void)addPointToStroke:(struct CGPoint { double x1; double x2; })arg1;
- (id)bridgedExclusionMaskCGImage;
- (id)brushPath;
- (id)brushPathLayer;
- (id)brushStrokeExclusionMask;
- (id)cursorLayer;
- (void)drawCursorAtPoint:(struct CGPoint { double x1; double x2; })arg1 withRadius:(double)arg2;
- (id)exclusionMaskLayer;
- (id)initWithMediaView:(id)arg1 isHDR:(bool)arg2;
- (bool)isHDR;
- (double)lastCursorRadius;
- (id)mediaView;
- (bool)needsClearing;
- (void)removeStroke;
- (void)setBridgedExclusionMaskCGImage:(id)arg1;
- (void)setBrushPath:(id)arg1;
- (void)setBrushPathLayer:(id)arg1;
- (void)setBrushStrokeExclusionMask:(id)arg1;
- (void)setCursorLayer:(id)arg1;
- (void)setExclusionMaskLayer:(id)arg1;
- (void)setIsHDR:(bool)arg1;
- (void)setLastCursorRadius:(double)arg1;
- (void)setMediaView:(id)arg1;
- (void)setNeedsClearing:(bool)arg1;
- (void)setShouldDrawCursor:(bool)arg1;
- (bool)shouldDrawCursor;
- (void)startStrokeWithPoint:(struct CGPoint { double x1; double x2; })arg1 radius:(double)arg2;

@end