/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

@interface WDSampleListDataProvider : NSObject <HKDataMetadataViewControllerDelegate, HKSampleTypeUpdateControllerObserver, WDDataListViewControllerDataProvider> {
    NSPredicate * _defaultQueryPredicate;
    HKSampleListDataProviderFilter * _defaultQueryPredicateFilter;
    bool  _didFetchInitialData;
    HKDisplayType * _displayType;
    bool  _hasDetailViewController;
    NSDictionary * _pagingContexts;
    WDProfile * _profile;
    NSString * _profileName;
    HKSortedSampleArray * _samples;
    id /* block */  _updateCallback;
}

@property (readonly) bool calendarDateSelectorVisible; /* unknown property attribute: ? */
@property (nonatomic, readonly) long long cellStyle;
@property (nonatomic, readonly) double customCellHeight;
@property (nonatomic, readonly) double customEstimatedCellHeight;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, retain) NSPredicate *defaultQueryPredicate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HKDisplayType *displayType;
@property (readonly) bool hasCompleteDataSet; /* unknown property attribute: ? */
@property (nonatomic) bool hasDetailViewController;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (nonatomic, readonly) unsigned long long numberOfSections;
@property (nonatomic, readonly) WDProfile *profile;
@property (nonatomic, copy) NSString *profileName;
@property (nonatomic, readonly) HKSortedSampleArray *samples;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool textAdjustsFontSizeToFitWidth;

- (void).cxx_destruct;
- (id)_UUIDsForSamplesWithEndDate:(id)arg1;
- (void)_callUpdateHandler;
- (id)_defaultPredicateWithPredicateForType:(id)arg1;
- (bool)_handleObjectsRemoved:(id)arg1;
- (void)_handleQueryResultsForSampleType:(id)arg1 results:(id)arg2;
- (id)_pagingContextForSampleType:(id)arg1;
- (void)_requestNextPageOfData;
- (void)_requestNextPageOfDataForSampleType:(id)arg1;
- (void)_resetAllData;
- (id)_samplesSortDescriptor;
- (void)_stopAllQueries;
- (id)accessViewControllerForSample:(id)arg1 healthStore:(id)arg2;
- (bool)canEditRowAtIndexPath:(id)arg1;
- (long long)cellStyle;
- (id)createDataFetcherForSampleType:(id)arg1 predicate:(id)arg2 limit:(long long)arg3 sortDescriptors:(id)arg4 resultsHandler:(id /* block */)arg5;
- (id)createQueryForSampleType:(id)arg1 predicate:(id)arg2 limit:(long long)arg3 sortDescriptors:(id)arg4 resultsHandler:(id /* block */)arg5;
- (id)customCellForObject:(id)arg1 indexPath:(id)arg2 tableView:(id)arg3;
- (double)customCellHeight;
- (double)customEstimatedCellHeight;
- (void)customizeTableView:(id)arg1;
- (id)defaultPredicateForSampleType:(id)arg1;
- (id)defaultQueryPredicate;
- (void)deleteAllData;
- (void)deleteObjectsAtIndexPath:(id)arg1 healthStore:(id)arg2 options:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (id)displayType;
- (id)displayTypeController;
- (bool)hasCompleteDataSet;
- (bool)hasDetailViewController;
- (id)healthStore;
- (id)initWithDisplayType:(id)arg1 profile:(id)arg2;
- (unsigned long long)numberOfObjectsForSection:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (id)objectAtIndex:(unsigned long long)arg1 forSection:(unsigned long long)arg2;
- (id)predicateForType:(id)arg1;
- (id)profile;
- (id)profileName;
- (id)queryDateForSelectedDate:(id)arg1;
- (void)refineSamplesWithCompletion:(id /* block */)arg1;
- (void)removeObjectAtIndex:(unsigned long long)arg1 forSection:(unsigned long long)arg2 sectionRemoved:(bool*)arg3;
- (id)sampleTypes;
- (id)samples;
- (id)secondaryTextForObject:(id)arg1;
- (void)setDefaultQueryPredicate:(id)arg1;
- (void)setHasDetailViewController:(bool)arg1;
- (void)setProfileName:(id)arg1;
- (bool)shareDocumentUsingSample:(id)arg1;
- (void)startCollectingDataWithUpdateHandler:(id /* block */)arg1;
- (void)stopCollectingData;
- (bool)textAdjustsFontSizeToFitWidth;
- (id)textForObject:(id)arg1;
- (id)titleForSection:(unsigned long long)arg1;
- (id)unitController;
- (void)updateController:(id)arg1 didReceiveHighFrequencyUpdateForType:(id)arg2;
- (void)updateController:(id)arg1 didReceiveUpdateForType:(id)arg2 samplesAdded:(id)arg3 objectsRemoved:(id)arg4 recoveringFromError:(bool)arg5;
- (id)viewControllerForItemAtIndexPath:(id)arg1;
- (id)viewControllerForSampleType:(id)arg1 subSamplePredicate:(id)arg2 title:(id)arg3;
- (void)viewControllerIsNearEndOfScreen;
- (void)viewControllerWantsDataIncludingDate:(id)arg1;

@end