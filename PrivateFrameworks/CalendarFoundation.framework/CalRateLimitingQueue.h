/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalRateLimitingQueue : NSObject {
    id /* block */  _block;
    bool  _executionPending;
    unsigned long long  _lastExecutionTimestamp;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned long long  _minimumInterval;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)executeBlock;
- (id)initWithQueue:(id)arg1 minimumInterval:(double)arg2 andBlock:(id /* block */)arg3;
- (id)queue;

@end