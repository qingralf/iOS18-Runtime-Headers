/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDDemoDataActivityWorkoutState : NSObject <NSSecureCoding> {
    NSMutableData * _associatedObjectUUIDs;
    HKQuantity * _goal;
    unsigned long long  _goalType;
    NSMutableData * _looseAssociatedObjectUUIDs;
    NSDate * _startDate;
    long long  _swimmingStrokeStyle;
    double  _totalDistanceCrossCountrySkiingInMeters;
    double  _totalDistanceCyclingInMeters;
    double  _totalDistanceDownhillSnowSportsInMeters;
    double  _totalDistancePaddleSportsInMeters;
    double  _totalDistanceRowingInMeters;
    double  _totalDistanceSkatingSportsInMeters;
    double  _totalDistanceSwimmingInYards;
    double  _totalDistanceWalkingInMeters;
    double  _totalEnergyBurnedInKilocalories;
    double  _totalSwimmingStrokes;
    unsigned long long  _workoutActivityType;
    NSMutableArray * _workoutEvents;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end