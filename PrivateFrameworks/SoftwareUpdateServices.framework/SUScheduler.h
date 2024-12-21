/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@interface SUScheduler : NSObject <SUServerConfigurationManagerDelegate> {
    NSObject<OS_xpc_object> * _autoInstallActivity;
    SUAutoInstallManager * _autoInstallManager;
    SUCoreActivityScheduler * _coreScheduler;
    SUCoreXPCActivityManager * _coreXPCActivityScheduler;
    <SUManagerInterface> * _manager;
    NSTimer * _retryAutoInstallTimer;
    NSObject<OS_dispatch_queue> * _schedulerQueue;
    SUServerConfigurationManager * _serverConfigManager;
    bool  _useSUCoreXPCActivityManager;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_activityIsScheduled:(id)arg1 cancelIfExpired:(bool)arg2;
- (bool)_activityIsScheduled:(id)arg1 cancelIfExpired:(bool)arg2 scheduledActivity:(id*)arg3;
- (double)_autoDownloadTimeInterval;
- (id)_autoInstallActivityCriteriaWithInstallDate:(id)arg1 descriptor:(id)arg2;
- (double)_autoScanTimeInterval;
- (double)_autoScanTimeIntervalForType:(int)arg1;
- (void)_invalidateRetryAutoInstallaTimer;
- (id)_next7OClockFrom:(id)arg1 after:(double)arg2;
- (void)_queue_cancelAutoInstallStartInstallTask;
- (void)_queue_handleActivity:(id)arg1 info:(id)arg2;
- (void)_queue_handleAnalyticsSubmission:(id)arg1 info:(id)arg2;
- (void)_queue_handleAutoDownload:(id)arg1 info:(id)arg2;
- (void)_queue_handleAutoInstallEnd:(id)arg1 info:(id)arg2;
- (void)_queue_handleAutoInstallGetKeybag:(id)arg1 info:(id)arg2;
- (void)_queue_handleAutoInstallStart:(id)arg1 info:(id)arg2;
- (void)_queue_handleAutoInstallUnlock:(id)arg1 info:(id)arg2;
- (void)_queue_handleAutoScan:(id)arg1 info:(id)arg2 rescheduler:(bool)arg3;
- (void)_queue_handleCancelPresentBannerOnUnlock;
- (void)_queue_handleInstallAlert:(id)arg1 info:(id)arg2;
- (void)_queue_handlePresentBanner:(id)arg1 info:(id)arg2;
- (void)_queue_handleRollbackReboot:(id)arg1 info:(id)arg2;
- (void)_queue_handleScanIntervalConfigChange:(id)arg1;
- (void)_queue_handleServerConfigScan:(id)arg1 info:(id)arg2;
- (void)_queue_invalidateRetryAutoInstallaTimer;
- (void)_queue_setAutoinstallActivity:(id)arg1;
- (void)_queue_unscheduleActivity:(id)arg1;
- (void)_queue_unscheduleAllActivitiesWithName:(id)arg1;
- (double)_randomizedAutoScanDelayForType:(int)arg1;
- (void)_scheduleActivity:(id)arg1;
- (void)_scheduleAutoInstallGetKeybagTaskForDate:(id)arg1;
- (void)_unscheduleActivity:(id)arg1;
- (bool)activityWasPreviouslyScheduledForFutureDate:(id)arg1 copy:(id*)arg2;
- (void)cancelAllAutoDownloadTasks;
- (void)cancelAllAutoInstallTasks;
- (void)cancelAllAutoInstallTasksIncludingStartInstallTask:(bool)arg1;
- (void)cancelAllAutoscanTasks;
- (void)cancelAllBackgroundScans;
- (void)cancelAllEmergencyBackgroundScans;
- (void)cancelAllStartupTasks;
- (void)cancelAutoDownloadTask;
- (void)cancelAutoInstallGetKeybagTask;
- (void)cancelAutoInstallStartInstallTask;
- (void)cancelAutoInstallUnlockWindowStartTask;
- (void)cancelAutoInstallWindowExpirationTask;
- (void)cancelInstallAlertRegistration;
- (void)cancelInstallAlertRegistrationButKeepAlive;
- (void)cancelPresentAutoUpdateBanner;
- (void)cancelRollbackReboot;
- (void)dealloc;
- (void)handleXPCEvent:(id)arg1;
- (id)init;
- (id)nextScheduledAutoScan;
- (int)scanTypeForActivityName:(id)arg1;
- (void)scheduleAllAutoInstallUpdateTasks:(id)arg1 descriptor:(id)arg2;
- (void)scheduleAnalyticsSubmission:(id)arg1;
- (void)scheduleAnalyticsSubmissionIfNecessary;
- (void)scheduleAutoDownloadIfNecessary;
- (void)scheduleAutoDownloadWithDate:(id)arg1 requirePower:(int)arg2 minimumPowerRquirement:(id)arg3;
- (void)scheduleAutoInstallExpirationTask:(id)arg1;
- (void)scheduleAutoInstallGetKeybagTaskForDescriptor:(id)arg1;
- (void)scheduleAutoInstallStartInstallTask:(id)arg1 descriptor:(id)arg2;
- (void)scheduleAutoInstallStartInstallTaskWithDate:(id)arg1 descriptor:(id)arg2 fromFailure:(bool)arg3;
- (void)scheduleAutoInstallUnlockWindowStartTask:(id)arg1;
- (void)scheduleBackgroundScan:(id)arg1;
- (void)scheduleBackgroundScan:(id)arg1 scanDate:(id)arg2;
- (void)scheduleBackgroundScanIfNecessary:(id)arg1 scanType:(int*)arg2;
- (void)scheduleDelayEndAutoScan:(id)arg1;
- (void)scheduleInstallAlertRegistration:(id)arg1;
- (void)schedulePresentAutoUpdateBanner;
- (void)scheduleRollbackReboot:(id)arg1;
- (void)scheduleSimulatedAutoInstallTask;
- (void)scheduleSplatBackgroundScan:(id)arg1;
- (void)scheduleStartupTasksIfNecessary;
- (void)serverConfigManager:(id)arg1 configValuesChanged:(id)arg2;
- (void)setAutoInstallActivityStateDone;
- (void)setAutoinstallActivity:(id)arg1;

@end