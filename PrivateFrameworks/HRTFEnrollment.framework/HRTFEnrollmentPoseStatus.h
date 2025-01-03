/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HRTFEnrollment.framework/HRTFEnrollment
 */

@interface HRTFEnrollmentPoseStatus : NSObject <NSSecureCoding> {
    double  _currentPitchAngle;
    double  _currentYawAngle;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _faceBoundingBox;
    unsigned char  _hasPitchAngle;
    unsigned char  _hasYawAngle;
    NSArray * _pitchAngles;
    NSArray * _yawAngles;
}

@property (readonly) double currentPitchAngle;
@property (readonly) double currentYawAngle;
@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } faceBoundingBox;
@property (readonly) unsigned char hasPitchAngle;
@property (readonly) unsigned char hasYawAngle;
@property (readonly) NSArray *pitchAngles;
@property (readonly) NSArray *remainingPitchAngles;
@property (readonly) NSArray *remainingYawAngles;
@property (readonly) NSArray *yawAngles;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)currentPitchAngle;
- (double)currentYawAngle;
- (void)encodeWithCoder:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })faceBoundingBox;
- (unsigned char)hasPitchAngle;
- (unsigned char)hasYawAngle;
- (id)initWithCoder:(id)arg1;
- (id)initWithCurrentYawPose:(id)arg1 pitchPose:(id)arg2 yawAngle:(double)arg3 pitchAngle:(double)arg4 faceBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5;
- (id)initWithYawPose:(id)arg1 pitchPose:(id)arg2 isEarTracking:(unsigned char)arg3 yawAngle:(double)arg4 pitchAngle:(double)arg5;
- (id)pitchAngles;
- (id)remainingPitchAngles;
- (id)remainingYawAngles;
- (id)yawAngles;

@end
