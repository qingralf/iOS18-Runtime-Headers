/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@interface SUManagerCore : NSObject <SUKeybagInterfaceObserver, SUManagedDeviceManagerDelegate, SUManagerEngineDelegate> {
    SUCoreEventReporter * _coreReporter;
    <SUManagerDelegate> * _delegate;
    SUDownloader * _downloader;
    SUManagerEngine * _engine;
    NSObject<OS_dispatch_queue> * _externWorkQueue;
    SUSFollowUpController * _followUpController;
    SUInstaller * _installer;
    bool  _isUpdateDownloaded;
    NSDate * _lastStashbagPersistedDate;
    SUManagedDeviceManager * _managedDeviceManager;
    NSDictionary * _mandatoryUpdateDictionary;
    NSHashTable * _observers;
    NSString * _potentialNextSessionID;
    bool  _reportStartedFromPersistedState;
    bool  _resetDownloadStateOnCleanActivation;
    NSObject<OS_dispatch_semaphore> * _resumeFromStateSemaphore;
    SURollbackController * _rollback;
    SUScanner * _scanner;
    NSString * _sessionID;
    SUState * _state;
    NSMutableDictionary * _unlockCallbacks;
    SUDescriptor * _updateOfCurrentStorageFollowup;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly, retain) MAAsset *alternateAssetToDownloadFromLastScan;
@property (nonatomic, readonly, retain) SUCoreDescriptor *alternateLastScannedDescriptor;
@property (getter=isClearingSpace, nonatomic, readonly) bool clearingSpace;
@property (nonatomic, retain) SUCoreEventReporter *coreReporter;
@property (nonatomic, readonly, retain) SUDDMManager *ddmManager;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <SUManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SUDownloader *downloader;
@property (getter=isDownloading, nonatomic) bool downloading;
@property (nonatomic, retain) SUManagerEngine *engine;
@property (nonatomic, readonly, retain) NSObject<OS_dispatch_queue> *externWorkQueue;
@property (nonatomic, retain) SUSFollowUpController *followUpController;
@property (getter=isForeground, nonatomic) bool foreground;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SUInstallPolicy *installPolicy;
@property (getter=isInstalled, nonatomic, readonly) bool installed;
@property (nonatomic, retain) SUInstaller *installer;
@property (getter=isInstalling, nonatomic, readonly) bool installing;
@property (nonatomic) bool isInstallTonight;
@property (nonatomic) bool isInstallTonightScheduled;
@property (nonatomic) bool isUpdateDownloaded;
@property (nonatomic, readonly, retain) SUScanOptions *lastScannedDescriptorScanOptions;
@property (nonatomic, retain) NSDate *lastStashbagPersistedDate;
@property (nonatomic, readonly, retain) SUManagedDeviceManager *managedDeviceManager;
@property (nonatomic, retain) NSDictionary *mandatoryUpdateDictionary;
@property (nonatomic, readonly, retain) NSHashTable *observers;
@property (nonatomic, retain) SUAutoUpdatePasscodePolicy *passcodePolicy;
@property (nonatomic, retain) NSString *potentialNextSessionID;
@property (nonatomic, readonly, retain) MAAsset *preferredAssetToDownloadFromLastScan;
@property (nonatomic, readonly, retain) SUCoreDescriptor *preferredLastScannedDescriptor;
@property (nonatomic) bool resetDownloadStateOnCleanActivation;
@property (nonatomic, retain) SURollbackController *rollback;
@property (nonatomic, retain) SUScanner *scanner;
@property (getter=isScanning, nonatomic, readonly) bool scanning;
@property (nonatomic, retain) NSString *sessionID;
@property (nonatomic, readonly, retain) SUState *state;
@property (readonly) Class superclass;
@property (nonatomic, readonly, retain) NSMutableDictionary *unlockCallbacks;
@property (nonatomic, readonly, retain) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (void)_augmentCoreAnalyticsEvent:(id)arg1 withUpdate:(id)arg2;
- (id)_createCoreAnalyticsEventWithCurrentDownloadFor:(id)arg1 error:(id)arg2;
- (void)_describeAndReportEvent:(id)arg1 policy:(id)arg2 primaryDescriptor:(id)arg3 alternateDescriptor:(id)arg4 additionalMetrics:(id)arg5;
- (id)_getAmountDataAvailable;
- (bool)_isUpdateDownloadable:(id)arg1 downloadOptions:(id)arg2 error:(id*)arg3;
- (void)_loadBrainOnUnlockCallback;
- (void)_notifyEngineOnUnlock;
- (void)_persistStash;
- (void)_presentAutoUpdateBannerOnUnlock;
- (void)_recordLastUnlockTimePostPrepare;
- (void)_reportOTAEvent:(id)arg1 withStatus:(id)arg2 policy:(id)arg3 descriptor:(id)arg4 additionalMetrics:(id)arg5 error:(id)arg6;
- (void)_reportOTAEvent:(id)arg1 withStatus:(id)arg2 policy:(id)arg3 primaryDescriptor:(id)arg4 alternateDescriptor:(id)arg5 additionalMetrics:(id)arg6 error:(id)arg7;
- (void)_reportRollbackEvent:(id)arg1 withInfo:(id)arg2 buildVersion:(id)arg3;
- (void)_resumeFromLastKnownState;
- (void)_submitCoreAnalyticsEvent:(id)arg1;
- (void)activated:(bool)arg1;
- (void)addUnlockCallback:(SEL)arg1 forKey:(id)arg2;
- (void)adoptPotentialSessionID;
- (id)alternateAssetToDownloadFromLastScan;
- (id)alternateLastScannedDescriptor;
- (void)amendManagedScanOptions:(id)arg1 withResponse:(id /* block */)arg2;
- (void)assetAudienceChanged:(id)arg1;
- (void)autoSUFailedWithError:(id)arg1;
- (void)autoScanAndDownloadIfAvailable:(int)arg1 downloadNow:(bool)arg2 withResult:(id /* block */)arg3;
- (void)autoScanAndDownloadIfAvailable:(int)arg1 withResult:(id /* block */)arg2;
- (void)autoUpdateFound:(id)arg1 downloadNow:(bool)arg2;
- (void)badgeSettingsForManualSoftwareUpdate:(id)arg1;
- (bool)cancelDownload:(bool)arg1 userRequested:(bool)arg2 keepDocAssets:(bool)arg3 error:(id*)arg4;
- (void)cleanupPreviousDownloadState;
- (void)clearBadgeAndBanner;
- (void)clearKeybagStash;
- (void)clearUnlockCallbacks;
- (id)coreDescriptorForSUDescriptor:(id)arg1;
- (id)coreReporter;
- (void)createInstallationKeybag:(id)arg1 withResult:(id /* block */)arg2;
- (void)createSessionID;
- (id)createpotentialNextSessionID;
- (id)ddmManager;
- (id)delayEndDate;
- (id)delegate;
- (void)deviceHasSufficientSpaceForDownloadIncludeAppPurging:(bool)arg1 descriptor:(id)arg2 downloadOption:(id)arg3 replyHandler:(id /* block */)arg4;
- (void)deviceHasSufficientSpaceForDownloadIncludeAppPurging:(bool)arg1 descriptor:(id)arg2 replyHandler:(id /* block */)arg3;
- (void)deviceIsUpToDateForSU:(bool)arg1 forSplat:(bool)arg2;
- (id)discoveryDateForBuildVersion:(id)arg1;
- (void)dismissAutoUpdateBanner;
- (void)dismissInsufficientDiskSpaceFollowupForUpdate:(id)arg1 orForce:(bool)arg2;
- (void)dismissLegacyFollowUps;
- (void)doUnlockEvents;
- (id)download;
- (id)downloadAsset;
- (void)downloadCompleted:(id)arg1;
- (void)downloadCompleted:(id)arg1 informClients:(bool)arg2;
- (void)downloadProgress:(id)arg1;
- (id)downloader;
- (id)eligibleRollbackWithOptions:(id)arg1;
- (void)endAutoDownloadTasksAndResetState;
- (id)engine;
- (id)eventRecordingServiceURL:(id)arg1;
- (id)externWorkQueue;
- (id)followUpController;
- (id)fullyUnrampedDateForBuildVersion:(id)arg1;
- (id)init;
- (void)installCompleted:(id)arg1;
- (id)installPolicy;
- (id)installTonightConfigDictionary;
- (void)installUpdateWithInstallOptions:(id)arg1 withResult:(id /* block */)arg2;
- (void)installUpdateWithOptions:(id)arg1 withResult:(id /* block */)arg2;
- (id)installer;
- (bool)isAutoUpdateEnabled;
- (bool)isClearingSpace;
- (bool)isDelayingUpdates;
- (bool)isDescriptorAutoDownloadable:(id)arg1;
- (bool)isDescriptorAutoUpdatable:(id)arg1;
- (bool)isDownloading;
- (bool)isForeground;
- (bool)isInstallTonight;
- (bool)isInstallTonightScheduled;
- (bool)isInstalled;
- (bool)isInstalling;
- (bool)isManaged;
- (bool)isRollingBack;
- (bool)isScanning;
- (bool)isSplatOnlyUpdateRollbackSuggested;
- (bool)isSplatRollbackAllowed:(id*)arg1;
- (bool)isSplatRollbackEnabled;
- (bool)isUpdateDownloaded;
- (bool)isUpdateReadyForInstallation:(id*)arg1;
- (void)isUpdateReadyForInstallationWithOptions:(id)arg1 replyHandler:(id /* block */)arg2;
- (void)keybagInterface:(id)arg1 passcodeLockedStateDidChange:(bool)arg2;
- (bool)killDownload:(bool)arg1 userRequested:(bool)arg2 keepDocAssets:(bool)arg3 error:(id*)arg4;
- (bool)killDownload:(bool)arg1 userRequested:(bool)arg2 keepDocAssets:(bool)arg3 forUpdates:(id)arg4 error:(id*)arg5;
- (id)lastScannedDescriptorScanOptions;
- (id)lastStashbagPersistedDate;
- (void)loadBrainOnUnlock;
- (void)loadSavedState;
- (id)managedDeviceManager;
- (void)managedInstallRequested;
- (id)mandatoryUpdateDictionary;
- (void)networkMonitorDetectOverrides;
- (id)newInstallTonightConfig;
- (void)noteAutoDownloadFailedToStartWithError:(id)arg1;
- (id)observers;
- (id)passcodePolicy;
- (void)persistStashOnUnlock;
- (id)potentialNextSessionID;
- (id)preferredAssetToDownloadFromLastScan;
- (id)preferredLastScannedDescriptor;
- (void)presentAutoUpdateBanner:(id /* block */)arg1;
- (void)presentRollbackSuggestionAlertWithDescriptor:(id)arg1 info:(id)arg2;
- (void)presentRollbackSuggestionFollowUpWithCoreDescriptor:(id)arg1 info:(id)arg2;
- (void)presentRollbackSuggestionFollowUpWithRollbackDescriptor:(id)arg1 info:(id)arg2;
- (id)previousRollbackWithOptions:(id)arg1;
- (void)removeUnlockCallback:(id)arg1;
- (void)reportCoreAnalyticsOTAAbandonedEvent:(id)arg1;
- (void)reportCoreAnalyticsOTAAvailableEvent:(id)arg1;
- (void)reportCoreAnalyticsOTADownloadedEvent;
- (void)reportCoreAnalyticsOTAStartedDownloadingEvent:(id)arg1;
- (void)reportOTAAbandonedEvent;
- (void)reportOTAAbandonedEventWithError:(id)arg1;
- (void)reportOTAAbandonedEventWithError:(id)arg1 additionalMetrics:(id)arg2;
- (void)reportOTAAutoTriggeredEvent;
- (void)reportOTAAvailableEvent:(id)arg1;
- (void)reportOTADownloadedEvent:(id)arg1;
- (void)reportOTAInstalledEvent;
- (void)reportOTAStartedDownloadingEvent:(id)arg1;
- (void)reportOTASucceededEvent;
- (void)reportPostponedEvent:(id)arg1 withStatus:(id)arg2;
- (void)reportPostponedEvent:(id)arg1 withStatus:(id)arg2 withAdditionalMetrics:(id)arg3;
- (void)reportRSRRollbackSuggestedEventWithDescriptor:(id)arg1 rollbackSuggestionInfo:(id)arg2;
- (void)reportRSRRollbackSuggestedEventWithRollbackDescriptor:(id)arg1 rollbackSuggestionInfo:(id)arg2;
- (void)reportSimulatedOTAAutoTriggeredEvent;
- (void)reporterFlushEvent;
- (void)resetDownloadState;
- (bool)resetDownloadStateOnCleanActivation;
- (void)resumeOrResetIfNecessary;
- (void)revokedUpdateFound:(id)arg1;
- (id)rollback;
- (void)rollbackCompleted:(id)arg1 withError:(id)arg2;
- (void)rollbackReadyForReboot;
- (void)rollbackStarted:(id)arg1;
- (id)rollbackSuggestionReasonFromSUReason:(unsigned long long)arg1;
- (void)rollbackUpdateWithOptions:(id)arg1 withResult:(id /* block */)arg2;
- (void)scanForUpdates:(id)arg1 complete:(id /* block */)arg2;
- (void)scanForUpdates:(id)arg1 shouldUseDDMInState:(bool)arg2 complete:(id /* block */)arg3;
- (id)scanner;
- (void)securityResponseRollbackSuggested:(id)arg1 withResult:(id /* block */)arg2;
- (void)sendUnlockNotifications:(bool)arg1;
- (id)sessionID;
- (void)setAlternateLastScannedDescriptor:(id)arg1;
- (void)setCoreReporter:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDownloader:(id)arg1;
- (void)setDownloading:(bool)arg1;
- (void)setEngine:(id)arg1;
- (void)setFollowUpController:(id)arg1;
- (void)setForeground:(bool)arg1;
- (void)setInstallPolicy:(id)arg1;
- (void)setInstaller:(id)arg1;
- (void)setIsInstallTonight:(bool)arg1;
- (void)setIsInstallTonightScheduled:(bool)arg1;
- (void)setIsUpdateDownloaded:(bool)arg1;
- (void)setLastStashbagPersistedDate:(id)arg1;
- (void)setMandatoryUpdateDictionary:(id)arg1;
- (void)setPasscodePolicy:(id)arg1;
- (void)setPotentialNextSessionID:(id)arg1;
- (void)setPreferredLastScannedDescriptor:(id)arg1;
- (void)setResetDownloadStateOnCleanActivation:(bool)arg1;
- (void)setRollback:(id)arg1;
- (void)setRollbackValue:(id)arg1 forKey:(id)arg2 count:(int)arg3 event:(id)arg4;
- (void)setScanner:(id)arg1;
- (void)setSessionID:(id)arg1;
- (bool)shouldShowRollbackSuggestionAlert:(id)arg1 error:(id*)arg2;
- (void)showInsufficientDiskSpaceFollowupForUpdate:(id)arg1;
- (id)slaVersion;
- (unsigned long long)softwareUpdatePathRestriction;
- (bool)splatUpdatesAllowed;
- (void)startDownloadWithMetadata:(id)arg1 withResult:(id /* block */)arg2;
- (void)startDownloadWithOptions:(id)arg1 withResult:(id /* block */)arg2;
- (id)state;
- (void)suggestRollback:(id)arg1 rollbackDescriptor:(id)arg2 withResult:(id /* block */)arg3;
- (void)tryAutoDownload;
- (void)unbadgeSettingsForManualSoftwareUpdate;
- (id)unlockCallbacks;
- (void)unscheduleRecommendedUpdateNotification;
- (void)updateDownloadMetadata:(id)arg1 withResult:(id /* block */)arg2;
- (void)updateDownloadOptions:(id)arg1 withResult:(id /* block */)arg2;
- (void)updateInstallPolicyAutoUpdateEnabled:(bool)arg1;
- (void)updateInstallPolicyType:(unsigned long long)arg1;
- (id)updateToAutoDownload;
- (unsigned long long)updatesDelayPeriodSeconds;
- (void)updatesDownloadableWithOptions:(id)arg1 alternateDownloadOptions:(id)arg2 replyHandler:(id /* block */)arg3;
- (id)workQueue;

@end
