/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@interface SUManagerServer : NSObject <SUAutoInstallManagerDelegate, SUManagerDelegate, SUManagerServerInterface> {
    SUAutoInstallManager * _autoInstallManager;
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSMutableArray * _clients;
    SUAnalyticsManager * _coreAnalyticsManager;
    SUDDMManager * _ddmManager;
    SUSFollowUpController * _followUpController;
    <SUManagerInterface> * _manager;
    bool  _underExclusiveControl;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property bool underExclusiveControl;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_clientForCurrentConnection;
- (void)_clientForegroundnessDidChange:(id)arg1;
- (void)_clientMessagabilityDidChange:(id)arg1;
- (void)_evaluateForegroundness;
- (void)_getDDMStatusWithKeys:(id)arg1 withResult:(id /* block */)arg2;
- (id)_installReasons;
- (id)_mdmCommandConflictsWithDDMError;
- (void)_notifyServerStart;
- (void)_run;
- (void)_sendLatestStatusForClient:(id)arg1;
- (void)addClient:(id)arg1;
- (id)autoInstallManager;
- (void)autoInstallManager:(id)arg1 didCancelOperation:(id)arg2;
- (void)autoInstallManager:(id)arg1 didExpireOperation:(id)arg2 withError:(id)arg3;
- (void)autoInstallManager:(id)arg1 isReadyToInstall:(id)arg2 withResult:(id /* block */)arg3;
- (void)autoInstallManager:(id)arg1 operationWasConsented:(id)arg2;
- (void)autoInstallManager:(id)arg1 passcodePolicyChanged:(unsigned long long)arg2 forOperation:(id)arg3;
- (void)autoScanAndDownloadIfAvailable:(id /* block */)arg1;
- (void)autoScanAndDownloadNow:(bool)arg1 ifAvailable:(id /* block */)arg2;
- (void)automaticDownloadDidFailToStartForNewUpdateAvailable:(id)arg1 withError:(id)arg2;
- (void)cancelAutoInstallOperation:(id)arg1 withResult:(id /* block */)arg2;
- (void)cancelDDMDeclaration:(id)arg1 withResult:(id /* block */)arg2;
- (void)cancelDDMDeclarationForKey:(id)arg1 completion:(id /* block */)arg2;
- (void)cancelDownloadWithOptions:(id)arg1 withResult:(id /* block */)arg2;
- (void)clearingSpaceForDownload:(id)arg1 clearing:(bool)arg2;
- (id)clients;
- (id)connectionQueue;
- (void)consentToAutoInstallOperation:(id)arg1 withResult:(id /* block */)arg2;
- (id)coreAnalyticsManager;
- (void)createInstallationKeybag:(id)arg1 withResult:(id /* block */)arg2;
- (void)currentAutoInstallOperation:(bool)arg1 withResult:(id /* block */)arg2;
- (void)currentAutoInstallOperationForecast:(id /* block */)arg1;
- (void)currentPasscodePolicy:(id /* block */)arg1;
- (id)ddmManager;
- (void)dealloc;
- (void)delayEndDate:(id /* block */)arg1;
- (void)descriptor:(id /* block */)arg1;
- (void)descriptors:(id /* block */)arg1;
- (void)destroyInstallationKeybag;
- (void)deviceHasSufficientSpaceForDownload:(id /* block */)arg1;
- (void)deviceHasSufficientSpaceForDownloadIncludeAppPurging:(bool)arg1 descriptor:(id)arg2 replyHandler:(id /* block */)arg3;
- (void)deviceHasSufficientSpaceForDownloadIncludeAppPurging:(bool)arg1 replyHandler:(id /* block */)arg2;
- (void)deviceHasSufficientSpaceForDownloads:(id /* block */)arg1;
- (void)deviceHasSufficientSpaceForDownloadsIncludeAppPurging:(bool)arg1 replyHandler:(id /* block */)arg2;
- (void)downloadAndInstallState:(id /* block */)arg1;
- (void)downloadDidFail:(id)arg1 withError:(id)arg2;
- (void)downloadDidFinish:(id)arg1 withInstallPolicy:(id)arg2;
- (void)downloadDidStart:(id)arg1;
- (void)downloadProgressDidChange:(id)arg1;
- (void)downloadWasInvalidatedForNewUpdatesAvailable:(id)arg1;
- (void)eligibleRollbackWithOptions:(id)arg1 withResult:(id /* block */)arg2;
- (void)enableAutomaticDownload:(bool)arg1;
- (void)enableAutomaticUpdateV2:(bool)arg1;
- (void)exitExclusiveControl;
- (void)extraSpaceNeededForDownloadWithoutAppPurging:(id /* block */)arg1;
- (void)getAllDeclarationsWithHandler:(id /* block */)arg1;
- (void)getDDMDeclarationWithHandler:(id /* block */)arg1;
- (void)getDDMGlobalSettingsWithHandler:(id /* block */)arg1;
- (void)getDDMStatusWithKeys:(id)arg1 completion:(id /* block */)arg2;
- (void)getDDMUpdateDescriptorWithHandler:(id /* block */)arg1;
- (void)getMandatorySoftwareUpdateDictionary:(id /* block */)arg1;
- (void)getShouldDisableAutoDownloadIOSUpdatesToggleWithHandler:(id /* block */)arg1;
- (void)getShouldDisableAutoInstallIOSUpdatesToggleWithHandler:(id /* block */)arg1;
- (void)getShouldDisableAutoInstallRSRToggleWithHandler:(id /* block */)arg1;
- (void)goUnderExclusiveControl;
- (void)handleClientRequest:(const char *)arg1 client:(id)arg2 withRequestCallBack:(id /* block */)arg3 withErrorCallBack:(id /* block */)arg4;
- (void)handleDDMDeclaration:(id)arg1 withResult:(id /* block */)arg2;
- (id)init;
- (void)installDidFail:(id)arg1 withError:(id)arg2;
- (void)installDidFinish:(id)arg1;
- (void)installDidStart:(id)arg1;
- (void)installPolicyDidChange:(id)arg1;
- (id)installReasonForClientName:(id)arg1;
- (void)installServerConfiguration;
- (void)installTonightScheduled:(bool)arg1;
- (void)installUpdate:(id /* block */)arg1;
- (void)installUpdateWithInstallOptions:(id)arg1 withResult:(id /* block */)arg2;
- (void)installUpdateWithOptions:(id)arg1 withResult:(id /* block */)arg2;
- (void)installWantsToStart:(id)arg1 completion:(id /* block */)arg2;
- (void)isAnyClientInUserInteraction:(id /* block */)arg1;
- (void)isAutoUpdateEnabled:(id /* block */)arg1;
- (void)isAutoUpdateScheduled:(id /* block */)arg1;
- (void)isAutomaticDownloadEnabled:(id /* block */)arg1;
- (void)isAutomaticUpdateV2Enabled:(id /* block */)arg1;
- (void)isClearingSpaceForDownload:(id /* block */)arg1;
- (void)isDelayingUpdates:(id /* block */)arg1;
- (void)isDownloading:(id /* block */)arg1;
- (void)isInstallationKeybagRequired:(id /* block */)arg1;
- (void)isInstallationKeybagRequiredForDescriptor:(id)arg1 result:(id /* block */)arg2;
- (void)isRollingBack:(id /* block */)arg1;
- (void)isScanning:(id /* block */)arg1;
- (void)isSoftwareUpdateInProgress:(id /* block */)arg1;
- (void)isSplatOnlyUpdateRollbackSuggested:(id /* block */)arg1;
- (void)isUpdateReadyForInstallation:(id /* block */)arg1;
- (void)isUpdateReadyForInstallationWithOptions:(id)arg1 withResult:(id /* block */)arg2;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)managedInstallationRequested:(id)arg1;
- (id)manager;
- (bool)mdmCommandConflictsWithDDM:(id)arg1;
- (void)networkMonitorDetectOverrides;
- (void)newOSDetected:(id)arg1 deleteKeepAlive:(bool)arg2;
- (void)pauseDownload:(id /* block */)arg1;
- (void)presentAutoUpdateBanner:(id /* block */)arg1;
- (void)presentingRecommendedUpdate:(id)arg1 shouldPresent:(bool)arg2;
- (void)previousRollback:(id)arg1 withResult:(id /* block */)arg2;
- (void)purgeDownloadWithOptions:(id)arg1 withResult:(id /* block */)arg2;
- (void)recordSUAnalyticsEvent:(id)arg1;
- (void)registerCSInstallPredicatesOnDate:(id)arg1;
- (void)removeClient:(id)arg1;
- (void)resetState;
- (void)resumeDownload:(id /* block */)arg1;
- (void)rollbackDidFail:(id)arg1 withError:(id)arg2;
- (void)rollbackDidStart:(id)arg1;
- (void)rollbackReadyForReboot:(id)arg1;
- (void)rollbackReadyToStart:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)rollbackSucceeded:(id)arg1;
- (void)rollbackSuggested:(id)arg1 info:(id)arg2;
- (void)rollbackUpdateWithOptions:(id)arg1 withResult:(id /* block */)arg2;
- (void)runOnClients:(id /* block */)arg1;
- (void)runOnClientsUntilStop:(id /* block */)arg1;
- (void)runUntilIdleExit;
- (void)rvGetCurrentNeRDInfoWithReply:(id /* block */)arg1;
- (void)rvTriggerNeRDUpdate:(id)arg1;
- (void)scanDidCompleteForOptions:(id)arg1 results:(id)arg2 error:(id)arg3;
- (void)scanDidCompleteWithNewUpdateAvailable:(id)arg1 error:(id)arg2;
- (void)scanForUpdates:(id)arg1 withResult:(id /* block */)arg2;
- (void)scanRequestDidFinishForOptions:(id)arg1 results:(id)arg2 error:(id)arg3;
- (void)scanRequestDidFinishForOptions:(id)arg1 update:(id)arg2 error:(id)arg3;
- (void)scanRequestDidStartForOptions:(id)arg1;
- (void)scheduleRollbackRebootForLater:(id /* block */)arg1;
- (void)securityResponseRollbackSuggested:(id)arg1 withResult:(id /* block */)arg2;
- (void)sendDDMDeclarationToUI:(id)arg1;
- (void)sendDDMGlobalSettingsToUI:(id)arg1;
- (void)serverInitAndResumeWork;
- (void)setClientType:(int)arg1 withResult:(id /* block */)arg2;
- (void)setDDMGlobalSettings:(id)arg1 completion:(id /* block */)arg2;
- (void)setExclusiveControl:(bool)arg1;
- (void)setLastRollbackDescriptor:(id)arg1 withResult:(id /* block */)arg2;
- (void)setMandatorySoftwareUpdateDictionary:(id)arg1;
- (void)setUnderExclusiveControl:(bool)arg1;
- (void)slaVersion:(id /* block */)arg1;
- (void)softwareUpdatePathRestriction:(id /* block */)arg1;
- (void)splatRollbackAllowed:(id /* block */)arg1;
- (void)splatRollbackDetected:(id)arg1;
- (void)splatUpdateDetected;
- (void)startDownload:(id /* block */)arg1;
- (void)startDownloadWithMetadata:(id)arg1 withResult:(id /* block */)arg2;
- (void)startDownloadWithOptions:(id)arg1 withResult:(id /* block */)arg2;
- (void)submitAllSUAnalyticsEvents;
- (void)submitSUAnalyticsEvent:(id)arg1;
- (void)submitSUAnalyticsEventsWithName:(id)arg1;
- (bool)underExclusiveControl;
- (void)updateDownloadMetadata:(id)arg1 withResult:(id /* block */)arg2;
- (void)updateDownloadOptions:(id)arg1 withResult:(id /* block */)arg2;
- (void)updatesDownloadableWithOptions:(id)arg1 alternateDownloadOptions:(id)arg2 replyHandler:(id /* block */)arg3;
- (void)userAskedToDeferInstall;
- (void)writeKeepAliveFile:(id /* block */)arg1;

@end