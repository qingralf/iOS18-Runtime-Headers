/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXNotificationEventMetric : _ATXCoreAnalyticsMetric {
    ATXNotificationTelemetryQueryResult * _queryResult;
}

@property (nonatomic, retain) ATXNotificationTelemetryQueryResult *queryResult;

+ (id)atxComputedModeStringForTimestamp:(id)arg1;

- (void).cxx_destruct;
- (id)coreAnalyticsDictionary;
- (id)coreAnalyticsDictionaryFromQueryResult:(id)arg1;
- (id)initWithQueryResult:(id)arg1;
- (id)metricName;
- (id)queryResult;
- (void)setQueryResult:(id)arg1;

@end