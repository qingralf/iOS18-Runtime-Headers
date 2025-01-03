/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileSafariUI.framework/MobileSafariUI
 */

@interface StartPageController : NSObject <SFStartPageCustomizationDataSource, SFStartPageDataSource, WBSCloudTabDeviceObserving, WBTabGroupManagerObserver, _SFWebBookmarkActionHandler> {
    NSArray * _availableDevices;
    WebBookmarkCollection * _bookmarkCollection;
    WBSStartPageSection * _cachedCloudTabsSection;
    WebBookmarkList * _cachedFavoritesList;
    WBSStartPageSection * _cachedFavoritesSection;
    NSItemProvider * _cachedGeneratedBackgroundItemProvider;
    NSItemProvider * _cachedItemProvider;
    long long  _cachedNumberOfTrackers;
    NSMutableArray * _cachedSections;
    WBSStartPageSection * _cachedTabGroupHeadingSection;
    bool  _cloudTabsConsentObtained;
    NSTimer * _coalescedRecentCloudTabsSectionUpdateTimer;
    WebBookmark * _customFavoritesFolderBookmark;
    <StartPageDataSource> * _dataSource;
    int  _favoritesFolderIDForDefaultProfile;
    WebBookmarkList * _favoritesList;
    FrequentlyVisitedSitesController * _frequentlyVisitedSitesController;
    bool  _isDroppingFavorites;
    NSString * _lastSeenProfileCustomFavoritesServerID;
    NSString * _libraryType;
    WBSPrivacyReportData * _privacyReportData;
    long long  _privateBrowsingExplanationState;
    bool  _privateBrowsingWasEnabled;
    WebBookmarkList * _readingList;
    NSMutableDictionary * _readingListBookmarksToMetadataStates;
    ReadingListLeadImageCache * _readingListLeadImageCache;
    WBSRecentCloudTabsProvider * _recentCloudTabsProvider;
    NSArray * _recentItems;
    NSMutableDictionary * _recentItemsByDeviceUUID;
    WBSRecentsStore * _recentsStore;
    NSRelativeDateTimeFormatter * _relativeDateFormatter;
    NSString * _searchPattern;
    <WBSUserDefaultObservation> * _selectedCloudDeviceObservation;
    bool  _showingAsPopover;
    NSArray * _siriSuggestions;
    ForYouRecommendationMediator * _siriSuggestionsMediator;
    NSMutableArray * _siriSuggestionsMetadataTokens;
    WBSStartPageSectionManager * _startPageSectionManager;
    <WBSUserDefaultObservation> * _tabGroupFavoritesObservation;
    WebBookmarkList * _tabGroupScopedFavoritesList;
    long long  _updatePolicy;
    SFStartPageViewController * _viewController;
    <SFStartPageVisualStyleProviding> * _visualStyleProvider;
}

@property (nonatomic, readonly, copy) NSArray *cloudTabsSections;
@property (nonatomic) <StartPageDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) FrequentlyVisitedSitesController *frequentlyVisitedSitesController;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *libraryType;
@property (getter=isShowingAsPopover, nonatomic) bool showingAsPopover;
@property (readonly) Class superclass;
@property (getter=isTabGroupFavoritesSectionEnabled, nonatomic) bool tabGroupFavoritesSectionEnabled;
@property (nonatomic, retain) SFStartPageViewController *viewController;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_appendSectionModelsForIdentifier:(id)arg1 toArray:(id)arg2;
- (id)_banActionForSiriSuggestion:(id)arg1;
- (void)_bookmarkFolderDidChange:(id)arg1;
- (id)_bookmarkSectionForBookmark:(id)arg1 orList:(id)arg2 forFavoritesSection:(bool)arg3 forScopedFavoritesSection:(bool)arg4 sectionTitle:(id)arg5;
- (void)_bookmarksDidReload:(id)arg1;
- (bool)_canShowPrivateRelaySection;
- (id)_cloudTabDeviceForIdentifier:(id)arg1;
- (id)_cloudTabDevices;
- (id)_cloudTabItemForIdentifier:(id)arg1;
- (id)_cloudTabStore;
- (id)_cloudTabsConsentMessage;
- (id)_cloudTabsConsentSection;
- (void)_cloudTabsConsentSelected;
- (void)_cloudTabsConsentStateDidChange:(id)arg1;
- (id /* block */)_cloudTabsContextMenuCommitHandler;
- (id /* block */)_cloudTabsContextMenuDismissHandler;
- (void)_cloudTabsDidChange;
- (void)_cloudTabsDidChange:(id)arg1;
- (id /* block */)_cloudTabsDragItemProvider;
- (id)_cloudTabsSectionWithDevice:(id)arg1;
- (void)_contentBlockerStatisticsStoreDidClose;
- (void)_contextMenuCommitHandlerForFrequentlyVisitedSite:(id)arg1 animator:(id)arg2 sectionIdentifier:(id)arg3;
- (id /* block */)_contextMenuConfigurationForCloudTabWithSelectedDevice:(id)arg1;
- (id)_contextMenuConfigurationForFrequentlyVisitedSite:(id)arg1 previewProvider:(id)arg2;
- (id /* block */)_contextMenuConfigurationForRecentCloudTab;
- (void)_copyBookmark:(id)arg1 toFolderWithID:(int)arg2;
- (id)_downvoteActionForSiriSuggestion:(id)arg1;
- (id)_effectiveProfile;
- (id)_effectiveProfileIdentifier;
- (id)_favoritesSection;
- (id)_favoritesSectionTitle;
- (void)_fetchHandoffResult;
- (void)_fetchMetadataIfNeededForReadingListBookmark:(id)arg1;
- (id)_frequentlyVisitedSection;
- (void)_frequentlyVisitedSitesDidChange:(id)arg1;
- (void)_hideCloudTabsSection;
- (void)_highlightsDidChange:(id)arg1;
- (id)_highlightsSection;
- (void)_historyWasAltered;
- (void)_historyWasCleared:(id)arg1;
- (id)_lastCloudDeviceProfileKey;
- (id)_openMenuElementsForSiriSuggestion:(id)arg1;
- (void)_privacyProxyStateDidChange;
- (void)_privacyReportDataDidChange;
- (id)_privacyReportSection;
- (id)_privateBrowsingExplanationSection;
- (id)_privateBrowsingPersistentModuleSection;
- (id)_privateRelayPromptInPrivateBrowsingSection;
- (void)_readingListBookmarkMetadataDidUpdate:(id)arg1;
- (id)_readingListSection;
- (void)_recentCloudTabItemsDidRebuild:(id)arg1;
- (void)_recentCloudTabItemsDidReceiveMetadata:(id)arg1;
- (id)_recentCloudTabsSection;
- (id)_recentCloudTabsSectionWithDevice:(id)arg1;
- (id)_recentItemsForDevice:(id)arg1;
- (id)_recentlyClosedTabsForProfile:(id)arg1;
- (id)_recentlyClosedTabsSection;
- (void)_refreshSiriSuggestions;
- (void)_reloadPrivacyReportSection;
- (void)_reportBookmarkNavigationAnalytics:(id)arg1 withIntent:(id)arg2;
- (void)_reportBookmarkNavigationAnalytics:(id)arg1 withIntent:(id)arg2 bookmarkIsInFavoritesFolder:(bool)arg3;
- (void)_requestLeadImageForRecommendation:(id)arg1;
- (void)_sectionsDidChange:(id)arg1;
- (id)_selectedCloudTabsDevice;
- (bool)_setFavoritesListToFolderWithServerID:(id)arg1;
- (void)_setLeadImageForCard:(id)arg1 withRecommendation:(id)arg2;
- (void)_setProfileIconOnSectionIfNeeded:(id)arg1;
- (void)_setReadingListRecommendationAsReadWithRecommendation:(id)arg1;
- (void)_setSiriSuggestions:(id)arg1;
- (void)_setUpContextMenuForBookmarksSection:(id)arg1;
- (void)_setUpDragItemProviderForBookmarksSection:(id)arg1;
- (id)_shareActionForHighlight:(id)arg1;
- (id)_shareActionForSiriSuggestion:(id)arg1;
- (bool)_shouldShowConsentUI;
- (id)_siriSuggestionsSection;
- (void)_suggestionsDidChange:(id)arg1;
- (id)_tabGroupHeadingSection;
- (id)_tabGroupScopedFavoritesSection;
- (void)_updateFavoritesListForActiveProfile;
- (void)_updatePrivacyReportData;
- (void)_updateRecentCloudTabsSection;
- (void)_updateRecentItemsAndDevices;
- (void)_updateRecommendationsForAllTopics;
- (void)_updateRecommendationsForTopics:(id)arg1;
- (void)_updateSiriSuggestionsMediator;
- (void)_updateStartPageSectionManager;
- (id)backgroundImageAssetControllerForCustomizationViewController:(id)arg1;
- (id)backgroundImageForStartPageCustomizationViewController:(id)arg1;
- (id)backgroundImageIdentifierForStartPageViewController:(id)arg1;
- (void)bookmark:(id)arg1 didProduceNavigationIntent:(id)arg2 userInfo:(id)arg3;
- (void)bookmark:(id)arg1 shareItems:(id)arg2 userInfo:(id)arg3;
- (void)cloudTabDeviceProvider:(id)arg1 didUpdateCloudTabsInProfileWithIdentifier:(id)arg2;
- (id)cloudTabsSections;
- (id)dataSource;
- (void)dealloc;
- (void)deleteBookmark:(id)arg1 userInfo:(id)arg2;
- (void)didReorderSectionIdentifiersForStartPageCustomizationViewController:(id)arg1;
- (void)editBookmark:(id)arg1 userInfo:(id)arg2;
- (long long)effectiveUpdatePolicy;
- (id)frequentlyVisitedSitesController;
- (id)init;
- (id)initWithVisualStyleProvider:(id)arg1;
- (bool)isBackgroundImageEnabledForStartPageCustomizationViewController:(id)arg1;
- (bool)isCloudSyncAvailableForStartPageCustomizationViewController:(id)arg1;
- (bool)isCloudSyncEnabledForStartPageCustomizationViewController:(id)arg1;
- (bool)isShowingAsPopover;
- (bool)isSuggestionsCustomizationAvailableForStartPageCustomizationViewController:(id)arg1;
- (bool)isTabGroupFavoritesSectionEnabled;
- (id)libraryType;
- (id)profileProviderForCustomizationViewController:(id)arg1;
- (id)sectionsForStartPageViewController:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setLibraryType:(id)arg1;
- (void)setShowingAsPopover:(bool)arg1;
- (void)setTabGroupFavoritesSectionEnabled:(bool)arg1;
- (void)setViewController:(id)arg1;
- (id)startPageBackgroundImageIdentifier;
- (id)startPageCustomizationViewController:(id)arg1 customizationItemsForCustomizationVariant:(long long)arg2;
- (void)startPageCustomizationViewController:(id)arg1 didCustomizeItems:(id)arg2 withVariant:(long long)arg3;
- (void)startPageCustomizationViewController:(id)arg1 didModifyBackgroundImageEnabled:(bool)arg2;
- (void)startPageCustomizationViewController:(id)arg1 didSelectBuiltInBackgroundImageAtURL:(id)arg2 precomputedLuminance:(double)arg3;
- (void)startPageCustomizationViewController:(id)arg1 didSelectCustomBackgroundImage:(id)arg2;
- (void)startPageCustomizationViewController:(id)arg1 didSelectMobileAssetBackgroundImageWithProvider:(id)arg2;
- (void)startPageCustomizationViewController:(id)arg1 willModifySectionWithIdentifier:(id)arg2 enabled:(bool)arg3;
- (void)startPageCustomizationViewControllerDidDisableCloudSync:(id)arg1;
- (void)startPageCustomizationViewControllerDidEnableCloudSync:(id)arg1 withPreference:(long long)arg2;
- (void)startPageCustomizationViewControllerDidFinish:(id)arg1;
- (id)startPageViewController:(id)arg1 detailSectionForItemIdentifier:(id)arg2;
- (id)startPageViewController:(id)arg1 detailSectionsForItemIdentifier:(id)arg2;
- (void)startPageViewController:(id)arg1 didSelectItemWithIdentifier:(id)arg2 atGridLocation:(struct { long long x1; long long x2; })arg3;
- (void)startPageViewController:(id)arg1 didUpdateSearchPattern:(id)arg2;
- (bool)startPageViewController:(id)arg1 isSectionExpanded:(id)arg2;
- (void)startPageViewController:(id)arg1 toggleSectionExpanded:(id)arg2;
- (void)startPageViewControllerDidChangeRootViewVisibility:(id)arg1;
- (bool)startPageViewControllerShouldShowSearchField:(id)arg1;
- (void)tabGroupManager:(id)arg1 didUpdateProfileWithIdentifier:(id)arg2 difference:(id)arg3;
- (void)tabGroupManager:(id)arg1 didUpdateScopedBookmarkList:(id)arg2;
- (void)updatePolicyDidChange;
- (void)updatePrivacyReportIfEnabled;
- (void)updatePrivateBrowsingExplanationState;
- (void)updateTabGroupHeading;
- (id)viewController;

@end
