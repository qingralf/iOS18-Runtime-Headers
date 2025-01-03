/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileSafariUI.framework/MobileSafariUI
 */

@interface Application : SFBrowserApplication <ASSavedAccountContextProviding, BKSMousePointerDeviceObserver, CSSearchableIndexDelegate, MCProfileConnectionObserver, PageLoadTestRunnerDelegate, SFBrowserApplicationProxy, SFContentBlockerManagerDelegate, SFUIApplicationModifierFlagsProviding, SFWebExtensionControllerProfileDelegate, SFWebExtensionsControllerDelegate, TabSnapshotCacheStressTestRunnerDelegate, UIApplicationDelegatePrivate, UNUserNotificationCenterDelegate, WBDatabaseLockAcquisitorDelegate, WBSActiveProfileProvider, WBSBackgroundImageAssetControllerDelegate, WBSBookmarkIntentPerformer, WBSBrowserTabCompletionProviderSource, WBSCompletionListVendorForHistoryServiceDataSource, WBSSystemNoteTakingControllerDelegate, WBSTabEntityDataSource, WBSTabGroupIntentPerformer, WBSTabIntentPerformer, WBSUnifiedBarAnalyticsRecorderDelegate, WBSWindowEntityDataSource, WBSWindowIntentPerformer, WBTabGroupManagerObserver, _SFDownloadDelegate, _SFNavigationIntentHandling, _WKWebsiteDataStoreDelegate> {
    NSMutableArray * _activeDownloads;
    AutomationController * _automationController;
    WBSBackgroundImageAssetController * _backgroundImageAssetController;
    WebBookmarkCollection * _bookmarkCollection;
    unsigned long long  _bookmarksDatabaseBackgroundTaskIdentifier;
    WBDatabaseLockAcquisitor * _bookmarksDatabaseBackgroundTaskLockAcquisitor;
    BookmarksDatabaseHealthReporter * _bookmarksDatabaseHealthReporter;
    SpotlightBookmarksDonationWriter * _bookmarksDonationWriter;
    BrowserWindowController * _browserWindowController;
    WBSAllowedLegacyTLSHostManager * _cachedLegacyTLSHostManager;
    <WBSCloudHistoryServiceProtocol> * _cloudHistory;
    CompletionListVendorForHistoryService * _completionListVendorForHistoryService;
    long long  _currentKeyboardModifierFlags;
    WBSCyclerConnectionManager * _cyclerConnectionManager;
    <NSObject> * _developerPreferencesDidChangeNotificationToken;
    WBTabGroupManager * _ephemeralTabGroupManager;
    ForYouRecommendationMediator * _existingForYouRecommendationMediator;
    bool  _finishedLaunching;
    NSString * _focusProfileIdentifier;
    bool  _focusProfileUpdateIsForInactiveFocusMode;
    NSString * _focusedTabGroupUUIDString;
    WBSForYouRecentParsecResultsManager * _forYouRecentParsecResultsManager;
    ForYouRecommendationMediator * _forYouRecommendationMediator;
    WBSFormAutoFillCorrectionsHistoryObserver * _formAutoFillCorrectionsHistoryObserver;
    HighlightManager * _highlightManager;
    WBSStartPageSuggestionsProviderBroadcaster * _highlightManagerSuggestionsProviderBroadcaster;
    HistoryController * _historyController;
    bool  _isReadingDefaults;
    bool  _isRunningCanvasTest;
    bool  _isRunningShowBookmarksTest;
    NSTimer * _lockPrivateBrowsingInBackgroundTimer;
    NSMutableArray * _lockedPrivateBrowsingAuthenticationCompletionHandlers;
    LAContext * _lockedPrivateBrowsingAuthenticationContext;
    bool  _needsFocusProfileUpdate;
    bool  _needsFocusedTabGroupUpdate;
    WBSOfflineSearchSuggestionsModelUpdateManager * _offlineSearchSuggestionsModelUpdateManager;
    NSMutableSet * _pendingFrequentlyVisitedSites;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _pointerDeviceLock;
    <BSInvalidatable> * _pointerDeviceObserverToken;
    NSMutableSet * _pointerDevices;
    bool  _privateBrowsingLocked;
    NSMutableDictionary * _processPools;
    NSMutableDictionary * _profileIdentifiersToSuggestionsManagers;
    NSMutableDictionary * _profileServerIDToContentBlockerManagers;
    NSMutableDictionary * _profileServerIDToUserContentController;
    NSMutableDictionary * _profileServerIDToWebExtensionsControllers;
    ReadingListLeadImageCache * _readingListImageCache;
    bool  _readingListWidgetNeedsReloading;
    bool  _resigningActive;
    WBSSafariScribbleFeedbackSyncEngine * _scribbleFeedbackSyncEngine;
    WBSScribbleQuirksManager * _scribbleQuirksManager;
    SafariSettingsSyncEngine * _settingsSyncEngine;
    bool  _shouldPrivateBrowsingBeLockedIfPossible;
    bool  _shouldReadDefaultsOnResume;
    bool  _startedBookmarksTest;
    SystemNoteTakingController * _systemNoteTakingController;
    WBSBrowserTabCompletionProvider * _tabCompletionProvider;
    WBTabGroupManager * _tabGroupManager;
    WBSUnifiedBarAnalyticsRecorder * _unifiedBarAnalyticsRecorder;
    WBSUserDefinedContentBlockerManager * _userDefinedContentBlockerManager;
    WBSPrivateBrowsingUserDefinedContentBlockerManager * _userDefinedContentBlockerManagerForPrivateBrowsing;
    SBSAssertion * _wallpaperSuspensionAssertion;
    bool  _willEnterSuspendedState;
}

@property (nonatomic, readonly) NSArray *allProcessPools;
@property (nonatomic, readonly, copy) NSArray *allTabEntities;
@property (nonatomic, readonly, copy) NSArray *allWindowEntities;
@property (nonatomic, readonly) AutomationController *automationController;
@property (nonatomic, readonly) WBSBackgroundImageAssetController *backgroundImageAssetController;
@property (nonatomic, readonly) WebBookmarkCollection *bookmarkCollection;
@property (nonatomic, readonly) NSArray *browserControllers;
@property (nonatomic, readonly) BrowserWindowController *browserWindowController;
@property (nonatomic, readonly) NSArray *cachedUserContentControllersForAllProfiles;
@property (nonatomic, readonly) long long currentKeyboardModifierFlags;
@property (nonatomic, readonly) UIScene *currentScene;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, readonly) WKProcessPool *defaultProcessPool;
@property (nonatomic, readonly) SFWebExtensionsController *defaultWebExtensionsController;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) WBTabGroupManager *ephemeralTabGroupManager;
@property (nonatomic) ForYouRecommendationMediator *existingForYouRecommendationMediator;
@property (nonatomic, readonly, copy) WBProfile *focusProfile;
@property (nonatomic, copy) NSString *focusProfileIdentifier;
@property (nonatomic) bool focusProfileUpdateIsForInactiveFocusMode;
@property (nonatomic, readonly, copy) NSString *focusedTabGroupUUIDString;
@property (nonatomic, readonly) WBSForYouRecentParsecResultsManager *forYouRecentParsecResultsManager;
@property (nonatomic, readonly) bool hasPointerDevice;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HighlightManager *highlightManager;
@property (nonatomic, readonly, copy) NSSet *historiesForProfiles;
@property (nonatomic, readonly) HistoryController *historyController;
@property (nonatomic, readonly) bool isCloudHistoryEnabled;
@property (nonatomic, readonly) bool isRunningPPT;
@property (nonatomic, readonly, copy) NSString *lastActiveProfileIdentifier;
@property (nonatomic, readonly) WBSAllowedLegacyTLSHostManager *legacyTLSHostManager;
@property (nonatomic, readonly) unsigned long long maximumTabCount;
@property (nonatomic) bool needsFocusProfileUpdate;
@property (nonatomic) bool needsFocusedTabGroupUpdate;
@property (nonatomic, readonly) bool prefersSingleWindow;
@property (nonatomic, readonly) BrowserController *primaryBrowserController;
@property (getter=isPrivateBrowsingLocked, nonatomic, readonly) bool privateBrowsingLocked;
@property (nonatomic) bool privateBrowsingRequiresAuthentication;
@property (nonatomic, readonly) ReadingListLeadImageCache *readingListLeadImageCache;
@property (nonatomic, readonly) WBSSafariScribbleFeedbackSyncEngine *scribbleFeedbackSyncEngine;
@property (nonatomic, readonly) WBSScribbleQuirksManager *scribbleQuirksManager;
@property (nonatomic, readonly) SafariSettingsSyncEngine *settingsSyncEngine;
@property (nonatomic, readonly) bool shouldRestoreStateForPPT;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SystemNoteTakingController *systemNoteTakingController;
@property (nonatomic, readonly) WBTabGroupManager *tabGroupManager;
@property (nonatomic, readonly) <WBSUnifiedBarAnalyticsProviding> *unifiedBarAnalyticsProvider;
@property (nonatomic, readonly) WBSUserDefinedContentBlockerManager *userDefinedContentBlockerManager;
@property (nonatomic, readonly) WBSPrivateBrowsingUserDefinedContentBlockerManager *userDefinedContentBlockerManagerForPrivateBrowsing;
@property (nonatomic, readonly) bool usesDefaultBrowsingModeInAllWindows;
@property (nonatomic, readonly) bool usesLoweredSearchBar;
@property (nonatomic, readonly) bool usesPrivateBrowsingModeInAnyWindow;

+ (id /* block */)browserControllerUIDelegateProvider;
+ (void)commandLineTestOption:(int)arg1 arg:(const char *)arg2;
+ (id)contextClient;
+ (void)initialize;
+ (void)postTestNotificationName:(id)arg1 object:(id)arg2;
+ (void)postTestNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
+ (bool)prepareTestControllerWithType:(id)arg1 suiteURL:(id)arg2 bundleNames:(id)arg3 outputURL:(id)arg4;
+ (void)setBrowserControllerUIDelegateProvider:(id /* block */)arg1;
+ (id)sharedApplication;
+ (id)sharedTestRunner;
+ (unsigned long long)systemMemorySize;

- (void).cxx_destruct;
- (void)_addDefaultsObserver;
- (id)_allTabsWithExtensionContentLoadedForBrowserController:(id)arg1 extensionHost:(id)arg2 composedIdentifier:(id)arg3;
- (void)_appleKeyboardsChanged:(id)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (id)_browserControllerForApplicationTesting;
- (id)_browserControllerForExternalNavigation;
- (id)_browserControllerForTabWithUUID:(id)arg1;
- (void)_clearInvalidCertificateBypassesOlderThanOneWeek;
- (void)_connectToCyclerIfNecessary;
- (id)_createBookmarkWithTitle:(id)arg1 url:(id)arg2 parentBookmark:(id /* block */)arg3;
- (void)_createExtensionControllersIfNeededForProfileServerID:(id)arg1;
- (void)_deleteExtensionControllersForProfileServerID:(id)arg1;
- (void)_determineIfAuthenticationIsAvailableForLockedPrivateBrowsingWithCompletionHandler:(id /* block */)arg1;
- (void)_didEnableCustomizationSync;
- (void)_doSearchTestOnCVC:(id)arg1 WithTestStrings:(id)arg2 andDispatchGroup:(id)arg3;
- (void)_downloadDidStartNotification:(id)arg1;
- (void)_downloadDidStopNotification:(id)arg1;
- (void)_export30DaysWorthOfHistoryAfterUpgrade;
- (id)_extendLaunchTest;
- (void)_frequentlyVisitedSitesWereChanged:(id)arg1;
- (id)_generateMemoryFootprintResults:(id)arg1;
- (void)_getBookmarksDataClassEnabledWithCompletionHandler:(id /* block */)arg1;
- (void)_handleHIDEvent:(struct __IOHIDEvent { }*)arg1;
- (bool)_hasLockablePrivateTabsOpenInAnyWindow;
- (bool)_hasPrivateBrowserControllerActiveInAnyWindow;
- (void)_historyHostnamesWereRemoved:(id)arg1;
- (void)_historyItemsWereRemoved:(id)arg1;
- (void)_historyWasCleared:(id)arg1;
- (void)_initializeProcessPoolForProfileIdentifier:(id)arg1;
- (void)_loadAlternateHTMLString:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_loadExtensionsInProfile:(id)arg1;
- (void)_loadLargeForm:(id /* block */)arg1;
- (void)_loadTabsForTesting:(unsigned long long)arg1 presentTabView:(bool)arg2 completion:(id /* block */)arg3;
- (void)_managedProfileConfigurationDidUpdate;
- (bool)_mediaIsPlayingInPrivateBrowsing;
- (unsigned long long)_numberOfTabsForPrivateBrowsing:(bool)arg1;
- (id)_numberOption:(id)arg1;
- (void)_observeNotificationOnce:(id)arg1 handler:(id /* block */)arg2;
- (void)_performBookmarksDatabaseTasksInBackground;
- (void)_pollCanvasTest:(id)arg1;
- (void)_populateInMemoryBookmarksDBForTestNamed:(id)arg1;
- (void)_preparePageLoadTestControllerParameters;
- (void)_prepareTabViewBringUpTest;
- (void)_prepareTabViewCloseTest;
- (void)_prepareTabViewOpenTest;
- (void)_prepareTabViewRotationTest;
- (void)_prepareTabViewScrollTest;
- (void)_prepareTabViewSelectTest;
- (void)_prewarmAutomationControllerIfEnabled;
- (void)_profileFocusConfigurationChanged;
- (void)_pruneExpiredScenes;
- (void)_readDefaults;
- (void)_readFocusConfigurationKeys;
- (id)_recentsStoreForDefaultProfile;
- (void)_reloadSearchEngines;
- (void)_reportBookmarksDatabaseHealth;
- (void)_reportLaunchAnalyticsSoon;
- (void)_resetCloudHistoryAccountIfNeeded;
- (bool)_resetHistoryWithCompressedDatabaseAtURL:(id)arg1 error:(id*)arg2;
- (void)_runFormTypingTextWithSetupScript:(id)arg1;
- (void)_runSidebarTest;
- (void)_runTabBarSwitchTabTest;
- (void)_runTabOverviewOpenNewTabTest;
- (void)_runTabOverviewPresentingAndDismissalTest;
- (void)_runTabOverviewScrollPerfTest;
- (void)_saveFrequentlyVisitedListsToDatabaseIfNeeded;
- (void)_scrollContentWithTestName:(id)arg1 scrollingBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 amplitude:(double)arg3 completionHandler:(id /* block */)arg4;
- (id)_scrollViewForTestNamed:(id)arg1;
- (void)_setUpSuggestionManagersIfNeeded;
- (void)_setWKWebsiteDataStoreDelegate;
- (bool)_shouldLockPrivateBrowsing;
- (void)_showExtensionPermissionBannerIfNecessary;
- (void)_showSearchEngineAlertIfNeeded;
- (id)_sortedBrowserControllers;
- (bool)_startResizeTestWithName:(id)arg1;
- (void)_suspendOrResumeWallpaperAnimationIfNeeded;
- (void)_switchToBookmarksCollectionForTestNamed:(id)arg1;
- (id)_syntheticHTMLString;
- (id)_tabCompletionProvider;
- (void)_tabGroupFocusConfigurationChanged;
- (void)_typeTextInForm:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_updateCloudFeatureAvailability;
- (void)_updateKeyboardCorrectionLearningAllowed;
- (void)_updateProfileLocalIdentifiersToServerIdentifiersMapInCloudHistory;
- (id)_userContentControllerForProfileServerID:(id)arg1;
- (void)_webBookmarksDidReload;
- (id)allContentBlockerManagers;
- (id)allProcessPools;
- (id)allTabEntities;
- (id)allWebExtensionsControllers;
- (id)allWindowEntities;
- (void)application:(id)arg1 didDiscardSceneSessions:(id)arg2;
- (bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (void)applicationWillSuspend;
- (void)applicationWillTerminate;
- (void)authenticateToUnlockPrivateBrowsingWithCompletionHandler:(id /* block */)arg1;
- (id)automationController;
- (id)backgroundImageAssetController;
- (void)backgroundImageAssetController:(id)arg1 didFailCatalogDownload:(id)arg2;
- (void)backgroundImageAssetController:(id)arg1 didFailDownload:(id)arg2;
- (void)backgroundImageAssetController:(id)arg1 didFailLoad:(id)arg2;
- (void)backgroundImageAssetController:(id)arg1 didInstallBackgroundImageThumbnailAtURL:(id)arg2;
- (id)bookmarkCollection;
- (id)browserControllerForCompletionListVendorForHistoryService;
- (id)browserControllers;
- (id)browserWindowController;
- (void)buildMenuWithBuilder:(id)arg1;
- (id)cachedUserContentControllersForAllProfiles;
- (bool)canAddNewTabForPrivateBrowsing:(bool)arg1;
- (void)checkExtendedLaunchPageLoad:(id)arg1 forTabDocument:(id)arg2;
- (void)clearCachedTabCompletionData;
- (void)closeTabWithUUID:(id)arg1;
- (void)closeWindowsWithIdentifiers:(id)arg1;
- (id)contentBlockerManagerForProfileServerID:(id)arg1;
- (id)createBookmarkWithTitle:(id)arg1 url:(id)arg2;
- (void)createNewBookmarkWithTitle:(id)arg1;
- (id)createNewTab;
- (id)createNewTabGroupWithTitle:(id)arg1;
- (id)createNewTabWithURL:(id)arg1 isPrivate:(bool)arg2;
- (id)createNewWindowWithRequestIdentifier:(id)arg1 isPrivate:(bool)arg2;
- (id)createRecommendationMediatorOrReuseExistingOneIfPossible;
- (long long)currentKeyboardModifierFlags;
- (id)currentScene;
- (void)databaseLockAcquisitor:(id)arg1 acquiredLock:(bool)arg2;
- (id)defaultProcessPool;
- (id)defaultWebExtensionsController;
- (void)deleteBookmarksWithUUIDs:(id)arg1;
- (void)deleteTabGroupsWithUUIDs:(id)arg1;
- (void)didReceiveMemoryWarning;
- (bool)didStartBookmarksTest;
- (void)dispatchNavigationIntent:(id)arg1;
- (void)downloadDidFail:(id)arg1;
- (void)downloadDidFinish:(id)arg1;
- (void)downloadDidReceiveResponse:(id)arg1;
- (void)downloadDidStart:(id)arg1;
- (void)downloadShouldContinueAfterReceivingResponse:(id)arg1 decisionHandler:(id /* block */)arg2;
- (void)enumerateContentBlockerManagersUsingBlock:(id /* block */)arg1;
- (id)ephemeralTabGroupManager;
- (id)existingForYouRecommendationMediator;
- (void)extensionBaseURIMapChangedForExtensionsController:(id)arg1;
- (void)extensionsController:(id)arg1 closeOpenExtensionTabsInPrivateBrowsingWithBaseURI:(id)arg2 composedIdentifier:(id)arg3;
- (void)extensionsController:(id)arg1 closeOpenExtensionTabsWithBaseURI:(id)arg2 composedIdentifier:(id)arg3;
- (void)failedPurpleTestWithError:(id)arg1;
- (void)findString:(id)arg1 onTabWithUUID:(id)arg2;
- (void)finishedBookmarksTest;
- (void)finishedCanvasTestWithURL:(id)arg1 forTabDocument:(id)arg2;
- (void)finishedPurpleTest:(id)arg1;
- (id)focusProfile;
- (id)focusProfileIdentifier;
- (bool)focusProfileUpdateIsForInactiveFocusMode;
- (id)focusedTabGroupUUIDString;
- (id)forYouRecentParsecResultsManager;
- (void)handleKeyUIEvent:(id)arg1;
- (void)handleNavigationIntent:(id)arg1 completion:(id /* block */)arg2;
- (bool)hasPointerDevice;
- (id)highlightManager;
- (id)historiesForProfiles;
- (id)historyController;
- (bool)isCloudHistoryEnabled;
- (bool)isNoteTakingControllerSupportedInPrivateBrowsing:(id)arg1;
- (bool)isPrivateBrowsingLocked;
- (bool)isRunningCanvasTest;
- (bool)isRunningPPT;
- (bool)isRunningShowBookmarksTest;
- (id)lastActiveProfileIdentifier;
- (id)legacyTLSHostManager;
- (void)loadBlankPageforKeyboardTests;
- (void)loadExtensionsInProfileIfNecessary:(id)arg1;
- (void)loadTabsForTesting:(unsigned long long)arg1 presentTabView:(bool)arg2;
- (void)loadTabsForTesting:(unsigned long long)arg1 presentTabView:(bool)arg2 completion:(id /* block */)arg3;
- (void)lockPrivateBrowsing;
- (unsigned long long)maximumTabCount;
- (unsigned long long)maximumTabCountAllowingMoreTabs:(bool)arg1;
- (void)mousePointerDevicesDidConnect:(id)arg1;
- (void)mousePointerDevicesDidDisconnect:(id)arg1;
- (void)moveTabsWithUUIDs:(id)arg1 toTabGroupWithUUID:(id)arg2;
- (void)moveTabsWithUUIDs:(id)arg1 toWindowWithIdentifier:(id)arg2;
- (void)navigateTabWithUUID:(id)arg1 toURL:(id)arg2;
- (bool)needsFocusProfileUpdate;
- (bool)needsFocusedTabGroupUpdate;
- (void)noteTakingController:(id)arg1 addHighlightForUserActivity:(id)arg2 completion:(id /* block */)arg3;
- (void)notifyAddedLinkPreviewMetadata:(id)arg1 toUserActivity:(id)arg2 webView:(id)arg3;
- (void)notifyExtensionControllersThatSettingsWereUpdatedExternallyFromSettingsApp;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)openBookmarkWithUUID:(id)arg1;
- (void)openBookmarkWithUUID:(id)arg1 inTabWithUUID:(id)arg2;
- (void)openSyncedTabGroupWithUUID:(id)arg1;
- (void)openTabWithUUID:(id)arg1;
- (bool)overrideBrowserStateForTestNamed:(id)arg1 browserController:(id)arg2;
- (void)pageLoadTestRunnerFinished:(id)arg1;
- (void)pdfDataForTabWithUUID:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)prefersSingleWindow;
- (bool)prepareBookmarksTest;
- (void)prepareTabViewBringUpTest;
- (void)prepareTabViewCloseTest;
- (void)prepareTabViewOpenTest;
- (void)prepareTabViewRotationTest;
- (void)prepareTabViewScrollTest;
- (void)prepareTabViewSelectTest;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)prewarmAndRemoveOrphanedProfileDataStores;
- (id)primaryBrowserController;
- (bool)privateBrowsingRequiresAuthentication;
- (id)processPoolForProfileIdentifier:(id)arg1;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2;
- (id)proxy;
- (id)readingListLeadImageCache;
- (id)recentsStoreForProfileWithIdentifier:(id)arg1;
- (void)reloadContentBlockers;
- (void)reloadReadingListWidgetIfNeeded;
- (void)runBookmarksViewTest;
- (void)runGeneratePasswordTest;
- (void)runLargeFormFocusTest;
- (void)runLargeFormTypingTest;
- (bool)runMemoryOrIOTestWithType:(unsigned long long)arg1;
- (void)runTabOverviewTest;
- (void)runTabSnapshotCacheStressTest;
- (bool)runTest:(id)arg1 options:(id)arg2;
- (void)saveChangesToCloudHistoryStore;
- (id)savedAccountContextForWebPageID:(unsigned long long)arg1;
- (id)sceneForTabGroupWithUUIDString:(id)arg1;
- (void)sceneForTabWithUUID:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)scribbleFeedbackSyncEngine;
- (id)scribbleQuirksManager;
- (id)searchParametersWithCFEnabled:(bool)arg1;
- (void)searchTabsWithString:(id)arg1;
- (void)searchableIndex:(id)arg1 reindexAllSearchableItemsWithAcknowledgementHandler:(id /* block */)arg2;
- (void)searchableIndex:(id)arg1 reindexSearchableItemsWithIdentifiers:(id)arg2 acknowledgementHandler:(id /* block */)arg3;
- (id)sectionManagerForProfileWithIdentifier:(id)arg1;
- (id)selectedTabInfoForBrowserTabCompletionProvider:(id)arg1;
- (void)setExistingForYouRecommendationMediator:(id)arg1;
- (void)setFocusProfileIdentifier:(id)arg1;
- (void)setFocusProfileUpdateIsForInactiveFocusMode:(bool)arg1;
- (void)setNeedsFocusProfileUpdate:(bool)arg1;
- (void)setNeedsFocusedTabGroupUpdate:(bool)arg1;
- (void)setObject:(id)arg1 forInjectedBundleParameter:(id)arg2;
- (void)setPrivateBrowsingRequiresAuthentication:(bool)arg1;
- (void)setReadingListWidgetNeedsReload;
- (id)settingsSyncEngine;
- (bool)sfWebExtensionsController:(id)arg1 canSendMessageFromWebView:(id)arg2;
- (void)sfWebExtensionsController:(id)arg1 captureVisibleTab:(id)arg2 format:(id)arg3 quality:(double)arg4 completionHandler:(id /* block */)arg5;
- (void)sfWebExtensionsController:(id)arg1 createNewTabInWindow:(id)arg2 tabIndex:(id)arg3 url:(id)arg4 makeActive:(bool)arg5 completionHandler:(id /* block */)arg6;
- (id)sfWebExtensionsController:(id)arg1 duplicateTab:(id)arg2;
- (id)sfWebExtensionsController:(id)arg1 forProfileServerID:(id)arg2;
- (id)sfWebExtensionsController:(id)arg1 navigationIntentUUIDForWindow:(id)arg2;
- (void)sfWebExtensionsController:(id)arg1 relateParentTab:(id)arg2 toTab:(id)arg3;
- (id)sfWebExtensionsController:(id)arg1 reusableTabWithID:(double)arg2;
- (void)sfWebExtensionsController:(id)arg1 showPopupOrPerSitePermissionsForExtension:(id)arg2 inWindow:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)sfWebExtensionsController:(id)arg1 tabForWebView:(id)arg2;
- (id)sfWebExtensionsController:(id)arg1 tabWithID:(double)arg2;
- (id)sfWebExtensionsController:(id)arg1 windowForWebView:(id)arg2 extension:(id)arg3;
- (id)sfWebExtensionsController:(id)arg1 windowWithID:(double)arg2;
- (id)sfWebExtensionsControllerAllProfileExtensionsControllers:(id)arg1;
- (id)sfWebExtensionsControllerAllWindows:(id)arg1;
- (void)sfWebExtensionsControllerContentBlockerListDidChange:(id)arg1;
- (id)sfWebExtensionsControllerContentBlockerManager:(id)arg1 forProfileServerID:(id)arg2;
- (void)sfWebExtensionsControllerDidChangeExtensionForPermissionBanner:(id)arg1;
- (id)sfWebExtensionsControllerDomainForDefaultSearchProvider:(id)arg1;
- (id)sfWebExtensionsControllerLastFocusedWindow:(id)arg1;
- (id)sfWebExtensionsControllerTabGroupManager:(id)arg1;
- (id)sfWebExtensionsControllersContentBlockerManagersForAllProfiles:(id)arg1;
- (id)sfWebExtensionsControllersForAllProfiles:(id)arg1;
- (bool)shouldRestoreStateForPPT;
- (void)showWindowWithIdentifier:(id)arg1;
- (void)startBookmarksTest;
- (bool)startCanvasTest:(id)arg1;
- (void)startCommandLineTest;
- (bool)startHistoryLoadTest;
- (bool)startHistoryTest;
- (void)startKeyboardBringupTest;
- (void)startKeyboardRotationTest;
- (void)startKeyboardSplitAndMergeTest;
- (void)startSearchPerformanceDetailedTestWithCF:(bool)arg1;
- (void)startSearchPerformanceTest;
- (void)startSearchPerformanceTestWithTestStrings:(id)arg1;
- (void)startSearchPerformanceTestWithTestStrings:(id)arg1 perQuery:(bool)arg2 withCF:(bool)arg3;
- (void)startSearchPerformanceUnifiedFieldKeyTimeTest;
- (bool)startSidebarTest;
- (bool)startTabBarTest;
- (void)startTabViewBringUpTest;
- (void)startTabViewCloseTest;
- (void)startTabViewOpenTest;
- (void)startTabViewRotationTest;
- (void)startTabViewScrollTest;
- (void)startTabViewSelectTest;
- (void)startedPurpleTest;
- (id)suggestionsManagerForProfileIdentifier:(id)arg1;
- (id)systemNoteTakingController;
- (id)tabCollectionConfiguration;
- (void)tabEntitiesMatchingQuery:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)tabEntityDataSource;
- (id)tabEntityWithUUID:(id)arg1;
- (id)tabGroupManager;
- (void)tabGroupManager:(id)arg1 didInsertProfileWithIdentifier:(id)arg2;
- (void)tabGroupManager:(id)arg1 didRemoveProfileWithIdentifier:(id)arg2;
- (void)tabGroupManagerDidUpdateProfiles:(id)arg1;
- (id)tabInfosForBrowserTabCompletionProvider:(id)arg1;
- (void)tabSnapshotCacheStressTestRunnerDidFinish:(id)arg1;
- (id)unifiedBarAnalyticsProvider;
- (void)unlockPrivateBrowsing;
- (void)updateBiometricAuthenticationAndPasscodeAvailabilityForLockedPrivateBrowsing;
- (void)updateLockedPrivateBrowsingState;
- (void)updateShouldLockPrivateBrowsingWithTimerIfNecessary;
- (void)updateTabCount;
- (void)userDefaultsDidChange:(id)arg1;
- (id)userDefinedContentBlockerManager;
- (id)userDefinedContentBlockerManagerForPrivateBrowsing;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (bool)usesDefaultBrowsingModeInAllWindows;
- (bool)usesLoweredSearchBar;
- (bool)usesPrivateBrowsingModeInAnyWindow;
- (void)webClipCacheDidChange:(id)arg1;
- (id)webExtensionsControllerForProfileServerID:(id)arg1;
- (id)webExtensionsControllerForTabWithPrivateBrowsingEnabled:(bool)arg1 profile:(id)arg2;
- (void)websiteDataStore:(id)arg1 domain:(id)arg2 didOpenDomainViaWindowOpen:(id)arg3 withProperty:(long long)arg4 directly:(bool)arg5;
- (void)websiteDataStore:(id)arg1 openWindow:(id)arg2 fromServiceWorkerOrigin:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)windowEntityWithIdentifier:(id)arg1;

@end
