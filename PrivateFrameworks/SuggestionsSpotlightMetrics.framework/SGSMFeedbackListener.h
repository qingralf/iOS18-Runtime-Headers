/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SuggestionsSpotlightMetrics.framework/SuggestionsSpotlightMetrics
 */

@interface SGSMFeedbackListener : NSObject <SFFeedbackListener> {
    NSCache * _eventLastInteractionTime;
    SGSMMutableSearchState * _previousState;
    SGSMMutableSearchState * _searchState;
    <SGSuggestionsServiceEventsProtocol> * _suggestionsService;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_eventIdentifierFromSearchResult:(id)arg1;
- (void)_resetState;
- (void)_restoreStateIfUnset;
- (void)_saveAndUnsetState;
- (void)didEngageCardSection:(id)arg1;
- (void)didEngageResult:(id)arg1;
- (void)didEngageSuggestion:(id)arg1;
- (void)didRankSections:(id)arg1;
- (id)init;
- (void)resultsDidBecomeVisible:(id)arg1;
- (void)searchViewDidDisappear:(id)arg1;

@end
