/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
 */

@interface FPCKOnDemandUpdateReceiver : NSObject <FPCKUpdateReceiving> {
    <FPDDomainBackend> * _backend;
}

- (void).cxx_destruct;
- (id)initWithDomainBackend:(id)arg1;
- (void)saveCheckpointWithReport:(id)arg1;
- (void)sendDiagnosticsForItemIDs:(id)arg1;
- (void)shouldPauseWithCompletion:(id /* block */)arg1;

@end