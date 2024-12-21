/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriMessageTypes.framework/SiriMessageTypes
 */

@interface SiriMessageTypes.FlowOutputMessage : SiriMessageTypes.RequestMessageBase {
    void activeTasks;
    void command;
    void commandExecutionInfo;
    void completedTasks;
    void executionSource;
    void inAppResponse;
    void invocationId;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  legacyContext;
    void listenAfterSpeaking;
    void systemDialogActs;
}

- (void).cxx_destruct;

@end