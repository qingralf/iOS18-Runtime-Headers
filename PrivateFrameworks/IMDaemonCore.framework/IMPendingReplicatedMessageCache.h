/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMPendingReplicatedMessageCache : NSObject {
    NSMutableDictionary * _pendingMessages;
    NSObject<OS_dispatch_queue> * _queue;
    NSCache * _replicatedFallbackHistory;
    NSTimer * _timeoutTimer;
}

@property (nonatomic, retain) NSMutableDictionary *pendingMessages;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSCache *replicatedFallbackHistory;
@property (nonatomic, retain) NSTimer *timeoutTimer;

+ (id)sharedCache;

- (void).cxx_destruct;
- (void)_enforceCacheLimit;
- (void)_enforceTimeout;
- (void)_metricMatchingFailureWithReason:(id)arg1;
- (void)_removePendingMessageWithGUID:(id)arg1;
- (void)_scheduleTimeout;
- (void)addPendingMessageWithGUID:(id)arg1 replicatedFallbackGUIDs:(id)arg2 releaseBlock:(id /* block */)arg3;
- (void)clearPendingMessageWithGUID:(id)arg1;
- (id)init;
- (id)pendingMessages;
- (id)queue;
- (void)releasePendingMessageWithGUID:(id)arg1 serviceName:(id)arg2 chat:(id)arg3 completion:(id /* block */)arg4;
- (id)releasedReplicatedGUIDForGUID:(id)arg1;
- (id)replicatedFallbackHistory;
- (void)setPendingMessages:(id)arg1;
- (void)setReplicatedFallbackHistory:(id)arg1;
- (void)setTimeoutTimer:(id)arg1;
- (id)timeoutTimer;

@end