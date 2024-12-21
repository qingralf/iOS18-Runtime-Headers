/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
 */

@interface WBSTabGroupTouchIconProvider : WBSBookmarkFolderTouchIconProvider <WBTabGroupManagerObserver>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)backgroundColor;
- (bool)canHandleRequest:(id)arg1;
- (bool)canProvideUpdatesForRequest:(id)arg1;
- (id)configuration;
- (id)defaultFolderIconForRequest:(id)arg1;
- (id)folderUUIDForRequest:(id)arg1;
- (id)iconForTabGroup:(id)arg1;
- (id)subrequestsForRequest:(id)arg1 maximumNumberOfSubrequests:(unsigned long long)arg2;
- (void)tabGroupManager:(id)arg1 didRemoveTabGroupWithUUID:(id)arg2;
- (void)tabGroupManager:(id)arg1 didUpdateTabsInTabGroupWithUUID:(id)arg2;

@end