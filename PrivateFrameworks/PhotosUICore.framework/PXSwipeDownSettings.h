/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXSwipeDownSettings : PXSettings {
    long long  _downMotionType;
    double  _downResistanceDistance;
    long long  _horizontalMotionType;
    double  _horizontalResistanceDistance;
    double  _rotationHorizontalMotionFactor;
    double  _rotationHorizontalMotionHysteresisDistance;
    double  _rotationMaximumAngle;
    bool  _rotationOnHorizontalMotion;
    bool  _rotationOnVerticalMotion;
    double  _rotationVerticalMotionAngle;
    double  _rotationVerticalMotionResistanceDistance;
    double  _scaleDownDistance;
    double  _scaleDownFactor;
    double  _transitionDistance;
    long long  _upMotionType;
    double  _upResistanceDistance;
}

@property (nonatomic) long long downMotionType;
@property (nonatomic) double downResistanceDistance;
@property (nonatomic) long long horizontalMotionType;
@property (nonatomic) double horizontalResistanceDistance;
@property (nonatomic) double rotationHorizontalMotionFactor;
@property (nonatomic) double rotationHorizontalMotionHysteresisDistance;
@property (nonatomic) double rotationMaximumAngle;
@property (nonatomic) bool rotationOnHorizontalMotion;
@property (nonatomic) bool rotationOnVerticalMotion;
@property (nonatomic) double rotationVerticalMotionAngle;
@property (nonatomic) double rotationVerticalMotionResistanceDistance;
@property (nonatomic) double scaleDownDistance;
@property (nonatomic) double scaleDownFactor;
@property (nonatomic) double transitionDistance;
@property (nonatomic) long long upMotionType;
@property (nonatomic) double upResistanceDistance;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (long long)downMotionType;
- (double)downResistanceDistance;
- (long long)horizontalMotionType;
- (double)horizontalResistanceDistance;
- (id)parentSettings;
- (double)rotationHorizontalMotionFactor;
- (double)rotationHorizontalMotionHysteresisDistance;
- (double)rotationMaximumAngle;
- (bool)rotationOnHorizontalMotion;
- (bool)rotationOnVerticalMotion;
- (double)rotationVerticalMotionAngle;
- (double)rotationVerticalMotionResistanceDistance;
- (double)scaleDownDistance;
- (double)scaleDownFactor;
- (void)setDefaultValues;
- (void)setDownMotionType:(long long)arg1;
- (void)setDownResistanceDistance:(double)arg1;
- (void)setHorizontalMotionType:(long long)arg1;
- (void)setHorizontalResistanceDistance:(double)arg1;
- (void)setRotationHorizontalMotionFactor:(double)arg1;
- (void)setRotationHorizontalMotionHysteresisDistance:(double)arg1;
- (void)setRotationMaximumAngle:(double)arg1;
- (void)setRotationOnHorizontalMotion:(bool)arg1;
- (void)setRotationOnVerticalMotion:(bool)arg1;
- (void)setRotationVerticalMotionAngle:(double)arg1;
- (void)setRotationVerticalMotionResistanceDistance:(double)arg1;
- (void)setScaleDownDistance:(double)arg1;
- (void)setScaleDownFactor:(double)arg1;
- (void)setTransitionDistance:(double)arg1;
- (void)setUpMotionType:(long long)arg1;
- (void)setUpResistanceDistance:(double)arg1;
- (double)transitionDistance;
- (long long)upMotionType;
- (double)upResistanceDistance;

@end
