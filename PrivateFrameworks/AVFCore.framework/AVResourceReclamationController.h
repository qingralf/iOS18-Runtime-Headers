/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
 */

@interface AVResourceReclamationController : NSObject {
    unsigned long long  _assertionId;
    NSMutableDictionary * _assertionReasons;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSObject<OS_dispatch_queue> * _figSetterQueue;
    bool  _isEnrolled;
    id  _notificationToken;
    NSMapTable * _resourceReclamationObservers;
    NSObject<OS_dispatch_queue> * _stateQueue;
}

@property (readonly) AVResourceReclamationEvent *mostRecentReclamationEvent;

+ (id)defaultController;

- (void)_releaseResourceReclamationAssertion:(id)arg1;
- (void)_removeObserverToken:(id)arg1;
- (void)_resetEnrollmentTestOnly;
- (id)addReclamationEventObserver:(id)arg1;
- (void)dealloc;
- (bool)ensureIntegrityOfResourcesCreatedSince:(id)arg1;
- (void)ensureIntegrityOfResourcesCreatedSince:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)handlePurgedNotification:(id)arg1;
- (void)informReclamationEvent:(id)arg1 toObservers:(id)arg2;
- (id)init;
- (bool)isEnrolled;
- (id)mostRecentReclamationEvent;
- (void)permitReclamationWhileSuspended;
- (id)registerForPurgeNotification;
- (id)takeAssertionPreventingResourceReclamationWithReason:(id)arg1;

@end
