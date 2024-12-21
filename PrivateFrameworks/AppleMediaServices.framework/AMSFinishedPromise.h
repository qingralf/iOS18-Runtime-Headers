/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSFinishedPromise : AMSMutablePromise

+ (bool)_errorIsCanceledError:(id)arg1;
+ (bool)_errorIsTimeOutError:(id)arg1;
+ (void)logUnavailableInitWithSelector:(SEL)arg1;
+ (id)promiseWithError:(id)arg1;
+ (id)promiseWithPromiseResult:(id)arg1;
+ (id)promiseWithResult:(id)arg1;

- (void)addBlock:(id /* block */)arg1 orCallWithResult:(id /* block */)arg2;
- (void)addErrorBlock:(id /* block */)arg1;
- (void)addFinishBlock:(id /* block */)arg1;
- (void)addSuccessBlock:(id /* block */)arg1;
- (id)binaryPromiseAdapterForClass:(Class)arg1;
- (id /* block */)boolCompletionHandlerAdapter;
- (id /* block */)completionHandlerAdapter;
- (id)condition;
- (id)continueWithBlock:(id /* block */)arg1;
- (void)flushCompletionBlocksWithResult:(id)arg1;
- (id)init;
- (id)initWithTimeout:(double)arg1;
- (bool)isCancelled;
- (bool)isFinished;
- (bool)isFinishedWithLock;
- (id /* block */)nilValueCompletionHandlerAdapter;
- (void)resultBeforeDate:(id)arg1 completion:(id /* block */)arg2;
- (id)resultBeforeDate:(id)arg1 error:(id*)arg2;
- (void)resultWithCompletion:(id /* block */)arg1;
- (id)resultWithError:(id*)arg1;
- (void)resultWithTimeout:(double)arg1 completion:(id /* block */)arg2;
- (id)resultWithTimeout:(double)arg1 error:(id*)arg2;
- (void)stopRetainingSelf;
- (id)valueFromAddingBlock:(id /* block */)arg1 orCallWithResult:(id /* block */)arg2;
- (void)waitUntilFinished;
- (void)waitUntilFinishedWithTimeout:(double)arg1;

@end