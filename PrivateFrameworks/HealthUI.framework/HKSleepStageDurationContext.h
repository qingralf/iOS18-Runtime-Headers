/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKSleepStageDurationContext : NSObject <HKOverlayContext> {
    HKDisplayType * _baseDisplayType;
    <HKOverlaySleepRoomContextChangeDelegate> * _contextChangeDelegate;
    HKDisplayTypeContextItem * _lastUpdatedItem;
    HKUIMetricColors * _metricColors;
    HKInteractiveChartOverlayViewController * _overlayChartController;
    HKDisplayType * _overlayDisplayType;
    HKUIMetricColors * _selectedMetricColors;
    long long  _sleepValue;
}

@property (nonatomic, readonly) HKDisplayType *baseDisplayType;
@property (nonatomic, readonly) <HKOverlaySleepRoomContextChangeDelegate> *contextChangeDelegate;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HKDisplayTypeContextItem *lastUpdatedItem;
@property (nonatomic, readonly) HKUIMetricColors *metricColors;
@property (nonatomic, readonly) HKInteractiveChartOverlayViewController *overlayChartController;
@property (nonatomic, readonly) HKDisplayType *overlayDisplayType;
@property (nonatomic, readonly) HKUIMetricColors *selectedMetricColors;
@property (nonatomic, readonly) long long sleepValue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_attributedDurationStringFromDuration:(double)arg1 isSelected:(bool)arg2;
- (id)_attributedTitleOverrideWithDuration:(double)arg1;
- (double)_computeAverageValueFromChartPoints:(id)arg1;
- (id)_contextItemWithDuration:(double)arg1 timeScope:(long long)arg2;
- (id)baseDisplayType;
- (id)baseDisplayTypeForOverlay:(long long)arg1;
- (id)contextChangeDelegate;
- (id)contextItemForLastUpdate;
- (id)initWithBaseDisplayType:(id)arg1 overlayDisplayType:(id)arg2 overlayChartController:(id)arg3 contextChangeDelegate:(id)arg4 sleepValue:(long long)arg5;
- (id)lastUpdatedItem;
- (id)metricColors;
- (id)overlayChartController;
- (id)overlayDisplayType;
- (id)overlayDisplayTypeForTimeScope:(long long)arg1;
- (void)overlayStateWillChange:(bool)arg1 contextItem:(id)arg2 chartController:(id)arg3;
- (long long)resolutionForTimeScope:(long long)arg1 traitResolution:(long long)arg2;
- (id)sampleTypeForDateRangeUpdates;
- (id)selectedMetricColors;
- (void)setLastUpdatedItem:(id)arg1;
- (long long)sleepValue;
- (bool)unselectedContextShouldUseContextBaseType;
- (void)updateContextItemForDateInterval:(id)arg1 overlayController:(id)arg2 timeScope:(long long)arg3 resolution:(long long)arg4 completion:(id /* block */)arg5;

@end