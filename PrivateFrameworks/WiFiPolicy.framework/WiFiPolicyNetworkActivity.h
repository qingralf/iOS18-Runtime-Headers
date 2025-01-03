/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

@interface WiFiPolicyNetworkActivity : NSObject {
    NSObject<OS_nw_activity> * _activity;
    NSObject<OS_dispatch_source> * _activityTimer;
    NSMutableSet * _connections;
    bool  _hasStarted;
    NSObject<OS_nw_activity> * _parentActivity;
    long long  _parentLabel;
    NSObject<OS_dispatch_queue> * _queue;
    long long  _state;
}

- (void).cxx_destruct;
- (void)_cancelActivityTimer;
- (void)_networkActivityAbort;
- (void)_networkActivityRestart;
- (void)_networkActivityState:(long long)arg1;
- (void)_startActivityTimer;
- (void)_startMaxActivityLifetime;
- (void)activate;
- (void)addConnection:(id)arg1;
- (id)description;
- (long long)getState;
- (bool)hasStarted;
- (id)initWithLabel:(long long)arg1 parent:(id)arg2;
- (id)nwActivity;
- (id)nwActivityToken;
- (long long)parentLabel;
- (void)removeConnection:(id)arg1;
- (void)setHasStarted:(bool)arg1;
- (void)setQueue:(id)arg1;
- (void)stopWithCompletionReason:(int)arg1 withClientMetric:(const char *)arg2 withClientDict:(id)arg3 andError:(id)arg4;

@end
