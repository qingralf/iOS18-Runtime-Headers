/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSOfflineSearchSuggestionsFetcher : NSObject {
    WBSCompletionQuery * _currentQuery;
    <WBSOfflineSearchSuggestionsFetcherDelegate> * _delegate;
    unsigned long long  _offlineSuggestionsStatus;
}

@property (nonatomic, retain) WBSCompletionQuery *currentQuery;
@property (nonatomic) <WBSOfflineSearchSuggestionsFetcherDelegate> *delegate;
@property (getter=areOfflineSearchSuggestionsAvailable, nonatomic, readonly) bool offlineSuggestionsAvailable;

- (void).cxx_destruct;
- (void)_checkForRemoteDisablement:(id /* block */)arg1;
- (void)_logOfflineSuggestionStatus;
- (id)_searchHelperProxy;
- (bool)areOfflineSearchSuggestionsAvailable;
- (id)currentQuery;
- (void)dealloc;
- (id)delegate;
- (id)initWithMaximumSuggestionsToFetch:(unsigned long long)arg1;
- (void)setCurrentQuery:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)updateAvailability;

@end