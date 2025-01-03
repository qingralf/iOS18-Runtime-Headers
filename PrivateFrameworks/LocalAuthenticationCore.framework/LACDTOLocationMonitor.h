/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LocalAuthenticationCore.framework/LocalAuthenticationCore
 */

@interface LACDTOLocationMonitor : NSObject <LACDTOLocationMonitor> {
    <LACDTOLocationMonitorDelegate> * _delegate;
    <LACDTOLocationProvider> * _locationProvider;
    LACTimer * _timer;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <LACDTOLocationMonitorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithLocationProvider:(id)arg1 workQueue:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)startMonitoringWithReason:(id)arg1;
- (void)stopMonitoringWithReason:(id)arg1;

@end
