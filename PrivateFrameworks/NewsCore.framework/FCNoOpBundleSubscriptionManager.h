/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCNoOpBundleSubscriptionManager : NSObject <FCBundleSubscriptionManagerType> {
    FCBundleSubscription * bundleSubscription;
    FCBundleSubscription * cachedSubscription;
    <FCEntitlementsOverrideProviderType> * entitlementsOverrideProvider;
    FCBundleSubscription * validatedCachedSubscription;
}

@property (nonatomic, readonly, copy) FCBundleSubscription *bundleSubscription;
@property (nonatomic, readonly) FCBundleSubscription *cachedSubscription;
@property (nonatomic, retain) <FCEntitlementsOverrideProviderType> *entitlementsOverrideProvider;
@property (nonatomic, readonly) FCBundleSubscription *validatedCachedSubscription;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)bundleSubscription;
- (id)bundleSubscriptionLookupEntry;
- (id)cachedSubscription;
- (void)clearBundleSubscription;
- (id)entitlementsOverrideProvider;
- (void)forceExpireBundleSubscriptionBasedOnInternalSettings;
- (id)init;
- (void)prepareForUseWithCompletion:(id /* block */)arg1;
- (void)prewarmBundleTagIDsWithPurchaseID:(id)arg1;
- (void)refreshBundleSubscriptionWithCachePolicy:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)refreshBundleSubscriptionWithCachePolicy:(unsigned long long)arg1 hideBundleDetectionUI:(bool)arg2 completion:(id /* block */)arg3;
- (void)removeObserver:(id)arg1;
- (void)renewalNoticeShownWithPurchaseID:(id)arg1;
- (void)setEntitlementsOverrideProvider:(id)arg1;
- (void)silentExpireBundleSubscription;
- (id)validatedCachedSubscription;

@end
