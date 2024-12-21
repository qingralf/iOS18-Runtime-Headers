/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIPointerEffectSettings : PTSettings {
    double  _dampedAnimationDampingRatio;
    double  _dampedAnimationResponse;
    double  _defaultPointerCornerRadius;
    double  _liftForceExponent;
    double  _liftForceFloor;
    _UISpringAnimationPrototypeSettings * _liftProgress;
    double  _maxSlipPoints;
    double  _overrideSlipPoints;
    double  _parallaxAmount;
    double  _scaleUpAnimationDampingRatio;
    double  _scaleUpAnimationResponse;
    double  _scaleUpPoints;
    double  _slipFactorX;
    double  _slipFactorY;
}

@property (nonatomic) double dampedAnimationDampingRatio;
@property (nonatomic) double dampedAnimationResponse;
@property (nonatomic) double defaultPointerCornerRadius;
@property (nonatomic) double liftForceExponent;
@property (nonatomic) double liftForceFloor;
@property (nonatomic, retain) _UISpringAnimationPrototypeSettings *liftProgress;
@property (nonatomic) double maxSlipPoints;
@property (nonatomic) double overrideSlipPoints;
@property (nonatomic) double parallaxAmount;
@property (nonatomic) double scaleUpAnimationDampingRatio;
@property (nonatomic) double scaleUpAnimationResponse;
@property (nonatomic) double scaleUpPoints;
@property (nonatomic) double slipFactorX;
@property (nonatomic) double slipFactorY;

+ (bool)pointerSlipMatchesContentSlip;
+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (double)dampedAnimationDampingRatio;
- (double)dampedAnimationResponse;
- (double)defaultPointerCornerRadius;
- (double)liftForceExponent;
- (double)liftForceFloor;
- (id)liftProgress;
- (double)maxSlipPoints;
- (double)overrideSlipPoints;
- (double)parallaxAmount;
- (double)scaleUpAnimationDampingRatio;
- (double)scaleUpAnimationResponse;
- (double)scaleUpPoints;
- (void)setDampedAnimationDampingRatio:(double)arg1;
- (void)setDampedAnimationResponse:(double)arg1;
- (void)setDefaultPointerCornerRadius:(double)arg1;
- (void)setDefaultValues;
- (void)setLiftForceExponent:(double)arg1;
- (void)setLiftForceFloor:(double)arg1;
- (void)setLiftProgress:(id)arg1;
- (void)setMaxSlipPoints:(double)arg1;
- (void)setOverrideSlipPoints:(double)arg1;
- (void)setParallaxAmount:(double)arg1;
- (void)setScaleUpAnimationDampingRatio:(double)arg1;
- (void)setScaleUpAnimationResponse:(double)arg1;
- (void)setScaleUpPoints:(double)arg1;
- (void)setSlipFactorX:(double)arg1;
- (void)setSlipFactorY:(double)arg1;
- (double)slipFactorX;
- (double)slipFactorY;

@end