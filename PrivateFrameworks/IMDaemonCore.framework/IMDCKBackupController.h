/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDCKBackupController : NSObject <IMDXPCEventStreamHandlerDelegate> {
    IMDCKUtilities * _ckUtilities;
}

@property (nonatomic) IMDCKUtilities *ckUtilities;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDate *firstSyncDate;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool iCloudBackupsDisabled;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (long long)_attemptToDisableiCloudBackupsWithCurrentDeviceState:(id)arg1;
- (bool)_canDisableiCloudBackupsAfterRestore;
- (bool)_currentDeviceStateIsRestore:(id)arg1;
- (id)_debuggingRestoreStateDescription;
- (void)_deviceIDFromMobileBackupManager:(id*)arg1 legacyDeviceID:(id*)arg2;
- (bool)_deviceStateHasChanged:(id)arg1;
- (id)_disabledDirectoryPath;
- (long long)_disableiCloudBackupIfSyncPercentageIsHighEnough:(long long)arg1 totalCount:(long long)arg2;
- (void)_enqueOperation:(id)arg1;
- (void)_ensureRestoredDatabaseToBackup;
- (void)_fetchCountOfSyncedCloudKitRecords:(long long*)arg1 totalCount:(long long*)arg2;
- (double)_firstSyncExpirationTimeInterval;
- (bool)_firstSyncTimeoutHasExpired;
- (id)_primaryAccountAltDSID;
- (id)_readCurrentDeviceState;
- (id)_readPreviousDeviceState;
- (long long)_readRecordCount;
- (void)_savePreviousDeviceState:(id)arg1;
- (void)_saveRecordCount:(long long)arg1;
- (id)_serverBagTimeIntervalForFirstSyncTimeout;
- (void)_setICloudBackupsDisabled:(bool)arg1;
- (bool)_setiCloudBackupAttribute:(bool)arg1 onItemAtPath:(id)arg2 error:(id*)arg3;
- (bool)_timeIntervalFromFirstSync:(id)arg1 hasExpiredForDate:(id)arg2;
- (bool)checkDatabaseWasRestored;
- (id)ckUtilities;
- (id)createBackupManager;
- (id)dateOfLastBackUp;
- (void)eventStreamHandler:(id)arg1 didReceiveEventWithName:(id)arg2 userInfo:(id)arg3;
- (id)firstSyncDate;
- (bool)iCloudBackupEnabledSystemWide;
- (bool)iCloudBackupsDisabled;
- (bool)pathRemovedFromBackup:(id)arg1;
- (bool)readUserDefaultBoolForKey:(id)arg1;
- (id)readUserDefaultForKey:(id)arg1;
- (void)registerForDistributedNotifications;
- (void)removePathFromiCloudBackup:(id)arg1;
- (void)removeUserDefault:(id)arg1;
- (void)sendDeviceIDToCloudKitWithCompletion:(id /* block */)arg1;
- (void)setCkUtilities:(id)arg1;
- (void)setFirstSyncDate:(id)arg1;
- (void)setFirstSyncDateToNow;
- (void)setICloudBackupsDisabled:(bool)arg1;
- (void)setUserDefaultBool:(bool)arg1 forKey:(id)arg2;
- (bool)setupAssistantNeedsToRun;
- (id)syncStateDebuggingInfo:(id)arg1;
- (void)toggleiCloudBackupsIfNeeded:(id /* block */)arg1;
- (void)writeUserDefault:(id)arg1 forKey:(id)arg2;

@end
