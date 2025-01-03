/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKHistogramChartDataSource : HKGraphSeriesDataSource <HKHistogramAxisDimensionDataSource> {
    unsigned long long  _binCalculation;
    unsigned long long  _binWidth;
    unsigned long long  _binningMode;
    HKGraphSeriesDataBlock * _dataBlock;
    id /* block */  _dataBlockBuilder;
    unsigned long long  _dateBasedBinModeConfig;
    unsigned char  _didExecuteQuery;
    <HKHistogramChartDataSourceDataFetchObserver> * _fetchObserver;
    HKHealthStore * _healthStore;
    HKQuantitySample * _maximumSample;
    HKQuantitySample * _minimumSample;
    unsigned long long  _numberOfBins;
    NSPredicate * _predicate;
    NSString * _quantityIdentifier;
    NSArray * _quantityValueRanges;
    NSDate * _samplesEndDate;
    NSDate * _samplesStartDate;
    HKUnitPreferenceController * _unitPreferenceController;
    HKValueRange * _xAxisRange;
    id /* block */  _xAxisStringForLocation;
    HKValueRange * _yAxisRange;
}

@property (nonatomic) unsigned long long binCalculation;
@property (nonatomic) unsigned long long binWidth;
@property (nonatomic) unsigned long long binningMode;
@property (nonatomic, retain) HKGraphSeriesDataBlock *dataBlock;
@property (nonatomic, copy) id /* block */ dataBlockBuilder;
@property (nonatomic) unsigned long long dateBasedBinModeConfig;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned char didExecuteQuery;
@property (nonatomic) <HKHistogramChartDataSourceDataFetchObserver> *fetchObserver;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (nonatomic, retain) HKQuantitySample *maximumSample;
@property (nonatomic, retain) HKQuantitySample *minimumSample;
@property (nonatomic) unsigned long long numberOfBins;
@property (nonatomic, readonly) NSPredicate *predicate;
@property (nonatomic, readonly) NSString *quantityIdentifier;
@property (nonatomic, readonly) HKQuantityType *quantityType;
@property (nonatomic, retain) NSArray *quantityValueRanges;
@property (nonatomic, retain) NSDate *samplesEndDate;
@property (nonatomic, retain) NSDate *samplesStartDate;
@property (nonatomic, readonly) NSArray *sortDescriptors;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HKUnit *unit;
@property (nonatomic, readonly) HKUnitPreferenceController *unitPreferenceController;
@property (nonatomic, readonly) HKValueRange *xAxisRange;
@property (nonatomic, copy) id /* block */ xAxisStringForLocation;
@property (nonatomic, readonly) HKValueRange *yAxisRange;

+ (id)_daysInWeekXValueRange;
+ (id)_hoursInDayXValueRange;

- (void).cxx_destruct;
- (unsigned long long)_binIndexForSample:(id)arg1;
- (id)_buildQuantityValueRangesFromSortedSamples:(id)arg1;
- (unsigned long long)_dateBasedBinIndexForSample:(id)arg1;
- (id)_dateBasedXValueRangeForConfig:(unsigned long long)arg1;
- (unsigned long long)_dayIndexForDayName:(id)arg1;
- (id)_dayNameFormatter;
- (id)_dayNameFromDayIndex:(unsigned long long)arg1;
- (id)_dayXAxisStringForLocation:(id)arg1;
- (id)_daysOfTheWeek;
- (id)_displayType;
- (id)_hourNameFromHourIndex:(unsigned long long)arg1;
- (id)_hourOfTheDayFormatter;
- (id)_hourXAxisStringForLocation:(id)arg1;
- (id)_initWithQuantityTypeIdentifier:(id)arg1 healthStore:(id)arg2 unitPreferenceController:(id)arg3 predicate:(id)arg4 xAxisRange:(id)arg5 yAxisRange:(id)arg6 binMode:(unsigned long long)arg7 binCalculation:(unsigned long long)arg8 binWidth:(double)arg9 numberOfBins:(unsigned long long)arg10 dateBasedBinModeConfig:(unsigned long long)arg11;
- (unsigned long long)_normalBinIndexForSample:(id)arg1;
- (id)_query;
- (id)_samplesSortedByQuantity:(id)arg1;
- (unsigned long long)binCalculation;
- (unsigned long long)binWidth;
- (unsigned long long)binningMode;
- (struct HKGraphSeriesDataBlockPath { long long x1; long long x2; long long x3; })blockPathForX:(id)arg1 zoom:(long long)arg2 resolution:(long long)arg3;
- (void)blocksRequestedFromPath:(struct HKGraphSeriesDataBlockPath { long long x1; long long x2; long long x3; })arg1 toPath:(struct HKGraphSeriesDataBlockPath { long long x1; long long x2; long long x3; })arg2 priorityDelegate:(id)arg3;
- (id)buildBinsWithSamples:(id)arg1;
- (id)buildGraphSeriesDataBlockFromSamples:(id)arg1;
- (id)buildGraphSeriesDataBlockWithCalculatedBinValues:(id)arg1;
- (id)cachedBlockForPath:(struct HKGraphSeriesDataBlockPath { long long x1; long long x2; long long x3; })arg1 context:(id)arg2;
- (id)calculateBinValueForBins:(id)arg1 usingCalculation:(unsigned long long)arg2;
- (id)dataBlock;
- (id /* block */)dataBlockBuilder;
- (unsigned long long)dateBasedBinModeConfig;
- (void)didCompleteFetch;
- (unsigned char)didExecuteQuery;
- (void)fetchData;
- (id)fetchObserver;
- (id)healthStore;
- (id)initWithQuantityTypeIdentifier:(id)arg1 healthStore:(id)arg2 unitPreferenceController:(id)arg3 predicate:(id)arg4 yAxisRange:(id)arg5 binCalculation:(unsigned long long)arg6 dateBasedBinModeConfig:(unsigned long long)arg7;
- (id)initWithQuantityTypeIdentifier:(id)arg1 healthStore:(id)arg2 unitPreferenceController:(id)arg3 predicate:(id)arg4 yAxisRange:(id)arg5 binWidth:(double)arg6;
- (id)maximumSample;
- (id)minimumSample;
- (unsigned long long)numberOfBins;
- (id)predicate;
- (id)quantityIdentifier;
- (id)quantityType;
- (id)quantityValueRanges;
- (id)samplesEndDate;
- (id)samplesStartDate;
- (void)setBinCalculation:(unsigned long long)arg1;
- (void)setBinWidth:(unsigned long long)arg1;
- (void)setBinningMode:(unsigned long long)arg1;
- (void)setDataBlock:(id)arg1;
- (void)setDataBlockBuilder:(id /* block */)arg1;
- (void)setDateBasedBinModeConfig:(unsigned long long)arg1;
- (void)setDidExecuteQuery:(unsigned char)arg1;
- (void)setFetchObserver:(id)arg1;
- (void)setMaximumSample:(id)arg1;
- (void)setMinimumSample:(id)arg1;
- (void)setNumberOfBins:(unsigned long long)arg1;
- (void)setQuantityValueRanges:(id)arg1;
- (void)setSamplesEndDate:(id)arg1;
- (void)setSamplesStartDate:(id)arg1;
- (void)setXAxisStringForLocation:(id /* block */)arg1;
- (id)sortDescriptors;
- (id)stringForLocation:(id)arg1;
- (id)unit;
- (id)unitPreferenceController;
- (id)xAxisRange;
- (id /* block */)xAxisStringForLocation;
- (id)xAxisStringForLocation:(id)arg1;
- (id)yAxisRange;

@end
