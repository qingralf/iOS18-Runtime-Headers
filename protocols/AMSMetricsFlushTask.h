/* Generated by RuntimeBrowser.
 */

@protocol AMSMetricsFlushTask <AMSMetricsFlushStrategy>

@required

- (bool)includeMMeClientInfoAndDeviceHeaders;
- (id)initWithDataSource:(id <AMSMetricsDataSource>)arg1 bag:(id <AMSBagProtocol>)arg2;
- (long long)maxBatchSize;
- (long long)maxRequestCount;
- (unsigned long long)metricsSigningFlavour;
- (void)setIncludeMMeClientInfoAndDeviceHeaders:(bool)arg1;
- (void)setMaxBatchSize:(long long)arg1;
- (void)setMaxRequestCount:(long long)arg1;
- (void)setMetricsSigningFlavour:(unsigned long long)arg1;
- (void)setTopic:(NSString *)arg1;
- (NSString *)topic;

@end