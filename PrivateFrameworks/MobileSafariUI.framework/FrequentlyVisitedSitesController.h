/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileSafariUI.framework/MobileSafariUI
 */

@interface FrequentlyVisitedSitesController : WBSFrequentlyVisitedSitesController <WBSStartPageSuggestionsProvider> {
    WebBookmarkCollection * _bookmarkCollection;
    bool  _bookmarksNeedToSave;
    NSMutableArray * _cachedFrequentlyVisitedBookmarks;
    NSMapTable * _frequentlyVisitedBookmarksToMetadataTokens;
    WBTabCollection * _tabCollection;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *providerSectionIdentifier;
@property (nonatomic, readonly, copy) NSArray *suggestions;
@property (nonatomic) <WBSStartPageSuggestionsProviderDelegate> *suggestionsProviderDelegate;
@property (readonly) Class superclass;

+ (id)sharedController;

- (void).cxx_destruct;
- (void)_associateHistoryToFrequentlyVisitedSites;
- (id)_canonicalizedFavoritesURLStringSet;
- (void)_clearFrequentlyVisitedSitesInBookmarksDB;
- (id)_createEmptyMetadataWithBookmark:(id)arg1;
- (void)_deleteFrequentlyVisistedSiteInCurrentPofile:(id)arg1;
- (id)_frequentlyVisitedBookmarksToCachedLinkMetadata;
- (void)_frequentlyVisitedSitesDidLoadHistory;
- (id)_frequentlyVisitedSitesURLStringSet;
- (void)_historyWasLoaded:(id)arg1;
- (void)_postFrequentlyVisitedSitesDidChangeNotification;
- (void)_saveFrequentlyVisitedSites:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_updateCachedFrequentlyVisitesSitesIfNecessary;
- (void)_updateFrequentlyVisitedBookmarksToCachedLinkMetadata;
- (void)banFrequentlyVisitedSite:(id)arg1 inMemoryBookmarkChangeTrackingAvailable:(bool)arg2;
- (bool)bookmarkIsFrequentlyVistedSite:(id)arg1;
- (void)clearFrequentlyVisitedSites;
- (void)dealloc;
- (unsigned long long)displayIndexOfFrequentlyVisitedSite:(id)arg1;
- (void)fetchMetadataForSuggestion:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)frequentlyVisitedSites;
- (id)initWithBookmarkCollection:(id)arg1 history:(id)arg2 bannedURLStore:(id)arg3 tabCollection:(id)arg4 profileIdentifier:(id)arg5;
- (void)promoteFrequentlyVisitedSite:(id)arg1 toFavoriteAtIndex:(unsigned long long)arg2;
- (id)providerSectionIdentifier;
- (void)saveFrequentlyVisitedSitesToBookmarksDBWithCompletion:(id /* block */)arg1;
- (void)setSuggestionsProviderDelegate:(id)arg1;
- (id)suggestions;
- (id)suggestionsProviderDelegate;

@end
