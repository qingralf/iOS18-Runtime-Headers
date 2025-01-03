/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

@interface BFFFaceIDViewController : UIViewController <BFFSecondPartyProgressIndicatorDisplayable, BKUIPearlEnrollControllerDelegate, BYEnvironmentDependencyReceiver> {
    LAContext * _authContext;
    BYPreferencesController * _buddyPreferences;
    <BYCapabilities> * _capabilities;
    bool  _completesOnCancel;
    OBWelcomeController * _contentController;
    <BYDeviceProvider> * _deviceProvider;
    unsigned long long  _enrollmentConfiguration;
    <BFFFaceIDViewControllerDelegate> * _faceIDViewControllerDelegate;
    BYPasscodeCacheManager * _passcodeCacheManager;
    BKUIPearlEnrollControllerPreloadedState * _preloadedState;
}

@property (nonatomic, retain) BuddyActivationRecord *activationRecord; /* unknown property attribute: ? */
@property (nonatomic, retain) BuddyActivationState *activationState; /* unknown property attribute: ? */
@property (nonatomic, retain) BYAnalyticsEventAppearance *analyticsEventAppearance; /* unknown property attribute: ? */
@property (nonatomic, retain) BYAnalyticsManager *analyticsManager; /* unknown property attribute: ? */
@property (nonatomic, retain) AppearanceModeProvider *appearanceModeProvider; /* unknown property attribute: ? */
@property (nonatomic, retain) LAContext *authContext;
@property (nonatomic, retain) BFFBackupDeviceController *backupDeviceController; /* unknown property attribute: ? */
@property (nonatomic, retain) BuddyBetaEnrollmentStateManager *betaEnrollmentStateManager; /* unknown property attribute: ? */
@property (nonatomic) BuddyBackgroundViewController *buddyBackgroundViewController; /* unknown property attribute: ? */
@property (nonatomic, retain) BYPreferencesController *buddyPreferences;
@property (nonatomic, retain) BYPreferencesController *buddyPreferencesExcludedFromBackup; /* unknown property attribute: ? */
@property (nonatomic, retain) BuddyButtonMonitor *buttonMonitor; /* unknown property attribute: ? */
@property (nonatomic, retain) <BYCapabilities> *capabilities;
@property (nonatomic, retain) BuddyChildSetupPresenter *childSetupPresenter; /* unknown property attribute: ? */
@property (nonatomic, retain) BYChronicle *chronicle; /* unknown property attribute: ? */
@property (nonatomic, retain) <BuddyCombinedTermsProvider> *combinedTermsProvider; /* unknown property attribute: ? */
@property (nonatomic) bool completesOnCancel;
@property (nonatomic, retain) OBWelcomeController *contentController;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <BYDeviceConfiguration> *deviceConfiguration; /* unknown property attribute: ? */
@property (nonatomic, retain) <BYDeviceProvider> *deviceProvider;
@property (nonatomic, retain) BuddyDisplayZoomExecutor *displayZoomExecutor; /* unknown property attribute: ? */
@property (nonatomic, copy) id /* block */ doesRestartFlowCauseEraseBlock; /* unknown property attribute: ? */
@property (nonatomic, retain) <BuddyEmergencyExecutor> *emergencyExecutor; /* unknown property attribute: ? */
@property (nonatomic) unsigned long long enrollmentConfiguration;
@property (nonatomic, retain) BuddyEnrollmentCoordinator *enrollmentCoordinator; /* unknown property attribute: ? */
@property (nonatomic, retain) BuddyExistingSettings *existingSettings; /* unknown property attribute: ? */
@property (nonatomic, copy) id /* block */ exitBuddyForDemoSetUpBlock; /* unknown property attribute: ? */
@property (nonatomic, retain) <BYExpressSettingsSetupCache> *expressSettingsCache; /* unknown property attribute: ? */
@property (nonatomic) <BFFFaceIDViewControllerDelegate> *faceIDViewControllerDelegate;
@property (nonatomic, retain) <BuddyFeatureFlags> *featureFlags; /* unknown property attribute: ? */
@property (nonatomic, retain) BuddyFlowItemDispositionProvider *flowItemDispositionProvider; /* unknown property attribute: ? */
@property (nonatomic, retain) BYFlowSkipController *flowSkipController; /* unknown property attribute: ? */
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <IntelligenceProvider> *intelligenceProvider; /* unknown property attribute: ? */
@property (nonatomic, readonly) bool isAnimating;
@property (nonatomic, retain) <LockdownModeProvider> *lockdownModeProvider; /* unknown property attribute: ? */
@property (nonatomic, retain) MCProfileConnection *managedConfiguration; /* unknown property attribute: ? */
@property (nonatomic, retain) DMCReturnToServiceController *mdmReturnToServiceController; /* unknown property attribute: ? */
@property (nonatomic, copy) id /* block */ menuButtonPressedBlock; /* unknown property attribute: ? */
@property (nonatomic, retain) BuddyMiscState *miscState; /* unknown property attribute: ? */
@property (nonatomic, retain) <BuddyMultilingualFlowManager> *multilingualFlowManager; /* unknown property attribute: ? */
@property (nonatomic, retain) <BuddyNetworkProvider> *networkProvider; /* unknown property attribute: ? */
@property (nonatomic, retain) BYPaneFeatureAnalyticsManager *paneFeatureAnalyticsManager; /* unknown property attribute: ? */
@property (nonatomic, retain) BYPasscodeCacheManager *passcodeCacheManager;
@property (nonatomic, retain) BuddyPendingRestoreState *pendingRestoreState; /* unknown property attribute: ? */
@property (nonatomic, copy) id /* block */ prepareForCloudRestoreRebootBlock; /* unknown property attribute: ? */
@property (nonatomic, copy) id /* block */ prepareForDeviceMigrationBlock; /* unknown property attribute: ? */
@property (nonatomic, retain) BuddyProximityAutomatedDeviceEnrollmentController *proximityAutomatedDeviceEnrollmentController; /* unknown property attribute: ? */
@property (nonatomic, retain) ProximitySetupController *proximitySetupController; /* unknown property attribute: ? */
@property (nonatomic, retain) <BYRunState> *runState; /* unknown property attribute: ? */
@property (nonatomic, retain) BYSeedProgramManager *seedProgramManager; /* unknown property attribute: ? */
@property (nonatomic, retain) BFFSettingsManager *settingsManager; /* unknown property attribute: ? */
@property (nonatomic, retain) BuddySetupMethod *setupMethod; /* unknown property attribute: ? */
@property (nonatomic, copy) id /* block */ showModalWiFiSettingsBlock; /* unknown property attribute: ? */
@property (nonatomic, retain) BYSoftwareUpdateCache *softwareUpdateCache; /* unknown property attribute: ? */
@property (nonatomic, copy) id /* block */ startDeviceMigrationBlock; /* unknown property attribute: ? */
@property (readonly) Class superclass;
@property (nonatomic, retain) BuddySuspendTask *suspendTask; /* unknown property attribute: ? */
@property (nonatomic, retain) BuddySystemTimeUpdateManager *systemTimeUpdateManager; /* unknown property attribute: ? */
@property (nonatomic, retain) SetupUserDispositionProvider *userDispositionProvider; /* unknown property attribute: ? */
@property (nonatomic, copy) id /* block */ willPerformSoftwareUpdateBlock; /* unknown property attribute: ? */
@property (nonatomic, copy) id /* block */ writeGreenInformedDefaultPlistIfNecessaryBlock; /* unknown property attribute: ? */

- (void).cxx_destruct;
- (void)_didSelectEnroll;
- (void)_didSelectSkip;
- (bool)_sheetMode;
- (void)_userDidTapCancelButton:(id)arg1;
- (id)authContext;
- (id)buddyPreferences;
- (id)capabilities;
- (bool)completesOnCancel;
- (id)contentController;
- (void)controllerWasPopped;
- (id)deviceProvider;
- (unsigned long long)enrollmentConfiguration;
- (id)faceIDViewControllerDelegate;
- (id)init;
- (bool)isAnimating;
- (id)passcodeCacheManager;
- (void)pearlEnrollController:(id)arg1 finishedEnrollWithError:(id)arg2;
- (void)performExtendedInitializationWithCompletion:(id /* block */)arg1;
- (void)resetColorsAnimated:(bool)arg1;
- (void)setAuthContext:(id)arg1;
- (void)setBuddyPreferences:(id)arg1;
- (void)setCapabilities:(id)arg1;
- (void)setCompletesOnCancel:(bool)arg1;
- (void)setContentController:(id)arg1;
- (void)setDeviceProvider:(id)arg1;
- (void)setEnrollmentConfiguration:(unsigned long long)arg1;
- (void)setFaceIDViewControllerDelegate:(id)arg1;
- (void)setPasscodeCacheManager:(id)arg1;
- (void)startIndeterminateProgressIndicator;
- (void)stopIndeterminateProgressIndicator;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)willStartOver;

@end
