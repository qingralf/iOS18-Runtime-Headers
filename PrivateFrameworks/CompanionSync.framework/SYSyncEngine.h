/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface SYSyncEngine : NSObject <SYStateLoggable> {
    NSObject<OS_dispatch_queue> * _queue;
    <SYSyncEngineResponder> * _responder;
    SYService * _service;
    NSObject<OS_os_transaction> * _transaction;
    NSObject<OS_os_activity> * _transportActivity;
}

@property (nonatomic, readonly) bool buffersHandshake;
@property (nonatomic, readonly) bool buffersSessions;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isInSession;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) <SYSyncEngineResponder> *responder;
@property (nonatomic, readonly) SYService *service;
@property (nonatomic, readonly) PBCodable *stateForLogging;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool targetConnected;
@property (nonatomic, readonly) bool targetIsNearby;
@property (nonatomic, readonly) NSObject<OS_os_activity> *transportActivity;

- (void).cxx_destruct;
- (void)beginSession;
- (bool)buffersHandshake;
- (bool)buffersSessions;
- (id)cancelMessagesReturningFailures:(id)arg1;
- (void)dealloc;
- (void)endSession;
- (void)enqueueSyncRequest:(id)arg1 withMessageID:(unsigned short)arg2 priority:(long long)arg3 options:(id)arg4 userContext:(id)arg5 callback:(id /* block */)arg6;
- (id)initWithService:(id)arg1 queue:(id)arg2;
- (bool)isInSession;
- (id)outputStreamWithMetadata:(id)arg1 priority:(long long)arg2 options:(id)arg3 context:(id)arg4 error:(id*)arg5;
- (id)queue;
- (id)responder;
- (bool)resume:(id*)arg1;
- (id)service;
- (void)setResponder:(id)arg1;
- (id)stateForLogging;
- (void)suspend;
- (bool)targetConnected;
- (bool)targetIsNearby;
- (id)transportActivity;

@end
