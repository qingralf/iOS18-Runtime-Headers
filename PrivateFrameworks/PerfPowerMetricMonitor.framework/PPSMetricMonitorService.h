/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PerfPowerMetricMonitor.framework/PerfPowerMetricMonitor
 */

@interface PPSMetricMonitorService : NSObject <NSXPCListenerDelegate, PPSMetricMonitorServiceInterface> {
    NSMutableDictionary * _clients;
    <PPSMetricMonitorServiceDelegate> * _delegate;
    NSObject<OS_dispatch_source> * _processPollingRepeatingTimer;
}

@property (retain) NSMutableDictionary *clients;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <PPSMetricMonitorServiceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *processPollingRepeatingTimer;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_canStartMonitoringForClient:(id)arg1;
- (void)_cancelProcessPollingTimer;
- (void)_handleConnectionEndedWithClient:(id)arg1;
- (void)_pollForProcessNames:(id)arg1;
- (void)_startProcessPollingTimer:(id)arg1;
- (void)_updateMetricCollection:(id)arg1 metricCollection:(id)arg2;
- (id)clients;
- (void)collectMetricsOnDemand:(id /* block */)arg1;
- (void)collectMetricsOnSnapshotWithError:(id*)arg1 completion:(id /* block */)arg2;
- (id)delegate;
- (void)endWithError:(id)arg1;
- (void)finishMonitoringAndSendMetrics;
- (id)fullProcessNameForPid:(int)arg1;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)processPollingRepeatingTimer;
- (void)setClients:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setProcessPollingRepeatingTimer:(id)arg1;
- (void)setUpWithConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (void)setUpdateInterval:(id)arg1 completion:(id /* block */)arg2;
- (void)startMonitoringProcessWithName:(id)arg1 completion:(id /* block */)arg2;
- (void)startMonitoringProcessWithPID:(id)arg1 completion:(id /* block */)arg2;
- (void)startMonitoringProcessesWithName:(id)arg1 completion:(id /* block */)arg2;
- (void)startMonitoringProcessesWithNames:(id)arg1 withPIDs:(id)arg2 completion:(id /* block */)arg3;
- (void)startMonitoringProcessesWithPID:(id)arg1 completion:(id /* block */)arg2;
- (void)startMonitoringSystemMetricsWithCompletion:(id /* block */)arg1;
- (void)startXPCListener;
- (void)updateWithMetricCollection:(id)arg1;

@end