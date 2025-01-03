/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraEditKit.framework/CameraEditKit
 */

@interface CameraEditKit.HIDPassthroughSliderPositionDriver : NSObject <CEKSliderPositionDriver> {
    void distanceToDecelerate;
    void distanceTraveled;
    void liftoffVelocity;
}

@property (nonatomic) double distanceToDecelerate;
@property (nonatomic) double distanceTraveled;
@property (nonatomic) double liftoffVelocity;
@property (nonatomic, readonly) double velocity;

- (void)contactBeganWithAction:(id)arg1;
- (void)contactEndedWithAction:(id)arg1;
- (void)contactUpdatedWithAction:(id)arg1;
- (double)distanceToDecelerate;
- (double)distanceTraveled;
- (id)init;
- (double)liftoffVelocity;
- (void)setDistanceToDecelerate:(double)arg1;
- (void)setDistanceTraveled:(double)arg1;
- (void)setLiftoffVelocity:(double)arg1;
- (double)velocity;

@end
