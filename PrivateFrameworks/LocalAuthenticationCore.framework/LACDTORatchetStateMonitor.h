/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LocalAuthenticationCore.framework/LocalAuthenticationCore
 */

@interface LACDTORatchetStateMonitor : NSObject <LACDTOEventHandler, LACDTOEventProducer, LACDTOPolicyEvaluationControllerObserver, LACDTORatchetStateProvider> {
    LACDTORatchetState * _ratchetState;
    <LACDTORatchetStateProvider> * _ratchetStateProvider;
    LACTimer * _timer;
    NSObject<OS_dispatch_queue> * _workQueue;
    <LACDTOEventBus> * eventBus;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <LACDTOEventBus> *eventBus;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) LACDTORatchetState *ratchetState;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_scheduleNextStatusCheck;
- (id)eventBus;
- (void)handleEvent:(id)arg1 sender:(id)arg2;
- (id)initWithRatchetStateProvider:(id)arg1 workQueue:(id)arg2;
- (void)policyController:(id)arg1 didFinishPolicyEvaluation:(id)arg2 result:(id)arg3;
- (void)policyController:(id)arg1 willStartPolicyEvaluation:(id)arg2;
- (id)ratchetState;
- (void)ratchetStateCompositeWithCompletion:(id /* block */)arg1;
- (void)ratchetStateWithCompletion:(id /* block */)arg1;
- (void)setEventBus:(id)arg1;
- (void)setRatchetState:(id)arg1;

@end
