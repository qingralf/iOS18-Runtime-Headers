/* Generated by RuntimeBrowser.
 */

@protocol TabCollectionViewManagerDataSource <TabGroupProvider>

@required

- (TabDocument *)activeNonLibraryTab;
- (TabDocument *)activeTabDocument;
- (NSArray *)alternateTabs;
- (bool)canCloseTabWithUUID:(NSUUID *)arg1;
- (void)clearHiddenTabForExplanationView;
- (void)clearTabsClosedWhileTabViewPresentedCount;
- (void)closeTab:(id <CollectionViewTab>)arg1 animated:(bool)arg2;
- (void)closeTabs:(NSArray *)arg1 animated:(bool)arg2;
- (NSArray *)currentTabs;
- (void)didSetUpTabOverview;
- (void)didSetUpTabSwitcherViewController;
- (NSArray *)dropTabsAtIndex:(unsigned long long)arg1 pinned:(bool)arg2 dropSession:(id <UIDropSession>)arg3 dragItems:(NSArray *)arg4;
- (<CollectionViewTab> *)hiddenTabForExplanationView;
- (void)insertTabDocumentFromTabStateData:(SFTabStateData *)arg1;
- (void)insertTabWithUUIDForNavigation:(NSUUID *)arg1;
- (NSArray *)normalAndPrivateTabs;
- (void)openNewTabWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)performBatchUpdatesWithBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)registerUndoWithType:(void *)arg1 actions:(void *)arg2; // needs 2 arg types, found 6: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setActiveTab:(id <CollectionViewTab>)arg1;
- (bool)shouldAllowScrollingPinnedItems;
- (TabController *)tabController;
- (TabDocument *)tabDocumentWithUUID:(NSUUID *)arg1;
- (WBTabGroup *)tabGroupRelatedToTabWithUUID:(NSString *)arg1;
- (<TabMenuProviderDataSource> *)tabMenuProviderDataSource;
- (<CollectionViewTab> *)tabWithUUID:(NSUUID *)arg1;
- (NSUndoManager *)undoManager;
- (WBTab *)wbTabWithUUID:(NSString *)arg1;

@end
