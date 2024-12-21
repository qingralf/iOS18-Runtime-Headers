/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileSafariUI.framework/MobileSafariUI
 */

@interface CompletionList : NSObject <CompletionGroupTitleProviding, CompletionProviderDelegate, FindOnPageCompletionProviderDataSource, SearchUICommandDelegate, SearchUIFeedbackDelegate, TabCompletionProviderDataSource> {
    URLCompletionProvider * _URLCompletionProvider;
    BrowserController * _browserController;
    CalculationResultCompletionProvider * _calculationResultProvider;
    CompletionGroupListing * _cfListingOnDisplay;
    SearchQueryRestorationCompletionItem * _cfQueryRestorationCompletionItem;
    CompletionGroupListing * _currentCFListing;
    CompletionGroupListing * _currentListing;
    <CompletionListDelegate> * _delegate;
    bool  _executingVoiceSearch;
    NSCache * _faviconCache;
    CompletionGroup * _findOnPageGroup;
    FindOnPageCompletionProvider * _findOnPageProvider;
    CompletionProvider * _firstRemoteCompletionProviderToRespondToQuery;
    bool  _haveReceivedNetworkedSuggestions;
    NSObject<OS_dispatch_queue> * _ignoredSiriSuggestedSitesQueue;
    unsigned long long  _inputTypeOfStringToComplete;
    CompletionGroupListing * _listingOnDisplay;
    <LoadProgressObserver> * _loadProgressObserver;
    NSString * _matchingStringInTopHit;
    NSDate * _minRenderTimeoutStartTime;
    OfflineSearchSuggestionsCompletionProvider * _offlineSearchSuggestionsCompletionProvider;
    NSDate * _otherRenderTimeoutStartTime;
    UniversalSearchSession * _parsecSearchSession;
    NSTimer * _parsecTimeout;
    SFSearchResult * _pegasusSearchResult;
    PencilInputCompletionProvider * _pencilInputCompletionProvider;
    WBSCompletionQuery * _query;
    SearchQueryRestorationCompletionItem * _queryRestorationCompletionItem;
    QuickWebsiteSearchCompletionProvider * _quickWebsiteSearchProvider;
    NSMutableDictionary * _rankingFeedbackForHiddenOrDuplicateResults;
    WBSCompletionQuery * _rewrittenQuery;
    bool  _safariShouldHandleCardSectionEngagement;
    NSArray * _searchParametersList;
    NSDate * _searchRenderTimeoutStartTime;
    bool  _shouldIncludeNetworkedSearchSuggestions;
    NSSet * _siriSuggestedSitesURLStringsToIgnore;
    NSString * _stringMatchedByTopHit;
    SearchSuggestionProvider * _suggestionProvider;
    WBSBrowserTabCompletionMatch * _switchToTabMatch;
    TabCompletionProvider * _tabCompletionProvider;
    <CompletionItem> * _topHit;
    NSString * _treatmentId;
    bool  _tryParsecRewritesIfNoTopHit;
    UniversalSearchCompletionProvider * _universalSearchProvider;
    NSMutableDictionary * _urlStringToFaviconRequestTokens;
    bool  _usingPencilInput;
}

@property (nonatomic, retain) URLCompletionProvider *URLCompletionProvider;
@property (nonatomic, readonly) BrowserController *browserController;
@property (nonatomic, retain) CalculationResultCompletionProvider *calculationResultProvider;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <CompletionListDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isExecutingVoiceSearch, nonatomic) bool executingVoiceSearch;
@property (nonatomic, readonly) NSCache *faviconCache;
@property (nonatomic, retain) FindOnPageCompletionProvider *findOnPageProvider;
@property (nonatomic, retain) CompletionProvider *firstRemoteCompletionProviderToRespondToQuery;
@property (nonatomic, readonly) bool hasCompletions;
@property (nonatomic, readonly) bool hasParsecResults;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSIndexPath *indexPathOfAsTypedSearchSuggestion;
@property (nonatomic) <LoadProgressObserver> *loadProgressObserver;
@property (nonatomic, retain) NSDate *minRenderTimeoutStartTime;
@property (nonatomic, retain) OfflineSearchSuggestionsCompletionProvider *offlineSearchSuggestionsCompletionProvider;
@property (nonatomic, retain) NSDate *otherRenderTimeoutStartTime;
@property (nonatomic, retain) UniversalSearchSession *parsecSearchSession;
@property (nonatomic, retain) PencilInputCompletionProvider *pencilInputCompletionProvider;
@property (nonatomic, retain) WBSCompletionQuery *query;
@property (nonatomic, retain) QuickWebsiteSearchCompletionProvider *quickWebsiteSearchProvider;
@property (nonatomic, retain) WBSCompletionQuery *rewrittenQuery;
@property (nonatomic, retain) NSArray *searchParametersList;
@property (nonatomic, retain) NSDate *searchRenderTimeoutStartTime;
@property (nonatomic) bool shouldIncludeNetworkedSearchSuggestions;
@property (nonatomic, retain) SearchSuggestionProvider *suggestionProvider;
@property (readonly) Class superclass;
@property (nonatomic, retain) TabCompletionProvider *tabCompletionProvider;
@property (nonatomic, readonly, copy) NSString *titleForSearchSuggestionsCompletion;
@property (nonatomic, retain) UniversalSearchCompletionProvider *universalSearchProvider;
@property (getter=isUsingPencilInput, nonatomic) bool usingPencilInput;

+ (id)_completionsByMergingRecentSearches:(id)arg1 withSuggestions:(id)arg2 andLiteralSearch:(id)arg3 queryID:(long long)arg4 topHits:(id)arg5 forPrivateBrowsing:(bool)arg6;
+ (id)completionBookmarkProvider;

- (void).cxx_destruct;
- (id)URLCompletionProvider;
- (void)_addResult:(id)arg1 intoGroup:(id)arg2 unlessHiddenBy:(id)arg3 topHit:(id)arg4;
- (void)_addResults:(id)arg1 intoGroups:(id)arg2;
- (void)_addSearchProviderSuggestions:(id)arg1 toListing:(id)arg2;
- (void)_addSwitchToTabSectionIfNecessary:(id)arg1 intoGroups:(id)arg2;
- (void)_addSwitchToTabSectionWithTabCompletionMatch:(id)arg1 intoGroups:(id)arg2;
- (id)_addTopHits:(id)arg1 intoGroups:(id)arg2;
- (id)_addTopHitsWithSwitchToTabSectionIfNecessary:(id)arg1 intoGroups:(id)arg2;
- (void)_addURLCompletions:(id)arg1 toListing:(id)arg2 isCFSearch:(bool)arg3;
- (void)_addUniversalSearchCompletions:(id)arg1 toCompletionListing:(id)arg2;
- (id)_bestTabCompletionItemWithTopHits:(id)arg1;
- (void)_cacheResultsIfApplicable:(id)arg1;
- (bool)_canUseOfflineSearchSuggestions;
- (id)_completionsRequiringFavicon;
- (bool)_defaultSearchEngineIsGoogle;
- (void)_deleteTopHitCompletionItem:(id)arg1 atIndexPath:(id)arg2;
- (id)_filteredURLCompletions:(id)arg1 withTopHits:(id)arg2 displayedUniversalSearchCompletions:(id)arg3;
- (id)_groupByAddingCompletions:(id)arg1 toGroup:(id)arg2;
- (id)_groupOrNilAtIndex:(unsigned long long)arg1;
- (id)_groupWithTitle:(id)arg1 completions:(id)arg2;
- (id)_groupWithTitle:(id)arg1 completions:(id)arg2 maximumCompletions:(unsigned long long)arg3;
- (id)_indexPathForEquivalentCompletionItem:(id)arg1;
- (bool)_isPegasusMapsCompositeResult:(id)arg1;
- (bool)_isStreamlinedCompletionListEnabled;
- (id)_listingForQuery:(id)arg1;
- (void)_postFeedback:(id)arg1;
- (id)_recentSearchesForQuery:(id)arg1;
- (void)_removeIgnoredSiriSuggestedSiteRecordsForHistoryItem:(id)arg1;
- (void)_removeSearchURLsFromCompletions:(id)arg1;
- (void)_removeTopHitsGroup:(id)arg1;
- (void)_requestFavicons;
- (void)_searchForURLTopHits:(id)arg1 intoTopHits:(id)arg2;
- (bool)_searchRenderTimeoutHasElapsed;
- (bool)_shouldFetchSearchSuggestions;
- (bool)_shouldSearchUIHandleEngagementForURL:(id)arg1;
- (id)_titleForFindOnPageHeaderWithMatchCount:(unsigned long long)arg1;
- (id)_titleForTopHits:(unsigned long long)arg1;
- (bool)_topHitMatchesString:(id)arg1;
- (void)_updateCompletionListing;
- (void)_updateIconsForSearchUIRowsInGroups:(id)arg1 topHit:(id)arg2;
- (void)_updateOfflineSearchSuggestionAvailability;
- (void)_updateProviders;
- (void)_updateQueryIDForGroups;
- (id)_urlFromCommand:(id)arg1;
- (bool)_urlString:(id)arg1 isProbablyContainedIn:(id)arg2;
- (id)browserController;
- (void)cacheCurrentCompletionsAfterAcceptanceOfCompletionItem:(id)arg1;
- (id)calculationResultProvider;
- (bool)canPerformCommand:(id)arg1;
- (void)cardViewDidAppear:(id)arg1;
- (void)clearCachedSearchQuery;
- (void)clearCachedSearches;
- (void)clearCachedTabCompletionData;
- (void)clearCompletionListings;
- (id)commandDelegate;
- (void)completionProvider:(id)arg1 didFinishCompletingString:(id)arg2;
- (void)completionProviderDidFail:(id)arg1;
- (id)completionsForGroupAtIndex:(unsigned long long)arg1;
- (void)configureHeaderView:(id)arg1 forGroupAtIndex:(unsigned long long)arg2;
- (id)currentSearchEngineHostSuffixes;
- (id)currentWindowUUIDForTabCompletionProvider:(id)arg1;
- (void)dealloc;
- (id)defaultSectionTitleForGroupAtIndex:(unsigned long long)arg1;
- (id)delegate;
- (void)didEngageCardSection:(id)arg1;
- (void)didEngageResult:(id)arg1;
- (void)didPerformCommand:(id)arg1;
- (void)didReportUserResponseFeedback:(id)arg1;
- (void)didResumeSearchWithQuery:(id)arg1;
- (id)faviconCache;
- (id)findOnPageProvider;
- (id)firstRemoteCompletionProviderToRespondToQuery;
- (bool)hasCompletions;
- (bool)hasParsecResults;
- (id)headerViewForGroupAtIndex:(unsigned long long)arg1;
- (id)headerViewReuseIdentifierForGroupAtIndex:(unsigned long long)arg1;
- (id)indexPathOfAsTypedSearchSuggestion;
- (id)initWithParsecSearchSession:(id)arg1 browserController:(id)arg2;
- (bool)isExecutingVoiceSearch;
- (bool)isTopHitReadyForString:(id)arg1;
- (bool)isUsingPencilInput;
- (id)loadProgressObserver;
- (id)minRenderTimeoutStartTime;
- (unsigned long long)numberOfGroups;
- (id)offlineSearchSuggestionsCompletionProvider;
- (id)otherRenderTimeoutStartTime;
- (id)parsecSearchSession;
- (id)pencilInputCompletionProvider;
- (void)performCommand:(id)arg1;
- (id)query;
- (id)quickWebsiteSearchProvider;
- (void)recordIgnoredSiriSuggestedSitesWithURL:(id)arg1;
- (void)reportFeedback:(id)arg1 queryId:(long long)arg2;
- (void)restoreCachedCompletions;
- (void)resultsDidBecomeVisible:(id)arg1;
- (id)rewrittenQuery;
- (id)searchParametersList;
- (id)searchRenderTimeoutStartTime;
- (id)selectedTabDocumentForTabCompletionProvider:(id)arg1;
- (void)setCalculationResultProvider:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExecutingVoiceSearch:(bool)arg1;
- (void)setFindOnPageProvider:(id)arg1;
- (void)setFirstRemoteCompletionProviderToRespondToQuery:(id)arg1;
- (void)setLoadProgressObserver:(id)arg1;
- (void)setMinRenderTimeoutStartTime:(id)arg1;
- (void)setOfflineSearchSuggestionsCompletionProvider:(id)arg1;
- (void)setOtherRenderTimeoutStartTime:(id)arg1;
- (void)setParsecSearchSession:(id)arg1;
- (void)setPencilInputCompletionProvider:(id)arg1;
- (void)setQuery:(id)arg1;
- (void)setQuickWebsiteSearchProvider:(id)arg1;
- (void)setRewrittenQuery:(id)arg1;
- (void)setSearchParametersList:(id)arg1;
- (void)setSearchRenderTimeoutStartTime:(id)arg1;
- (void)setShouldIncludeNetworkedSearchSuggestions:(bool)arg1;
- (void)setSuggestionProvider:(id)arg1;
- (void)setTabCompletionProvider:(id)arg1;
- (void)setURLCompletionProvider:(id)arg1;
- (void)setUniversalSearchProvider:(id)arg1;
- (void)setUsingPencilInput:(bool)arg1;
- (bool)shouldHandleCardSectionEngagement:(id)arg1;
- (bool)shouldIncludeNetworkedSearchSuggestions;
- (bool)shouldOverrideBackgroundViewForItem:(id)arg1;
- (void)stopCompleting;
- (id)suggestionProvider;
- (id)swipeActionsForCompletionItemAtIndexPath:(id)arg1;
- (id)tabCompletionProvider;
- (id)tabDocumentForFindOnPageCompletionProvider:(id)arg1;
- (id)tabGroupsForTabCompletionProvider:(id)arg1;
- (id)titleForFindOnPageCompletion:(id)arg1;
- (id)titleForGroupAtIndex:(unsigned long long)arg1;
- (id)titleForSearchSuggestionsCompletion;
- (id)topHitForString:(id)arg1;
- (void)unifiedFieldDidBecomeFirstResponder;
- (id)universalSearchProvider;
- (void)updateRestorationCompletionItemForCompletionItem:(id)arg1 isCF:(bool)arg2;
- (void)willDismissViewController:(id)arg1;
- (id)windowHostingCompletionProvider:(id)arg1;
- (id)windowUUIDsToTabsForTabCompletionProvider:(id)arg1;

@end