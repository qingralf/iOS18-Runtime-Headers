/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface CNBehaviorSubject : CNObservable <CNObserver> {
    CNObservableContractEnforcement * _enforcement;
    CNObservableEvent * _mostRecentEvent;
    NSMutableArray * _observers;
    <NSLocking> * _resourceLock;
    <CNSchedulerProvider> * _schedulerProvider;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CNObservableContractEnforcement *enforcement;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CNObservableEvent *mostRecentEvent;
@property (nonatomic, retain) NSMutableArray *observers;
@property (nonatomic, readonly) <NSLocking> *resourceLock;
@property (nonatomic, readonly) <CNSchedulerProvider> *schedulerProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_addObserver:(id)arg1;
- (void)_removeObserver:(id)arg1;
- (id)enforcement;
- (id)initWithSeed:(id)arg1 schedulerProvider:(id)arg2;
- (id)mostRecentEvent;
- (void)observerDidComplete;
- (void)observerDidFailWithError:(id)arg1;
- (void)observerDidReceiveResult:(id)arg1;
- (id)observers;
- (void)performWithResourceLock:(id /* block */)arg1;
- (id)resourceLock;
- (id)resultWithResourceLock:(id /* block */)arg1;
- (id)schedulerProvider;
- (void)setMostRecentEvent:(id)arg1;
- (void)setObservers:(id)arg1;
- (id)subscribe:(id)arg1;

@end
