/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iCloudSettings.framework/iCloudSettings
 */

@interface iCloudSettings.iCloudHomeViewModel : NSObject <AMSUIWebDelegate, ICQUpgradeFlowManagerDelegate, ICSCloudHomeViewDelegate, SFSafariViewControllerDelegate> {
    void $__lazy_storage_$_appDownloadFlowManager;
    void $__lazy_storage_$_numberFormatter;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _$observationRegistrar;
    void _ADPView;
    void _accountDidChange;
    void _adpSectionViewModel;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _appendSettingsNavigationPath;
    void _backupDetailLabel;
    void _backupManager;
    void _backupStatusDotColor;
    void _backupSubtitle;
    void _commerceFlowManager;
    void _customEmailPresenter;
    void _dataModel;
    void _dataclassValidationController;
    void _delayedAMSCIPURLString;
    void _delayedDeeplinkURLString;
    void _familyCircleStateController;
    void _featureManagerObserver;
    void _hmePresenter;
    void _hmeSubtitle;
    void _keychainDataclassEnabled;
    void _keychainDataclassSubtitle;
    void _keychainSyncNotificationToken;
    void _legacyManagePlanController;
    void _legacyManagePlanFlowManager;
    void _legacyRUIController;
    void _loadingiCloudHomeSubview;
    void _mailSettingsProvider;
    void _manageSubsPresenter;
    void _navigationController;
    void _notesDataclassSubtitle;
    void _privateRelayAccess;
    void _privateRelaySubtitle;
    void _privateRelayViewController;
    void _privateRelayViewModel;
    void _safariWebViewController;
    void _shouldReportStatefulImpression;
    void _titleAlpha;
    void _titleLabel;
    void _upgradeFlowManager;
    void accountManager;
    void analyticsController;
    void dataController;
    void launchedFromRootLevel;
    void presentingViewController;
    void pushingLoadingTask;
}

@property (nonatomic, readonly) _TtC14iCloudSettings22ICSAnalyticsController *analyticsController;
@property (nonatomic, readonly) NSString *driveDataclassSubtitle;
@property (nonatomic, readonly) NSString *mailDataclassSubtitle;
@property (nonatomic, readonly) NSString *photosDataclassSubtitle;

- (void).cxx_destruct;
- (id)analyticsController;
- (void)dealloc;
- (void)didStartLoadingWithView:(long long)arg1;
- (void)didStopLoadingWithView:(long long)arg1;
- (id)driveDataclassSubtitle;
- (id)expandedSubTitleForDataclass:(id)arg1;
- (id)expandedSubTitleForService:(id)arg1;
- (id)init;
- (id)mailDataclassSubtitle;
- (id)photosDataclassSubtitle;
- (void)safariViewControllerDidFinish:(id)arg1;
- (void)upgradeFlowManagerDidCancel:(id)arg1;
- (void)upgradeFlowManagerDidComplete:(id)arg1;
- (void)upgradeFlowManagerDidFail:(id)arg1 error:(id)arg2;
- (bool)webViewController:(id)arg1 handleDelegateAction:(id)arg2 completion:(id /* block */)arg3;

@end
