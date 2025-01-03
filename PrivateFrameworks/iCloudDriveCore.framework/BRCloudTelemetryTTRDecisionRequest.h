/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iCloudDriveCore.framework/iCloudDriveCore
 */

@interface BRCloudTelemetryTTRDecisionRequest : NSObject <C2RequestDelegate> {
    APSConnection * _apsConnection;
    NSObject<OS_dispatch_queue> * _apsQueue;
    id /* block */  _completionHandler;
    NSURLSessionDataTask * _dataTask;
    NSURL * _decisonServerURL;
    NSObject * _networkingDelegate;
    NSData * _publicToken;
    NSMutableData * _responseBody;
    NSString * _ruleID;
    NSString * _senderID;
    bool  _useDecisionServer;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) NSObject *networkingDelegate;
@property (readonly) Class superclass;

+ (id)requestWithSenderID:(id)arg1 ruleID:(id)arg2 completionHandler:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 _taskIsWaitingForConnection:(id)arg2;
- (void)URLSession:(id)arg1 _willRetryBackgroundDataTask:(id)arg2 withError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 _conditionalRequirementsChanged:(bool)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(id /* block */)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)_initWithSenderID:(id)arg1 ruleID:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)networkingDelegate;
- (void)resume;
- (void)setNetworkingDelegate:(id)arg1;

@end
