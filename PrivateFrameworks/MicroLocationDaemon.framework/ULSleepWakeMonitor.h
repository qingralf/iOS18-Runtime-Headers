/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MicroLocationDaemon.framework/MicroLocationDaemon
 */

@interface ULSleepWakeMonitor : ULEventMonitor {
    CUSleepWakeMonitor * _sleepWakeMonitor;
}

@property (nonatomic, retain) CUSleepWakeMonitor *sleepWakeMonitor;

+ (id)_eventFromCUSleepWakeState:(int)arg1;

- (void).cxx_destruct;
- (id)latestEventAfterAddingObserverForEventName:(id)arg1;
- (void)setSleepWakeMonitor:(id)arg1;
- (id)sleepWakeMonitor;
- (void)startMonitoring:(id)arg1;
- (void)stopMonitoring:(id)arg1;

@end