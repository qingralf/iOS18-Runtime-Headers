/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

@interface WFNetworkListController : NSObject <WFAirportViewControllerDelegate, WFGasQueryControllerDelegate, WFHotspotInterfaceDelegate, WFNetworkListDelegate, WFScanManagerDelegate> {
    bool  _HS20Supported;
    bool  _associatingToOtherNetwork;
    WFAssociationContext * _associationContext;
    WFAssociationContextQueue * _associationContextQueue;
    NSOperationQueue * _backgroundQueue;
    bool  _canScanForPersonalHotspots;
    WFCertificateContext * _certificateContext;
    UIViewController<WFNetworkView> * _contextVC;
    WFCredentialsContext * _credentialsContext;
    WFDetailsContext * _detailsContext;
    WFDiagnosticsManager * _diagnosticsManager;
    bool  _firstScanFinished;
    WFGasQueryController * _gasController;
    WFHealthManager * _healthManager;
    WFHealthIssueOverrides * _healthRecommendationOverrides;
    WFHotspotInterface * _hotspotInterface;
    WFInterface * _interface;
    bool  _isRandomMACManageFeatureEnabled;
    NSSet * _knownHiddenNetworkNames;
    bool  _knownNetworksContainsHS20Networks;
    <WFKnownNetworksProvider> * _knownNetworksManager;
    WFLinkQuality * _latestLinkQuality;
    bool  _lockdownModeEnabled;
    NSSet * _networks;
    UIViewController<WFOtherNetworkProvider> * _otherNetworkVC;
    unsigned long long  _powerState;
    bool  _privacyProxyFeatureEnabled;
    long long  _privacyProxyFeatureTier;
    WFNetworkListRandomMACManager * _randomMACManager;
    bool  _scanForPersonalHotspots;
    WFScanManager * _scanManager;
    WFScanMetricsManager * _scanMetricsManager;
    bool  _scanning;
    bool  _shouldShowDetailTapOnCurrentNetwork;
    WFWiFiStateMonitor * _stateMonitor;
    UIViewController<WFNetworkListing> * _viewController;
    bool  _viewControllerSupportsCurrentNetworkSubtitle;
    <WFNetworkViewProvider> * _viewProvider;
    <WFContextPresenting> * _visibleContext;
    WFClient * _wifiClient;
}

@property (getter=isHS20Supported, nonatomic) bool HS20Supported;
@property bool associatingToOtherNetwork;
@property (nonatomic, retain) WFAssociationContext *associationContext;
@property (nonatomic, retain) WFAssociationContextQueue *associationContextQueue;
@property (nonatomic, retain) NSOperationQueue *backgroundQueue;
@property (nonatomic) bool canScanForPersonalHotspots;
@property (nonatomic, retain) WFCertificateContext *certificateContext;
@property (nonatomic, retain) UIViewController<WFNetworkView> *contextVC;
@property (nonatomic, retain) WFCredentialsContext *credentialsContext;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) WFDetailsContext *detailsContext;
@property (nonatomic, retain) WFDiagnosticsManager *diagnosticsManager;
@property (nonatomic) bool firstScanFinished;
@property (nonatomic, retain) WFGasQueryController *gasController;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) WFHealthManager *healthManager;
@property (nonatomic, retain) WFHealthIssueOverrides *healthRecommendationOverrides;
@property (nonatomic, retain) WFHotspotInterface *hotspotInterface;
@property (nonatomic, retain) WFInterface *interface;
@property (nonatomic) bool isRandomMACManageFeatureEnabled;
@property (nonatomic, retain) NSSet *knownHiddenNetworkNames;
@property (nonatomic) bool knownNetworksContainsHS20Networks;
@property (nonatomic, retain) <WFKnownNetworksProvider> *knownNetworksManager;
@property (nonatomic, retain) WFLinkQuality *latestLinkQuality;
@property (nonatomic) bool lockdownModeEnabled;
@property (nonatomic, retain) NSSet *networks;
@property (nonatomic, retain) UIViewController<WFOtherNetworkProvider> *otherNetworkVC;
@property (nonatomic) unsigned long long powerState;
@property (nonatomic) bool privacyProxyFeatureEnabled;
@property (nonatomic) long long privacyProxyFeatureTier;
@property (nonatomic, retain) WFNetworkListRandomMACManager *randomMACManager;
@property (nonatomic) bool scanForPersonalHotspots;
@property (nonatomic, retain) WFScanManager *scanManager;
@property (nonatomic, retain) WFScanMetricsManager *scanMetricsManager;
@property (getter=isScanning, nonatomic, readonly) bool scanning;
@property (nonatomic) bool shouldShowDetailTapOnCurrentNetwork;
@property (nonatomic, retain) WFWiFiStateMonitor *stateMonitor;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIViewController<WFNetworkListing> *viewController;
@property (nonatomic) bool viewControllerSupportsCurrentNetworkSubtitle;
@property (nonatomic, retain) <WFNetworkViewProvider> *viewProvider;
@property (nonatomic, retain) <WFContextPresenting> *visibleContext;
@property (nonatomic, retain) WFClient *wifiClient;

- (void).cxx_destruct;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_associateToEnterpriseNetwork:(id)arg1 profile:(id)arg2;
- (void)_associateToHS20Network:(id)arg1;
- (void)_associateToHotspotDevice:(id)arg1;
- (void)_associateToNetwork:(id)arg1 profile:(id)arg2;
- (void)_associateToScanRecord:(id)arg1;
- (void)_associateToScanRecord:(id)arg1 profile:(id)arg2;
- (void)_associateToUnconfiguredAccessory:(id)arg1;
- (void)_associateToUserSuppliedNetwork:(id)arg1;
- (void)_associateToUserSuppliedNetworkHelper:(id)arg1 networks:(id)arg2;
- (void)_associationDidFinish:(bool)arg1 error:(id)arg2 network:(id)arg3;
- (void)_associationWillStart:(id)arg1;
- (bool)_canPromptForCarPlay;
- (bool)_canPromptForInstantHotspot;
- (bool)_canScanForHiddenNetwork:(id)arg1;
- (bool)_canStartAssociationToNetwork:(id)arg1;
- (bool)_canStartAssociationToUserSuppliedNetwork:(id)arg1;
- (void)_cellularOutrankNotification:(id)arg1;
- (void)_cleanUpStatesForDismissal;
- (void)_clientRestartedNotification:(id)arg1;
- (id)_convertToHexString:(id)arg1;
- (long long)_defaultAuthTraits;
- (bool)_disablePersonalHotspot;
- (void)_dismissCredentialsViewControllerWithContext:(id)arg1;
- (void)_dismissDetailsViewControllerWithContext:(id)arg1;
- (void)_dismissErrorViewControllerWithContext:(id)arg1;
- (void)_dismissLockdownModeViewControllerWithContext:(id)arg1;
- (void)_dismissOtherNetworkViewControllerWithContext:(id)arg1;
- (void)_dismissTrustViewControllerWithContext:(id)arg1;
- (void)_dismissViewControllerForContext:(id)arg1;
- (void)_dismissVisibleContext;
- (void)_downloadHomeApp;
- (unsigned long long)_getLockdownModeSecurityType:(id)arg1;
- (bool)_handleAccessoryDetailURL:(id)arg1;
- (void)_handleAssociationError:(id)arg1 network:(id)arg2 profile:(id)arg3 securityMode:(long long)arg4 associationContext:(id)arg5;
- (void)_handleAssociationResult:(bool)arg1 error:(id)arg2 network:(id)arg3 profile:(id)arg4 shouldSaveProfile:(bool)arg5;
- (bool)_handleCurrentNetworkDetailsURL:(id)arg1;
- (id)_hardwareMACAddress;
- (void)_interfaceDidBecomeAvailable:(id)arg1;
- (void)_ipStateDidChange:(id)arg1;
- (bool)_isActiveCarPlaySession;
- (bool)_isChannelAllowedForScanPerCurrentLocale:(long long)arg1;
- (void)_managedAppleIDStateDidChange:(id)arg1;
- (void)_networkDidChangeNotification:(id)arg1;
- (void)_networkHealthIssuesDidChange:(id)arg1;
- (void)_networkLinkQualityDidChangeNotification:(id)arg1;
- (void)_networkRestrictionStateDidChange:(id)arg1;
- (void)_openHomeAppForNetwork:(id)arg1;
- (void)_openURL:(id)arg1;
- (void)_pauseScanning;
- (void)_powerDidChangeNotification:(id)arg1;
- (void)_powerModificationDisableStateDidChange:(id)arg1;
- (void)_powerStateChanged;
- (void)_preferredNetworksDidChange:(id)arg1;
- (void)_presentCellularOutrankAlertForNetwork:(id)arg1 privateCellular:(bool)arg2;
- (void)_presentContext:(id)arg1 contextType:(unsigned long long)arg2;
- (void)_presentDeveloperOutrankAlertForNetwork:(id)arg1;
- (void)_presentHotspotErrorContextWithDevice:(id)arg1 hotspotError:(id)arg2 failure:(long long)arg3;
- (void)_promptCredentialsForNetwork:(id)arg1 profile:(id)arg2;
- (void)_promptCredentialsForNetworkCancelled:(id)arg1;
- (void)_promptForSecureWACDevice:(id)arg1;
- (void)_promptToDisableCarPlayForNetworkName:(id)arg1 handler:(id /* block */)arg2;
- (void)_promptTrustCertificateForNetwork:(id)arg1 certificateChain:(id)arg2 profile:(id)arg3 autoJoin:(bool)arg4;
- (void)_refreshKnownHiddenNetworkNamesCache;
- (void)_registerForApplicationNotifications;
- (void)_resumeScanning;
- (void)_runUnconfiguredJoinOperationForNetwork:(id)arg1;
- (void)_saveLogsWithComment:(id)arg1 diagnosticsViewController:(id)arg2;
- (void)_scanNetworkForAssociation:(id)arg1 profile:(id)arg2;
- (void)_setupGASControllerWithInterface:(id)arg1;
- (void)_setupWithInterface:(id)arg1;
- (void)_setupWithoutInterface;
- (bool)_shouldPauseScanning;
- (bool)_shouldShowLowDataModeForProfile:(id)arg1;
- (id)_sortedHealthRecommendations;
- (void)_startHotspotScan;
- (void)_stateMonitorChangedStates:(long long)arg1 oldState:(long long)arg2;
- (void)_stopHotspotScan;
- (bool)_supportsWiFiPasswordSharing;
- (void)_updateCurrentNetworkIPState:(id)arg1;
- (void)_updateHS20NetworksWithProfiles:(id)arg1 names:(id)arg2;
- (void)_updateHealthSubtitle;
- (void)_updatePowerState;
- (void)_updatePrivacyProxyFeatureEnabled;
- (void)_updateViewControllerConnectedNetwork;
- (void)_updateViewControllerConnectedNetwork:(id)arg1;
- (void)_updateViewControllerDisabled;
- (void)_updateViewControllerScanResults;
- (void)_updateViewsForNetworks:(id)arg1;
- (bool)_useLegacySettingsUI;
- (void)_wifiPropertyDidChanged:(id)arg1;
- (void)airportSettingsViewController:(id)arg1 setAskToJoinMode:(long long)arg2;
- (id)airportSettingsViewController:(id)arg1 unconfiguredAccessoriesGroupHeaderTitle:(id)arg2;
- (long long)airportSettingsViewControllerAskToJoinMode:(id)arg1;
- (bool)airportSettingsViewControllerCurrentNetworkConnectionIsProblematic:(id)arg1;
- (void)airportSettingsViewControllerDidFinishEditingKnownNetworks:(id)arg1;
- (void)airportSettingsViewControllerDidStartEditingKnownNetworks:(id)arg1;
- (void)airportSettingsViewControllerDidTapDataUsage:(id)arg1;
- (void)airportSettingsViewControllerDidTapDiagnosticsMode:(id)arg1 showNANUI:(bool)arg2;
- (bool)airportSettingsViewControllerShouldShowDiagnosticsMode:(id)arg1;
- (bool)airportSettingsViewControllerShouldShowKnownNetworks:(id)arg1;
- (bool)airportSettingsViewControllerShouldShowNANUI:(id)arg1;
- (void)associateToEnterpriseNetwork:(id)arg1 profile:(id)arg2;
- (bool)associatingToOtherNetwork;
- (id)associationContext;
- (id)associationContextQueue;
- (id)backgroundQueue;
- (bool)canScanForPersonalHotspots;
- (id)certificateContext;
- (id)contextVC;
- (id)credentialsContext;
- (void)dealloc;
- (id)detailsContext;
- (id)diagnosticsManager;
- (id)editableKnownNetworks;
- (bool)firstScanFinished;
- (id)gasController;
- (void)gasQueryController:(id)arg1 didUpdateProfiles:(id)arg2 networkNames:(id)arg3;
- (bool)handleURL:(id)arg1;
- (id)healthManager;
- (id)healthRecommendationOverrides;
- (id)healthRecommendations;
- (id)hotspotInterface;
- (void)hotspotInterfaceDidUpdateNetworks:(id)arg1;
- (id)init;
- (id)initWithViewController:(id)arg1;
- (id)initWithViewController:(id)arg1 viewProvider:(id)arg2;
- (id)initWithViewController:(id)arg1 viewProvider:(id)arg2 client:(id)arg3;
- (id)initWithViewController:(id)arg1 viewProvider:(id)arg2 client:(id)arg3 knownNetworksManager:(id)arg4;
- (id)interface;
- (bool)isAirPortSettings;
- (bool)isAssociating;
- (bool)isHS20Supported;
- (bool)isRandomMACManageFeatureEnabled;
- (bool)isScanning;
- (bool)isSetup;
- (id)keyValueDictionaryForURL:(id)arg1;
- (id)knownHiddenNetworkNames;
- (bool)knownNetworksContainsHS20Networks;
- (id)knownNetworksManager;
- (id)latestLinkQuality;
- (bool)lockdownModeEnabled;
- (id)managedKnownNetworks;
- (void)networkListViewController:(id)arg1 didTapRecord:(id)arg2;
- (void)networkListViewController:(id)arg1 setAutoInstantOption:(long long)arg2;
- (void)networkListViewController:(id)arg1 setWAPIEnabled:(bool)arg2;
- (void)networkListViewController:(id)arg1 showSettingsForNetwork:(id)arg2;
- (void)networkListViewController:(id)arg1 showSettingsForNetwork:(id)arg2 context:(long long)arg3;
- (void)networkListViewController:(id)arg1 showSettingsForNetwork:(id)arg2 context:(long long)arg3 scrollToCellType:(unsigned long long)arg4;
- (void)networkListViewController:(id)arg1 userDidChangePower:(bool)arg2;
- (void)networkListViewController:(id)arg1 userDidChangePowerToggle:(unsigned long long)arg2;
- (long long)networkListViewControllerAutoInstantHotspotOption:(id)arg1;
- (bool)networkListViewControllerCurrentPowerState:(id)arg1;
- (unsigned long long)networkListViewControllerCurrentPowerStateToggle:(id)arg1;
- (void)networkListViewControllerDidAppear:(id)arg1;
- (void)networkListViewControllerDidDisappear:(id)arg1;
- (void)networkListViewControllerDidFinish:(id)arg1;
- (void)networkListViewControllerDidTapOtherNetwork:(id)arg1;
- (bool)networkListViewControllerIsAutoUnlockEnabled:(id)arg1;
- (bool)networkListViewControllerIsManagedAppleID:(id)arg1;
- (bool)networkListViewControllerLockdownModeActive:(id)arg1;
- (bool)networkListViewControllerNetworkRestrictionActive:(id)arg1;
- (bool)networkListViewControllerPowerModificationDisabled:(id)arg1;
- (bool)networkListViewControllerWAPIEnabled:(id)arg1;
- (id)networks;
- (id)otherNetworkVC;
- (id)passwordToDisplayForSSID:(id)arg1;
- (unsigned long long)powerState;
- (bool)privacyProxyFeatureEnabled;
- (long long)privacyProxyFeatureTier;
- (void)pushDataUsageViewController;
- (id)randomMACManager;
- (bool)removeKnownNetworks:(id)arg1;
- (void)removeScanCache;
- (bool)scanForPersonalHotspots;
- (id)scanManager;
- (void)scanManager:(id)arg1 didFindHotspotHelperNetworks:(id)arg2;
- (void)scanManager:(id)arg1 didFinishScanRequest:(id)arg2 results:(id)arg3 error:(id)arg4 timeElapsed:(double)arg5;
- (id)scanManager:(id)arg1 filterScanResults:(id)arg2;
- (void)scanManager:(id)arg1 stateDidChange:(long long)arg2;
- (void)scanManager:(id)arg1 updatedPartialResults:(id)arg2;
- (void)scanManager:(id)arg1 willStartScanRequest:(id)arg2;
- (id)scanManagerKnownHiddenNetworkNames:(id)arg1;
- (void)scanManagerScanningDidFinish:(id)arg1 withResults:(id)arg2 error:(id)arg3;
- (void)scanManagerScanningWillStart:(id)arg1;
- (bool)scanManagerShouldSupportHotspotHelper:(id)arg1;
- (bool)scanManagerShouldSupportUnfilteredScanning:(id)arg1;
- (id)scanMetricsManager;
- (void)setAssociatingToOtherNetwork:(bool)arg1;
- (void)setAssociationContext:(id)arg1;
- (void)setAssociationContextQueue:(id)arg1;
- (void)setBackgroundQueue:(id)arg1;
- (void)setCanScanForPersonalHotspots:(bool)arg1;
- (void)setCertificateContext:(id)arg1;
- (void)setContextVC:(id)arg1;
- (void)setCredentialsContext:(id)arg1;
- (void)setDetailsContext:(id)arg1;
- (void)setDiagnosticsManager:(id)arg1;
- (void)setFirstScanFinished:(bool)arg1;
- (void)setGasController:(id)arg1;
- (void)setHS20Supported:(bool)arg1;
- (void)setHealthManager:(id)arg1;
- (void)setHealthRecommendationOverrides:(id)arg1;
- (void)setHotspotInterface:(id)arg1;
- (void)setInterface:(id)arg1;
- (void)setIsRandomMACManageFeatureEnabled:(bool)arg1;
- (void)setKnownHiddenNetworkNames:(id)arg1;
- (void)setKnownNetworksContainsHS20Networks:(bool)arg1;
- (void)setKnownNetworksManager:(id)arg1;
- (void)setLatestLinkQuality:(id)arg1;
- (void)setLockdownModeEnabled:(bool)arg1;
- (void)setNetworks:(id)arg1;
- (void)setOtherNetworkVC:(id)arg1;
- (void)setPowerState:(unsigned long long)arg1;
- (void)setPrivacyProxyFeatureEnabled:(bool)arg1;
- (void)setPrivacyProxyFeatureTier:(long long)arg1;
- (void)setRandomMACManager:(id)arg1;
- (void)setScanForPersonalHotspots:(bool)arg1;
- (void)setScanManager:(id)arg1;
- (void)setScanMetricsManager:(id)arg1;
- (void)setShouldShowDetailTapOnCurrentNetwork:(bool)arg1;
- (void)setStateMonitor:(id)arg1;
- (void)setViewController:(id)arg1;
- (void)setViewControllerSupportsCurrentNetworkSubtitle:(bool)arg1;
- (void)setViewProvider:(id)arg1;
- (void)setVisibleContext:(id)arg1;
- (void)setWifiClient:(id)arg1;
- (bool)shouldShowDetailTapOnCurrentNetwork;
- (void)startScanning;
- (id)stateMonitor;
- (void)stopScanning;
- (id)viewController;
- (bool)viewControllerSupportsCurrentNetworkSubtitle;
- (id)viewProvider;
- (id)visibleContext;
- (id)wifiClient;

@end