/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface _HMContext : NSObject {
    HMDelegateCaller * _delegateCaller;
    HMFMessageDispatcher * _messageDispatcher;
    HMPendingRequests * _pendingRequests;
    NSObject<OS_dispatch_queue> * _queue;
    HMXPCClient * _xpcClient;
}

@property (nonatomic, readonly) HMDelegateCaller *delegateCaller;
@property (nonatomic, readonly) HMFMessageDispatcher *messageDispatcher;
@property (nonatomic, readonly) HMPendingRequests *pendingRequests;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) HMXPCClient *xpcClient;

- (void).cxx_destruct;
- (id)delegateCaller;
- (id)initWithName:(id)arg1;
- (id)initWithXPCClient:(id)arg1 delegateCaller:(id)arg2;
- (id)initWithXPCClient:(id)arg1 delegateCaller:(id)arg2 messageDispatcher:(id)arg3 pendingRequests:(id)arg4;
- (id)initWithXPCClientConfiguration:(id)arg1;
- (id)messageDispatcher;
- (id)pendingRequests;
- (id)queue;
- (id)xpcClient;

@end