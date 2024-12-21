/* Generated by RuntimeBrowser.
 */

@protocol SearchAds.ADJourneyMetricsHelping

@required

- (void)adMarkerInteracted;
- (void)completed;
- (void)delivered;
- (void)discarded;
- (void)getAppWithButtonState:(long long)arg1;
- (void)interacted;
- (void)offScreen;
- (void)onScreen;
- (void)placed;
- (void)receivedWithAdamId:(NSString *)arg1 impressionId:(NSString *)arg2 adMetadata:(NSString *)arg3;
- (void)visibleWithStarting:(NSDate *)arg1 duration:(double)arg2;

@end