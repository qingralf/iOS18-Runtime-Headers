/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@interface SDFeedbackInterceptor : NSObject <SFFeedbackListener> {
    NSDictionary * _cepData;
    bool  _collectAnonymousData;
    NSString * _currentClientId;
    NSString * _currentQuery;
    unsigned long long  _currentQueryId;
    bool  _engagedTTR;
    bool  _internalDebug;
    bool  _isInternalDevice;
    NSString * _keyboardPrimaryLanguage;
    SPPersonalMetricManager * _personalMetricManager;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableOrderedSet * _sectionOrder;
    NSMutableDictionary * _sentSections;
    bool  _stressTestCounts;
    NSArray * _suggestionsData;
    NSArray * _suggestionsIdentifiers;
    bool  _testRenderEngagementCounts;
    PRSRankingItemRanker * _usedRanker;
}

@property (nonatomic, retain) NSDictionary *cepData;
@property bool collectAnonymousData;
@property (retain) NSString *currentClientId;
@property (retain) NSString *currentQuery;
@property unsigned long long currentQueryId;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) bool engagedTTR;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool internalDebug;
@property (nonatomic) bool isInternalDevice;
@property (nonatomic, retain) NSString *keyboardPrimaryLanguage;
@property (nonatomic, retain) SPPersonalMetricManager *personalMetricManager;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSMutableOrderedSet *sectionOrder;
@property (retain) NSMutableDictionary *sentSections;
@property (nonatomic) bool stressTestCounts;
@property (nonatomic, retain) NSArray *suggestionsData;
@property (nonatomic, retain) NSArray *suggestionsIdentifiers;
@property (readonly) Class superclass;
@property (nonatomic) bool testRenderEngagementCounts;
@property (nonatomic, retain) PRSRankingItemRanker *usedRanker;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_itemsFromSentSections;
- (id)_itemsFromSentSectionsWithProtectionClasses:(id)arg1 filterWithResults:(id)arg2;
- (void)annotateRankingFeedback:(id)arg1 completion:(id /* block */)arg2;
- (id)cepData;
- (void)cleanup;
- (bool)collectAnonymousData;
- (id)currentClientId;
- (id)currentQuery;
- (unsigned long long)currentQueryId;
- (void)didClearInput:(id)arg1;
- (void)didEngageResult:(id)arg1;
- (void)didEngageSection:(id)arg1;
- (void)didPerformCommand:(id)arg1;
- (void)didRankSections:(id)arg1;
- (void)dumpTTRDebugFiles;
- (bool)engagedTTR;
- (id)init;
- (bool)internalDebug;
- (bool)isInternalDevice;
- (id)keyboardPrimaryLanguage;
- (id)personalMetricManager;
- (id)queue;
- (void)resultsDidBecomeVisible:(id)arg1;
- (void)searchViewDidAppear:(id)arg1;
- (void)searchViewDidDisappear:(id)arg1;
- (id)sectionOrder;
- (id)sentSections;
- (void)setCepData:(id)arg1;
- (void)setCollectAnonymousData:(bool)arg1;
- (void)setCurrentClientId:(id)arg1;
- (void)setCurrentQuery:(id)arg1;
- (void)setCurrentQueryId:(unsigned long long)arg1;
- (void)setEngagedTTR:(bool)arg1;
- (void)setInternalDebug:(bool)arg1;
- (void)setIsInternalDevice:(bool)arg1;
- (void)setKeyboardPrimaryLanguage:(id)arg1;
- (void)setPersonalMetricManager:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setSectionOrder:(id)arg1;
- (void)setSentSections:(id)arg1;
- (void)setStressTestCounts:(bool)arg1;
- (void)setSuggestionsData:(id)arg1;
- (void)setSuggestionsIdentifiers:(id)arg1;
- (void)setTestRenderEngagementCounts:(bool)arg1;
- (void)setUsedRanker:(id)arg1;
- (bool)stressTestCounts;
- (id)suggestionsData;
- (id)suggestionsIdentifiers;
- (bool)testRenderEngagementCounts;
- (id)usedRanker;
- (void)willSendSections:(id)arg1 forQuery:(id)arg2 queryIdentifier:(unsigned long long)arg3 allowAnonymousDataCollection:(bool)arg4 withRankerUsed:(id)arg5 withRankingConfiguration:(id)arg6 internalDebug:(bool)arg7 keyboardPrimaryLanguage:(id)arg8 clientID:(id)arg9;

@end
