/* Generated by RuntimeBrowser.
 */

@protocol HMDAppleMediaAccessoryMetricsDispatcherDataSource <NSObject>

@required

- (void)currentAccessorySensorStatusFlagsForAppleMediaAccessoryMetricsDispatcher:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: HMDAppleMediaAccessoryMetricsDispatcher *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (NSString *)currentRoomForAppleMediaAccessoryMetricsDispatcher:(HMDAppleMediaAccessoryMetricsDispatcher *)arg1;
- (long long)numberOfActionSetsWithCurrentAccessoryMediaActionForAppleMediaAccessoryMetricsDispatcher:(HMDAppleMediaAccessoryMetricsDispatcher *)arg1;
- (long long)numberOfCurrentAccessoryPairedSensorsForAppleMediaAccessoryMetricsDispatcher:(HMDAppleMediaAccessoryMetricsDispatcher *)arg1;
- (long long)numberOfTriggersWithCurrentAccessoryPairedSensorsForAppleMediaAccessoryMetricsDispatcher:(HMDAppleMediaAccessoryMetricsDispatcher *)arg1;
- (NSObject<OS_dispatch_queue> *)workQueueForAppleMediaAccessoryMetricsDispatcher:(HMDAppleMediaAccessoryMetricsDispatcher *)arg1;

@end
