/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCTelemetryBasedOfflineNetworkTransitionMonitor : NSObject <FCNetworkTransitionMonitor> {
    <FCAppActivationMonitorType> * _appActivationMonitor;
    <FCNewsAppConfigurationManager> * _configurationManager;
    NSDate * _dateOfLastTransition;
    NFUnfairLock * _dateOfLastTransitionLock;
    FCMultiNetworkBehaviorMonitor * _networkBehaviorMonitor;
    <FCNetworkTransitionMonitor> * _onlineTransitionMonitor;
}

@property (nonatomic, readonly) <FCAppActivationMonitorType> *appActivationMonitor;
@property (nonatomic, readonly) <FCNewsAppConfigurationManager> *configurationManager;
@property (nonatomic, copy) NSDate *dateOfLastTransition;
@property (nonatomic, readonly) NFUnfairLock *dateOfLastTransitionLock;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) FCMultiNetworkBehaviorMonitor *networkBehaviorMonitor;
@property (nonatomic, readonly) <FCNetworkTransitionMonitor> *onlineTransitionMonitor;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)appActivationMonitor;
- (id)configurationManager;
- (id)dateOfLastTransition;
- (id)dateOfLastTransitionLock;
- (id)init;
- (id)initWithAppActivationMonitor:(id)arg1 configurationManager:(id)arg2 networkBehaviorMonitor:(id)arg3 onlineTransitionMonitor:(id)arg4;
- (id)networkBehaviorMonitor;
- (id)notifyWhenTransitionOccursOnQueue:(id)arg1 withBlock:(id /* block */)arg2;
- (id)onlineTransitionMonitor;
- (void)setDateOfLastTransition:(id)arg1;

@end
