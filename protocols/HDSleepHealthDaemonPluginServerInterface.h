/* Generated by RuntimeBrowser.
 */

@protocol HDSleepHealthDaemonPluginServerInterface <NSObject>

@required

- (void)remote_saveSleepTrackingSamples:(void *)arg1 replacingSamplesInDateInterval:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSArray *, NSDateInterval *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_startSleepTrackingSession;
- (void)remote_stopSleepTrackingSession;
- (void)remote_updateCurrentSleepSchedules:(void *)arg1 sleepDurationGoal:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSArray *, HKQuantitySample *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
