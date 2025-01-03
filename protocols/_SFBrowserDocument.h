/* Generated by RuntimeBrowser.
 */

@protocol _SFBrowserDocument <NSObject>

@required

- (NSURL *)URLForPerSitePreferences;
- (_SFWebView *)activeWebView;
- (bool)allowsBrowsingAssistant;
- (WBSBrowsingAssistantController *)assistantController;
- (bool)browserHasMultipleProfiles;
- (bool)canHideToolbar;
- (SFContentBlockerManager *)contentBlockerManager;
- (bool)hasEnteredScribbleMode;
- (bool)isBlockedByScreenTime;
- (bool)isNavigatingViaReloadWithoutPrivateRelay;
- (bool)isPlayingAudio;
- (bool)isPrivateBrowsingEnabled;
- (bool)isSecure;
- (bool)isShowingSystemStartPage;
- (unsigned long long)mediaStateIcon;
- (_SFPerSitePreferencesVendor *)perSitePreferencesVendor;
- (void)perSiteSettingsUIPresentSettings;
- (bool)privacyReportShouldSeparateBlockedTrackers;
- (<SFReaderContext> *)readerContext;
- (void)reload;
- (void)reloadDisablingAdvancedPrivateBrowsingPrivacyProtections:(bool)arg1;
- (void)reloadDisablingContentBlockers:(bool)arg1;
- (void)reloadEnablingDowngradedPrivateRelay:(bool)arg1;
- (_SFReloadOptionsController *)reloadOptionsController;
- (void)setIsNavigatingViaReloadWithoutPrivateRelay:(bool)arg1;
- (void)setUuid:(NSUUID *)arg1;
- (SFScribbleController *)sfScribbleController;
- (void)showFindOnPage;
- (bool)supportsAdvancedPrivacyProtectionsForURL:(NSURL *)arg1;
- (void)toggleMediaStateMuted;
- (WBSTranslationContext *)translationContext;
- (NSUUID *)uuid;
- (bool)wasLoadedWithAdvancedPrivateBrowsingPrivacyProtections;
- (bool)wasLoadedWithContentBlockersEnabled;
- (bool)wasLoadedWithPrivateRelay;
- (SFWebExtensionsController *)webExtensionsController;
- (_SFWebView *)webView;

@optional

- (NSSet *)allBrowserHistories;
- (NSSet *)allBrowserProfileIdentifiers;
- (void)dismissSiriReaderMediaSessionImmediately:(bool)arg1;
- (SFBrowserDocumentTrackerInfo *)trackerInfo;

@end
