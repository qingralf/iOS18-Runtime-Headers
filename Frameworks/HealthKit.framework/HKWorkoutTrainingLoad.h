/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKWorkoutTrainingLoad : NSObject <NSCopying, NSSecureCoding> {
    NSDateInterval * _dateInterval;
    HKQuantity * _quantity;
    long long  _workoutsCount;
}

@property (readonly, copy) NSDateInterval *dateInterval;
@property (readonly, copy) HKQuantity *quantity;
@property (readonly) long long workoutsCount;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateInterval;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithQuantity:(id)arg1 dateInterval:(id)arg2;
- (id)initWithQuantity:(id)arg1 dateInterval:(id)arg2 count:(long long)arg3;
- (id)quantity;
- (long long)workoutsCount;

@end
