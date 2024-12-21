/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@interface SUManagerPolicy : NSObject <SUKeybagInterfaceObserver, SUManagerInterface> {
    SUManagerCore * _core;
    <SUManagerDelegate> * _delegate;
}

@property (nonatomic, retain) SUAnalyticsManager *analyticsManager;
@property (nonatomic, retain) SUManagerCore *core;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <SUManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isForeground, nonatomic) bool foreground;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isInstallTonight;
@property (nonatomic) bool isInstallTonightScheduled;
@property (nonatomic, retain) NSDictionary *mandatoryUpdateDictionary;
@property (nonatomic, retain) SUAutoUpdatePasscodePolicy *passcodePolicy;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (void)addUnlockCallback:(SEL)arg1 forKey:(id)arg2;
- (id)alternateLastScannedDescriptor;
- (void)autoSUFailedWithError:(id)arg1;
- (void)autoScanAndDownloadIfAvailable:(int)arg1;
- (void)autoScanAndDownloadIfAvailable:(int)arg1 downloadNow:(bool)arg2 withResult:(id /* block */)arg3;
- (void)autoScanAndDownloadIfAvailable:(int)arg1 withResult:(id /* block */)arg2;
- (void)badgeSettingsForManualSoftwareUpdate:(id)arg1;
- (void)cancelDownloadWithOptions:(id)arg1 withResult:(id /* block */)arg2;
- (id)core;
- (void)createInstallationKeybag:(id)arg1 withResult:(id /* block */)arg2;
- (id)delayEndDate;
- (id)delegate;
- (void)destroyInstallationKeybag;
- (void)deviceHasSufficientSpaceForDownloadIncludeAppPurging:(bool)arg1 descriptor:(id)arg2 replyHandler:(id /* block */)arg3;
- (void)dismissAutoUpdateBanner;
- (id)download;
- (id)eligibleRollbackWithOptions:(id)arg1;
- (void)endAutoDownloadTasksAndResetState;
- (id)init;
- (id)installPolicy;
- (void)installUpdateWithInstallOptions:(id)arg1 withResult:(id /* block */)arg2;
- (bool)isAutoUpdateEnabled;
- (bool)isClearingSpace;
- (bool)isCurrentUpdateAutoUpdate;
- (bool)isDelayingUpdates;
- (bool)isDownloaded;
- (bool)isDownloading;
- (bool)isForeground;
- (bool)isInstallTonight;
- (bool)isInstallTonightScheduled;
- (bool)isInstalling;
- (bool)isRollingBack;
- (bool)isScanning;
- (bool)isSplatOnlyUpdateRollbackSuggested;
- (bool)isUpdateReadyForInstallation:(id*)arg1;
- (void)isUpdateReadyForInstallationWithOptions:(id)arg1 withResult:(id /* block */)arg2;
- (void)isUpdateReadyForInstallationWithReplyHandler:(id /* block */)arg1;
- (void)loadBrainOnUnlock;
- (void)managedInstallRequested;
- (id)mandatoryUpdateDictionary;
- (void)networkMonitorDetectOverrides;
- (void)noteAutoDownloadFailedToStartWithError:(id)arg1;
- (id)passcodePolicy;
- (void)pauseDownload:(id /* block */)arg1;
- (void)persistStashOnUnlock;
- (id)preferredLastScannedDescriptor;
- (void)presentAutoUpdateBanner:(id /* block */)arg1;
- (id)previousRollbackWithOptions:(id)arg1;
- (void)purgeDownloadWithOptions:(id)arg1 withResult:(id /* block */)arg2;
- (void)removeObserver:(id)arg1;
- (void)removeUnlockCallback:(id)arg1;
- (void)reportOTAAutoTriggeredEvent;
- (void)reportPostponedEvent:(id)arg1 withStatus:(id)arg2;
- (void)reportSimulatedOTAAutoTriggeredEvent;
- (void)resumeDownload:(id /* block */)arg1;
- (void)resumeOrResetIfNecessary;
- (void)rollbackReadyForReboot;
- (bool)rollbackUpdateWithOptions:(id)arg1 withResult:(id /* block */)arg2;
- (void)scanForUpdates:(id)arg1 complete:(id /* block */)arg2;
- (void)scanForUpdates:(id)arg1 shouldUseDDMInState:(bool)arg2 complete:(id /* block */)arg3;
- (bool)securityResponseRollbackSuggested:(id)arg1 withResult:(id /* block */)arg2;
- (void)setCore:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setForeground:(bool)arg1;
- (void)setIsInstallTonight:(bool)arg1;
- (void)setIsInstallTonightScheduled:(bool)arg1;
- (void)setMandatoryUpdateDictionary:(id)arg1;
- (void)setPasscodePolicy:(id)arg1;
- (id)slaVersion;
- (unsigned long long)softwareUpdatePathRestriction;
- (bool)splatRollbackAllowed:(id*)arg1;
- (void)startDownload:(id /* block */)arg1;
- (void)startDownloadWithMetadata:(id)arg1 withResult:(id /* block */)arg2;
- (void)startDownloadWithOptions:(id)arg1 withResult:(id /* block */)arg2;
- (void)tryAutoDownload;
- (void)unbadgeSettingsForManualSoftwareUpdate;
- (void)updateDownloadMetadata:(id)arg1 withResult:(id /* block */)arg2;
- (void)updateDownloadOptions:(id)arg1 withResult:(id /* block */)arg2;
- (void)updateInstallPolicyType:(unsigned long long)arg1;
- (void)updatesDownloadableWithOptions:(id)arg1 alternateDownloadOptions:(id)arg2 replyHandler:(id /* block */)arg3;

@end