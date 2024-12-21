/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

@interface WBSBlockCoalescer : NSObject {
    id /* block */  _block;
    double  _minimumTimeIntervalBeforeExecution;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (void)_dispatchBlock;
- (id)initWithMinimumTimeIntervalBeforeExecution:(double)arg1 queue:(id)arg2;
- (void)scheduleBlock:(id /* block */)arg1;

@end