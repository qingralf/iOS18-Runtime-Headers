/* Generated by RuntimeBrowser.
 */

@protocol APPCPromotableContent <APPCBasePromotableContent>

@required

- (long long)adType;
- (<APPCPromotableContentRepresentation> *)bestRepresentation;
- (NSString *)brandName;
- (NSString *)campaignText;
- (<APPCDiagnosticMetricsHelping> *)diagnosticMetricHelper;
- (bool)discarded;
- (bool)discardedDueToPolicy;
- (NSDate *)expirationDate;
- (long long)feedMetadataContentProviderID;
- (APInstallAttribution *)installAttribution;
- (bool)isLocationAvailableForAd;
- (bool)isMRAID;
- (bool)isOutstreamVideoAd;
- (bool)isPAAvailableForAd;
- (NSString *)journeyIdentifier;
- (<APPCMediaMetricsHelping> *)mediaMetricHelper;
- (NSDictionary *)metaData;
- (<APPCMetricEventsTracking> *)metricEventsTracking;
- (<APPCCarouselMetricsHelping><APPCJourneyMetricsHelping><APPCJourneyMetricsNotificationsHelping> *)metricsHelper;
- (long long)minimumTimeBetweenPresentation;
- (void)notifyListenersPCUsedWithPcID:(NSString *)arg1;
- (long long)numOfArticlesSinceInterstitial;
- (void)registerPromotedContentUsedWithAction:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)replaceMetricsHelperWithNewMetricsHelper:(id <APPCCarouselMetricsHelping><APPCJourneyMetricsHelping><APPCJourneyMetricsNotificationsHelping>)arg1;
- (NSArray *)representations;
- (unsigned long long)retrieveNetworkType;
- (long long)serverUnfilledReason;
- (void)setBestRepresentation:(id <APPCPromotableContentRepresentation>)arg1;
- (void)setDiscardedDueToPolicy:(bool)arg1;
- (void)setMetricEventsTracking:(id <APPCMetricEventsTracking>)arg1;

@end
