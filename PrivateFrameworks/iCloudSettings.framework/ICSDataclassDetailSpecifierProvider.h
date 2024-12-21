/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iCloudSettings.framework/iCloudSettings
 */

@interface ICSDataclassDetailSpecifierProvider : NSObject <AAUISpecifierProvider, ICSUbiquitySpecifierProviderDelegate> {
    AIDAAccountManager * _accountManager;
    _TtC14iCloudSettings22ICSAnalyticsController * _analyticsController;
    ICQAppCloudStorage * _appCloudStorage;
    ICQAppsSyncingToDrive * _appsSyncingToDrive;
    bool  _appsSyncingToDriveRequestDidError;
    NSString * _dataclass;
    <AAUISpecifierProviderDelegate> * _delegate;
    <AAUISpecifierProvider> * _healthSpecifierProvider;
    bool  _isAppsSyncingToDriveRequestInProgress;
    bool  _isStorageUsedRequestInProgress;
    ICSManageStorageDrilldownController * _manageStorageController;
    int  _numberOfAppsSyncingToDrive;
    UIViewController * _presenter;
    NSArray * _specifiers;
    bool  _storageUsedRequestDidError;
    ICSUbiquitySpecifierProvider * _ubiquitySpecifierProvider;
}

@property (nonatomic, copy) NSString *dataclass;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <AAUISpecifierProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *specifiers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (Class)_cloudMessageDetailControllerClass;
- (id)_fetchNumberOfAppsSyncingToDrive:(id)arg1;
- (id)_fetchStorageUsed:(id)arg1;
- (void)_fetchStorageUsedAndRefreshSpecifier;
- (id)_headerGroupSpecifiers;
- (id)_iconForDataclass:(id)arg1;
- (id)_loadHealthSpecifierProvider;
- (void)_setValue:(id)arg1 forSpecifier:(id)arg2;
- (void)_setupAppsSyncingToDriveSpecifier:(id)arg1;
- (void)_setupStorageUsedSpecifier:(id)arg1;
- (bool)_shouldShowSyncingToDriveGroupSpecifier;
- (id)_specifierAttributedLink;
- (id)_specifierForHealth;
- (id)_specifierSubTitle;
- (id)_specifierSwitchState:(id)arg1;
- (id)_specifierTitle;
- (id)_storageUsedGroupSpecifiers;
- (void)_storageUsedWasTapped:(id)arg1;
- (id)_switchSpecifierWithTitle:(id)arg1;
- (id)_syncingToDriveGroupSpecifiers;
- (id)_toggleValue:(id)arg1;
- (id)account;
- (id)dataclass;
- (void)dealloc;
- (id)delegate;
- (id)initWithAccountManager:(id)arg1;
- (id)initWithAccountManager:(id)arg1 presenter:(id)arg2;
- (bool)isDataclassLDMDisabled;
- (id)loadSpecifierProviderWithClassName:(id)arg1 inBundle:(id)arg2;
- (void)setDataclass:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSpecifiers:(id)arg1;
- (id)specifiers;
- (id)ubiquityProviderGetAccountOperationsHelper;
- (void)ubiquityProviderShowViewController:(id)arg1;

@end