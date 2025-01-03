/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
 */

@interface PowerUIAnalyticsManager : NSObject {
    NSObject<OS_dispatch_queue> * _eventSubmissionQueue;
    NSObject<OS_os_log> * _log;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *eventSubmissionQueue;
@property (nonatomic, retain) NSObject<OS_os_log> *log;

+ (int)convertTimelineStringToOBCEvent:(id)arg1;
+ (int)obcModeOfOperationToBiomeModeOfOperation:(unsigned long long)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)chargingStatisticsForSessionBetween:(id)arg1 and:(id)arg2;
- (id)chargingStatisticsFrom:(id)arg1 to:(id)arg2;
- (id)chargingStatisticsSince:(id)arg1;
- (id)eventSubmissionQueue;
- (id)gaugingMitigationStatisticsSince:(id)arg1;
- (id)init;
- (id)log;
- (void)printExistingEvents;
- (void)setEventSubmissionQueue:(id)arg1;
- (void)setLog:(id)arg1;
- (id)stringFromEngagementEvent:(id)arg1;
- (bool)submitEngagementEventWithBatteryLevel:(id)arg1 targetSoC:(id)arg2 predictedEndOfCharge:(id)arg3 modeOfOperation:(int)arg4 eventType:(int)arg5;
- (bool)submitGaugingEventWithUpdateType:(int)arg1 qmaxState:(int)arg2 daysSinceQMax:(id)arg3 ocvState:(int)arg4 daysSinceOCV:(id)arg5 fullChargeState:(int)arg6 daysSinceFullChargeAttempt:(id)arg7;

@end
