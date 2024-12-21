/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iCloudSubscriptionOptimizerClient.framework/iCloudSubscriptionOptimizerClient
 */

@interface iCloudSubscriptionOptimizerClient.MetricsQuotaClient : ISOQuotaClient {
    void clientLibEvents;
    void innerClient;
}

- (void).cxx_destruct;
- (void)clearNotificationState:(id /* block */)arg1;
- (id)failsafeDelayedOfferJsonContext;
- (id)init;
- (void)isNotificationPending:(id /* block */)arg1;
- (void)logFailsafeEvent:(id)arg1;
- (void)newOffer:(id)arg1 andCallback:(id /* block */)arg2;
- (id)parseDelayedOffer:(id)arg1;
- (id)parseDelayedOfferFromJson:(id)arg1;
- (id)parseNotification:(id)arg1;

@end