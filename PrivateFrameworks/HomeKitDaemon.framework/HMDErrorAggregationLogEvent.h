/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy
 */

@interface HMDErrorAggregationLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    NSDictionary * _coreAnalyticsSerializedEvent;
}

@property (nonatomic, readonly, copy) NSString *accessoryIdentifier; /* unknown property attribute: ? */
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (nonatomic, readonly) NSDictionary *coreAnalyticsSerializedEvent;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID; /* unknown property attribute: ? */
@property (readonly) Class superclass;

+ (id)createErrorEventForRequestGroup:(id)arg1 errorString:(id)arg2 errorCount:(id)arg3;
+ (id)createSummaryEventForRequestGroup:(id)arg1 totalErrorCount:(id)arg2 totalEventCount:(id)arg3;

- (void).cxx_destruct;
- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (id)coreAnalyticsSerializedEvent;
- (id)initWithEventGroupName:(id)arg1 errorString:(id)arg2 errorCount:(id)arg3 eventCount:(id)arg4;

@end