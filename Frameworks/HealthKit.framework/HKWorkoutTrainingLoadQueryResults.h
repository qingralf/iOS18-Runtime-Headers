/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKWorkoutTrainingLoadQueryResults : NSObject <NSCopying, NSSecureCoding> {
    HKWorkoutTrainingLoad * _totalTrainingLoad;
    NSDictionary * _trainingloadByActivityType;
}

@property (readonly, copy) HKWorkoutTrainingLoad *totalTrainingLoad;
@property (nonatomic, readonly, copy) NSDictionary *trainingloadByActivityType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activityTypes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTotalTrainingLoad:(id)arg1;
- (id)initWithTotalTrainingLoad:(id)arg1 trainingloadByActivityType:(id)arg2;
- (id)totalTrainingLoad;
- (id)trainingLoadForActivityType:(unsigned long long)arg1;
- (id)trainingloadByActivityType;

@end