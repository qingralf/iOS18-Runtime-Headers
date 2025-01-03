/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXHomeScreenLayoutSelector2 : NSObject <ATXLayoutSelectorProtocol> {
    CHSProactiveService * _chronoService;
    NSUserDefaults * _defaults;
    ATXWidgetDescriptorCache * _descriptorCache;
    NSSet * _dismissedSuggestionsForAppPredictionPanels;
    NSSet * _dismissedSuggestionsForSuggestionsWidget;
    ATXEngagementRecordManager * _engagementRecordManager;
    bool  _hasAskedChronoAboutReloadBudget;
    NSArray * _homeScreenPageConfigs;
    ATXBlendingLayerHyperParameters * _hyperParameters;
    bool  _isiPad;
    ATXSuggestionModeFilter * _modeFilter;
    unsigned long long  _numSuggestedWidgetInPastDay;
    unsigned long long  _numWidgetReloadForSuggestionInPastDay;
    bool  _shouldLimitWidgetSuggestionPowerCost;
    ATXStackStateTracker * _stackStateTracker;
    ATXInformationStore * _store;
    <ATXSuggestionDeduplicatorProtocol> * _suggestionDeduplicator;
    long long  _thresholdConfidenceForSuggestedSG;
    _ATXHomeScreenTimelineRelevanceFilter * _timelineRelevanceFilter;
    ATXWidgetSuggestionDismissManager * _widgetDismissManager;
    ATXWidgetSuggestionsDenyList * _widgetSuggestionDenyList;
    NSDictionary * _widgetSuggestionReloadBudgetByStackId;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property bool hasAskedChronoAboutReloadBudget;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (retain) NSDictionary *widgetSuggestionReloadBudgetByStackId;

- (void).cxx_destruct;
- (id)_appPredictionPanelPreviewFromRankedSuggestions:(id)arg1;
- (void)_assignExistingSuggestedSGWidgetsOnPages:(id)arg1 withSuggestions:(id)arg2 suggestionToRankingIndex:(id)arg3;
- (void)_assignNewSuggestedWidgetsForPages:(id)arg1 rankedSuggestions:(id)arg2 suggestionToRankingIndex:(id)arg3 homeScreenState:(id)arg4;
- (void)_assignPinnedAPPWidgetForPage:(id)arg1 suggestions:(id)arg2 homeScreenState:(id)arg3;
- (void)_assignPinnedSuggestionsWidgetForPage:(id)arg1 suggestions:(id)arg2 homeScreenState:(id)arg3;
- (void)_assignSuggestion:(id)arg1 toTopOfStack:(id)arg2;
- (void)_assignSuggestionsForExistingSuggestedWidgets:(id)arg1 homeScreenState:(id)arg2;
- (void)_assignUnfilledSGWidgetForPage:(id)arg1 suggestions:(id)arg2 homeScreenState:(id)arg3;
- (void)_assignWidgetForTopOfStack:(id)arg1 suggestions:(id)arg2 homeScreenState:(id)arg3;
- (double)_computeScoreForLayout:(id)arg1;
- (id)_fallbackSuggestions:(id)arg1 homeScreenState:(id)arg2;
- (void)_fillSuggestedSGWidgetIfLayoutNotComplete:(id)arg1 withSuggestions:(id)arg2 updatingUsedSuggestionIndexSet:(id)arg3;
- (id)_filterRankedSuggestions:(id)arg1 homeScreenState:(id)arg2;
- (bool)_hasEligiblePinnedWidgetStacksForAPPWidget:(id)arg1 forCandidateStack:(id)arg2;
- (bool)_hasEligiblePinnedWidgetStacksForSuggestionsWidget:(id)arg1 forCandidateStack:(id)arg2;
- (bool)_hasEligibleWidgetSuggestionsStacksForSuggestion:(id)arg1 onPages:(id)arg2 ignoreDuplicatesInSGWidget:(bool)arg3 ignoreDuplicatesInPanels:(bool)arg4;
- (id)_homeScreenCachedSuggestionsFromHomeScreenState:(id)arg1 sortedFallbackSuggestions:(id)arg2 suggestionsWidgetPreviews:(id)arg3 appPredictionPanelPreview:(id)arg4 withUUID:(id)arg5;
- (bool)_isBackgroundAppRefreshAllowedForAppBundleId:(id)arg1;
- (bool)_isStack:(id)arg1 eligibleToShowSuggestionViaWidgetSuggestion:(id)arg2;
- (bool)_isStackEligibleForSmartRotate:(id)arg1 stack:(id)arg2;
- (bool)_isStackStale:(id)arg1;
- (bool)_isSuggestionACandidate:(id)arg1 forStack:(id)arg2 dedupeAppSuggestionsByWidgets:(bool)arg3 ignoreDuplicatesInSGWidget:(bool)arg4 ignoreDuplicatesInPanels:(bool)arg5 homeScreenState:(id)arg6;
- (bool)_isSuggestionStillNeededForTopOfStack:(id)arg1;
- (id)_loadHomeScreenState:(id)arg1;
- (void)_logStackDetail:(id)arg1;
- (void)_performSuggestionAllocationWithRankedSuggestions:(id)arg1 homeScreenState:(id)arg2;
- (void)_preservePreviousAppSuggestionPositionsWithHomeScreenState:(id)arg1;
- (id)_processedSuggestionLayoutFromWidgetSuggestion:(id)arg1 stack:(id)arg2 blendingUpdateUUID:(id)arg3;
- (void)_removeSuggestedWidgetWhereNecessaryWithHomeScreenState:(id)arg1;
- (void)_rotateAwayFromPreviousSystemInitiatedRotationIfNecessary:(id)arg1 homeScreenState:(id)arg2;
- (void)_rotateStackToUpdatedSGSuggestionIfNecessary:(id)arg1 suggestionToRankingIndex:(id)arg2;
- (id)_shortcutConversionOriginalActionSuggestionIndices:(id)arg1;
- (bool)_shouldConsiderSuggestionForAppPredictionPanel:(id)arg1;
- (bool)_shouldConsiderSuggestionForSuggestionsWidget:(id)arg1;
- (bool)_shouldLimitWidgetSuggestionPowerCost;
- (id)_sortedPagesByMostRecentUserVisit:(id)arg1;
- (bool)_stackHasRemainingReloadBudgetForWidgetSuggestion:(id)arg1 homeScreenState:(id)arg2;
- (id)_suggestionsEligibleForSuggestedSGWidgetOnPages:(id)arg1 amongSuggestions:(id)arg2;
- (id)_suggestionsWidgetPreviewsFromRankedSuggestions:(id)arg1;
- (id)_suggestionsWidgetSuggestionsByPriorityOnPage:(id)arg1;
- (long long)_thresholdConfidenceForSuggestedSG;
- (void)_updateSuggestionsWidgetLayoutIfNecessaryWithRankedShortcutSuggestions:(id)arg1 suggestionToRankingIndex:(id)arg2 homeScreenState:(id)arg3;
- (double)_weightForConfidenceCategory:(long long)arg1;
- (bool)hasAskedChronoAboutReloadBudget;
- (id)init;
- (id)initWithBlendingLayerHyperParameters:(id)arg1;
- (id)initWithHomeScreenPageConfigurations:(id)arg1 blendingLayerHyperParameters:(id)arg2 suggestionDeduplicator:(id)arg3 engagementRecordManager:(id)arg4 widgetDismissManager:(id)arg5 stackStateTracker:(id)arg6 store:(id)arg7 defaults:(id)arg8 modeFilter:(id)arg9 chronoService:(id)arg10 isiPad:(bool)arg11;
- (id)selectedLayoutForConsumerSubType:(unsigned char)arg1 rankedSuggestions:(id)arg2;
- (void)setHasAskedChronoAboutReloadBudget:(bool)arg1;
- (void)setWidgetSuggestionReloadBudgetByStackId:(id)arg1;
- (id)widgetSuggestionReloadBudgetByStackId;

@end
