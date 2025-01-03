/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
 */

@interface WFStaccatoWorkflowRunnerClient : WFSystemActionRunnerClient {
    bool  _hasStartedRun;
}

@property (nonatomic, readonly) bool hasCompletedRun;
@property (nonatomic) bool hasStartedRun;
@property (nonatomic, readonly, copy) NSString *presentableIdentifier;
@property (nonatomic, readonly, copy) NSString *presentableRequester;

+ (id)defaultContextualActionContext;

- (bool)hasCompletedRun;
- (bool)hasStartedRun;
- (id)initWithStaccatoAction:(id)arg1;
- (id)initWithStaccatoAction:(id)arg1 interactionType:(id)arg2 preciseTimeStamp:(id)arg3;
- (id)presentableIdentifier;
- (id)presentableRequester;
- (void)setHasStartedRun:(bool)arg1;
- (void)start;
- (void)startWithInteractionType:(id)arg1 preciseTimeStamp:(id)arg2;
- (void)userInteractionBegan;

@end
