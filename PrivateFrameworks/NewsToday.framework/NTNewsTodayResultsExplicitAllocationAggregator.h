/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

@interface NTNewsTodayResultsExplicitAllocationAggregator : NSObject <NTTodayResultsAggregator> {
    <FCCoreConfigurationManager> * _configurationManager;
    <FCFeedPersonalizing><FCPersonalizationFunctionProviding> * _feedPersonalizer;
    NSDate * _filterDate;
    NSObject<FCTodayPrivateData> * _todayData;
}

@property (nonatomic, retain) <FCCoreConfigurationManager> *configurationManager;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <FCFeedPersonalizing><FCPersonalizationFunctionProviding> *feedPersonalizer;
@property (nonatomic, copy) NSDate *filterDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSObject<FCTodayPrivateData> *todayData;

- (void).cxx_destruct;
- (id)_itemsForSection:(id)arg1 items:(id)arg2 withBudgetInfo:(id)arg3 previouslyChosenItems:(id)arg4 priorClusterIDsInOtherSections:(id)arg5 sectionItemsLimit:(unsigned long long)arg6 otherArticleIDs:(id)arg7 remainingSlots:(double)arg8 slotsUsed:(double*)arg9 noMoreItemsToGive:(bool*)arg10 noRoomForMoreItems:(bool*)arg11;
- (id)_sectionFilterTransformationWithDescriptor:(id)arg1 priorClusterIDsInOtherSections:(id)arg2 priorClusterIDsInSection:(id)arg3 otherArticleIDs:(id)arg4;
- (id)aggregateSections:(id)arg1 itemsBySectionDescriptor:(id)arg2 budgetInfo:(id)arg3;
- (id)configurationManager;
- (id)feedPersonalizer;
- (id)filterDate;
- (id)init;
- (id)initWithConfigurationManager:(id)arg1 feedPersonalizer:(id)arg2 filterDate:(id)arg3 todayData:(id)arg4;
- (void)setConfigurationManager:(id)arg1;
- (void)setFeedPersonalizer:(id)arg1;
- (void)setFilterDate:(id)arg1;
- (void)setTodayData:(id)arg1;
- (id)todayData;

@end