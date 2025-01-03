/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
 */

@interface WFOutOfProcessWorkflowController : NSObject <WFOutOfProcessWorkflowControllerHost, WFOutOfProcessWorkflowControllerStateMachineDelegate> {
    WFDialogAttribution * _currentDialogAttribution;
    WFWorkflowDescriptor * _currentWorkflow;
    <WFOutOfProcessWorkflowControllerDelegate> * _delegate;
    long long  _environment;
    bool  _isAutomation;
    long long  _presentationMode;
    WFWorkflowRunDescriptor * _runDescriptor;
    WFWorkflowRunRequest * _runRequest;
    <WFOutOfProcessWorkflowControllerVendor> * _runner;
    WFWorkflowRunningContext * _runningContext;
    WFSandboxExtensionManager * _sandboxExtensionManager;
    WFRunnerConnection * _serviceConnection;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _serviceConnectionLock;
    WFOutOfProcessWorkflowControllerStateMachine * _stateMachine;
}

@property (nonatomic, copy) WFDialogAttribution *currentDialogAttribution;
@property (nonatomic, retain) WFWorkflowDescriptor *currentWorkflow;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <WFOutOfProcessWorkflowControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long environment;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isAutomation;
@property (nonatomic) long long presentationMode;
@property (nonatomic, retain) WFWorkflowRunDescriptor *runDescriptor;
@property (nonatomic, retain) WFWorkflowRunRequest *runRequest;
@property (nonatomic, retain) <WFOutOfProcessWorkflowControllerVendor> *runner;
@property (getter=isRunning, nonatomic, readonly) bool running;
@property (nonatomic, readonly, copy) WFWorkflowRunningContext *runningContext;
@property (nonatomic, readonly) WFSandboxExtensionManager *sandboxExtensionManager;
@property (nonatomic, retain) WFRunnerConnection *serviceConnection;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } serviceConnectionLock;
@property (nonatomic, readonly) WFOutOfProcessWorkflowControllerStateMachine *stateMachine;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient

- (void).cxx_destruct;
- (oneway void)actionWithUUID:(id)arg1 didFinishRunningWithError:(id)arg2 serializedVariable:(id)arg3 executionResultMetadata:(id)arg4;
- (id)asynchronousRunnerWithError:(out id*)arg1 reason:(id)arg2;
- (void)controllerStateMachine:(id)arg1 didFinishRunningShortcutWithResult:(id)arg2;
- (void)controllerStateMachine:(id)arg1 didRequestStoppingShortcutWithError:(id)arg2;
- (void)controllerStateMachine:(id)arg1 shouldNotifyDelegateWithResult:(id)arg2 currentDialogAttribution:(id)arg3;
- (void)controllerStateMachineDidRequestRunnerTearDown:(id)arg1;
- (id)currentDialogAttribution;
- (id)currentWorkflow;
- (id)delegate;
- (long long)environment;
- (void)extractVariableContentFromEncodedReference:(id)arg1 forEncodedExpectedType:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)fetchDisplayValueForRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchToolInvocationSummaryForInvocation:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)forTestingOnly_simulateXPCInterruption;
- (void)getCurrentProgressCompletedWithCompletionHandler:(id /* block */)arg1;
- (void)handleIncomingFileForRemoteExecutionWithURL:(id)arg1 withIdentifier:(id)arg2;
- (id)initWithEnvironment:(long long)arg1 runningContext:(id)arg2 presentationMode:(long long)arg3;
- (id)initWithEnvironment:(long long)arg1 runningContext:(id)arg2 presentationMode:(long long)arg3 existingConnection:(id)arg4;
- (void)injectContentAsVariable:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)isAutomation;
- (bool)isRunning;
- (id)localizedTimeoutErrorDescription;
- (id)localizedXPCInterruptionErrorDescription;
- (void)pauseWorkflowAndWriteStateToDisk;
- (void)performQuery:(id)arg1 inValueSet:(id)arg2 toolInvocation:(id)arg3 completionHandler:(id /* block */)arg4;
- (long long)presentationMode;
- (oneway void)presenterRequestedUpdatedRunViewSource:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)reindexToolKitDatabaseWithRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)reset;
- (void)resolveDeferredValueFromEncodedStorage:(id)arg1 forEncodedExpectedType:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)resumeRunningWithRequest:(id)arg1 error:(out id*)arg2;
- (bool)runActionWithRunRequestData:(id)arg1 error:(out id*)arg2;
- (id)runDescriptor;
- (id)runRequest;
- (void)runToolWithInvocation:(id)arg1;
- (bool)runWorkflowWithDescriptor:(id)arg1 request:(id)arg2 error:(out id*)arg3;
- (id)runner;
- (oneway void)runnerDidPunchToShortcutsJr;
- (oneway void)runnerWillExit;
- (id)runnerWithError:(out id*)arg1 synchronous:(bool)arg2 reason:(id)arg3;
- (id)runningContext;
- (id)sandboxExtensionManager;
- (id)serviceConnection;
- (struct os_unfair_lock_s { unsigned int x1; })serviceConnectionLock;
- (void)setCurrentDialogAttribution:(id)arg1;
- (void)setCurrentWorkflow:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsAutomation:(bool)arg1;
- (void)setPresentationMode:(long long)arg1;
- (void)setRunDescriptor:(id)arg1;
- (void)setRunRequest:(id)arg1;
- (void)setRunner:(id)arg1;
- (void)setServiceConnection:(id)arg1;
- (id)stateMachine;
- (void)stop;
- (id)synchronousRunnerWithError:(out id*)arg1 reason:(id)arg2;
- (void)updateRunViewSource:(id)arg1;
- (oneway void)workflowDidPause;
- (oneway void)workflowDidStartRunning:(id)arg1 isAutomation:(id)arg2 dialogAttribution:(id)arg3;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

+ (id)computeFinderResizedSizesForImages:(id)arg1 inSizes:(id)arg2 error:(id*)arg3;

@end
