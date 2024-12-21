/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
 */

@interface WFOutOfProcessWorkflowControllerXPCProxy : NSObject <WFOutOfProcessWorkflowControllerVendor> {
    NSXPCConnection * _connection;
    bool  _isSynchronous;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isSynchronous;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (oneway void)computeFinderResizedSizesForImages:(id)arg1 inSizes:(id)arg2 completion:(id /* block */)arg3;
- (id)connection;
- (oneway void)extractVariableContentFromEncodedReference:(id)arg1 forEncodedExpectedType:(id)arg2 completionHandler:(id /* block */)arg3;
- (oneway void)fetchDisplayValueForRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (oneway void)fetchToolInvocationSummaryForInvocation:(id)arg1 completionHandler:(id /* block */)arg2;
- (oneway void)getCurrentProgressCompletedWithCompletionHandler:(id /* block */)arg1;
- (oneway void)handleIncomingFileForRemoteExecutionWithURL:(id)arg1 withIdentifier:(id)arg2;
- (id)initWithConnection:(id)arg1 isSynchronous:(bool)arg2;
- (oneway void)injectContentAsVariable:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)isSynchronous;
- (oneway void)pauseWorkflowAndWriteStateToDisk:(id)arg1;
- (oneway void)performQuery:(id)arg1 inValueSet:(id)arg2 toolInvocation:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)prewarmRunnerWithCompletion:(id /* block */)arg1;
- (id)proxyWithErrorHandler:(id /* block */)arg1;
- (oneway void)reindexToolKitDatabaseWithRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (oneway void)resolveDeferredValueFromEncodedStorage:(id)arg1 forEncodedExpectedType:(id)arg2 completionHandler:(id /* block */)arg3;
- (oneway void)resumeRunningFromContext:(id)arg1 withRequest:(id)arg2 completion:(id /* block */)arg3;
- (oneway void)runActionFromRunRequestData:(id)arg1 runningContext:(id)arg2 completion:(id /* block */)arg3;
- (oneway void)runToolWithInvocation:(id)arg1;
- (oneway void)runWorkflowWithDescriptor:(id)arg1 request:(id)arg2 inEnvironment:(id)arg3 runningContext:(id)arg4 completion:(id /* block */)arg5;
- (void)setConnection:(id)arg1;
- (void)setIsSynchronous:(bool)arg1;
- (oneway void)stopWithError:(id)arg1;
- (oneway void)updateRunViewSource:(id)arg1;

@end