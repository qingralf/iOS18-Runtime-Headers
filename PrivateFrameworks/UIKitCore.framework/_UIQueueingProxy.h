/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIQueueingProxy : _UITargetedProxy {
    bool  _bypassSuspension;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableArray * _queuedInvocations;
    id /* block */  _shouldSuspendInvocationBlock;
    unsigned long long  _suspensionCount;
}

@property (nonatomic) bool bypassSuspensionForSynchronousReply;

+ (id)proxyWithTarget:(id)arg1;
+ (id)proxyWithTarget:(id)arg1 shouldSuspendInvocationBlock:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)_dispatchSuspendedMessages;
- (bool)bypassSuspensionForSynchronousReply;
- (id)description;
- (void)forwardInvocation:(id)arg1;
- (void)removeAllEnqueuedInvocations;
- (bool)respondsToSelector:(SEL)arg1;
- (void)resume;
- (void)setBypassSuspensionForSynchronousReply:(bool)arg1;
- (void)suspend;

@end