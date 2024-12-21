/* Generated by RuntimeBrowser.
 */

@protocol WKWebExtensionTab <NSObject>

@optional

- (void)activateForWebExtensionContext:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: WKWebExtensionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)closeForWebExtensionContext:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: WKWebExtensionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)detectWebpageLocaleForWebExtensionContext:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: WKWebExtensionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSLocale *, NSError *, void*
- (void)duplicateUsingConfiguration:(void *)arg1 forWebExtensionContext:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: WKWebExtensionTabConfiguration *, WKWebExtensionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <WKWebExtensionTab> *, NSError *, void*
- (void)goBackForWebExtensionContext:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: WKWebExtensionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)goForwardForWebExtensionContext:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: WKWebExtensionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (unsigned long long)indexInWindowForWebExtensionContext:(WKWebExtensionContext *)arg1;
- (bool)isLoadingCompleteForWebExtensionContext:(WKWebExtensionContext *)arg1;
- (bool)isMutedForWebExtensionContext:(WKWebExtensionContext *)arg1;
- (bool)isPinnedForWebExtensionContext:(WKWebExtensionContext *)arg1;
- (bool)isPlayingAudioForWebExtensionContext:(WKWebExtensionContext *)arg1;
- (bool)isReaderModeActiveForWebExtensionContext:(WKWebExtensionContext *)arg1;
- (bool)isReaderModeAvailableForWebExtensionContext:(WKWebExtensionContext *)arg1;
- (bool)isSelectedForWebExtensionContext:(WKWebExtensionContext *)arg1;
- (void)loadURL:(void *)arg1 forWebExtensionContext:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSURL *, WKWebExtensionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (<WKWebExtensionTab> *)parentTabForWebExtensionContext:(WKWebExtensionContext *)arg1;
- (NSURL *)pendingURLForWebExtensionContext:(WKWebExtensionContext *)arg1;
- (void)reloadFromOrigin:(void *)arg1 forWebExtensionContext:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: bool, WKWebExtensionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setMuted:(void *)arg1 forWebExtensionContext:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: bool, WKWebExtensionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setParentTab:(void *)arg1 forWebExtensionContext:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: <WKWebExtensionTab> *, WKWebExtensionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setPinned:(void *)arg1 forWebExtensionContext:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: bool, WKWebExtensionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setReaderModeActive:(void *)arg1 forWebExtensionContext:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: bool, WKWebExtensionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setSelected:(void *)arg1 forWebExtensionContext:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: bool, WKWebExtensionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setZoomFactor:(void *)arg1 forWebExtensionContext:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: double, WKWebExtensionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (bool)shouldGrantPermissionsOnUserGestureForWebExtensionContext:(WKWebExtensionContext *)arg1;
- (struct CGSize { double x1; double x2; })sizeForWebExtensionContext:(WKWebExtensionContext *)arg1;
- (void)takeSnapshotUsingConfiguration:(void *)arg1 forWebExtensionContext:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: WKSnapshotConfiguration *, WKWebExtensionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIImage *, NSError *, void*
- (NSString *)titleForWebExtensionContext:(WKWebExtensionContext *)arg1;
- (NSURL *)urlForWebExtensionContext:(WKWebExtensionContext *)arg1;
- (WKWebView *)webViewForWebExtensionContext:(WKWebExtensionContext *)arg1;
- (<WKWebExtensionWindow> *)windowForWebExtensionContext:(WKWebExtensionContext *)arg1;
- (double)zoomFactorForWebExtensionContext:(WKWebExtensionContext *)arg1;

@end