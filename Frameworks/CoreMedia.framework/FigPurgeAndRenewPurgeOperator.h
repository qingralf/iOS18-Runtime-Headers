/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMedia.framework/CoreMedia
 */

@interface FigPurgeAndRenewPurgeOperator : NSObject {
    int  _clientPID;
    bool  _isSuspended;
    long long  _lastSuspensionTimeNs;
    id /* block */  _purgeBlock;
    bool  _purgeOccurred;
    bool  _purgeSuspended;
    unsigned int  _purgeTimeoutSeconds;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)operatorForClientPID:(int)arg1 notificationQueue:(id)arg2 withPurgeBlock:(id /* block */)arg3;

- (id)_initWithClientPID:(int)arg1 withPurgeBlock:(id /* block */)arg2 notificationQueue:(id)arg3;
- (void)_setTimeoutBeforePurge:(unsigned int)arg1;
- (void)checkAppStateAndPurgeObjectsBasedOnSuspensionTime:(long long)arg1;
- (void)dealloc;
- (unsigned int)getPurgeTimeoutSeconds;
- (void)handleProcessIsNoLongerSuspendedOnQueue;
- (void)handleprocessDidSuspendOnQueue;
- (void)hintProcessMayNeedPurgeTimerRestart;
- (bool)isProcessStateSuspended;
- (void)processDidSuspend;
- (void)processDidTerminate;
- (void)processIsNoLongerSuspended;
- (bool)purgeSuspended;
- (void)restartPurgeTimerIfNecessary;
- (bool)setPurgeSuspended:(bool)arg1;

@end