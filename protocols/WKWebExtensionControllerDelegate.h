/* Generated by RuntimeBrowser.
 */

@protocol WKWebExtensionControllerDelegate <NSObject>

@optional

- (void)webExtensionController:(void *)arg1 connectUsingMessagePort:(void *)arg2 forExtensionContext:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: WKWebExtensionController *, WKWebExtensionMessagePort *, WKWebExtensionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (<WKWebExtensionWindow> *)webExtensionController:(WKWebExtensionController *)arg1 focusedWindowForExtensionContext:(WKWebExtensionContext *)arg2;
- (void)webExtensionController:(void *)arg1 openNewTabUsingConfiguration:(void *)arg2 forExtensionContext:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: WKWebExtensionController *, WKWebExtensionTabConfiguration *, WKWebExtensionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <WKWebExtensionTab> *, NSError *, void*
- (void)webExtensionController:(void *)arg1 openNewWindowUsingConfiguration:(void *)arg2 forExtensionContext:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: WKWebExtensionController *, WKWebExtensionWindowConfiguration *, WKWebExtensionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <WKWebExtensionWindow> *, NSError *, void*
- (void)webExtensionController:(void *)arg1 openOptionsPageForExtensionContext:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: WKWebExtensionController *, WKWebExtensionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (NSArray *)webExtensionController:(WKWebExtensionController *)arg1 openWindowsForExtensionContext:(WKWebExtensionContext *)arg2;
- (void)webExtensionController:(void *)arg1 presentPopupForAction:(void *)arg2 forExtensionContext:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: WKWebExtensionController *, WKWebExtensionAction *, WKWebExtensionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)webExtensionController:(void *)arg1 promptForPermissionMatchPatterns:(void *)arg2 inTab:(void *)arg3 forExtensionContext:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 11: WKWebExtensionController *, NSSet *, <WKWebExtensionTab> *, WKWebExtensionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, NSDate *, void*
- (void)webExtensionController:(void *)arg1 promptForPermissionToAccessURLs:(void *)arg2 inTab:(void *)arg3 forExtensionContext:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 11: WKWebExtensionController *, NSSet *, <WKWebExtensionTab> *, WKWebExtensionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, NSDate *, void*
- (void)webExtensionController:(void *)arg1 promptForPermissions:(void *)arg2 inTab:(void *)arg3 forExtensionContext:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 11: WKWebExtensionController *, NSSet *, <WKWebExtensionTab> *, WKWebExtensionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, NSDate *, void*
- (void)webExtensionController:(void *)arg1 sendMessage:(void *)arg2 toApplicationWithIdentifier:(void *)arg3 forExtensionContext:(void *)arg4 replyHandler:(void *)arg5; // needs 5 arg types, found 11: WKWebExtensionController *, id, NSString *, WKWebExtensionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, NSError *, void*

@end