/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface _ActivityCurrentValueView : UIView {
    HKActivitySummaryDataProvider * _activitySummaryDataProvider;
    HKInteractiveChartAnnotationView * _annotationView;
    _ActivityCurrentValueDataSource * _currentValueDataSource;
    bool  _isChartSharingContext;
    NSLayoutConstraint * _leadingMarginConstraint;
    NSLayoutConstraint * _trailingMarginConstraint;
}

@property (nonatomic, retain) HKActivitySummaryDataProvider *activitySummaryDataProvider;
@property (nonatomic, readonly) HKInteractiveChartAnnotationView *annotationView;
@property (nonatomic, retain) _ActivityCurrentValueDataSource *currentValueDataSource;
@property (nonatomic, readonly) bool isChartSharingContext;
@property (nonatomic, retain) NSLayoutConstraint *leadingMarginConstraint;
@property (nonatomic, retain) NSLayoutConstraint *trailingMarginConstraint;

- (void).cxx_destruct;
- (id)_computeMultiDayVisibleSummaryForGraphView:(id)arg1 timeScope:(long long)arg2 filterDateIntervals:(id)arg3;
- (id)_computeSingleDayVisibleSummaryForGraphView:(id)arg1 filterDateIntervals:(id)arg2;
- (bool)_summaryOutsideRanges:(id)arg1 summary:(id)arg2;
- (id)activitySummaryDataProvider;
- (id)annotationView;
- (id)computeVisibleSummaryForGraphView:(id)arg1 timeScope:(long long)arg2 filterDateIntervals:(id)arg3;
- (id)currentValueDataSource;
- (id)initWithDisplayTypeController:(id)arg1 unitPreferenceController:(id)arg2 wheelchairUseCharacteristicCache:(id)arg3 currentValueViewCallbacks:(id)arg4 activitySummaryDataProvider:(id)arg5 activityOptions:(unsigned long long)arg6 firstWeekday:(long long)arg7 isChartSharingContext:(bool)arg8;
- (bool)isChartSharingContext;
- (void)layoutSubviews;
- (id)leadingMarginConstraint;
- (void)setActivitySummaryDataProvider:(id)arg1;
- (void)setCurrentValueDataSource:(id)arg1;
- (void)setLeadingMarginConstraint:(id)arg1;
- (void)setTrailingMarginConstraint:(id)arg1;
- (id)trailingMarginConstraint;
- (void)updateWithGraphView:(id)arg1 timeScope:(long long)arg2;

@end