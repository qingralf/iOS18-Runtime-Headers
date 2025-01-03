/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIPinchGestureRecognizer : UIGestureRecognizer {
    _UIPinchGestureRecognizerDriver * _driver;
}

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } anchorPoint;
@property (getter=_hysteresis, setter=_setHysteresis:, nonatomic) double hysteresis;
@property (nonatomic) double scale;
@property (nonatomic) double scaleThreshold;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } transform;
@property (nonatomic, readonly) double velocity;

+ (bool)_supportsDefaultPressTypes;
+ (bool)_supportsDefaultTouchTypes;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_driver;
- (bool)_endsOnSingleTouch;
- (double)_hysteresis;
- (bool)_isGestureType:(long long)arg1;
- (void)_setEndsOnSingleTouch:(bool)arg1;
- (void)_setHysteresis:(double)arg1;
- (struct CGPoint { double x1; double x2; })anchorPoint;
- (struct CGPoint { double x1; double x2; })locationInView:(id)arg1;
- (double)scale;
- (double)scaleThreshold;
- (void)setScale:(double)arg1;
- (void)setScaleThreshold:(double)arg1;
- (void)setTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transform;
- (double)velocity;

@end
