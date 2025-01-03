/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UsageTracking.framework/UsageTracking
 */

@interface USUsageAccumulator : NSObject {
    NSDictionary * _applicationCategories;
    NSMutableDictionary * _applicationUsageIntervals;
    NSMutableDictionary * _applicationUsageStartDates;
    NSMutableArray * _backlightIntervals;
    NSDate * _backlightStartDate;
    NSMutableDictionary * _canonicalApplicationUsageIntervals;
    NSMutableDictionary * _categoryUsageIntervals;
    bool  _deviceBacklit;
    NSDate * _lastEventDate;
    NSDate * _mediaNowPlayingStartDate;
    NSMutableDictionary * _mediaUsageByUniqueID;
    NSMutableDictionary * _notifications;
    NSMutableDictionary * _primaryWebUsageIntervals;
    int  _quickLookVideoNowPlayingState;
    bool  _standByEnabled;
    NSDictionary * _webCategories;
    NSMutableDictionary * _webUsageIntervals;
    NSMutableDictionary * _webUsageStartDatesByWebBrowser;
    NSMutableDictionary * _webUsageStateByUniqueID;
}

@property (readonly, copy) NSDictionary *applicationCategories;
@property (readonly) NSMutableDictionary *applicationUsageIntervals;
@property (readonly) NSMutableDictionary *applicationUsageStartDates;
@property (readonly) NSMutableArray *backlightIntervals;
@property (copy) NSDate *backlightStartDate;
@property (readonly) NSMutableDictionary *canonicalApplicationUsageIntervals;
@property (readonly) NSMutableDictionary *categoryUsageIntervals;
@property (getter=isDeviceBacklit) bool deviceBacklit;
@property (copy) NSDate *lastEventDate;
@property (copy) NSDate *mediaNowPlayingStartDate;
@property (retain) NSMutableDictionary *mediaUsageByUniqueID;
@property (readonly) NSMutableDictionary *notifications;
@property (readonly) NSMutableDictionary *primaryWebUsageIntervals;
@property int quickLookVideoNowPlayingState;
@property (getter=isStandByEnabled) bool standByEnabled;
@property (readonly, copy) NSDictionary *webCategories;
@property (readonly) NSMutableDictionary *webUsageIntervals;
@property (readonly) NSMutableDictionary *webUsageStartDatesByWebBrowser;
@property (readonly) NSMutableDictionary *webUsageStateByUniqueID;

- (void).cxx_destruct;
- (void)_accumulateAppMediaUsage:(id)arg1 timestamp:(id)arg2;
- (void)_accumulateAppUsage:(id)arg1 timestamp:(id)arg2;
- (void)_accumulateAppWebUsage:(id)arg1 timestamp:(id)arg2;
- (void)_accumulateApplication:(id)arg1 timestamp:(id)arg2 starting:(bool)arg3 isUsageTrusted:(bool)arg4;
- (void)_accumulateDeviceBacklight:(id)arg1 timestamp:(id)arg2;
- (void)_accumulateDeviceBacklightWithIsBacklit:(bool)arg1 timestamp:(id)arg2;
- (void)_accumulateMediaNowPlaying:(id)arg1 timestamp:(id)arg2;
- (void)_accumulateMediaNowPlayingWithTimestamp:(id)arg1 starting:(bool)arg2;
- (void)_accumulateNotificationUsage:(id)arg1;
- (void)_accumulateWebDomain:(id)arg1 bundleIdentifier:(id)arg2 timestamp:(id)arg3 starting:(bool)arg4 isUsageTrusted:(bool)arg5;
- (void)_aggregateAppMediaUsage:(id)arg1 timestamp:(id)arg2;
- (void)_aggregateApplicationUsageInterval:(id)arg1 identifier:(id)arg2;
- (void)_aggregateCanonicalApplicationUsageInterval:(id)arg1 canonicalIdentifier:(id)arg2;
- (void)_aggregateCategoryUsageInterval:(id)arg1 identifier:(id)arg2;
- (void)_aggregatePrimaryWebUsageInterval:(id)arg1 primaryIdentifier:(id)arg2;
- (void)_aggregateStartDatesUsingEndDate:(id)arg1;
- (void)_aggregateWebUsageInterval:(id)arg1 identifier:(id)arg2;
- (void)_resetAggregations;
- (void)_stopAllUsageWithEndDate:(id)arg1;
- (void)_stopAllWebUsageForWebBrowser:(id)arg1 endDate:(id)arg2;
- (void)accumulateEvent:(id)arg1 timestamp:(id)arg2;
- (void)aggregateUsageForInterval:(id)arg1 usageReportHandler:(id /* block */)arg2;
- (id)applicationCategories;
- (id)applicationUsageIntervals;
- (id)applicationUsageStartDates;
- (id)backlightIntervals;
- (id)backlightStartDate;
- (id)canonicalApplicationUsageIntervals;
- (id)categoryUsageIntervals;
- (id)initWithApplicationCategories:(id)arg1 webCategories:(id)arg2;
- (bool)isDeviceBacklit;
- (bool)isStandByEnabled;
- (id)lastEventDate;
- (id)mediaNowPlayingStartDate;
- (id)mediaUsageByUniqueID;
- (id)notifications;
- (id)primaryWebUsageIntervals;
- (int)quickLookVideoNowPlayingState;
- (void)setBacklightStartDate:(id)arg1;
- (void)setDeviceBacklit:(bool)arg1;
- (void)setLastEventDate:(id)arg1;
- (void)setMediaNowPlayingStartDate:(id)arg1;
- (void)setMediaUsageByUniqueID:(id)arg1;
- (void)setQuickLookVideoNowPlayingState:(int)arg1;
- (void)setStandByEnabled:(bool)arg1;
- (id)webCategories;
- (id)webUsageIntervals;
- (id)webUsageStartDatesByWebBrowser;
- (id)webUsageStateByUniqueID;

@end
