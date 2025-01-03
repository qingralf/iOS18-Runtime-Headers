/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIMetricsPageRenderEvent : SSMetricsBaseEvent <SKUIInspectableObject> {
    NSMutableArray * _domChanges;
    NSDictionary * _metricsBase;
    NSMutableArray * _requests;
}

@property (nonatomic, retain) NSString *clientCorrelationKey;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSArray *domChanges;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *launchCorrelationKey;
@property (nonatomic, copy) NSDictionary *metricsBase;
@property (nonatomic) double pageAppearTime;
@property (nonatomic) double pageDisappearTime;
@property (nonatomic) double pageRequestedTime;
@property (nonatomic) double pageUserReadyTime;
@property (nonatomic) double platformJsonParseEndTime;
@property (nonatomic) double platformJsonParseStartTime;
@property (nonatomic) double platformRequestStartTime;
@property (nonatomic) double platformResponseEndTime;
@property (nonatomic) double platformResponseStartTime;
@property (nonatomic) bool platformResponseWasCached;
@property (getter=isReadyForSubmission, nonatomic, readonly) bool readyForSubmission;
@property (nonatomic, readonly, copy) NSArray *requests;
@property (nonatomic) double resourceRequestEndTime;
@property (nonatomic) double resourceRequestOnScreenEndTime;
@property (nonatomic) double resourceRequestStartTime;
@property (readonly) Class superclass;
@property (setter=setXPSamplingForced:, nonatomic) bool xpSamplingForced;
@property (setter=setXPSamplingPercentageUsers:, nonatomic) double xpSamplingPercentageUsers;
@property (setter=setXPSessionDuration:, nonatomic) double xpSessionDuration;

+ (double)_randomDouble;
+ (id)_sampleWindowStartTime;
+ (void)_setSampleWindowStartTime:(id)arg1;
+ (bool)shouldCollectPageRenderData;
+ (bool)shouldCollectPageRenderDataForDocument:(id)arg1;

- (void).cxx_destruct;
- (void)addDOMChange:(id)arg1;
- (void)addRequest:(id)arg1;
- (void)appendMetricsBaseProperties:(id)arg1;
- (void)appendPropertiesToBody:(id)arg1;
- (void)appendSamplingPropertiesFromClientContext:(id)arg1;
- (id)clientCorrelationKey;
- (id)description;
- (id)domChanges;
- (id)init;
- (bool)isReadyForSubmission;
- (id)launchCorrelationKey;
- (id)metricsBase;
- (double)pageAppearTime;
- (double)pageDisappearTime;
- (double)pageRequestedTime;
- (double)pageUserReadyTime;
- (double)platformJsonParseEndTime;
- (double)platformJsonParseStartTime;
- (double)platformRequestStartTime;
- (double)platformResponseEndTime;
- (double)platformResponseStartTime;
- (bool)platformResponseWasCached;
- (void)populateObjectInspector:(id)arg1;
- (id)requests;
- (double)resourceRequestEndTime;
- (double)resourceRequestOnScreenEndTime;
- (double)resourceRequestStartTime;
- (void)setClientCorrelationKey:(id)arg1;
- (void)setLaunchCorrelationKey:(id)arg1;
- (void)setMetricsBase:(id)arg1;
- (void)setPageAppearTime:(double)arg1;
- (void)setPageDisappearTime:(double)arg1;
- (void)setPageRequestedTime:(double)arg1;
- (void)setPageUserReadyTime:(double)arg1;
- (void)setPlatformJsonParseEndTime:(double)arg1;
- (void)setPlatformJsonParseStartTime:(double)arg1;
- (void)setPlatformRequestStartTime:(double)arg1;
- (void)setPlatformResponseEndTime:(double)arg1;
- (void)setPlatformResponseStartTime:(double)arg1;
- (void)setPlatformResponseWasCached:(bool)arg1;
- (void)setResourceRequestEndTime:(double)arg1;
- (void)setResourceRequestOnScreenEndTime:(double)arg1;
- (void)setResourceRequestStartTime:(double)arg1;
- (void)setXPSamplingForced:(bool)arg1;
- (void)setXPSamplingPercentageUsers:(double)arg1;
- (void)setXPSessionDuration:(double)arg1;
- (bool)xpSamplingForced;
- (double)xpSamplingPercentageUsers;
- (double)xpSessionDuration;

@end
