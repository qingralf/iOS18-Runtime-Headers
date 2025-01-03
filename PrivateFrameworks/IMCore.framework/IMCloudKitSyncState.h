/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMCloudKitSyncState : NSObject {
    void _exitDate;
    void _isBetweenInitialAndFullSync;
    void _lastFullPartialSyncDate;
    void _lastFullSyncDate;
    void _lastSyncDate;
    void accountEnabled;
    void accountStatus;
    void changingEnabledState;
    void errors;
    void hasAvailableRecordsToDownload;
    void hasExited;
    void isDisablingDevices;
    void lastDownloadProgress;
    void statistics;
    void syncControllerRecordType;
    void syncControllerSyncState;
    void syncControllerSyncType;
    void syncJobState;
    void syncState;
    void syncStatus;
    void syncType;
}

@property (nonatomic, readonly) bool accountNeedsRepair;
@property (nonatomic, readonly) long long accountStatus;
@property (nonatomic, readonly) bool canChangeEnabledSetting;
@property (nonatomic, readonly) bool canEnableSyncing;
@property (nonatomic, readonly) bool canStartSyncing;
@property (nonatomic, readonly) long long changingEnabledState;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSArray *errors;
@property (nonatomic, readonly) NSDate *exitDate;
@property (nonatomic, readonly) bool hasAvailableRecordsToDownload;
@property (nonatomic, readonly) bool hasExited;
@property (nonatomic, readonly) bool isBetweenInitialAndFullSync;
@property (nonatomic, readonly) bool isDisablingDevices;
@property (nonatomic, readonly) bool isSyncEnabledForDisplayOnly;
@property (nonatomic, readonly) bool isSyncing;
@property (nonatomic, readonly) bool isSyncingAvailable;
@property (nonatomic, readonly) bool isSyncingEnabled;
@property (nonatomic, readonly) bool isSyncingPaused;
@property (nonatomic, readonly) double lastDownloadProgress;
@property (nonatomic, readonly) NSDate *lastFullPartialSyncDate;
@property (nonatomic, readonly) NSDate *lastFullSyncDate;
@property (nonatomic, readonly) NSDate *lastSyncDate;
@property (nonatomic, readonly) IMCloudKitSyncStatistics *statistics;
@property (nonatomic, readonly) long long syncControllerRecordType;
@property (nonatomic, readonly) unsigned long long syncControllerSyncState;
@property (nonatomic, readonly) long long syncControllerSyncType;
@property (nonatomic, readonly) unsigned long long syncJobState;
@property (nonatomic, readonly) unsigned long long syncStatus;
@property (nonatomic, readonly) NSString *syncStatusText;
@property (nonatomic, readonly) unsigned long long syncType;
@property (nonatomic, readonly) bool syncingFailed;

- (void).cxx_destruct;
- (bool)accountNeedsRepair;
- (long long)accountStatus;
- (bool)canChangeEnabledSetting;
- (bool)canEnableSyncing;
- (bool)canStartSyncing;
- (long long)changingEnabledState;
- (id)createSyncProgressWithSyncStatistics:(id)arg1;
- (id)description;
- (id)errors;
- (id)exitDate;
- (bool)hasAvailableRecordsToDownload;
- (bool)hasExited;
- (bool)hasNotSyncedInLastSevenDays;
- (id)init;
- (id)initWithAccountEnabled:(bool)arg1 stateDictionary:(id)arg2;
- (bool)isBetweenInitialAndFullSync;
- (bool)isDisablingDevices;
- (bool)isSyncEnabledForDisplayOnly;
- (bool)isSyncing;
- (bool)isSyncingAvailable;
- (bool)isSyncingEnabled;
- (bool)isSyncingPaused;
- (double)lastDownloadProgress;
- (id)lastFullPartialSyncDate;
- (id)lastFullSyncDate;
- (id)lastSyncDate;
- (bool)shouldFetchSyncStatistics;
- (bool)shouldSendSyncProgress;
- (id)statistics;
- (long long)syncControllerRecordType;
- (unsigned long long)syncControllerSyncState;
- (long long)syncControllerSyncType;
- (id)syncErrorWithDomain:(id)arg1 code:(long long)arg2;
- (unsigned long long)syncJobState;
- (unsigned long long)syncStatus;
- (id)syncStatusText;
- (unsigned long long)syncType;
- (bool)syncingFailed;

@end
