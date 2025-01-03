/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDWorkoutTrainingLoadQueryHelper : NSObject {
    NSDate * _anchorDate;
    HDWorkoutTrainingLoadDataSource * _dataSource;
    _HKFilter * _filter;
    NSDateComponents * _intervalComponents;
    long long  _options;
    HDProfile * _profile;
    <HDStatisticsCollectionCalculatorSourceOrderProvider> * _sourceOrderProvider;
}

- (void).cxx_destruct;
- (id)_calculatorWithIntervalCollection:(id)arg1;
- (id)_trainingLoadFromStatistics:(id)arg1 count:(long long)arg2;
- (void)fetchTrainingLoadCollectionWithCompletion:(id /* block */)arg1;
- (void)fetchTrainingLoadWithCompletion:(id /* block */)arg1;
- (id)initWithFilter:(id)arg1 options:(long long)arg2 anchorDate:(id)arg3 intervalComponents:(id)arg4 profile:(id)arg5;
- (id)initWithFilter:(id)arg1 options:(long long)arg2 profile:(id)arg3;

@end
