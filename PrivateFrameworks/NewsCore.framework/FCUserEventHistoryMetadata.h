/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCUserEventHistoryMetadata : NSObject {
    FCUserEventHistoryAggregateStoreData * _aggregateStoreData;
    long long  _aggregateStoreGenerationTime;
    long long  _aggregateTotalCount;
    FCUserEventHistoryEventCounts * _eventCounts;
    long long  _headlineEventCount;
    long long  _headlinesWithInvalidBodyEmbeddingsEventCount;
    long long  _headlinesWithInvalidTitleEmbeddingsEventCount;
    long long  _headlinesWithValidBodyEmbeddingsEventCount;
    long long  _headlinesWithValidTitleEmbeddingsEventCount;
    double  _meanCountOfEvents;
    long long  _sessionsOnDiskSize;
    double  _standardDeviationOfEvents;
    long long  _totalEventsCount;
}

@property (nonatomic, retain) FCUserEventHistoryAggregateStoreData *aggregateStoreData;
@property (nonatomic) long long aggregateStoreGenerationTime;
@property (nonatomic) long long aggregateTotalCount;
@property (nonatomic, retain) FCUserEventHistoryEventCounts *eventCounts;
@property (nonatomic) long long headlineEventCount;
@property (nonatomic) long long headlinesWithInvalidBodyEmbeddingsEventCount;
@property (nonatomic) long long headlinesWithInvalidTitleEmbeddingsEventCount;
@property (nonatomic) long long headlinesWithValidBodyEmbeddingsEventCount;
@property (nonatomic) long long headlinesWithValidTitleEmbeddingsEventCount;
@property (nonatomic) double meanCountOfEvents;
@property (nonatomic) long long sessionsOnDiskSize;
@property (nonatomic) double standardDeviationOfEvents;
@property (nonatomic) long long totalEventsCount;

+ (id)emptyWithSessionsOnDiskSize:(long long)arg1 personalizationAnalyticsEnabled:(bool)arg2;

- (void).cxx_destruct;
- (id)aggregateStoreData;
- (long long)aggregateStoreGenerationTime;
- (long long)aggregateTotalCount;
- (id)description;
- (id)eventCounts;
- (long long)headlineEventCount;
- (long long)headlinesWithInvalidBodyEmbeddingsEventCount;
- (long long)headlinesWithInvalidTitleEmbeddingsEventCount;
- (long long)headlinesWithValidBodyEmbeddingsEventCount;
- (long long)headlinesWithValidTitleEmbeddingsEventCount;
- (id)initWithAggregateStoreGenerationTime:(long long)arg1 aggregateTotalCount:(long long)arg2 meanCountOfEvents:(double)arg3 sessionsOnDiskSize:(long long)arg4 standardDeviationOfEvents:(double)arg5 totalEventsCount:(long long)arg6 headlineEventCount:(long long)arg7 headlinesWithValidTitleEmbeddingsEventCount:(long long)arg8 headlinesWithInvalidTitleEmbeddingsEventCount:(long long)arg9 headlinesWithValidBodyEmbeddingsEventCount:(long long)arg10 headlinesWithInvalidBodyEmbeddingsEventCount:(long long)arg11 eventCounts:(id)arg12 aggregateStoreData:(id)arg13;
- (double)meanCountOfEvents;
- (long long)sessionsOnDiskSize;
- (void)setAggregateStoreData:(id)arg1;
- (void)setAggregateStoreGenerationTime:(long long)arg1;
- (void)setAggregateTotalCount:(long long)arg1;
- (void)setEventCounts:(id)arg1;
- (void)setHeadlineEventCount:(long long)arg1;
- (void)setHeadlinesWithInvalidBodyEmbeddingsEventCount:(long long)arg1;
- (void)setHeadlinesWithInvalidTitleEmbeddingsEventCount:(long long)arg1;
- (void)setHeadlinesWithValidBodyEmbeddingsEventCount:(long long)arg1;
- (void)setHeadlinesWithValidTitleEmbeddingsEventCount:(long long)arg1;
- (void)setMeanCountOfEvents:(double)arg1;
- (void)setSessionsOnDiskSize:(long long)arg1;
- (void)setStandardDeviationOfEvents:(double)arg1;
- (void)setTotalEventsCount:(long long)arg1;
- (double)standardDeviationOfEvents;
- (long long)totalEventsCount;

@end
