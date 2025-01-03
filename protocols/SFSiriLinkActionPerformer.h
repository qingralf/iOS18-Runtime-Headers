/* Generated by RuntimeBrowser.
 */

@protocol SFSiriLinkActionPerformer <NSObject>

@required

- (bool)canReadActiveLanguage;
- (bool)canReadThis;
- (void)closeStartPage;
- (void)closeTabWithUUID:(NSUUID *)arg1;
- (void)createNewBookmarkWithTitle:(NSString *)arg1;
- (void)createNewPrivateTab;
- (NSString *)createNewTabGroupWithTitle:(NSString *)arg1;
- (void)createNewTabWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSUUID *, void*
- (void)createNewTabWithURL:(void *)arg1 isPrivate:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSURL *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSUUID *, void*
- (void)createReadingListItem;
- (void)findString:(NSString *)arg1 onTabWithUUID:(NSUUID *)arg2;
- (void)navigateContinuousReadingListToDirection:(unsigned long long)arg1;
- (void)openBookmarkWithUUIDString:(NSString *)arg1;
- (void)openBookmarkWithUUIDString:(NSString *)arg1 inTabWithUUID:(NSUUID *)arg2;
- (void)openClearHistoryViewControllerFor:(NSString *)arg1;
- (void)openStartPage;
- (void)openTabGroupOfKind:(long long)arg1 uuidString:(NSString *)arg2;
- (void)openTabWithUUID:(NSUUID *)arg1;
- (void)performSearchUsingQuery:(NSString *)arg1;
- (void)performTabSearchUsingQuery:(NSString *)arg1;
- (void)setReaderModeEnabled:(bool)arg1;
- (void)setView:(unsigned long long)arg1 visible:(bool)arg2;
- (void)siriReadThisVocalInvocation;
- (void)toggleReaderMode;

@end
