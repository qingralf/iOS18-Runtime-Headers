/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DistributedTimers.framework/DistributedTimers
 */

@interface DTTimerClient : NSObject {
    void _activateCalled;
    void _clientID;
    void _environment;
    void _error;
    void _initTicks;
    void _invalidateCalled;
    void _lock;
    void _monitorMode;
    void _monitorSessionStarted;
    void _requestContext;
    void _timerMap;
    void _xpcClientCached;
    void eventHandler;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, copy) id /* block */ eventHandler;
@property (nonatomic, readonly) NSArray *mtAlarms;
@property (nonatomic, readonly) NSArray *mtTimers;
@property (nonatomic, readonly) NSArray *timers;

+ (unsigned long long)statusFlags;

- (void).cxx_destruct;
- (void)activate;
- (void)addTimer:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)dealloc;
- (void)dismissTimer:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)error;
- (id /* block */)eventHandler;
- (void)fetchTimersWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (id)initWithDispatchQueue:(id)arg1;
- (id)initWithDispatchQueue:(id)arg1 homeKitAccessoryID:(id)arg2;
- (void)invalidate;
- (id)mtAlarms;
- (id)mtTimers;
- (void)removeTimer:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setEventHandler:(id /* block */)arg1;
- (void)snoozeTimer:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)timers;
- (void)updateTimer:(id)arg1 completionHandler:(id /* block */)arg2;

@end