/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SleepHealth.framework/SleepHealth
 */

@interface HKSHSleepApneaControl : NSObject <HKSHSleepApneaControlClient, _HKXPCExportable> {
    HKHealthStore * _healthStore;
    HKTaskServerProxyProvider * _proxyProvider;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (bool)forceBreathingDisturbanceAnalysisWithError:(id*)arg1;
- (id)getDateIntervalOfLastAnalysis;
- (id)getSamplesFromLastAnalysisWithError:(id*)arg1;
- (id)initWithHealthStore:(id)arg1;
- (bool)overrideTimeIntervalAndResetActivityWithTimeInterval:(double)arg1 error:(id*)arg2;
- (id)remoteInterface;

@end