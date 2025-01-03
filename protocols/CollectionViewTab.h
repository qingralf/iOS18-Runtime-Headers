/* Generated by RuntimeBrowser.
 */

@protocol CollectionViewTab <BookmarkableTab, WBSOrderedTab, WBSTabItemSearchSupport, WBSWebExtensionTab>

@required

- (NSString *)addressForNewBookmark;
- (NSArray *)ancestorUUIDs;
- (BrowserController *)browserController;
- (bool)canSetPinned;
- (void)clearBackForwardList;
- (void)clearBrowserController;
- (WBSCloudTab *)cloudTab;
- (NSURL *)committedURL;
- (bool)hasBeenInserted;
- (bool)isActive;
- (bool)isBlank;
- (bool)isClosed;
- (bool)isLoading;
- (bool)isPinned;
- (bool)isPrivateBrowsingEnabled;
- (bool)isReusableForURL:(NSURL *)arg1 webClipURL:(NSURL *)arg2;
- (bool)isShowingSystemStartPage;
- (bool)isUnread;
- (<TabCollectionItem> *)itemForTabCollectionView:(id <TabCollectionView>)arg1;
- (double)lastViewedTime;
- (LPLinkMetadata *)linkMetadataForSharing;
- (void)loadURL:(NSURL *)arg1 title:(NSString *)arg2 skipSyncableTabUpdates:(bool)arg3;
- (SFNavigationBarItem *)navigationBarItem;
- (long long)pageStatus;
- (NSString *)pinnedTitle;
- (NSURL *)pinnedURL;
- (void)resetTabViewItems;
- (void)restoreStateFromTab:(WBTab *)arg1;
- (void)setBrowserController:(BrowserController *)arg1;
- (void)setClosed:(bool)arg1;
- (void)setHasBeenInserted:(bool)arg1;
- (void)setLastViewedTime:(double)arg1;
- (void)setNeedsNewTabSnapshot;
- (void)setPinned:(bool)arg1;
- (void)setPinnedTitle:(NSString *)arg1;
- (void)setPinnedURL:(NSURL *)arg1;
- (void)setShareParticipants:(NSArray *)arg1;
- (void)setSuppressWebExtensionEvents:(bool)arg1;
- (void)setUnread:(bool)arg1;
- (void)setWBTab:(WBTab *)arg1;
- (NSArray *)shareParticipants;
- (bool)suppressWebExtensionEvents;
- (TabBarItem *)tabBarItem;
- (TabDocumentCollectionItem *)tabCollectionItem;
- (NSArray *)tabCollectionItems;
- (TabOverviewItem *)tabOverviewItem;
- (SFTabStateData *)tabStateData;
- (id /* block */)tabUpdateBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, WBMutableTab *, void*, id, SEL
- (NSString *)titleForNewBookmark;
- (_SFBarTheme *)topBarThemeForTabOverviewShowingThemeColor:(bool)arg1;
- (UnifiedTabBarItem *)unifiedTabBarItem;
- (void)updateAncestryWithParentTab:(id <CollectionViewTab>)arg1;
- (void)updateTabIcon;
- (void)updateTabIconWithDelay:(double)arg1;
- (void)updateUsesDarkTheme;
- (NSURL *)url;
- (NSURL *)urlForSharing;
- (NSUUID *)uuid;
- (NSString *)uuidString;
- (WBTab *)wbTab;
- (NSUUID *)webClipID;
- (SFWebExtensionsController *)webExtensionsController;
- (void)willClose;

@end
