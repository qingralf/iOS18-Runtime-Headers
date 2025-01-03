/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LocalAuthenticationCore.framework/LocalAuthenticationCore
 */

@interface LACOnenessController : NSObject <LACDomainStateProviding, LACEvaluationRequestProcessor, LACOnenessControlling> {
    <LACOnenessAuthenticating> * _authenticator;
    <LACOnenessControlling> * _model;
    NSObject<OS_dispatch_queue> * _replyQueue;
    <LACOnenessSessionMonitoring> * _sessionMonitor;
    <LACUserInterfacePresenting> * _uiPresenter;
}

@property (nonatomic, readonly) bool isSessionActive;

- (void).cxx_destruct;
- (id)authenticator;
- (bool)canProcessRequest:(id)arg1;
- (void)cancelAllRequests;
- (void)cancelRequestsForContextID:(id)arg1;
- (void)domainStateForRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithSessionMonitor:(id)arg1 authenticator:(id)arg2 uiPresenter:(id)arg3 replyQueue:(id)arg4;
- (bool)isSessionActive;
- (id)makeModel;
- (id)model;
- (void)postProcessRequest:(id)arg1 result:(id)arg2 completion:(id /* block */)arg3;
- (void)processRequest:(id)arg1 configuration:(id)arg2 completion:(id /* block */)arg3;
- (id)replyQueue;
- (id)sessionMonitor;
- (id)uiPresenter;

@end
