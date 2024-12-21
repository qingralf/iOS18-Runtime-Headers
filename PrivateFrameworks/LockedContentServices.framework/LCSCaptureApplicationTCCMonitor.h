/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LockedContentServices.framework/LockedContentServices
 */

@interface LCSCaptureApplicationTCCMonitor : NSObject {
    NSObject<OS_dispatch_queue> * _observerQueue;
    NSSet * _observerQueue_observerTokens;
    NSObject<OS_dispatch_queue> * _tccSetupQueue;
    NSObject<OS_dispatch_queue> * _tccUpdatesAccessQueue;
    NSDictionary * _tccUpdatesAccessQueue_latestTCCUpdatesByBundleIdentifier;
}

+ (id)TCCServer;
+ (id)sharedMonitor;

- (void).cxx_destruct;
- (void)_beginObservingTCC;
- (bool)_bundleHasCameraEntitlement:(id)arg1;
- (void)_endObservingTCC;
- (id)_fetchCameraTCCUpdatesForBundleIdentifiers:(id)arg1;
- (void)_notifyObserversOfUpdates:(id)arg1;
- (void)_observerQueue_fetchInitialTCCStateForUpdatedBundleIdentifiers;
- (void)_observerQueue_notifyObserversOfUpdates:(id)arg1;
- (void)_removeObserver:(id)arg1;
- (void)_setupQueue_setupTCCEventsSubscription;
- (id)_tccUpdateForAuthorizationRecord:(id)arg1;
- (void)_tccUpdatesAccessQueue_handleTCCEventOfType:(unsigned long long)arg1 authorizationRecord:(id)arg2;
- (id)addObserver:(id)arg1 forBundleIdentifiers:(id)arg2;
- (unsigned long long)cameraTCCStatusForBundleIdentifier:(id)arg1;
- (id)init;

@end