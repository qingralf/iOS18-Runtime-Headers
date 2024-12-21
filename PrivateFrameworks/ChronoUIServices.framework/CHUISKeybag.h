/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChronoUIServices.framework/ChronoUIServices
 */

@interface CHUISKeybag : NSObject {
    NSObject<OS_dispatch_queue> * _calloutQueue;
    struct _MKBEvent { } * _mkbRegistrationToken;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _queue_isEffectivelyLocked;
    bool  _queue_isEffectivelyLockedAuthentic;
    NSHashTable * _queue_observers;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_queue_evaluateState;
- (void)_queue_handleKeybagStatusChanged;
- (void)addObserver:(id)arg1;
- (id)init;
- (bool)isEffectivelyLocked:(long long)arg1;
- (void)removeObserver:(id)arg1;

@end