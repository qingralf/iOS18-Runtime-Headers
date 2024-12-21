/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy
 */

@interface HMDThreadCommandTimer : HMFObject <HMFTimerDelegate> {
    id /* block */  _commandBlock;
    unsigned long long  _commandCount;
    NSObject<OS_dispatch_queue> * _commandQueue;
    HMFTimer * _commandTimer;
    long long  _commandType;
    id /* block */  _completionForBlock;
    NSNumber * _delayInSecs;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (copy) id /* block */ commandBlock;
@property unsigned long long commandCount;
@property (retain) NSObject<OS_dispatch_queue> *commandQueue;
@property (retain) HMFTimer *commandTimer;
@property long long commandType;
@property (copy) id /* block */ completionForBlock;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (retain) NSNumber *delayInSecs;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)_commandTypeValueToString:(long long)arg1;
- (void)abort;
- (id /* block */)commandBlock;
- (unsigned long long)commandCount;
- (id)commandQueue;
- (id)commandTimer;
- (long long)commandType;
- (id /* block */)completionForBlock;
- (long long)currentlyScheduledCommand;
- (id)delayInSecs;
- (id)initWithQueue:(id)arg1 delayInSecs:(id)arg2;
- (id)initWithTimer:(id)arg1;
- (void)setCommandBlock:(id /* block */)arg1;
- (void)setCommandCount:(unsigned long long)arg1;
- (void)setCommandQueue:(id)arg1;
- (void)setCommandTimer:(id)arg1;
- (void)setCommandType:(long long)arg1;
- (void)setCompletionForBlock:(id /* block */)arg1;
- (void)setDelayInSecs:(id)arg1;
- (void)startWithBlock:(id /* block */)arg1 completion:(id /* block */)arg2 commandType:(long long)arg3;
- (void)timerDidFire:(id)arg1;

@end