/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PosterBoard.framework/PosterBoard
 */

@interface PBFApplicationStateMonitor : NSObject <BSInvalidatable> {
    NSMutableOrderedSet * _applicationStateStack;
    PBFApplicationStateContext * _currentApplicationContext;
    BSAtomicFlag * _invalidationFlag;
    PBFApplicationStateNode * _rootNode;
    NSHashTable * _stateTrackingObservers;
}

@property (readonly) NSOrderedSet *applicationStateStack;
@property (readonly) PBFApplicationStateContext *currentApplicationContext;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) PBFApplicationStateNode *rootNode;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_fireStateTrackingObserverSelector:(SEL)arg1 block:(id /* block */)arg2;
- (void)_updateApplicationContextIfNeeded;
- (void)addMonitorObserver:(id)arg1;
- (id)applicationStateStack;
- (id)currentApplicationContext;
- (id)init;
- (void)invalidate;
- (void)pushState:(id)arg1;
- (void)removeMonitorObserver:(id)arg1;
- (id)rootNode;
- (void)setCurrentApplicationContext:(id)arg1;
- (void)state:(id)arg1 didUpdateComponents:(id)arg2;
- (void)stateWasInvalidated:(id)arg1;

@end