/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileSafari.framework/MobileSafari
 */

@interface SFWebExtension : WBSWebExtensionData {
    NSArray * _accessRequestDialogCompletionHandlers;
    bool  _isAccessRequestDialogPresentedOrScheduled;
    bool  _isBannerShownOrScheduled;
}

@property (nonatomic, readonly) WKWebViewConfiguration *extensionWebViewConfiguration;
@property (nonatomic, readonly) bool isDevelopmentBuild;

// Image: /System/Library/PrivateFrameworks/MobileSafari.framework/MobileSafari

- (void).cxx_destruct;
- (bool)_applicationIsActive;
- (id)_backgroundWebViewConfiguration;
- (bool)_canShowBanner;
- (void)_hidePermissionBanner;
- (id)_lastInteractionDate;
- (void)_showAccessRequestDialogForPendingRequestsAndAdditionalURLs:(id)arg1 additionalCallingAPIName:(id)arg2 performingUserGestureInTab:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)_updateLastInteractionDate;
- (bool)canLoadWithErrorString:(id*)arg1;
- (id)extensionWebViewConfiguration;
- (bool)isDevelopmentBuild;
- (void)permissionRequestBannerWasDismissed;
- (void)promptForAccessToURLs:(id)arg1 inTab:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)requestPermissionsFromToolbarItemInTab:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)showAlertForPendingPermissionRequests;
- (void)showOrHidePermissionRequestBannerIfNeeded;
- (void)userGesturePerformedInTab:(id)arg1;

// Image: /System/Library/Frameworks/SafariServices.framework/SafariServices

- (void)_loadToolbarItem;
- (void)_loadToolbarItemInPrivateBrowsing;
- (void)_unloadToolbarItem;
- (void)_unloadToolbarItemInPrivateBrowsing;
- (void)_validateToolbarItemInAllWindows;

@end
