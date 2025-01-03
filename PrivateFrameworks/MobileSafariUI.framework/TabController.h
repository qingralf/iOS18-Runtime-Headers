/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileSafariUI.framework/MobileSafariUI
 */

@interface TabController : NSObject <CollectionViewTabProviding, PinnedTabsContainer, PinnedTabsObserving, TabCollectionViewManagerDataSource, TabGroupProvider, TabMenuProviderDataSource, UITextFieldDelegate, WBSTabGroupConfirmationAlertDelegate, WBSTabOrderProvider, WBTabGroupManagerObserver, WBTabGroupSyncAgentSyncObserver> {
    TabDocument * _activeLibraryTab;
    NSString * _activeTabGroupUUID;
    BrowserController * _browserController;
    NSUUID * _browserWindowUUID;
    NSMutableDictionary * _cachedShareConfigurationsByTabGroupUUID;
    CKContextCompleter * _contextCompleter;
    bool  _didFinishTabGroupSetup;
    bool  _didReadWindowState;
    bool  _didReceiveFirstCloudTabDeviceUpdateNotification;
    bool  _didRestoreCloudTabsForEducationDevice;
    bool  _didSelectAcceptedSharedTabGroup;
    NSHashTable * _documentObservers;
    NSHashTable * _documentObserversToReceiveUpdatesDidEnd;
    long long  _documentUpdateCount;
    NSMutableArray * _expandedTabGroupUUIDs;
    bool  _isClosingTabs;
    NSMutableDictionary * _libraryTabs;
    NSMutableArray * _mutableNormalTabs;
    NSMutableArray * _mutablePrivateTabs;
    TabDocument * _normalActiveTabDocument;
    NSMutableDictionary * _originalToReplacementUUIDMap;
    PinnedTabsManager * _pinnedTabsManager;
    TabDocument * _privateActiveTabDocument;
    long long  _privateBrowsingMode;
    bool  _shouldTogglePrivateBrowsingOnSplit;
    bool  _showsTabGroupNameSuggestions;
    bool  _suppressSidebarReloadAnimation;
    TabCollectionViewManager * _tabCollectionViewManager;
    long long  _tabDisplayMode;
    TabDocument * _tabDocumentBeingHiddenFromTabView;
    NSArray * _tabDocumentsThatShouldSuppressOnCreatedEvents;
    WBTabGroupManager * _tabGroupManager;
    NSArray * _tabGroupSuggestions;
    WBSTabOrderManager * _tabOrderManager;
    _SWCollaborationButtonView * _tabOverviewCollaborationButton;
    unsigned long long  _tabsClosedWhileTabViewPresentedCount;
    TabCloseUndoGroup * _undoGroup;
    NSUndoManager * _undoManager;
    NSTimer * _updateContinuityTimer;
    long long  _updateTabsSuppressionCount;
    NSMapTable * _uuidToTabMap;
    unsigned long long  _veryRecentlyClosedTabCount;
    NSTimer * _veryRecentlyClosedTabCountInvalidationTimer;
    WBWindowState * _windowState;
}

@property (nonatomic, readonly) NSString *activeLibraryType;
@property (nonatomic, readonly) TabDocument *activeNonLibraryTab;
@property (nonatomic, readonly, copy) WBProfile *activeProfile;
@property (nonatomic, copy) NSString *activeProfileIdentifier;
@property (nonatomic, retain) TabDocument *activeTabDocument;
@property (nonatomic, readonly, copy) WBTabGroup *activeTabGroup;
@property (nonatomic, readonly, copy) WBTabGroup *activeTabGroupOrTabGroupVisibleInSwitcher;
@property (nonatomic, copy) NSString *activeTabGroupUUID;
@property (nonatomic, copy) NSString *activeTabUUID;
@property (nonatomic, readonly) NSArray *allSyntheticBookmarkFolders;
@property (nonatomic, readonly, copy) NSArray *allTabDocuments;
@property (nonatomic, readonly) NSArray *allTabGroups;
@property (nonatomic, readonly, copy) NSArray *alternateTabs;
@property (nonatomic, readonly) <CollectionViewTab> *blankTabToReuse;
@property (nonatomic, readonly) NSUUID *browserWindowUUID;
@property (nonatomic, readonly) bool canAddNewTabForCurrentBrowsingMode;
@property (nonatomic, readonly) bool canCloseOtherTabs;
@property (nonatomic, readonly) bool canCloseTab;
@property (nonatomic, readonly) bool canCreateTabGroupFromCurrentTabs;
@property (nonatomic, readonly) bool canRenameActiveTabGroup;
@property (nonatomic, readonly) CloudTabStore *cloudTabStore;
@property (getter=isControlledByAutomation, nonatomic, readonly) bool controlledByAutomation;
@property (nonatomic, readonly) bool createTabGroupAlertIsPresented;
@property (nonatomic, readonly, copy) NSArray *currentTabDocuments;
@property (nonatomic, readonly, copy) NSArray *currentTabs;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *deviceIdentifier;
@property (nonatomic, readonly) WBTabGroup *focusedTabGroup;
@property (nonatomic, readonly) bool hasActiveLibrary;
@property (nonatomic, readonly) bool hasMultipleProfiles;
@property (nonatomic, readonly) bool hasNamedTabGroups;
@property (nonatomic, readonly) bool hasTabsThatShouldBeObscuredForDigitalHealth;
@property (nonatomic, readonly) bool hasUnreadTab;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) TabDocument *hiddenPrivateTabDocumentWhenShowingPrivateBrowsingExplanationText;
@property (nonatomic, readonly) <CollectionViewTab> *hiddenTabForExplanationView;
@property (nonatomic, readonly) UIImage *iconForSharingActiveTabGroup;
@property (nonatomic, readonly) unsigned long long indexOfSelectedTab;
@property (nonatomic, readonly) bool isInDefaultProfile;
@property (nonatomic, readonly) bool isPrivateBrowsingAndLocked;
@property (nonatomic, readonly) UIMenu *menuForSwitchingProfiles;
@property (nonatomic, readonly) UIMenu *menuForSwitchingProfilesQuickly;
@property (nonatomic, readonly) NSString *moveLocalTabsToNewGroupTitle;
@property (nonatomic, readonly) NSArray *namedTabGroups;
@property (nonatomic, readonly) UIMenu *newTabGroupMenu;
@property (nonatomic, readonly) NSSet *nonActiveTabGroupsInCurrentBrowsingMode;
@property (nonatomic, retain) TabDocument *normalActiveTabDocument;
@property (nonatomic, readonly, copy) NSArray *normalAndPrivateTabs;
@property (nonatomic, readonly, copy) NSArray *normalTabs;
@property (nonatomic, readonly, copy) NSArray *normalUnpinnedTabDocuments;
@property (nonatomic, readonly, copy) NSArray *normalUnpinnedTabs;
@property (nonatomic, readonly) unsigned long long numberOfCurrentNonHiddenTabs;
@property (nonatomic, readonly) unsigned long long numberOfTabs;
@property (nonatomic, readonly) unsigned long long numberOfTabsForCloseAllAction;
@property (nonatomic, readonly, copy) NSArray *pinnedTabDocuments;
@property (nonatomic, readonly, copy) NSArray *pinnedTabs;
@property (nonatomic, retain) PinnedTabsManager *pinnedTabsManager;
@property (nonatomic, retain) TabDocument *privateActiveTabDocument;
@property (getter=isPrivateBrowsingEnabled, nonatomic) bool privateBrowsingEnabled;
@property (nonatomic) long long privateBrowsingMode;
@property (nonatomic, readonly, copy) NSArray *privateTabDocuments;
@property (nonatomic, readonly, copy) WBTabGroup *privateTabGroupIfAvailable;
@property (nonatomic, readonly, copy) NSArray *privateTabs;
@property (nonatomic, readonly, copy) NSArray *privateUnpinnedTabDocuments;
@property (nonatomic, readonly, copy) NSArray *privateUnpinnedTabs;
@property (nonatomic, readonly) <WBSCloudTabDeviceProvider> *profileCloudTabStore;
@property (nonatomic, readonly, copy) NSArray *profiles;
@property (nonatomic, readonly) <WBSOrderedTab> *selectedTabForTabOrderProvider;
@property (nonatomic, readonly) CKShare *shareRecordForActiveTabGroup;
@property (nonatomic, readonly) CKShare *shareRecordForActiveTabGroupIfIsShared;
@property (nonatomic, readonly) bool shouldAllowScrollingPinnedItems;
@property (nonatomic) bool shouldTogglePrivateBrowsingOnSplit;
@property (getter=isShowingLibraryDocument, nonatomic, readonly) bool showingLibraryDocument;
@property (nonatomic, readonly) TabDocument *singleUnpinnedBlankTab;
@property (nonatomic, readonly, copy) NSString *startPageBackgroundImageIdentifier;
@property (nonatomic, readonly) UIMenu *submenuForSwitchingProfiles;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <CollectionViewTab> *tabBeingActivated;
@property (nonatomic, readonly) <TabCollectionViewProviding> *tabCollectionViewProvider;
@property (nonatomic, readonly) TabController *tabController;
@property (nonatomic) long long tabDisplayMode;
@property (nonatomic, readonly) TabDocument *tabDocumentBeingActivated;
@property (nonatomic, readonly) TabDocument *tabDocumentForSpotlightSearch;
@property (nonatomic, readonly, copy) NSArray *tabDocuments;
@property (nonatomic, readonly, copy) NSArray *tabDocumentsForAllTabGroups;
@property (nonatomic, readonly) UIMenu *tabExposeMenu;
@property (nonatomic, readonly) WBTabGroupManager *tabGroupManager;
@property (nonatomic, readonly) NSArray *tabGroups;
@property (nonatomic, readonly) <TabMenuProviderDataSource> *tabMenuProviderDataSource;
@property (nonatomic, readonly) WBSTabOrderManager *tabOrderManager;
@property (nonatomic, readonly) _SWCollaborationButtonView *tabOverviewCollaborationButton;
@property (nonatomic, readonly, copy) NSArray *tabsMatchingSearchTerm;
@property (nonatomic, readonly) NSUndoManager *undoManager;
@property (nonatomic, readonly, copy) WBTabGroup *unnamedTabGroup;
@property (nonatomic, readonly) id /* block */ unnamedTabGroupDisplayTitleProvider;
@property (nonatomic, readonly) NSArray *unnamedTabGroups;
@property (nonatomic, readonly, copy) NSArray *unpinnedTabDocuments;
@property (nonatomic, readonly, copy) NSArray *unpinnedTabs;
@property (nonatomic, readonly) bool updatingTabGroupTabs;
@property (nonatomic, retain) WBWindowState *windowState;

- (void).cxx_destruct;
- (void)_beganSharingTabGroup:(id)arg1;
- (void)_cancelVeryRecentlyClosedTabCountInvalidationTimer;
- (void)_cloudTabsDidUpdate:(id)arg1;
- (void)_lockedPrivateBrowsingStateDidChange:(id)arg1;
- (void)_redoCloseTabsWithUUIDs:(id)arg1;
- (void)_undoCloseTabs:(id)arg1;
- (void)_updateUserActivityTimerFired;
- (id)activeLibraryType;
- (id)activeNonLibraryTab;
- (id)activeProfile;
- (id)activeProfileIdentifier;
- (id)activeTabDocument;
- (id)activeTabGroup;
- (id)activeTabGroupOrTabGroupVisibleInSwitcher;
- (id)activeTabGroupUUID;
- (id)activeTabUUID;
- (void)addBookmarkFolderForTabs:(id)arg1;
- (void)addDocumentObserver:(id)arg1;
- (id)addNewTabGroupWithTitle:(id)arg1 fromExistingTabs:(bool)arg2;
- (id)addNewTabGroupWithTitle:(id)arg1 fromTabs:(id)arg2;
- (id)allSyntheticBookmarkFolders;
- (id)allTabDocuments;
- (id)allTabGroups;
- (id)alternateTabs;
- (id)appendWBTabInTabGroupWithUUID:(id)arg1;
- (void)attemptToSelectTabGroupFromShare:(id)arg1;
- (void)authenticateToUnlockPrivateBrowsing;
- (id)blankTabToReuse;
- (id)browserControllerContainingLocalTabGroupUUID:(id)arg1;
- (id)browserWindowUUID;
- (id)cachedTabSwitcherShareConfigurationForTabGroup:(id)arg1;
- (bool)canAddNewTabForCurrentBrowsingMode;
- (bool)canAddNewTabForPrivateBrowsing:(bool)arg1;
- (bool)canAddNewTabInTabGroup:(id)arg1;
- (bool)canAddNewTabInTabGroup:(id)arg1 withTabCount:(unsigned long long)arg2;
- (bool)canCloseOtherTabs;
- (bool)canCloseTab;
- (bool)canCloseTabWithUUID:(id)arg1;
- (bool)canCloseWBTab:(id)arg1;
- (bool)canCreateTabGroupFromCurrentTabs;
- (bool)canRenameActiveTabGroup;
- (void)clearBrowserController;
- (void)clearCachedTabSwitcherShareConfigurationForTabGroupWithUUID:(id)arg1;
- (void)clearHiddenTabForExplanationView;
- (void)clearTabsClosedWhileTabViewPresentedCount;
- (void)closeAllOpenTabsAnimated:(bool)arg1;
- (void)closeOtherTabs;
- (void)closeTab;
- (void)closeTab:(id)arg1 animated:(bool)arg2;
- (void)closeTabDocument:(id)arg1 animated:(bool)arg2;
- (void)closeTabDocuments:(id)arg1;
- (void)closeTabGroup:(id)arg1;
- (void)closeTabWithURL:(id)arg1 UUID:(id)arg2;
- (void)closeTabs:(id)arg1;
- (void)closeTabs:(id)arg1 animated:(bool)arg2;
- (void)closeTabs:(id)arg1 animated:(bool)arg2 allowAddingToRecentlyClosedTabs:(bool)arg3 showAutoCloseTabsAlert:(bool)arg4;
- (void)closeTabs:(id)arg1 inInactiveTabGroup:(id)arg2;
- (void)closeTabsAutomaticallyIfNecessary;
- (void)closeWBTabs:(id)arg1;
- (id)cloudTabStore;
- (id)contextMenuConfigurationForTab:(id)arg1 inTabGroup:(id)arg2;
- (id)contextMenuConfigurationForTabGroup:(id)arg1 variant:(long long)arg2;
- (id)copyBookmark:(id)arg1 toPerTabGroupBookmarkFolderWithID:(int)arg2;
- (void)createNewTabGroup;
- (bool)createTabGroupAlertIsPresented;
- (void)createTabGroupFromExistingTabs:(bool)arg1 completionHandler:(id /* block */)arg2;
- (id)currentTabDocuments;
- (id)currentTabs;
- (void)deactivateAllUsageTrackingInformationIfNecessary;
- (void)dealloc;
- (id)defaultTabToSelectInTabGroup:(id)arg1;
- (void)deleteScopedBookmarkWithUUID:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)deviceIdentifier;
- (void)didFetchRecentlyAcceptedSharedTabGroupWithUUID:(id)arg1 acceptedShareDate:(id)arg2;
- (void)didFocusTabGroup:(id)arg1;
- (void)didGainOwnershipOfTab:(id)arg1;
- (void)didSelectProfileWithIdentifier:(id)arg1 previousProfileIdentifier:(id)arg2;
- (void)didSetUpTabOverview;
- (void)didSetUpTabSwitcherViewController;
- (void)didUpdateTabDocuments;
- (void)dismissOpenTabGroupAlertIfNeeded;
- (void)displayAlreadyAcceptedSharedTabGroupWithUUID:(id)arg1;
- (id)dragItemForTab:(id)arg1 tabItem:(id)arg2;
- (id)dropTabsAtIndex:(unsigned long long)arg1 pinned:(bool)arg2 dropSession:(id)arg3 dragItems:(id)arg4;
- (id)duplicateTab:(id)arg1;
- (void)evictTabDocument:(id)arg1;
- (id)existingPersistedTitleForTabDocument:(id)arg1;
- (id)focusedTabGroup;
- (id)globalPinnedTabsForTabGroup:(id)arg1;
- (bool)hasActiveLibrary;
- (bool)hasMultipleProfiles;
- (bool)hasNamedTabGroups;
- (bool)hasTabsThatShouldBeObscuredForDigitalHealth;
- (bool)hasUnreadTab;
- (id)hiddenPrivateTabDocumentWhenShowingPrivateBrowsingExplanationText;
- (id)hiddenTabForExplanationView;
- (id)iconForSharingActiveTabGroup;
- (id)iconForSharingTabGroup:(id)arg1;
- (id)iconForTabUUID:(id)arg1;
- (id)imageForTabGroup:(id)arg1;
- (unsigned long long)indexForTab:(id)arg1;
- (unsigned long long)indexOfSelectedTab;
- (id)initWithBrowserController:(id)arg1;
- (void)insertNewBlankTabDocumentAnimated:(bool)arg1;
- (void)insertNewTabDocument:(id)arg1 forcingOrderAfterTabDocument:(id)arg2 inBackground:(bool)arg3 animated:(bool)arg4;
- (void)insertNewTabDocumentWithDefaultOrdering:(id)arg1 inBackground:(bool)arg2 animated:(bool)arg3;
- (void)insertPerTabGroupBookmark:(id)arg1 inPerTabGroupBookmarkFolderWithID:(int)arg2;
- (void)insertTab:(id)arg1 afterTab:(id)arg2 inBackground:(bool)arg3 animated:(bool)arg4;
- (void)insertTabDocumentFromTabStateData:(id)arg1;
- (void)insertTabWithUUIDForNavigation:(id)arg1;
- (void)insertTabs:(id)arg1 beforeTab:(id)arg2 inBackground:(bool)arg3 animated:(bool)arg4;
- (bool)isControlledByAutomation;
- (bool)isInDefaultProfile;
- (bool)isPrivateBrowsingAndLocked;
- (bool)isPrivateBrowsingEnabled;
- (bool)isShowingLibraryDocument;
- (bool)isTabGroupActive:(id)arg1;
- (bool)isTabGroupUUIDExpanded:(id)arg1;
- (bool)isTabPinnable:(id)arg1;
- (bool)isTabUUIDActive:(id)arg1;
- (bool)isTabWithUUIDBeingHiddenFromTabView:(id)arg1;
- (void)makeActiveTabDocumentActive;
- (id)menuForSwitchingProfiles;
- (id)menuForSwitchingProfilesQuickly;
- (id)menuForTabGroup:(id)arg1 variant:(long long)arg2;
- (id)moveLocalTabsToNewGroupTitle;
- (id)moveMenuOnPageMenuWithDismissHandler:(id /* block */)arg1;
- (void)moveTab:(id)arg1 fromTabGroupWithUUID:(id)arg2 toTabGroupWithUUID:(id)arg3 afterTab:(id)arg4;
- (void)moveTab:(id)arg1 overTab:(id)arg2;
- (void)moveTab:(id)arg1 toTabGroupWithUUID:(id)arg2;
- (void)moveTabGroup:(id)arg1 beforeOrAfterTabGroup:(id)arg2;
- (void)moveTabGroup:(id)arg1 toProfile:(id)arg2;
- (bool)moveTabWithUUID:(id)arg1 fromForeignLocalGroupWithUUIDIntoActiveGroup:(id)arg2;
- (void)moveWBTabs:(id)arg1 toTabGroup:(id)arg2;
- (id)namedTabGroups;
- (id)newTabGroupMenu;
- (id)nonActiveTabGroupsInCurrentBrowsingMode;
- (id)normalActiveTabDocument;
- (id)normalAndPrivateTabs;
- (id)normalTabs;
- (id)normalUnpinnedTabDocuments;
- (id)normalUnpinnedTabs;
- (unsigned long long)numberOfCurrentNonHiddenTabs;
- (unsigned long long)numberOfTabs;
- (unsigned long long)numberOfTabsForCloseAllAction;
- (id)oldestTabsWithLimit:(unsigned long long)arg1 inPrivateBrowsing:(bool)arg2;
- (void)openBookmark:(id)arg1 inTabGroup:(id)arg2;
- (void)openFocusProfileWithCompletionHandler:(id /* block */)arg1;
- (void)openFocusedTabGroupWithCompletionHandler:(id /* block */)arg1;
- (id)openInTabGroupMenuWithNewTabGroupName:(id)arg1 URL:(id)arg2 descendantCount:(long long)arg3 handler:(id /* block */)arg4;
- (void)openInitialBlankTabDocumentIfNeeded;
- (void)openLibraryForType:(id)arg1;
- (void)openNewTabWithCompletionHandler:(id /* block */)arg1;
- (void)openNewTabWithOptions:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)openTab:(id)arg1 navigatedFromLibraryType:(id)arg2;
- (void)openURL:(id)arg1 inTabGroup:(id)arg2;
- (id)originatingTabForTab:(id)arg1;
- (id)perTabGroupBookmarkListForFolderID:(int)arg1 filteredUsingString:(id)arg2;
- (void)performBatchUpdatesWithBlock:(id /* block */)arg1;
- (void)performSuppressingDataModelUpdates:(id /* block */)arg1;
- (void)persistActiveTabGroupOrTabGroupVisibleInSwitcher;
- (void)persistAllCurrentTabsInBackground:(bool)arg1;
- (void)persistTab:(id)arg1 notify:(bool)arg2;
- (void)persistTabs:(id)arg1 inTabGroupWithUUID:(id)arg2 inBackground:(bool)arg3;
- (id)pinnedTabDocuments;
- (id)pinnedTabs;
- (id)pinnedTabsManager;
- (void)pinnedTabsManager:(id)arg1 didUpdatePinnedTabs:(id)arg2 inProfileWithIdentifier:(id)arg3;
- (void)pinnedTabsManager:(id)arg1 didUpdatePinnedTabs:(id)arg2 isPrivate:(bool)arg3;
- (id)pinnedWBTabsForTabGroup:(id)arg1;
- (void)presentAlertToCreateTabGroupFromTabs:(id)arg1 withTitle:(id)arg2 message:(id)arg3 suggestedName:(id)arg4 okActionTitle:(id)arg5 completionHandler:(id /* block */)arg6;
- (id)privateActiveTabDocument;
- (void)privateBrowsingAvailabilityDidChange;
- (long long)privateBrowsingMode;
- (id)privateTabDocuments;
- (id)privateTabGroupIfAvailable;
- (id)privateTabs;
- (id)privateUnpinnedTabDocuments;
- (id)privateUnpinnedTabs;
- (id)profileCloudTabStore;
- (id)profiles;
- (id)profilesMenuElementsWithOptions:(unsigned long long)arg1 movingSelectedTabGroups:(id)arg2 actionHandler:(id /* block */)arg3;
- (bool)readState;
- (id)recentlyClosedTabsMenuForTabGroupWithUUID:(id)arg1;
- (void)registerTabGroupManagerObserver:(id)arg1;
- (void)registerUndoWithName:(id)arg1 actions:(id /* block */)arg2;
- (void)registerUndoWithType:(long long)arg1 actions:(id /* block */)arg2;
- (void)removeDocumentObserver:(id)arg1;
- (void)removeSingleBlankTabFromActiveTabGroup;
- (void)removeSingleBlankTabFromInactiveTabGroup:(id)arg1;
- (void)renameTabGroup:(id)arg1;
- (void)reorderPinnedTabsIntoPlace;
- (void)reorderScopedBookmarkWithUUID:(id)arg1 afterBookmarkWithUUID:(id)arg2 notify:(bool)arg3;
- (void)replaceBlankActiveTabWithTab:(id)arg1;
- (void)replaceTabDocument:(id)arg1 withTabDocument:(id)arg2;
- (void)replaceTabDocument:(id)arg1 withTabDocument:(id)arg2 committingSpeculativeLoad:(bool)arg3;
- (id)representativeURLForTabGroupConfirmationAlert:(id)arg1;
- (void)restoreEducationDeviceTabs;
- (void)saveStateInBackground:(bool)arg1;
- (void)saveStateInBackground:(bool)arg1 needsValidate:(bool)arg2;
- (void)saveTabDocumentUserActivitySoon:(id)arg1;
- (bool)scrollTabSwitcherToTabGroupIfShowing:(id)arg1;
- (bool)selectFirstUnpinnedTab;
- (void)selectLocalTabGroup;
- (void)selectNextTabGroup;
- (void)selectPreviousTabGroup;
- (void)selectPrivateTabGroup;
- (id)selectedTabForTabOrderProvider;
- (void)setActiveProfileIdentifier:(id)arg1;
- (void)setActiveTab:(id)arg1;
- (void)setActiveTab:(id)arg1 animated:(bool)arg2;
- (void)setActiveTab:(id)arg1 animated:(bool)arg2 deferActivation:(bool)arg3;
- (void)setActiveTabDocument:(id)arg1;
- (void)setActiveTabDocument:(id)arg1 animated:(bool)arg2;
- (void)setActiveTabDocument:(id)arg1 animated:(bool)arg2 deferActivation:(bool)arg3;
- (void)setActiveTabGroupUUID:(id)arg1;
- (void)setActiveTabUUID:(id)arg1;
- (void)setNormalActiveTabDocument:(id)arg1;
- (void)setPinnedTabsManager:(id)arg1;
- (void)setPrivateActiveTabDocument:(id)arg1;
- (void)setPrivateBrowsingEnabled:(bool)arg1;
- (void)setPrivateBrowsingMode:(long long)arg1;
- (void)setPrivateBrowsingMode:(long long)arg1 animated:(bool)arg2;
- (void)setShouldTogglePrivateBrowsingOnSplit:(bool)arg1;
- (void)setTab:(id)arg1 isPinned:(bool)arg2;
- (void)setTabDisplayMode:(long long)arg1;
- (void)setTitle:(id)arg1 forTabGroupWithUUID:(id)arg2;
- (void)setWBTabs:(id)arg1 arePinned:(bool)arg2;
- (void)setWindowState:(id)arg1;
- (id)shareRecordForActiveTabGroup;
- (id)shareRecordForActiveTabGroupIfIsShared;
- (bool)shouldAllowScrollingPinnedItems;
- (bool)shouldTogglePrivateBrowsingOnSplit;
- (id)singleUnpinnedBlankTab;
- (void)sortTabsInTabGroupWithUUIDString:(id)arg1 withSortMode:(long long)arg2;
- (void)sortTabsWithMode:(long long)arg1;
- (id)startPageBackgroundImageIdentifier;
- (id)submenuForSwitchingProfiles;
- (id)swipeActionsConfigurationForTab:(id)arg1 inTabGroup:(id)arg2;
- (id)swipeActionsConfigurationForTabGroup:(id)arg1 forPickerSheet:(bool)arg2;
- (void)switchOutOfSyncedTabGroup;
- (id)switchToTabDocumentForWebClip:(id)arg1;
- (void)switchToTabGroupVisibleInSwitcherIfNeeded;
- (bool)switchToTabWithUUID:(id)arg1 inTabGroupWithUUID:(id)arg2;
- (id)syntheticBookmarkFolderForTabGroup:(id)arg1 withAttribution:(bool)arg2;
- (id)syntheticBookmarkFoldersIncludingActiveTabGroup:(bool)arg1;
- (id)tabAtIndex:(unsigned long long)arg1;
- (id)tabBeingActivated;
- (id)tabCollectionViewProvider;
- (id)tabController;
- (long long)tabDisplayMode;
- (id)tabDocumentBeingActivated;
- (void)tabDocumentDidUpdateUUID:(id)arg1 previousUUID:(id)arg2;
- (id)tabDocumentForSpotlightSearch;
- (id)tabDocumentForURL:(id)arg1;
- (id)tabDocumentForURL:(id)arg1 forceUnhibernate:(bool)arg2;
- (id)tabDocumentWithUUID:(id)arg1;
- (id)tabDocuments;
- (id)tabDocumentsForAllTabGroups;
- (id)tabExposeMenu;
- (id)tabForURL:(id)arg1;
- (void)tabGroupConfirmationAlertDidBeginDismissal:(id)arg1;
- (id)tabGroupManager;
- (void)tabGroupManager:(id)arg1 didPerformBlockUpdatesForTabGroupWithUUID:(id)arg2;
- (void)tabGroupManager:(id)arg1 didRemoveTabGroupWithUUID:(id)arg2;
- (void)tabGroupManager:(id)arg1 didUpdateTabGroupWithUUID:(id)arg2;
- (void)tabGroupManager:(id)arg1 didUpdateTabWithUUID:(id)arg2 userDriven:(bool)arg3;
- (void)tabGroupManager:(id)arg1 didUpdateTabsInTabGroupWithUUID:(id)arg2;
- (void)tabGroupManager:(id)arg1 willPerformBlockUpdatesForTabGroupWithUUID:(id)arg2;
- (void)tabGroupManager:(id)arg1 willReplaceTabWithUUID:(id)arg2 withTabWithUUID:(id)arg3;
- (void)tabGroupManagerDidFinishSetup:(id)arg1;
- (void)tabGroupManagerDidUpdateTabGroups:(id)arg1;
- (void)tabGroupNamingTextDidChange:(id)arg1;
- (id)tabGroupRelatedToTabWithUUID:(id)arg1;
- (id)tabGroupShareSheetForCurrentTabGroup;
- (id)tabGroupWithUUID:(id)arg1;
- (id)tabGroups;
- (id)tabGroupsForProfileWithIdentifier:(id)arg1;
- (id)tabGroupsMenuChildrenProvider;
- (id)tabGroupsMenuElementsWithOptions:(unsigned long long)arg1 newTabGroupName:(id)arg2 hostTitle:(id)arg3 descendantCount:(long long)arg4 movingSelectedTabs:(id)arg5 actionHandler:(id /* block */)arg6;
- (id)tabGroupsMenuElementsWithOptions:(unsigned long long)arg1 newTabGroupName:(id)arg2 hostTitle:(id)arg3 descendantCount:(long long)arg4 movingSelectedTabs:(id)arg5 actionHandler:(id /* block */)arg6 dismissHandler:(id /* block */)arg7;
- (id)tabGroupsMenuForTabGroupButton:(bool)arg1;
- (id)tabMenuProviderDataSource;
- (id)tabOrderManager;
- (id)tabOverviewCollaborationButton;
- (void)tabSwitcherShareConfigurationForTabGroup:(id)arg1 completion:(id /* block */)arg2;
- (id)tabWithIDForWebExtensions:(double)arg1;
- (id)tabWithUUID:(id)arg1;
- (id)tabsMatchingSearchTerm;
- (id)tabsOlderThan:(id)arg1 inPrivateBrowsing:(bool)arg2;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)togglePinningTab:(id)arg1 inInactiveTabGroup:(id)arg2;
- (void)toggleTabGroupUUIDExpanded:(id)arg1;
- (id)topScopedBookmarkListForActiveTabGroup;
- (bool)trySwitchingToPinnedTabOnNavigationToURL:(id)arg1;
- (id)undoManager;
- (id)unnamedTabGroup;
- (id /* block */)unnamedTabGroupDisplayTitleProvider;
- (id)unnamedTabGroups;
- (id)unpinnedTabDocuments;
- (id)unpinnedTabs;
- (void)updateActiveTab;
- (void)updateBackgroundImageForProfile:(id)arg1;
- (void)updateBackgroundImageForTabGroup:(id)arg1;
- (void)updateEducationTabsLastSyncDate;
- (void)updateFocusProfileEnteringForeground;
- (void)updateFocusedTabGroupEnteringForeground;
- (void)updateHibernatedTabDocumentsSavingState;
- (void)updateLocalTabGroupTitle;
- (void)updateLockedBrowsingState;
- (id)updateProfileWithIdentifier:(id)arg1 persist:(bool)arg2 usingBlock:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (void)updateScopedBookmarkWithUUID:(id)arg1 title:(id)arg2 address:(id)arg3;
- (void)updateSelectedTabGroupName;
- (void)updateTabCount;
- (void)updateUsageTrackingInformationIfNecessary;
- (void)updateWBTabWithTab:(id)arg1 notify:(bool)arg2 persist:(bool)arg3;
- (bool)updatingTabGroupTabs;
- (id)wbTabWithUUID:(id)arg1;
- (void)willLoseOwnershipOfTab:(id)arg1;
- (void)willSelectProfileWithIdentifier:(id)arg1;
- (id)windowState;

@end
