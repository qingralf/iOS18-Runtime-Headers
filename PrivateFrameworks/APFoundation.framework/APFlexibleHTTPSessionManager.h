/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/APFoundation.framework/APFoundation
 */

@interface APFlexibleHTTPSessionManager : NSObject <APHTTPSessionManagerProtocol> {
    long long  _httpMaximumConnectionsPerHost;
    long long  _httpMaximumConnectionsPerHostTempSession;
    APUnfairLock * _lock;
    double  _lookBackWindow;
    NSMutableArray * _sessions;
    bool  _timerSet;
    NSMapTable * _weakSessions;
    id /* block */  createSessionBlock;
}

@property (nonatomic, copy) id /* block */ createSessionBlock;
@property (nonatomic) long long httpMaximumConnectionsPerHost;
@property (nonatomic) long long httpMaximumConnectionsPerHostTempSession;
@property (nonatomic, readonly) APUnfairLock *lock;
@property (nonatomic) double lookBackWindow;
@property (nonatomic, readonly) NSMutableArray *sessions;
@property (nonatomic) bool timerSet;
@property (nonatomic, readonly) NSMapTable *weakSessions;

- (void).cxx_destruct;
- (id)_createNewSessionForService:(id)arg1 temp:(bool)arg2;
- (void)_onTimer:(double)arg1;
- (id)_sessionForService:(id)arg1 now:(double)arg2 temporarySession:(bool)arg3;
- (void)_setTimer;
- (void)_startTimer;
- (bool)cancelTasksForService:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id /* block */)createSessionBlock;
- (long long)httpMaximumConnectionsPerHost;
- (long long)httpMaximumConnectionsPerHostTempSession;
- (id)initWithLookBackWindow:(double)arg1 httpMaximumConnectionsPerHost:(long long)arg2 httpMaximumConnectionsPerHostTempSession:(long long)arg3;
- (void)invalidateAllServicesAndCancelTasks:(bool)arg1;
- (bool)invalidateService:(id)arg1 andCancelTasks:(bool)arg2;
- (id)lock;
- (double)lookBackWindow;
- (id)sessionForService:(id)arg1;
- (id)sessions;
- (void)setCreateSessionBlock:(id /* block */)arg1;
- (void)setHttpMaximumConnectionsPerHost:(long long)arg1;
- (void)setHttpMaximumConnectionsPerHostTempSession:(long long)arg1;
- (void)setLookBackWindow:(double)arg1;
- (void)setTimerSet:(bool)arg1;
- (id)temporarySessionForService:(id)arg1;
- (bool)timerSet;
- (id)weakSessions;

@end
