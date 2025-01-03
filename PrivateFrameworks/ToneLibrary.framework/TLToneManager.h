/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@interface TLToneManager : NSObject {
    TLAccessQueue * _accessQueue;
    NSDictionary * _cachedTonePreferences;
    bool  _cachedWatchPrefersSalientNotifications;
    <NSCopying> * _contentProtectionStateObserverToken;
    bool  _hasValidCachedWatchPrefersSalientNotifications;
    bool  _shouldIgnoreNextToneDidChangeNotification;
    bool  _shouldSkipNextWatchPrefersSalientNotificationsDidChangeNotification;
    bool  _shouldUseServiceToAccessTonePreferences;
    NSDictionary * _systemTonesByIdentifier;
    NSDictionary * _toneIdentifierAliasMap;
    NSDictionary * _toneIdentifiersBySyncIdentifier;
    NSDictionary * _tonesByIdentifier;
    NPSDomainAccessor * _transientNanoPreferencesDomainAccessor;
}

@property (nonatomic, readonly) NSString *_deviceITunesRingtoneDirectory;
@property (nonatomic, readonly) NSString *_deviceITunesRingtoneInformationPlist;
@property (nonatomic, readonly) NSString *_iTunesRingtoneDirectory;
@property (nonatomic, readonly) NSString *_iTunesRingtoneInformationPlist;
@property (nonatomic, readonly) NSString *_rootDirectory;
@property (nonatomic, readonly) NSString *_systemRingtoneDirectory;

// Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary

+ (id)_abbreviatedDescriptionOfMediaPlaybackArchive:(id)arg1;
+ (id)_abbreviatedDescriptionOfToneIdentifierWithUnderlyingMediaPlaybackArchiveForLogging:(id)arg1;
+ (id)_currentOverridePolicyPreferenceKeyForAlertType:(long long)arg1;
+ (id)_defaultToneIdentifierForAlertType:(long long)arg1 topic:(id)arg2;
+ (id)_defaultWatchToneIdentifierForAlertType:(long long)arg1 topic:(id)arg2;
+ (bool)_ensureTCCAccessPreflightAndCheckForFileExistenceAtPath:(id)arg1;
+ (bool)_migrateLegacyToneSettings;
+ (id)_systemWideTonePreferenceKeyForAlertType:(long long)arg1;
+ (id)sharedToneManager;

- (void).cxx_destruct;
- (id)_addToneEntries:(id)arg1 toManifestAtPath:(id)arg2 mediaDirectory:(id)arg3 shouldSkipReload:(bool)arg4;
- (id)_addToneToManifestAtPath:(id)arg1 metadata:(id)arg2 fileName:(id)arg3 mediaDirectory:(id)arg4;
- (id)_alarmWakeUpRingtoneDirectory;
- (id)_aliasForToneIdentifier:(id)arg1;
- (id)_allSyncedTones;
- (id)_baseDirectoryForAlertToneSoundFiles;
- (long long)_currentOverridePolicyForAlertType:(long long)arg1;
- (long long)_currentOverridePolicyForAlertType:(long long)arg1 didFindAlertOverridePolicy:(bool*)arg2;
- (id)_currentToneIdentifierForAlertType:(long long)arg1 topic:(id)arg2;
- (id)_currentToneIdentifierForAlertType:(long long)arg1 topic:(id)arg2 allowsFallbackToDefaultPreferablyNonSilentToneForInvalidPersistedValue:(bool)arg3;
- (long long)_currentToneWatchAlertPolicyForAlertType:(long long)arg1;
- (long long)_currentToneWatchAlertPolicyForAlertType:(long long)arg1 accountIdentifier:(id)arg2;
- (long long)_currentToneWatchAlertPolicyForAlertType:(long long)arg1 topic:(id)arg2;
- (long long)_currentToneWatchAlertPolicyForAlertType:(long long)arg1 topic:(id)arg2 didFindPersistedWatchAlertPolicy:(bool*)arg3;
- (id)_currentToneWatchAlertPolicyPreferenceKeyForAlertType:(long long)arg1 topic:(id)arg2;
- (id)_currentWatchToneIdentifierForAlertType:(long long)arg1 topic:(id)arg2 didFindPersistedWatchToneIdentifier:(bool*)arg3;
- (id)_currentWatchToneIdentifierPreferenceKeyForAlertType:(long long)arg1 topic:(id)arg2;
- (id)_defaultPreferablyNonSilentToneIdentifierForAlertType:(long long)arg1 topic:(id)arg2;
- (id)_defaultRingtoneName;
- (id)_defaultRingtonePath;
- (id)_deviceITunesRingtoneDirectory;
- (id)_deviceITunesRingtoneInformationPlist;
- (void)_didSetTonePreferenceSuccessfullyWithKey:(id)arg1 inDomain:(id)arg2 usingPreferencesOfKind:(unsigned long long)arg3;
- (bool)_ensureDirectoryExistsAtPath:(id)arg1;
- (long long)_evaluateOrphanEntriesCleanupStatusForcingReevaluationIfPreviouslyDone:(bool)arg1 returningFilePathsForFoundOrphans:(id*)arg2 wasAffectedByAccidentalToneDeletion:(bool*)arg3;
- (id)_fileNameFromToneIdentifier:(id)arg1 withPrefix:(id)arg2;
- (id)_filePathForToneIdentifier:(id)arg1 isValid:(bool*)arg2;
- (void)_handleDeviceRingtonesChangedNotification;
- (void)_handleProtectionContentUnlockedEvent;
- (void)_handleTonePreferencesChangedNotificationForPreferencesKinds:(unsigned long long)arg1;
- (void)_handleWatchPrefersSalientNotificationDidChange;
- (bool)_hasUnderlyingPlaybackArchiveForToneIdentifier:(id)arg1;
- (id)_iTunesRingtoneDirectory;
- (id)_iTunesRingtoneInformationPlist;
- (id)_importPurchasedToneWithMetadata:(id)arg1 fileName:(id)arg2;
- (bool)_importSyncedToneWithMetadata:(id)arg1 fileName:(id)arg2;
- (id)_installedTones;
- (unsigned long long)_installedTonesSize;
- (bool)_loadITunesRingtoneInfoPlistAtPath:(id)arg1;
- (void)_loadSystemTones;
- (void)_loadToneIdentifierAliasMap;
- (id)_localizedNameOfToneWithIdentifier:(id)arg1;
- (int)_lockManifestAtPath:(id)arg1;
- (id)_nameForToneIdentifier:(id)arg1 isValid:(bool*)arg2;
- (id)_newServiceConnection;
- (void)_performBlockInAccessQueue:(id /* block */)arg1;
- (id)_previewSoundForToneIdentifier:(id)arg1;
- (void)_registerDidRequestResetSyncPostAccidentalToneDeletion;
- (void)_reloadTones;
- (void)_reloadTonesAfterExternalChange;
- (void)_removeAllSyncedData;
- (bool)_removeAllTones;
- (long long)_removeOrphanedManifestEntriesReturningFilePathsForFoundOrphans:(id*)arg1;
- (id)_removeOrphanedPlistEntriesInManifestAtPath:(id)arg1 mediaDirectory:(id)arg2;
- (bool)_removeToneFromManifestAtPath:(id)arg1 fileName:(id)arg2;
- (bool)_removeToneWithIdentifier:(id)arg1;
- (bool)_removeToneWithIdentifier:(id)arg1 orSyncIdentifier:(id)arg2;
- (bool)_removeToneWithSyncIdentifier:(id)arg1;
- (bool)_removeTonesFromManifestAtPath:(id)arg1 fileNames:(id)arg2 shouldSkipReload:(bool)arg3 alreadyLockedManifest:(bool)arg4 removedEntries:(id*)arg5;
- (id)_rootDirectory;
- (void)_setCurrentOverridePolicy:(long long)arg1 forAlertType:(long long)arg2;
- (void)_setCurrentToneWatchAlertPolicy:(long long)arg1 forAlertType:(long long)arg2;
- (void)_setCurrentToneWatchAlertPolicy:(long long)arg1 forAlertType:(long long)arg2 accountIdentifier:(id)arg3;
- (void)_setCurrentToneWatchAlertPolicy:(long long)arg1 forAlertType:(long long)arg2 topic:(id)arg3;
- (bool)_setToneIdentifierUsingService:(id)arg1 keyedByTopic:(id)arg2 forPreferenceKey:(id)arg3;
- (void)_setWatchPrefersSalientNotifications:(bool)arg1;
- (id)_soundForToneIdentifier:(id)arg1;
- (id)_systemEmbeddedClassicSoundDirectory;
- (id)_systemEmbeddedEncoreInfinitumSoundDirectory;
- (id)_systemEmbeddedModernSoundDirectory;
- (id)_systemEmbeddedSoundDirectory;
- (id)_systemRingtoneDirectory;
- (id)_systemSoundDirectory;
- (id)_systemWatchSoundDirectory;
- (id)_toneForSyncIdentifier:(id)arg1;
- (id)_toneIdentifierForDeemphasizingAlertWithType:(long long)arg1 topic:(id)arg2 regularToneIdentifier:(id)arg3;
- (id)_toneIdentifierForFileAtPath:(id)arg1 isValid:(bool*)arg2;
- (id)_toneIdentifierWithUnderlyingPlaybackArchive:(id)arg1;
- (id)_tonePreferencesFromService;
- (id)_toneWithIdentifier:(id)arg1;
- (bool)_toneWithIdentifierIsAlarmWakeUp:(id)arg1;
- (bool)_toneWithIdentifierIsDefaultRingtone:(id)arg1;
- (bool)_toneWithIdentifierIsITunesRingtone:(id)arg1;
- (bool)_toneWithIdentifierIsMediaPlaybackArchive:(id)arg1;
- (bool)_toneWithIdentifierIsNonDefaultAndNonEmbeddedSystemRingtone:(id)arg1;
- (bool)_toneWithIdentifierIsNonDefaultSystemRingtone:(id)arg1;
- (bool)_toneWithIdentifierIsSystemTone:(id)arg1;
- (bool)_toneWithIdentifierIsValid:(id)arg1;
- (id)_tonesFromManifestPath:(id)arg1 mediaDirectoryPath:(id)arg2;
- (bool)_transferPurchasedToITunes:(id)arg1;
- (id)_underlyingPlaybackArchiveForToneIdentifier:(id)arg1;
- (double)_unduckTimeForToneIdentifier:(id)arg1;
- (id)_unduckTimeNumberForToneIdentifier:(id)arg1 fromResourceNamed:(id)arg2;
- (bool)_wasAffectedByAccidentalToneDeletion;
- (bool)_watchPrefersSalientNotifications;
- (id)currentToneIdentifierForAlertType:(long long)arg1;
- (id)currentToneIdentifierForAlertType:(long long)arg1 accountIdentifier:(id)arg2;
- (id)currentToneIdentifierForAlertType:(long long)arg1 topic:(id)arg2;
- (id)currentToneNameForAlertType:(long long)arg1;
- (unsigned int)currentToneSoundIDForAlertType:(long long)arg1;
- (unsigned int)currentToneSoundIDForAlertType:(long long)arg1 topic:(id)arg2;
- (id)currentWatchToneIdentifierForAlertType:(long long)arg1;
- (id)currentWatchToneIdentifierForAlertType:(long long)arg1 topic:(id)arg2;
- (void)dealloc;
- (id)defaultRingtoneIdentifier;
- (id)defaultToneIdentifierForAlertType:(long long)arg1;
- (id)defaultToneIdentifierForAlertType:(long long)arg1 topic:(id)arg2;
- (id)defaultWatchToneIdentifierForAlertType:(long long)arg1;
- (id)defaultWatchToneIdentifierForAlertType:(long long)arg1 topic:(id)arg2;
- (id)filePathForToneIdentifier:(id)arg1;
- (bool)hasSpecificDefaultToneIdentifierForAlertType:(long long)arg1 topic:(id)arg2;
- (void)importTone:(id)arg1 metadata:(id)arg2 completionBlock:(id /* block */)arg3;
- (id)init;
- (id)initWithITunesRingtonePlistAtPath:(id)arg1;
- (id)nameForToneIdentifier:(id)arg1;
- (void)removeImportedToneWithIdentifier:(id)arg1;
- (void)setCurrentToneIdentifier:(id)arg1 forAlertType:(long long)arg2;
- (void)setCurrentToneIdentifier:(id)arg1 forAlertType:(long long)arg2 accountIdentifier:(id)arg3;
- (void)setCurrentToneIdentifier:(id)arg1 forAlertType:(long long)arg2 topic:(id)arg3;
- (void)setCurrentWatchToneIdentifier:(id)arg1 forAlertType:(long long)arg2;
- (void)setCurrentWatchToneIdentifier:(id)arg1 forAlertType:(long long)arg2 topic:(id)arg3;
- (id)subtitleForToneIdentifier:(id)arg1;
- (bool)toneWithIdentifierIsValid:(id)arg1;

// Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard

- (bool)bb_isToneEnabledForAlertConfiguration:(id)arg1;
- (bool)bb_isToneEnabledForAlertType:(long long)arg1 topic:(id)arg2;
- (bool)bb_isToneEnabledForSectionInfo:(id)arg1;
- (id)bb_toneIdentifierForAlertConfiguration:(id)arg1;

// Image: /System/Library/PrivateFrameworks/UserNotificationsCore.framework/UserNotificationsCore

- (bool)unc_isToneEnabledForAlertConfiguration:(id)arg1;
- (bool)unc_isToneEnabledForAlertType:(long long)arg1 topic:(id)arg2;
- (bool)unc_isToneEnabledForSectionInfo:(id)arg1;
- (id)unc_toneIdentifierForAlertConfiguration:(id)arg1;

@end
