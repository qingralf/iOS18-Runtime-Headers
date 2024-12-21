/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPNameResolver : HMFObject <HMFTimerDelegate> {
    id /* block */  _completion;
    NSObject<OS_nw_connection> * _connection;
    NSString * _domain;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _name;
    long long  _resolutionState;
    NSString * _serviceType;
    HMFTimer * _timer;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, retain) NSObject<OS_nw_connection> *connection;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *domain;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *name;
@property (readonly) long long resolutionState;
@property (nonatomic, retain) NSString *serviceType;
@property (readonly) Class superclass;
@property (nonatomic, retain) HMFTimer *timer;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)sharedWorkQueue;

- (void).cxx_destruct;
- (void)_cancelTimer;
- (void)_doCompletionWithErrorCode:(long long)arg1 socketInfo:(id)arg2 state:(long long)arg3;
- (void)_doCompletionWithErrorCode:(long long)arg1 state:(long long)arg2;
- (void)_nwConnectionStart;
- (id)_nwCreateConnection;
- (void)_setStateChangedHandler;
- (void)_startTimerWithTimeout:(double)arg1;
- (void)_updateSocketInfo:(id)arg1;
- (id /* block */)completion;
- (id)connection;
- (id)domain;
- (id)initWithDeviceName:(id)arg1 serviceType:(id)arg2 domain:(id)arg3;
- (void)invalidate;
- (id)name;
- (long long)resolutionState;
- (void)resolveWithTimeout:(double)arg1 completion:(id /* block */)arg2;
- (id)serviceType;
- (void)setCompletion:(id /* block */)arg1;
- (void)setConnection:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setName:(id)arg1;
- (void)setResolutionState:(long long)arg1;
- (void)setServiceType:(id)arg1;
- (void)setTimer:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)shortDescription;
- (id)timer;
- (void)timerDidFire:(id)arg1;
- (id)workQueue;

@end