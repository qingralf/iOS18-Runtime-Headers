/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SOS.framework/SOS
 */

@interface SOSAnalyticsEventAccumulator : NSObject {
    NSMutableDictionary * _accumulatedEventsDict;
    NSString * _name;
}

@property (nonatomic, readonly) NSString *name;

- (void).cxx_destruct;
- (void)_addSummaryKeys:(id)arg1 toAnalyticsDict:(id)arg2;
- (unsigned long long)_countForEventName:(id)arg1;
- (id)analyticsDataDictForAccumulatedKeys:(id)arg1 outputKeyPrefix:(id)arg2 summaryKeysDict:(id)arg3;
- (id)initWithName:(id)arg1;
- (id)name;
- (void)noteEvent:(id)arg1;

@end