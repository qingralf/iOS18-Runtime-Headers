/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFWebExtensionPageMenuController : WBSWebExtensionToolbarItem <WBSWebExtensionToolbarItemImplementation, WKUIDelegate> {
    _SFWebExtensionActivity * _activityItem;
    _SFWebExtensionSettingsAlertItem * _alertItem;
    UIViewController * _parentViewController;
    UIViewController * _popupViewController;
    <WBSWebExtensionTab> * _tab;
    <WBSWebExtensionWindow> * _windowDisplayingPopupWebView;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <WBSWebExtensionWindow> *windowDisplayingPopupWebView;

+ (id)_imageViewForWarningTriangleImage:(id)arg1;
+ (id)badgeViewForText:(id)arg1;

- (void).cxx_destruct;
- (void)_createTabWithURL:(id)arg1;
- (bool)_showPerSitePermissionsForTab:(id)arg1 permissionGrantedHandler:(id /* block */)arg2;
- (id)activityForTab:(id)arg1;
- (id)alertItemForTab:(id)arg1;
- (void)didSetBadgeText:(id)arg1 forTab:(id)arg2;
- (void)didSetEnabledState:(bool)arg1 forTab:(id)arg2;
- (void)didSetIcon:(id)arg1 forTab:(id)arg2;
- (void)dismissPopupImmediatelyIfNecessary;
- (id)iconForTab:(id)arg1;
- (id)iconForTab:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (id)initWithExtension:(id)arg1;
- (void)performActionForTab:(id)arg1 parentViewController:(id)arg2 popoverSourceInfo:(id)arg3;
- (void)popupDidNavigateRequestingNewWindowToURL:(id)arg1;
- (bool)shouldShowWarningTriangleImageForTab:(id)arg1;
- (void)showPopupOrPerSitePermissionsForTab:(id)arg1 parentViewController:(id)arg2 popoverSourceInfo:(id)arg3;
- (bool)showingExtensionPopup;
- (bool)wantsGrayscaleIconForTab:(id)arg1;
- (bool)wantsTemplateIconForTab:(id)arg1;
- (void)webKitExtensionAction:(id)arg1 didChangeForTab:(id)arg2;
- (id)webView:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 windowFeatures:(id)arg4;
- (void)webViewDidClose:(id)arg1;
- (id)windowDisplayingPopupWebView;

@end
