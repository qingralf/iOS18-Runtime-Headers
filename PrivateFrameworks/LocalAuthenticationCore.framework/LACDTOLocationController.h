/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LocalAuthenticationCore.framework/LocalAuthenticationCore
 */

@interface LACDTOLocationController : NSObject <LACDTOEventProducer, LACDTOLocationController, LACDTOLocationMonitorDelegate> {
    <LACDTOLocationProvider> * _locationProvider;
    LACDTOLocationState * _locationState;
    <LACDTOLocationMonitor> * _monitor;
    NSObject<OS_dispatch_queue> * _workQueue;
    <LACDTOEventBus> * eventBus;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <LACDTOEventBus> *eventBus;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) LACDTOLocationState *locationState;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (void)checkIsInFamiliarLocationWithCompletion:(id /* block */)arg1;
- (id)description;
- (id)eventBus;
- (id)initWithLocationProvider:(id)arg1 monitor:(id)arg2 workQueue:(id)arg3;
- (void)locationMonitor:(id)arg1 didReceiveLocationState:(id)arg2;
- (id)locationState;
- (void)pendingEvaluationController:(id)arg1 updatedPendingEvaluation:(id)arg2;
- (void)pendingEvaluationControllerDidStartTrackingPendingEvaluations:(id)arg1;
- (void)pendingEvaluationControllerDidStopTrackingPendingEvaluations:(id)arg1;
- (void)setEventBus:(id)arg1;
- (void)setLocationState:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)workQueue;

@end