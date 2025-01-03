/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface PVEffectDebugPoint : NSObject {
    struct CGPoint { 
        double x; 
        double y; 
    }  _center;
    UIColor * _fillColor;
    bool  _ignoreTransform;
    NSArray * _lineDashPattern;
    double  _lineDashPhase;
    double  _radius;
    UIColor * _strokeColor;
    double  _strokeWidth;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } center;
@property (nonatomic, retain) UIColor *fillColor;
@property (nonatomic) bool ignoreTransform;
@property (nonatomic, retain) NSArray *lineDashPattern;
@property (nonatomic) double lineDashPhase;
@property (nonatomic) double radius;
@property (nonatomic, retain) UIColor *strokeColor;
@property (nonatomic) double strokeWidth;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })center;
- (id)fillColor;
- (bool)ignoreTransform;
- (id)init;
- (id)lineDashPattern;
- (double)lineDashPhase;
- (double)radius;
- (void)setCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setFillColor:(id)arg1;
- (void)setIgnoreTransform:(bool)arg1;
- (void)setLineDashPattern:(id)arg1;
- (void)setLineDashPhase:(double)arg1;
- (void)setRadius:(double)arg1;
- (void)setStrokeColor:(id)arg1;
- (void)setStrokeWidth:(double)arg1;
- (id)strokeColor;
- (double)strokeWidth;

@end
