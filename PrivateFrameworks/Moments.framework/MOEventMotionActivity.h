/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Moments.framework/Moments
 */

@interface MOEventMotionActivity : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _motionDistance;
    NSNumber * _motionStepCount;
    unsigned long long  _motionType;
}

@property (nonatomic, retain) NSNumber *motionDistance;
@property (nonatomic, retain) NSNumber *motionStepCount;
@property (nonatomic) unsigned long long motionType;

+ (id)descriptionOfMotionType:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)motionDistance;
- (id)motionStepCount;
- (unsigned long long)motionType;
- (void)setMotionDistance:(id)arg1;
- (void)setMotionStepCount:(id)arg1;
- (void)setMotionType:(unsigned long long)arg1;

@end
