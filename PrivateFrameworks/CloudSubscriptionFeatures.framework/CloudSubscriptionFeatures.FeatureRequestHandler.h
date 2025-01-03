/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudSubscriptionFeatures.framework/CloudSubscriptionFeatures
 */

@interface CloudSubscriptionFeatures.FeatureRequestHandler : NSObject <CloudSubscriptionFeatures.FeaturesServiceRequest> {
    void accountStore;
    void availabilityClient;
    void geoCache;
    void taskLimiters;
    void urlSession;
}

- (void).cxx_destruct;
- (void)clearCFUGateWithFeature:(id)arg1 completion:(id /* block */)arg2;
- (void)clearCFUWithId:(id)arg1 completion:(id /* block */)arg2;
- (void)clearCacheAndNotify;
- (void)clearTicketCacheAndNotify;
- (void)forcePostCFUWithCompletion:(id /* block */)arg1;
- (void)getFeatureEligibilityFor:(id)arg1 bundleID:(id)arg2 completion:(id /* block */)arg3;
- (void)getSharedAlbumsStatusWithCompletion:(id /* block */)arg1;
- (void)getTicketForFeature:(id)arg1 completion:(id /* block */)arg2;
- (void)getTicketStatusForFeature:(id)arg1 completion:(id /* block */)arg2;
- (void)getTicketStatusFromCacheForFeature:(id)arg1 completion:(id /* block */)arg2;
- (void)gmOptInToggleWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)postCFUIfEligibleWithFeature:(id)arg1 completion:(id /* block */)arg2;
- (void)requestFeatureWithId:(id)arg1 ignoreCache:(bool)arg2 completion:(id /* block */)arg3;
- (void)requestGeoClassificationFor:(id)arg1 bundleID:(id)arg2 altDSID:(id)arg3 ignoreCache:(bool)arg4 completion:(id /* block */)arg5;
- (void)revalidateCFU;
- (void)signupForWaitlistWithFeatureID:(id)arg1 completion:(id /* block */)arg2;
- (void)waitlistStatusWithFeatureID:(id)arg1 completion:(id /* block */)arg2;

@end
