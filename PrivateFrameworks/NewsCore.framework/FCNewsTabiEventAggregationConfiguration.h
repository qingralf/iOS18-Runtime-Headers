/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCNewsTabiEventAggregationConfiguration : NSObject {
    NSDictionary * _dictionary;
    FCNewsTabiEventAggregationConditions * _eventConditions;
    long long  _fullBodyEmbeddingDimension;
    long long  _maxSessionEvents;
    long long  _maxTopicIds;
    FCNewsTabiEventAggregationOutputsConfiguration * _outputs;
    long long  _titleEmbeddingDimension;
}

@property (nonatomic, retain) NSDictionary *dictionary;
@property (nonatomic, retain) FCNewsTabiEventAggregationConditions *eventConditions;
@property (nonatomic) long long fullBodyEmbeddingDimension;
@property (nonatomic) long long maxSessionEvents;
@property (nonatomic) long long maxTopicIds;
@property (nonatomic, retain) FCNewsTabiEventAggregationOutputsConfiguration *outputs;
@property (nonatomic) long long titleEmbeddingDimension;

- (void).cxx_destruct;
- (id)description;
- (id)dictionary;
- (id)eventConditions;
- (long long)fullBodyEmbeddingDimension;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 outputs:(id)arg2;
- (long long)maxSessionEvents;
- (long long)maxTopicIds;
- (id)outputs;
- (void)setDictionary:(id)arg1;
- (void)setEventConditions:(id)arg1;
- (void)setFullBodyEmbeddingDimension:(long long)arg1;
- (void)setMaxSessionEvents:(long long)arg1;
- (void)setMaxTopicIds:(long long)arg1;
- (void)setOutputs:(id)arg1;
- (void)setTitleEmbeddingDimension:(long long)arg1;
- (long long)titleEmbeddingDimension;

@end
