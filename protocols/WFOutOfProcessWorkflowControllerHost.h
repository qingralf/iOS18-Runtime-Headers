/* Generated by RuntimeBrowser.
 */

@protocol WFOutOfProcessWorkflowControllerHost

@required

- (oneway void)actionWithUUID:(NSString *)arg1 didFinishRunningWithError:(NSError *)arg2 serializedVariable:(WFAnyPropertyListObject *)arg3 executionResultMetadata:(WFStepwiseExecutionResultMetadata *)arg4;
- (oneway void)presenterRequestedUpdatedRunViewSource:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: WFWorkflowRunViewSource *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFWorkflowRunViewSource *, NSError *, void*
- (oneway void)runnerDidPunchToShortcutsJr;
- (oneway void)runnerWillExit;
- (oneway void)workflowDidPause;
- (oneway void)workflowDidStartRunning:(WFWorkflowDescriptor *)arg1 isAutomation:(NSNumber *)arg2 dialogAttribution:(WFDialogAttribution *)arg3;

@end