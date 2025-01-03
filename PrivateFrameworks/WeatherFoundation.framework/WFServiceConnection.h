/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

@interface WFServiceConnection : NSObject <WeatherServiceClientProtocol> {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSMutableDictionary * _dispatchGroupForTaskIdentifier;
    NSMutableDictionary * _executionStartTimeForTaskIdentifier;
    NSObject<OS_dispatch_queue> * _internalStateQueue;
    NSObject<OS_dispatch_queue> * _queue;
    <WeatherServiceProtocol> * _serviceProxy;
    NSMutableDictionary * _tasksPendingResponseForTaskIdentifier;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) NSMutableDictionary *dispatchGroupForTaskIdentifier;
@property (readonly) NSMutableDictionary *executionStartTimeForTaskIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *internalStateQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) <WeatherServiceProtocol> *serviceProxy;
@property (readonly) Class superclass;
@property (readonly) NSMutableDictionary *tasksPendingResponseForTaskIdentifier;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;

+ (id)allAllowedClasses;
+ (id)weatherServiceClientInterface;
+ (id)weatherServiceInterface;

- (void).cxx_destruct;
- (void)_callbackAllPendingTasksOnInvalidate:(id)arg1;
- (void)_cleanup;
- (void)_handleRemoteObjectProxyError:(id)arg1;
- (void)_onQueueInvalidateConnection:(id)arg1;
- (void)_onQueueOpenConnection;
- (void)accessServiceWithBlock:(id /* block */)arg1;
- (id)callbackQueue;
- (void)cancelRequestWithIdentifier:(id)arg1;
- (void)dealloc;
- (id)dispatchGroupForTaskIdentifier;
- (void)enqueueRequest:(id)arg1;
- (void)enqueueRequest:(id)arg1 waitUntilDone:(bool)arg2;
- (id)executionStartTimeForTaskIdentifier;
- (id)init;
- (id)internalStateQueue;
- (void)invalidate;
- (void)invalidateCache;
- (id)queue;
- (void)serviceDidReceiveResponse:(id)arg1;
- (id)serviceProxy;
- (void)setCallbackQueue:(id)arg1;
- (void)setInternalStateQueue:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setServiceProxy:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (void)taskIdentifier:(id /* block */)arg1;
- (id)tasksPendingResponseForTaskIdentifier;
- (id)xpcConnection;

@end
