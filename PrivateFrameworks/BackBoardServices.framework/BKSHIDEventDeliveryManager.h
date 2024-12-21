/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSHIDEventDeliveryManager : NSObject <BSDescriptionStreamable> {
    bool  _forTesting;
    NSObject<OS_dispatch_queue> * _implicitFlushQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _lock_activeUIResponderPredicates;
    unsigned int  _lock_activeUIResponderSeed;
    NSHashTable * _lock_assertions;
    NSMutableDictionary * _lock_bufferingPredicates;
    unsigned int  _lock_bufferingSeed;
    NSMutableArray * _lock_deferringRules;
    unsigned int  _lock_deferringSeed;
    NSMutableSet * _lock_discreteDispatchingRoots;
    unsigned int  _lock_discreteDispatchingSeed;
    <BSInvalidatable> * _lock_implicitPreventFlushingAssertion;
    NSMutableSet * _lock_keyCommandsDispatchingRoots;
    unsigned int  _lock_keyCommandsDispatchingSeed;
    unsigned int  _lock_keyCommandsRegistrationSeed;
    NSMutableDictionary * _lock_keyCommandsRegistrations;
    NSSet * _lock_lastSentActiveUIResponderPredicates;
    NSSet * _lock_lastSentBufferingPredicates;
    NSArray * _lock_lastSentDeferringRules;
    NSSet * _lock_lastSentDiscreteDispatchingRoots;
    NSSet * _lock_lastSentKeyCommandsDispatchingRoots;
    NSDictionary * _lock_lastSentKeyCommandsRegistrations;
    NSSet * _lock_lastSentSetOfKeyCommandsRegistrations;
    struct __CFBoolean { } * _lock_needsFlush;
    BSMutableIntegerMap * _lock_preventFlushingReasons;
    long long  _lock_preventFlushingSeed;
    BSServiceConnection * _serviceConnection;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_coreSetUpWithServiceConnection:(id)arg1;
- (id)_initForTestingWithService:(id)arg1;
- (id)_initWithRemoteConnection;
- (void)_lock_flushIfNeeded;
- (void)_lock_implicitFlush;
- (id)_lock_stateDescription;
- (id)_lock_transactionAssertionWithReason:(id)arg1;
- (void)_reconnectAfterServerInterruption;
- (void)_syncServiceFlushState;
- (void)appendDescriptionToFormatter:(id)arg1;
- (long long)authenticateMessage:(id)arg1;
- (id)bufferEventsMatchingPredicate:(id)arg1 withReason:(id)arg2;
- (id)connectionDescriptionForDeferringRuleIdentity:(id)arg1;
- (id)connectionDescriptionForDeferringRuleWithSeed:(unsigned int)arg1 pid:(int)arg2;
- (void)dealloc;
- (id)deferEventsMatchingPredicate:(id)arg1 toTarget:(id)arg2 withReason:(id)arg3;
- (id)deliveryGraphDescription;
- (id)description;
- (id)dispatchDiscreteEventsForReason:(id)arg1 withRules:(id)arg2;
- (id)dispatchKeyCommandsForReason:(id)arg1 withRule:(id)arg2;
- (id)init;
- (id)registerKeyCommands:(id)arg1;
- (id)requestActiveUIResponderForDeferringPredicate:(id)arg1 withReason:(id)arg2;
- (void)selectDeferringPredicate:(id)arg1 withReason:(id)arg2;
- (id)transactionAssertionWithReason:(id)arg1;

@end