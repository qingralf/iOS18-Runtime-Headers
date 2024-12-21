/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthMedicationsDaemonPlugin.framework/HealthMedicationsDaemonPlugin
 */

@interface HDMedicationNotificationEngine : NSObject

+ (id)generateForSchedules:(id)arg1 configuration:(id)arg2 error:(id*)arg3;
+ (long long)unitTesting_calculateTotalDaysForSchedule:(id)arg1 configuration:(id)arg2 calendar:(id)arg3 startGenerationDate:(id)arg4;
+ (bool)unitTesting_isLastScheduledDoseforScheduledDate:(id)arg1 schedule:(id)arg2 startGenerationDate:(id)arg3 calendar:(id)arg4 cycleIntervalIndex:(int)arg5 interval:(id)arg6;

- (id)init;

@end