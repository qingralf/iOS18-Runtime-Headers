/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileSafariUI.framework/MobileSafariUI
 */

@interface CompletionListVendorForHistoryService : WBSCompletionListVendorForHistoryService <CompletionListDelegate, WBSHistoryCompletionListVendorProtocol> {
    CompletionList * _completionList;
    id /* block */  _completionListItemsCallback;
    NSTimer * _completionListUpdatesDidSettleTimer;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_browserController;
- (void)_completionListDidUpdateForQuery:(id)arg1 completionList:(id)arg2;
- (void)_setExportedInterfaceAndObjectForConnection:(id)arg1;
- (bool)_shouldUseNetworkedSearchSuggestions;
- (double)_timeIntervalForUpdatesToSettle;
- (void)completionList:(id)arg1 didFetchFavicon:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)completionList:(id)arg1 didRemoveItem:(id)arg2 wasLastInSection:(bool)arg3 atIndexPath:(id)arg4 withCompletionHandler:(id /* block */)arg5;
- (void)completionList:(id)arg1 topHitDidBecomeReadyForString:(id)arg2;
- (void)completionList:(id)arg1 willGoToURL:(id)arg2 fromPegasusSearchResult:(id)arg3 forImageAttribution:(bool)arg4;
- (void)completionListDidDismissSearchUIViewController:(id)arg1;
- (void)completionListDidRestoreCachedCompletions:(id)arg1;
- (void)completionListDidUpdate:(id)arg1 forQuery:(id)arg2;
- (bool)completionListHasScheduledDismissal:(id)arg1;
- (void)getCompletionListItemsForQuery:(id)arg1 completionHandler:(id /* block */)arg2;

@end
