/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreEmbeddedSpeechRecognition.framework/CoreEmbeddedSpeechRecognition
 */

@interface CESRTaskCoalescer : NSObject {
    double  _coalescenceDelay;
    double  _coalescenceInterval;
    _Atomic unsigned int  _eventIdCounter;
    NSString * _managerName;
    NSObject<OS_dispatch_queue> * _taskExecutionQueue;
    NSMutableDictionary * _taskRegistry;
    NSObject<OS_dispatch_queue> * _taskRegistryQueue;
    NSObject<OS_os_transaction> * _transaction;
    unsigned int  _transactionCounter;
}

@property (nonatomic, readonly) NSObject<OS_os_transaction> *transaction;

+ (bool)isTaskCoalescenceDisabled;
+ (void)setTaskCoalescenceDisabled:(bool)arg1;

- (void).cxx_destruct;
- (void)_beginTransaction;
- (bool)_didIncomingTask:(id)arg1 arriveInCoalescingWindowWithLastTask:(id)arg2;
- (void)_endTransaction;
- (id)init;
- (id)initWithManagerName:(id)arg1 coalescenceInterval:(double)arg2 coalescenceDelay:(double)arg3 executionQueue:(id)arg4;
- (void)submitTaskWithId:(unsigned short)arg1 taskBlock:(id /* block */)arg2 completion:(id /* block */)arg3;
- (id)transaction;
- (void)wait;

@end
