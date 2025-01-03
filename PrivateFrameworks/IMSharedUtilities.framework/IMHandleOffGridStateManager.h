/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

@interface IMHandleOffGridStateManager : NSObject <SKStatusSubscriptionServiceDelegate> {
    long long  _currentCacheGeneration;
    NSMutableDictionary * _currentSubscriptionCache;
    NSObject<OS_dispatch_queue> * _fetchQueue;
    NSMutableDictionary * _lastKnownSubscriptionCache;
    NSMutableDictionary * _overrideDatesByHandleID;
    NSMutableSet * _pendingFetchesForCacheKeys;
    SKStatusSubscription * _personalSubscription;
    NSObject<OS_dispatch_queue> * _queue;
    SKStatusSubscriptionService * _subscriptionService;
}

@property (setter=_setCachedOverrideDatesByHandleID:, nonatomic, copy) NSDictionary *cachedOverrideDatesByHandleID;
@property (nonatomic) long long currentCacheGeneration;
@property (nonatomic, retain) NSMutableDictionary *currentSubscriptionCache;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *fetchQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *lastKnownSubscriptionCache;
@property (nonatomic, retain) NSMutableDictionary *overrideDatesByHandleID;
@property (nonatomic, retain) NSMutableSet *pendingFetchesForCacheKeys;
@property (nonatomic, readonly) long long personalOffGridMode;
@property (nonatomic, retain) SKStatusSubscription *personalSubscription;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) SKStatusSubscriptionService *subscriptionService;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_cachedStatusSubscriptionForHandle:(id)arg1;
- (id)_cachedStatusSubscriptionForIMHandle:(id)arg1 fromCache:(id)arg2 cacheDescription:(id)arg3 cacheMiss:(bool*)arg4;
- (void)_clearCurrentSubscriptionCache;
- (void)_fetchUpdatedStatusAndUpdateCachesForHandle:(id)arg1 lastKnownStatus:(id)arg2 completion:(id /* block */)arg3;
- (void)_fetchUpdatedStatusForHandle:(id)arg1 completion:(id /* block */)arg2;
- (id)_identifierFromStatusSubscription:(id)arg1 handleID:(id)arg2;
- (long long)_offGridModeFromStatusSubscription:(id)arg1 handleID:(id)arg2 onlyIfLaterThanDate:(id)arg3;
- (id)_overrideDateForHandleWithID:(id)arg1;
- (void)_personalSubscriptionWithCompletion:(id /* block */)arg1;
- (void)_postNotificationForUpdatedStatusWithSubscription:(id)arg1;
- (void)_setCachedOverrideDatesByHandleID:(id)arg1;
- (id)_skHandleForHandle:(id)arg1;
- (id)_subscriptionCacheKeyForHandle:(id)arg1;
- (void)cachedOffGridModeAndLastPublisherForHandle:(id)arg1 completion:(id /* block */)arg2;
- (id)cachedOverrideDatesByHandleID;
- (id)cachedStatusSubscriptionForHandle:(id)arg1;
- (long long)currentCacheGeneration;
- (id)currentSubscriptionCache;
- (id)fetchQueue;
- (void)fetchUpdatedStatusForHandle:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)lastKnownSubscriptionCache;
- (long long)offGridModeForHandle:(id)arg1;
- (void)offGridModeForHandle:(id)arg1 completion:(id /* block */)arg2;
- (id)overrideDatesByHandleID;
- (void)overrideStatusForHandleWithID:(id)arg1 publishedBeforeDate:(id)arg2;
- (id)pendingFetchesForCacheKeys;
- (long long)personalOffGridMode;
- (void)personalOffGridModeWithCompletion:(id /* block */)arg1;
- (id)personalSubscription;
- (id)queue;
- (void)setCurrentCacheGeneration:(long long)arg1;
- (void)setCurrentSubscriptionCache:(id)arg1;
- (void)setFetchQueue:(id)arg1;
- (void)setLastKnownSubscriptionCache:(id)arg1;
- (void)setOverrideDatesByHandleID:(id)arg1;
- (void)setPendingFetchesForCacheKeys:(id)arg1;
- (void)setPersonalSubscription:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setSubscriptionService:(id)arg1;
- (void)subscriptionInvitationReceived:(id)arg1;
- (void)subscriptionReceivedStatusUpdate:(id)arg1;
- (id)subscriptionService;
- (void)subscriptionServiceDaemonDisconnected:(id)arg1;
- (void)subscriptionStateChanged:(id)arg1;

@end
