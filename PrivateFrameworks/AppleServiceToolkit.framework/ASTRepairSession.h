/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
 */

@interface ASTRepairSession : ASTSession <ASTRepairDelegateProtocol> {
    NSXPCConnection * _connection;
    <ASTRepairProtocol> * _remoteRepairServer;
    NSObject<OS_dispatch_queue> * _repairAliveCheckQueue;
    NSSet * _suitesAvailable;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (retain) <ASTRepairProtocol> *remoteRepairServer;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *repairAliveCheckQueue;
@property (nonatomic, retain) NSSet *suitesAvailable;

+ (void)downloadAsset:(id)arg1 fileHandle:(id)arg2 completionHandler:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)archive;
- (void)cancelSuite;
- (void)completeTestSuite:(id)arg1 description:(id)arg2;
- (id)connection;
- (void)dealloc;
- (void)end;
- (void)estimatedTimeRemainingForTest:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)progressForTest:(id)arg1 completion:(id /* block */)arg2;
- (id)remoteRepairServer;
- (id)repairAliveCheckQueue;
- (void)requestSuiteStart:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)requestSuiteSummary:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)requestSuitesAvailableWithCompletionHandler:(id /* block */)arg1;
- (bool)sendTestResult:(id)arg1 error:(id*)arg2;
- (void)setConnection:(id)arg1;
- (void)setRemoteRepairServer:(id)arg1;
- (void)setRepairAliveCheckQueue:(id)arg1;
- (void)setSuitesAvailable:(id)arg1;
- (bool)shouldShowResults;
- (void)showInstructionalPrompt:(id)arg1 withConfirmation:(id /* block */)arg2;
- (void)start;
- (void)startTest:(id)arg1 parameters:(id)arg2;
- (id)suitesAvailable;
- (void)updateTestSuiteImage:(id)arg1;
- (void)updateTestSuiteProgress:(id)arg1;

@end