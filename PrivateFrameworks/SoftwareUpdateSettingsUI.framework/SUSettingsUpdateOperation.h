/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateSettingsUI.framework/SoftwareUpdateSettingsUI
 */

@interface SUSettingsUpdateOperation : NSObject <SUCoreFSMDelegate> {
    id /* block */  _cancelHandler;
    bool  _canceled;
    NSObject<OS_dispatch_queue> * _clientCompletionQueue;
    NSObject<OS_dispatch_queue> * _completionQueue;
    <SUSettingsUpdateOperationDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateCallbackQueue;
    id /* block */  _downloadAndScheduleCompletion;
    id /* block */  _downloadUpdateCompletion;
    id /* block */  _installCompletion;
    SUCoreLog * _log;
    unsigned long long  _operationType;
    NSObject<OS_dispatch_queue> * _requestsQueue;
    id /* block */  _scheduleCompletion;
    NSDictionary * _stateTable;
    SUManagerClient * _suClient;
    SUCoreFSM * _updateFSM;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, copy) id /* block */ cancelHandler;
@property (nonatomic) bool canceled;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientCompletionQueue;
@property (retain) NSObject<OS_dispatch_queue> *completionQueue;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, readonly) <SUSettingsUpdateOperationDelegate> *delegate;
@property (retain) NSObject<OS_dispatch_queue> *delegateCallbackQueue;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ downloadAndScheduleCompletion;
@property (nonatomic, copy) id /* block */ downloadUpdateCompletion;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ installCompletion;
@property (nonatomic, readonly, retain) SUCoreLog *log;
@property unsigned long long operationType;
@property (retain) NSObject<OS_dispatch_queue> *requestsQueue;
@property (nonatomic, copy) id /* block */ scheduleCompletion;
@property (nonatomic, readonly, retain) NSDictionary *stateTable;
@property (nonatomic, readonly) SUManagerClient *suClient;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SUCoreFSM *updateFSM;
@property (retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)_generateStateTable;

- (void).cxx_destruct;
- (long long)actionUnknownAction:(id)arg1 error:(id*)arg2;
- (long long)action_AquireKeybag:(id)arg1 error:(id*)arg2;
- (long long)action_InitiateUpdateDownload:(id)arg1 error:(id*)arg2;
- (long long)action_InitiateUpdateInstallation:(id)arg1 error:(id*)arg2;
- (long long)action_PrepareUpdateProcess:(id)arg1 error:(id*)arg2;
- (long long)action_PresentDownloadConstraints:(id)arg1 error:(id*)arg2;
- (long long)action_PresentTermsConditions:(id)arg1 error:(id*)arg2;
- (long long)action_PurgeSpace:(id)arg1 error:(id*)arg2;
- (long long)action_ReportUpdateOperationOutcome:(id)arg1 error:(id*)arg2;
- (long long)action_ResolveUpdateOperation:(id)arg1 error:(id*)arg2;
- (long long)action_ScheduleUpdate:(id)arg1 error:(id*)arg2;
- (id)baseDomain;
- (bool)beginOperation:(unsigned long long)arg1 ofUnattendedInstall:(bool)arg2 descriptor:(id)arg3 options:(id)arg4;
- (void)cancel:(id /* block */)arg1;
- (id /* block */)cancelHandler;
- (bool)canceled;
- (id)clientCompletionQueue;
- (id)completionQueue;
- (id)delegate;
- (id)delegateCallbackQueue;
- (bool)deviceSupportsCellularCapability;
- (void)downloadAndInstall:(id)arg1 withOptions:(id)arg2 completionHandler:(id /* block */)arg3;
- (id /* block */)downloadAndScheduleCompletion;
- (void)downloadAndScheduleUpdate:(id)arg1 forInstallationTonightWithOptions:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)downloadUpdate:(id)arg1 withOptions:(id)arg2 completionHandler:(id /* block */)arg3;
- (id /* block */)downloadUpdateCompletion;
- (id)initWithDescriptor:(id)arg1 usingSUManagerClient:(id)arg2 delegate:(id)arg3;
- (id /* block */)installCompletion;
- (void)installUpdate:(id)arg1 withOptions:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)invalidateMachine;
- (bool)isActive;
- (bool)isCancelableState:(id)arg1;
- (id)log;
- (unsigned long long)operationType;
- (long long)performAction:(id)arg1 onEvent:(id)arg2 inState:(id)arg3 withInfo:(id)arg4 nextState:(id)arg5 error:(id*)arg6;
- (void)promoteDownloadToUserInitiated:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)requestsQueue;
- (id /* block */)scheduleCompletion;
- (void)scheduleUpdate:(id)arg1 forInstallationTonightWithOptions:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setCancelHandler:(id /* block */)arg1;
- (void)setCanceled:(bool)arg1;
- (void)setCompletionQueue:(id)arg1;
- (void)setDelegateCallbackQueue:(id)arg1;
- (void)setDownloadAndScheduleCompletion:(id /* block */)arg1;
- (void)setDownloadUpdateCompletion:(id /* block */)arg1;
- (void)setInstallCompletion:(id /* block */)arg1;
- (void)setOperationType:(unsigned long long)arg1;
- (void)setRequestsQueue:(id)arg1;
- (void)setScheduleCompletion:(id /* block */)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)stateTable;
- (id)suClient;
- (void)unscheduleAutomaticInstallation:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)updateFSM;
- (id)workQueue;

@end