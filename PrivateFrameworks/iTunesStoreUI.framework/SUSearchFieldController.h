/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUSearchFieldController : NSObject <ISStoreURLOperationDelegate, SUScriptTextFieldDelegate, UISearchDisplayDelegate, UITableViewDataSource, UITableViewDelegate> {
    SUClientInterface * _clientInterface;
    NSArray * _completions;
    ISStoreURLOperation * _completionsOperation;
    SUSearchFieldConfiguration * _configuration;
    UIControl * _dimmerView;
    bool  _hasLoadedSearchResultsTableView;
    UISearchBar * _searchBar;
    SUSearchDisplayController * _searchController;
    long long  _searchFieldStyle;
    SUScriptTextFieldDelegate * _textFieldDelegate;
}

@property (getter=isActive, nonatomic, readonly) bool active;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSamplingPercentage; /* unknown property attribute: ? */
@property (nonatomic, readonly) NSNumber *metricsLoadURLSamplingPercentageCachedResponses; /* unknown property attribute: ? */
@property (nonatomic, readonly) NSNumber *metricsLoadURLSessionDuration; /* unknown property attribute: ? */
@property (nonatomic, readonly) UISearchBar *searchBar;
@property (nonatomic, copy) SUSearchFieldConfiguration *searchFieldConfiguration;
@property (nonatomic) long long searchFieldStyle;
@property (readonly) Class superclass;

- (id)_cancelButtonView;
- (void)_cancelCompletionsOperation;
- (id)_defaultSearchTerm;
- (void)_dimmerViewAction:(id)arg1;
- (void)_fetchCompletions;
- (void)_fetchResultsForTerm:(id)arg1 URL:(id)arg2;
- (void)_fetchResultsForURLRequestProperties:(id)arg1;
- (bool)_focusTransientViewController;
- (id)_newBlankStorePageViewController;
- (id)_newSearchBar;
- (id)_newSearchDisplayControllerWithContentsController:(id)arg1;
- (id)_newTransientViewController;
- (void)_reloadCompletionsForSearchString:(id)arg1;
- (void)_reloadSearchBar;
- (void)_resizeSearchBarForOrientation:(long long)arg1;
- (void)_saveSearchTermToDefaults:(id)arg1;
- (void)_savedSearchTermChangedNotification:(id)arg1;
- (id)_searchGroupForSearchKind:(id)arg1;
- (void)_sendOnXEventWithTerm:(id)arg1 URL:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)_showDimmerView;
- (id)_targetViewController;
- (void)_tearDownDimmerView;
- (void)dealloc;
- (void)handleSearchURL:(id)arg1 withSourceApplication:(id)arg2 sourceURL:(id)arg3;
- (id)init;
- (id)initWithContentsController:(id)arg1;
- (id)initWithContentsController:(id)arg1 clientInterface:(id)arg2;
- (id)initWithContentsController:(id)arg1 clientInterface:(id)arg2 style:(long long)arg3;
- (id)initWithContentsController:(id)arg1 style:(long long)arg2;
- (bool)isActive;
- (id)newRequestPropertiesWithSearchTerm:(id)arg1;
- (id)newRequestPropertiesWithSearchTerm:(id)arg1 kind:(id)arg2;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)operationDidFinish:(id)arg1;
- (void)scriptDidChangeTextForField:(id)arg1;
- (id)searchBar;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (bool)searchBarShouldBeginEditing:(id)arg1;
- (bool)searchBarShouldEndEditing:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchBarWillRemoveFromSuperview:(id)arg1;
- (void)searchDisplayController:(id)arg1 didLoadSearchResultsTableView:(id)arg2;
- (bool)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (void)searchDisplayController:(id)arg1 willUnloadSearchResultsTableView:(id)arg2;
- (id)searchFieldConfiguration;
- (long long)searchFieldStyle;
- (void)setSearchFieldConfiguration:(id)arg1;
- (void)setSearchFieldStyle:(long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1;

@end
