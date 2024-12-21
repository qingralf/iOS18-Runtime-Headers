/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileSafariUI.framework/MobileSafariUI
 */

@interface TabMenuProvider : NSObject

+ (id)_bottomMenuForTab:(id)arg1 dataSource:(id)arg2 options:(unsigned long long)arg3;
+ (id)_closeActionForTab:(id)arg1 dataSource:(id)arg2;
+ (id)_closeActionForTab:(id)arg1 inBackgroundTabGroup:(id)arg2 dataSource:(id)arg3;
+ (id)_closeOtherTabsActionForTab:(id)arg1 dataSource:(id)arg2;
+ (id)_closeOtherTabsActionForTab:(id)arg1 inBackgroundTabGroup:(id)arg2 dataSource:(id)arg3;
+ (id)_copyActionsForTab:(id)arg1 options:(unsigned long long)arg2;
+ (id)_copyMenuForTabGroupTab:(id)arg1;
+ (id)_mainMenuForTab:(id)arg1 dataSource:(id)arg2 options:(unsigned long long)arg3;
+ (id)_moveMenuForTabGroupTab:(id)arg1 inTabGroup:(id)arg2 dataSource:(id)arg3;
+ (id)_pinTabActionForTabGroupTab:(id)arg1 inTabGroup:(id)arg2 dataSource:(id)arg3;
+ (id)_readerActionForTabDocument:(id)arg1;
+ (id)_shareCommand;
+ (id)_sortMenuForTab:(id)arg1 dataSource:(id)arg2;
+ (id)_stopReloadActionForTabDocument:(id)arg1;
+ (id)_toggleVoiceSearchActionForTabDocument:(id)arg1;
+ (id /* block */)actionProviderForTab:(id)arg1 dataSource:(id)arg2 options:(unsigned long long)arg3;
+ (id /* block */)actionProviderForTabGroupTab:(id)arg1 inTabGroup:(id)arg2 dataSource:(id)arg3 options:(unsigned long long)arg4;
+ (id)bookmarkActionForTabGroup:(id)arg1 dataSource:(id)arg2;
+ (id)copyLinksActionForTabGroup:(id)arg1;
+ (id)moveMenuForTab:(id)arg1 dataSource:(id)arg2;
+ (id)moveMenuForTab:(id)arg1 dataSource:(id)arg2 showTitle:(bool)arg3 dismissHandler:(id /* block */)arg4;
+ (id)moveMenuForTabGroup:(id)arg1 dataSource:(id)arg2;
+ (id)pinTabActionForTab:(id)arg1 dataSource:(id)arg2;
+ (id)sortMenuForTabGroup:(id)arg1 dataSource:(id)arg2;

@end