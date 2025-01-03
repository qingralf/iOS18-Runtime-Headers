/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FIUIWorkoutSegment : NSObject {
    HKQuantity * _activeEnergy;
    HKQuantity * _distance;
    double  _elapsedTime;
    NSDate * _endDate;
    NSDate * _startDate;
}

@property (nonatomic, retain) HKQuantity *activeEnergy;
@property (nonatomic, retain) HKQuantity *distance;
@property (nonatomic) double elapsedTime;
@property (nonatomic, copy) NSDate *endDate;
@property (nonatomic, copy) NSDate *startDate;

+ (id)_decimalNumberFormatter;

- (void).cxx_destruct;
- (id)activeEnergy;
- (id)description;
- (id)distance;
- (double)elapsedTime;
- (id)endDate;
- (id)formattedActiveEnergyValueForUnit:(id)arg1;
- (id)formattedDistanceValueForUnit:(id)arg1;
- (id)formattedDurationValueWithFormattingManager:(id)arg1;
- (id)formattedPaceUsingFormatType:(long long)arg1 formattingManager:(id)arg2 distanceType:(unsigned long long)arg3;
- (void)setActiveEnergy:(id)arg1;
- (void)setDistance:(id)arg1;
- (void)setElapsedTime:(double)arg1;
- (void)setEndDate:(id)arg1;
- (void)setStartDate:(id)arg1;
- (id)startDate;

@end
