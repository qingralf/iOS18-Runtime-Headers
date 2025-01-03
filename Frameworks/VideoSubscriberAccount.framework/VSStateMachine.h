/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSStateMachine : NSObject {
    VSOptional * _currentState;
    <VSStateMachineDelegate> * _delegate;
    NSMutableArray * _enqueuedTransitions;
    NSMutableDictionary * _ignoredEventsByState;
    bool  _ignoresUnassignedEvents;
    _Atomic int  _mode;
    NSString * _name;
    NSOperationQueue * _transitionQueue;
    NSMutableDictionary * _transitionTable;
}

@property (nonatomic, retain) VSOptional *currentState;
@property (nonatomic) <VSStateMachineDelegate> *delegate;
@property (nonatomic, retain) NSMutableArray *enqueuedTransitions;
@property (nonatomic, retain) NSMutableDictionary *ignoredEventsByState;
@property (nonatomic) bool ignoresUnassignedEvents;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) NSOperationQueue *transitionQueue;
@property (nonatomic, retain) NSMutableDictionary *transitionTable;

- (void).cxx_destruct;
- (void)_enteringState:(id)arg1;
- (void)_exitingState:(id)arg1;
- (void)_handleEnqueuedTransitions;
- (void)_setDestinationState:(id)arg1 forEvent:(id)arg2 inState:(id)arg3 ignoringEvent:(bool)arg4;
- (void)activateWithState:(id)arg1;
- (id)currentState;
- (id)delegate;
- (id)description;
- (bool)enqueueEvent:(id)arg1;
- (id)enqueuedTransitions;
- (void)ignoreEvent:(id)arg1 inState:(id)arg2;
- (id)ignoredEventsByState;
- (bool)ignoresUnassignedEvents;
- (id)init;
- (id)name;
- (void)setCurrentState:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDestinationState:(id)arg1 forEvent:(id)arg2 inState:(id)arg3;
- (void)setEnqueuedTransitions:(id)arg1;
- (void)setIgnoredEventsByState:(id)arg1;
- (void)setIgnoresUnassignedEvents:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setTransitionQueue:(id)arg1;
- (void)setTransitionTable:(id)arg1;
- (id)transitionQueue;
- (id)transitionTable;

@end
