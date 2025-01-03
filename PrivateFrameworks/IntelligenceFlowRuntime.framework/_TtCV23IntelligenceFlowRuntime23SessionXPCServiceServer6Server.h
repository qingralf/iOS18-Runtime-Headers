/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IntelligenceFlowRuntime.framework/IntelligenceFlowRuntime
 */

@interface _TtCV23IntelligenceFlowRuntime23SessionXPCServiceServer6Server : NSObject <LXSessionXPCServerProtocol> {
    void clientCapabilities;
    void clientIdentityPack;
    void clientProxy;
    void jsonDecoder;
    void jsonEncoder;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  sessionClientId;
    void sessionManager;
    void transactionHookContainer;
}

- (void).cxx_destruct;
- (void)attachAsObserverTo:(id)arg1 with:(id /* block */)arg2;
- (void)createSessionFromProtoEventsWithEventProtos:(id)arg1 configData:(id)arg2 xpcData:(id)arg3 with:(id /* block */)arg4;
- (void)dealloc;
- (void)detachObservationFrom:(id)arg1 with:(id /* block */)arg2;
- (void)endSessionWithId:(id)arg1 with:(id /* block */)arg2;
- (void)fetchSessionClientIdWithReply:(id /* block */)arg1;
- (void)generateStatementIdWithId:(id)arg1 with:(id /* block */)arg2;
- (id)init;
- (void)performSetupWithConfigData:(id)arg1 reply:(id /* block */)arg2;
- (void)postTransactionWithSessionId:(id)arg1 eventProtos:(id)arg2 with:(id /* block */)arg3;
- (void)sendWithMessageData:(id)arg1 with:(id /* block */)arg2;
- (void)startSessionWithId:(id)arg1 configData:(id)arg2 xpcData:(id)arg3 with:(id /* block */)arg4;
- (void)updateTransactionHookAttachmentStatus:(id)arg1 with:(id /* block */)arg2;

@end
