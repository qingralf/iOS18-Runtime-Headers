/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MessagesCloudSync.framework/MessagesCloudSync
 */

@interface IMDMessagesSyncCoordinator : NSObject

+ (void)clearLocalCountsWhenSafe;
+ (void)clearSyncStoreWhenSafe;
+ (id)configureWithDelegate:(id)arg1;
+ (long long)currentTelemetryVersion;
+ (void)fetchSyncStoreCountsWithCompletion:(id /* block */)arg1;
+ (void)initiateSync:(id)arg1 forceRunNow:(bool)arg2 reply:(id /* block */)arg3;
+ (bool)isSyncing;
+ (id)readServerCountsFromDefaults;
+ (void)registerBackupController:(id)arg1;
+ (void)registerErrorAnalyzer:(id)arg1;
+ (void)registerNotifier:(id)arg1;
+ (void)registerPreReqsVerifier:(id)arg1;
+ (void)registerStore:(id)arg1 asType:(long long)arg2;
+ (void)registerSyncStateManager:(id)arg1;
+ (void)registerSyncTokenStore:(id)arg1;
+ (id)scheduleAttachmentAssetDownloadWithDelegate:(id)arg1;
+ (id)scheduleBackfillSyncWithDelegate:(id)arg1;
+ (id)scheduleBackupSyncWithDelegate:(id)arg1;
+ (id)schedulePeriodicSyncWithDelegate:(id)arg1;
+ (id)scheduleTelemetrySyncWithDelegate:(id)arg1;
+ (id)startInitialSyncWithDelegate:(id)arg1;
+ (id)startUserInitiatedSyncWithDelegate:(id)arg1;

@end
