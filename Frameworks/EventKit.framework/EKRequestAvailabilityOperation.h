/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKRequestAvailabilityOperation : NSOperation {
    NSArray * _addresses;
    EKAvailabilityCache * _availabilityCache;
    NSDate * _endDate;
    NSError * _error;
    NSString * _ignoredEventID;
    bool  _isExecuting;
    bool  _isFinished;
    NSObject<OS_dispatch_queue> * _queue;
    id  _requestID;
    id /* block */  _resultsBlock;
    NSDate * _startDate;
}

@property (nonatomic, retain) NSError *error;

- (void).cxx_destruct;
- (void)_finishWithError:(id)arg1;
- (void)cancel;
- (id)description;
- (id)error;
- (id)init;
- (id)initWithSource:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ignoredEvent:(id)arg4 addresses:(id)arg5 resultsBlock:(id /* block */)arg6;
- (id)initWithSource:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ignoredEventID:(id)arg4 addresses:(id)arg5 resultsBlock:(id /* block */)arg6;
- (bool)isConcurrent;
- (bool)isExecuting;
- (bool)isFinished;
- (void)main;
- (void)setError:(id)arg1;
- (void)start;

@end
