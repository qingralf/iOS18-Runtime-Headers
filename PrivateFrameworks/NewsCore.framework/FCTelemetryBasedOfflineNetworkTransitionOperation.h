/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCTelemetryBasedOfflineNetworkTransitionOperation : FCOperation <FCNetworkBehaviorMonitor> {
    <FCAppActivationMonitorType> * _appActivationMonitor;
    NSDate * _dateOfLastSuccess;
    NSSet * _ignoredHosts;
    NFUnfairLock * _lock;
    double  _minimumSecondsSinceSuccessToOffline;
    NSDate * _monitoringStartDate;
    FCMultiNetworkBehaviorMonitor * _networkBehaviorMonitor;
    id /* block */  _transitionBlock;
}

@property (nonatomic, readonly) <FCAppActivationMonitorType> *appActivationMonitor;
@property (nonatomic, copy) NSDate *dateOfLastSuccess;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSSet *ignoredHosts;
@property (nonatomic, readonly) NFUnfairLock *lock;
@property (nonatomic) double minimumSecondsSinceSuccessToOffline;
@property (nonatomic, copy) NSDate *monitoringStartDate;
@property (nonatomic, readonly) FCMultiNetworkBehaviorMonitor *networkBehaviorMonitor;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ transitionBlock;

- (void).cxx_destruct;
- (id)appActivationMonitor;
- (id)dateOfLastSuccess;
- (id)ignoredHosts;
- (id)init;
- (id)initWithAppActivationMonitor:(id)arg1 ignoredHosts:(id)arg2 networkBehaviorMonitor:(id)arg3;
- (id)lock;
- (void)logNetworkEvent:(id)arg1;
- (double)minimumSecondsSinceSuccessToOffline;
- (id)monitoringStartDate;
- (id)networkBehaviorMonitor;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (void)setDateOfLastSuccess:(id)arg1;
- (void)setMinimumSecondsSinceSuccessToOffline:(double)arg1;
- (void)setMonitoringStartDate:(id)arg1;
- (void)setTransitionBlock:(id /* block */)arg1;
- (id /* block */)transitionBlock;

@end