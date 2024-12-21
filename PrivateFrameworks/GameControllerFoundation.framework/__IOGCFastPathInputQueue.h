/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameControllerFoundation.framework/GameControllerFoundation
 */

@interface __IOGCFastPathInputQueue : NSObject {
    bool  _activated;
    id /* block */  _cancelHandler;
    bool  _cancelled;
    int (* _dataAvailableCallback;
    void * _dataAvailableContext;
    NSObject<OS_dispatch_mach> * _dispatchMach;
    NSObject<OS_dispatch_queue> * _queue;
    struct __CFAllocator { } * allocator;
    __IOGCFastPathClient * client;
    unsigned long long  queueID;
    struct IOGCFastPathInputQueueInterface {} ** queueInterface;
}

- (void)dealloc;
- (id)description;

@end