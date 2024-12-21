/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKDatabaseAccessibilityAssertionStoreKeeper : NSObject {
    void $__lazy_storage_$__queue;
    void _dbAccessibilityAssertions;
    void _dbAccessibilityAssertionsLock;
    void _didBecomeAvailableNotificationToken;
    void _healthStore;
    void _healthdRequests;
    void _pendingRequests;
    void _pendingRequestsTimer;
}

- (void).cxx_destruct;
- (void)connectionConfigured;
- (void)dealloc;
- (void)fetchDatabaseAccessibilityAssertionForOwnerIdentifier:(id)arg1 timeout:(double)arg2 completion:(id /* block */)arg3;
- (id)init;
- (id)initWithHealthStore:(id)arg1;
- (void)invalidateAllDatabaseAccessibilityAssertions;
- (void)invalidateDatabaseAccessibilityAssertionWithAssertion:(id)arg1;

@end