/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthMedications.framework/HealthMedications
 */

@interface HKMedicationDayInCycleResult : NSObject {
    long long  _daysIntoCycle;
    bool  _isInPauseInterval;
}

@property (nonatomic, readonly) long long daysIntoCycle;
@property (nonatomic, readonly) bool isInPauseInterval;

- (long long)daysIntoCycle;
- (id)initWithDaysIntoCycle:(long long)arg1 isInPauseInterval:(bool)arg2;
- (bool)isInPauseInterval;

@end