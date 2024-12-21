/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSHIDEventDeliveryPolicyObserver : NSObject <BKSHIDEventDeferringObserving, BSDescriptionStreaming> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    BKSHIDEventDisplay * _lock_display;
    BKSHIDEventDeferringEnvironment * _lock_environment;
    NSSet * _lock_observations;
    NSHashTable * _lock_observers;
    long long  _lock_policyStatus;
    BKSHIDEventDeferringToken * _lock_token;
    BKSHIDEventObserver * _observer;
    <BSInvalidatable> * _observingAssertion;
}

@property (nonatomic, readonly) bool canReceiveEvents;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, copy) BKSHIDEventDeferringEnvironment *deferringEnvironment;
@property (nonatomic, copy) BKSHIDEventDeferringToken *deferringToken;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) BKSHIDEventDisplay *display;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long policyStatus;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_initWithObserver:(id)arg1;
- (void)_lock_appendDescriptionToStream:(id)arg1;
- (id)_lock_description;
- (long long)_lock_policyStatus;
- (id)_lock_updateStateWithBlock:(id /* block */)arg1;
- (void)addObserver:(id)arg1;
- (void)appendDescriptionToStream:(id)arg1;
- (bool)canReceiveEvents;
- (void)dealloc;
- (id)debugDescription;
- (id)deferringEnvironment;
- (void)deferringResolutionsChanged;
- (id)deferringToken;
- (id)description;
- (id)display;
- (id)init;
- (long long)policyStatus;
- (void)removeObserver:(id)arg1;
- (void)setDeferringEnvironment:(id)arg1;
- (void)setDeferringToken:(id)arg1;
- (void)setDisplay:(id)arg1;

@end