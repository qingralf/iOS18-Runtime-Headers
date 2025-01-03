/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFRunningProgressSuppressionStateMachine : WFStateMachine {
    void delegate;
    void initialDialogAttribution;
    void waitingCancellable;
}

@property (nonatomic) <WFRunningProgressSuppressionStateMachineDelegate> *delegate;

- (void).cxx_destruct;
- (void)decideRunningProgressIsAllowed:(bool)arg1 withReason:(id)arg2;
- (id)delegate;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)startedRunningAction:(id)arg1 inShortcut:(id)arg2;
- (void)startedRunningShortcut:(id)arg1 withDialogAttribution:(id)arg2;

@end
