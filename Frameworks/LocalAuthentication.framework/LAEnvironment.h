/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/LocalAuthentication.framework/LocalAuthentication
 */

@interface LAEnvironment : NSObject {
    NSXPCListenerEndpoint * _environmentServiceEndpoint;
    int  _notifyToken;
    NSObject<OS_dispatch_queue> * _observerQueue;
    NSHashTable * _observers;
    LAEnvironmentState * _state;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) LAEnvironmentState *state;

+ (id)currentUser;

- (void).cxx_destruct;
- (void)_bootstrapServiceType:(id)arg1 completion:(id /* block */)arg2;
- (id)_createConnectionToDaemon;
- (void)_environmentServiceEndpointWithCompletion:(id /* block */)arg1;
- (void)_notifyObserversAboutUpdateFrom:(id)arg1;
- (void)_registerDarwinNotification;
- (void)_synchronousProxyToEnvironmentServiceWithCompletion:(id /* block */)arg1;
- (void)_synchronousProxyToEnvironmentServiceWithEndpoint:(id)arg1 completion:(id /* block */)arg2;
- (void)_unregisterDarwinNotification;
- (void)_updateState;
- (void)_updateStateWithSynchronousProxyToEnvironmentService:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)removeObserver:(id)arg1;
- (id)state;
- (void)waitForStateUpdate;

@end
