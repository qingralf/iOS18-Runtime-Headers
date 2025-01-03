/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIAccountSettingsViewController : PSListController <UITableViewDataSource, UITextFieldDelegate, WLKPostPlayAutoPlayToggleInterfaceDelegate> {
    NSNumber * __pendingSyncMySportsEnabled;
    NSNumber * __syncMySportsEnabled;
    NSURL * _addFundsUrl;
    bool  _authenticationInProgress;
    PSSpecifier * _autoPlayNextEpisodeSpecifier;
    PSSpecifier * _autoPlayRecommendedItemsSpecifier;
    WLKPostPlayAutoPlayToggleInterface * _autoPlayToggleInterface;
    long long  _connectedWatchListAppCount;
    long long  _initialSubsection;
    long long  _installedWatchListAppCount;
    long long  _notifAuthStatus;
    NSTimer * _syncMySportsDebouncer;
    NSTimer * _syncMySportsNotifyDebouncer;
    PSSpecifier * _syncMySportsSpecifier;
}

@property (nonatomic) NSNumber *_pendingSyncMySportsEnabled;
@property (nonatomic, retain) NSNumber *_syncMySportsEnabled;
@property (nonatomic, retain) NSURL *addFundsUrl;
@property (nonatomic) bool authenticationInProgress;
@property (nonatomic, retain) PSSpecifier *autoPlayNextEpisodeSpecifier;
@property (nonatomic, retain) PSSpecifier *autoPlayRecommendedItemsSpecifier;
@property (nonatomic, retain) WLKPostPlayAutoPlayToggleInterface *autoPlayToggleInterface;
@property (nonatomic) long long connectedWatchListAppCount;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long initialSubsection;
@property (nonatomic) long long installedWatchListAppCount;
@property (nonatomic) long long notifAuthStatus;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSTimer *syncMySportsDebouncer;
@property (nonatomic, retain) NSTimer *syncMySportsNotifyDebouncer;
@property (nonatomic, retain) PSSpecifier *syncMySportsSpecifier;

- (void).cxx_destruct;
- (id)_accountSpecifiers;
- (void)_addPrivacyFooterToGroup:(id)arg1;
- (long long)_alertStyle;
- (id)_autoPlayNextVideoSpecifiers;
- (void)_checkConnectedAppsWithDispatchGroup:(id)arg1;
- (void)_checkExternalLinksWithDispatchGroup:(id)arg1;
- (id)_clearHistorySpecifiers;
- (void)_clearPlayHistory:(id)arg1;
- (id)_createAxIdFromTableCell:(id)arg1;
- (id)_dialogMetricsData;
- (void)_didSelectSpecifier:(id)arg1;
- (void)_didSelectSpecifier:(id)arg1 isManualSelection:(bool)arg2;
- (void)_dismissViewController;
- (id)_externalSpecifiers;
- (void)_fetchMySportsSyncSettingWithCompletion:(id /* block */)arg1;
- (id)_getConnectedAppsCountString;
- (void)_handleAccountSettingsEventWithAmsWebView:(id)arg1;
- (void)_handleAccountSettingsEventWithAmsWebView:(id)arg1 storeServicesBagKey:(id)arg2 storeServicesUrl:(id)arg3;
- (void)_handleAccountSettingsEventWithUrl:(id)arg1 amsBagKey:(id)arg2 useAMSWebView:(bool)arg3;
- (void)_handleNotificationsOff;
- (id)_mySportsSpecifiers;
- (void)_navigateToSubsection:(long long)arg1 clearSubsection:(bool)arg2;
- (id)_notificationGroupSpecifierIdentifier;
- (id)_notificationSpecifiers;
- (void)_parseUrl:(id)arg1;
- (id)_pendingSyncMySportsEnabled;
- (void)_promptForNotificationsAuth;
- (void)_recordDialogClick:(id)arg1;
- (void)_resolveLandingBehavior;
- (void)_setSyncMySportsEnabled:(id)arg1;
- (void)_showPrivacySheet:(id)arg1;
- (id)_signOutSpecifiers;
- (id)_sourcesSpecifiers;
- (id)_syncMySportsEnabled;
- (void)_syncMySportsSettingDidChange:(id)arg1;
- (id)addFundsUrl;
- (bool)authenticationInProgress;
- (id)autoPlayNextEpisodeSpecifier;
- (id)autoPlayRecommendedItemsSpecifier;
- (id)autoPlayToggleInterface;
- (long long)connectedWatchListAppCount;
- (id)init;
- (long long)initialSubsection;
- (long long)installedWatchListAppCount;
- (void)nextEpisodeSettingDidChange;
- (long long)notifAuthStatus;
- (void)recommendedItemsSettingDidChange;
- (void)setAddFundsUrl:(id)arg1;
- (void)setAuthenticationInProgress:(bool)arg1;
- (void)setAutoPlayNextEpisodeSpecifier:(id)arg1;
- (void)setAutoPlayRecommendedItemsSpecifier:(id)arg1;
- (void)setAutoPlayToggleInterface:(id)arg1;
- (void)setConnectedWatchListAppCount:(long long)arg1;
- (void)setInitialSubsection:(long long)arg1;
- (void)setInstalledWatchListAppCount:(long long)arg1;
- (void)setNotifAuthStatus:(long long)arg1;
- (void)setSyncMySportsDebouncer:(id)arg1;
- (void)setSyncMySportsNotifyDebouncer:(id)arg1;
- (void)setSyncMySportsSpecifier:(id)arg1;
- (void)set_pendingSyncMySportsEnabled:(id)arg1;
- (void)set_syncMySportsEnabled:(id)arg1;
- (id)specifiers;
- (id)syncMySportsDebouncer;
- (id)syncMySportsNotifyDebouncer;
- (id)syncMySportsSpecifier;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
