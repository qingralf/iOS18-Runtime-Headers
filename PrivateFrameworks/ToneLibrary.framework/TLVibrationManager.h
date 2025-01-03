/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@interface TLVibrationManager : NSObject {
    TLAccessQueue * _accessQueue;
    bool  _allowsAutoRefresh;
    NSMutableDictionary * _cachedSystemVibrationCompleteSubdirectories;
    NSMutableDictionary * _cachedSystemVibrationIdentifiers;
    NSDictionary * _cachedUserGeneratedVibrationPatterns;
    bool  _needsRefresh;
    unsigned long long  _specialBehaviors;
    NSDictionary * _synchronizedVibrationPatternFromToneIdentifierMapping;
    NPSDomainAccessor * _transientNanoPreferencesDomainAccessor;
}

@property (nonatomic) bool allowsAutoRefresh;
@property (nonatomic, readonly) bool needsRefresh;
@property (nonatomic, readonly) bool shouldVibrateForCurrentRingerSwitchState;
@property (nonatomic, readonly) bool shouldVibrateOnRing;
@property (nonatomic, readonly) bool shouldVibrateOnSilent;

// Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary

+ (void)_handleVibrateOnRingOrSilentDidChangeNotification;
+ (void)_handleVibrationPreferencesDidChangeNotificationForPreferencesKinds:(unsigned long long)arg1 atInitiativeOfVibrationManager:(id)arg2;
+ (id)sharedVibrationManager;

- (void).cxx_destruct;
- (bool)_areSynchronizedVibrationsAllowedForAlertType:(long long)arg1 topic:(id)arg2;
- (bool)_booleanPreferenceForKey:(struct __CFString { }*)arg1 defaultValue:(bool)arg2;
- (id)_completeSystemVibrationsSubdirectoryForSubdirectory:(id)arg1;
- (id)_currentVibrationIdentifierForAlertType:(long long)arg1 topic:(id)arg2;
- (id)_currentVibrationIdentifierForAlertType:(long long)arg1 topic:(id)arg2 allowsFallbackToDefaultPreferablyNonSilentVibrationForInvalidPersistedValue:(bool)arg3;
- (id)_currentVibrationIdentifierForAlertType:(long long)arg1 topic:(id)arg2 correspondingToneIdentifier:(id)arg3;
- (id)_currentVibrationIdentifierForAlertType:(long long)arg1 topic:(id)arg2 correspondingToneIdentifier:(id)arg3 allowsNoneDefaultToAnyActualVibrationSubstitution:(bool)arg4;
- (long long)_currentVibrationWatchAlertPolicyForAlertType:(long long)arg1;
- (long long)_currentVibrationWatchAlertPolicyForAlertType:(long long)arg1 accountIdentifier:(id)arg2;
- (long long)_currentVibrationWatchAlertPolicyForAlertType:(long long)arg1 topic:(id)arg2;
- (long long)_currentVibrationWatchAlertPolicyForAlertType:(long long)arg1 topic:(id)arg2 didFindPersistedWatchAlertPolicy:(bool*)arg3;
- (id)_currentVibrationWatchAlertPolicyPreferenceKeyForAlertType:(long long)arg1 topic:(id)arg2;
- (id)_defaultPreferablyNonSilentVibrationIdentifierForAlertType:(long long)arg1 topic:(id)arg2 correspondingToneIdentifier:(id)arg3;
- (id)_defaultVibrationIdentifierForAlertType:(long long)arg1 topic:(id)arg2 correspondingToneIdentifier:(id)arg3;
- (void)_didChangeUserGeneratedVibrationPatterns;
- (void)_didSetVibrationPreferenceSuccessfullyWithKey:(id)arg1 inDomain:(id)arg2 usingPreferencesOfKind:(unsigned long long)arg3;
- (void)_handleUserGeneratedVibrationsDidChangeNotification;
- (id)_initWithSpecialBehaviors:(unsigned long long)arg1;
- (bool)_isUnitTestingModeEnabled;
- (id)_localizedNameForVibrationWithIdentifier:(id)arg1;
- (void)_makeSystemVibrationDataMigrationVersionCurrentIfNecessary;
- (bool)_migrateLegacySettings;
- (id)_nameOfVibrationWithIdentifier:(id)arg1;
- (id)_newServiceConnection;
- (unsigned long long)_numberOfUserGeneratedVibrations;
- (id)_patternForSystemVibrationWithIdentifier:(id)arg1 correspondingToneIdentifier:(id)arg2 targetDevice:(long long)arg3 shouldLogAssetPath:(bool)arg4;
- (void)_performBlockInAccessQueue:(id /* block */)arg1;
- (bool)_removeAllUserGeneratedVibrationPatternsUsingServiceWithError:(id*)arg1;
- (bool)_removeAllUserGeneratedVibrationsWithError:(id*)arg1;
- (id)_retrieveUserGeneratedVibrationPatternsUsingService;
- (id)_sanitizeVibrationIdentifier:(id)arg1 forAlertType:(long long)arg2 topic:(id)arg3 targetDevice:(long long)arg4 correspondingToneIdentifier:(id)arg5 didFallbackToCurrentVibrationIdentifier:(bool*)arg6;
- (id)_sanitizeVibrationIdentifier:(id)arg1 forAlertType:(long long)arg2 topic:(id)arg3 targetDevice:(long long)arg4 correspondingToneIdentifier:(id)arg5 useDefaultVibrationAsFallback:(bool)arg6 allowsNoneDefaultToAnyActualVibrationSubstitution:(bool)arg7 didFallback:(bool*)arg8;
- (bool)_saveUserGeneratedVibrationPatterns:(id)arg1 error:(id*)arg2;
- (void)_setCurrentVibrationWatchAlertPolicy:(long long)arg1 forAlertType:(long long)arg2;
- (void)_setCurrentVibrationWatchAlertPolicy:(long long)arg1 forAlertType:(long long)arg2 accountIdentifier:(id)arg3;
- (void)_setCurrentVibrationWatchAlertPolicy:(long long)arg1 forAlertType:(long long)arg2 topic:(id)arg3;
- (bool)_setUserGeneratedVibrationPatternsUsingService:(id)arg1 error:(id*)arg2;
- (unsigned long long)_storedSystemVibrationDataMigrationVersion;
- (id)_synchronizedVibrationIdentifierForToneIdentifier:(id)arg1 targetDevice:(long long)arg2;
- (id)_systemVibrationIdentifiersForSubdirectory:(id)arg1;
- (id)_systemWideVibrationPatternPreferenceKeyForAlertType:(long long)arg1;
- (id)_userGeneratedVibrationPatterns;
- (bool)_vibrationIsSettableForAlertType:(long long)arg1;
- (id)addUserGeneratedVibrationPattern:(id)arg1 name:(id)arg2 error:(id*)arg3;
- (id)allUserGeneratedVibrationIdentifiers;
- (id)allUserSelectableSystemVibrationIdentifiers;
- (bool)allowsAutoRefresh;
- (id)currentVibrationIdentifierForAlertType:(long long)arg1;
- (id)currentVibrationIdentifierForAlertType:(long long)arg1 accountIdentifier:(id)arg2;
- (id)currentVibrationIdentifierForAlertType:(long long)arg1 topic:(id)arg2;
- (id)currentVibrationNameForAlertType:(long long)arg1;
- (id)currentVibrationPatternForAlertType:(long long)arg1;
- (void)dealloc;
- (id)defaultVibrationIdentifierForAlertType:(long long)arg1;
- (id)defaultVibrationIdentifierForAlertType:(long long)arg1 topic:(id)arg2;
- (id)defaultVibrationNameForAlertType:(long long)arg1;
- (id)defaultVibrationPatternForAlertType:(long long)arg1;
- (bool)deleteUserGeneratedVibrationPatternWithIdentifier:(id)arg1 error:(id*)arg2;
- (bool)hasSpecificDefaultVibrationIdentifierForAlertType:(long long)arg1 topic:(id)arg2;
- (id)init;
- (id)nameOfVibrationWithIdentifier:(id)arg1;
- (bool)needsRefresh;
- (id)noneVibrationName;
- (id)noneVibrationPattern;
- (id)patternForVibrationWithIdentifier:(id)arg1;
- (id)patternForVibrationWithIdentifier:(id)arg1 repeating:(bool)arg2;
- (bool)refresh;
- (void)setAllowsAutoRefresh:(bool)arg1;
- (void)setCurrentVibrationIdentifier:(id)arg1 forAlertType:(long long)arg2;
- (void)setCurrentVibrationIdentifier:(id)arg1 forAlertType:(long long)arg2 accountIdentifier:(id)arg3;
- (void)setCurrentVibrationIdentifier:(id)arg1 forAlertType:(long long)arg2 topic:(id)arg3;
- (bool)setName:(id)arg1 forUserGeneratedVibrationWithIdentifier:(id)arg2 error:(id*)arg3;
- (bool)shouldVibrateForCurrentRingerSwitchState;
- (bool)shouldVibrateOnRing;
- (bool)shouldVibrateOnSilent;
- (bool)vibrationWithIdentifierIsValid:(id)arg1;

// Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard

- (bool)bb_isVibrationEnabledForAlertConfiguration:(id)arg1;
- (bool)bb_isVibrationEnabledForAlertType:(long long)arg1 topic:(id)arg2;
- (bool)bb_isVibrationEnabledForSectionInfo:(id)arg1;
- (id)bb_vibrationIdentifierForAlertConfiguration:(id)arg1;

// Image: /System/Library/PrivateFrameworks/UserNotificationsCore.framework/UserNotificationsCore

- (bool)unc_isVibrationEnabledForAlertConfiguration:(id)arg1;
- (bool)unc_isVibrationEnabledForAlertType:(long long)arg1 topic:(id)arg2;
- (bool)unc_isVibrationEnabledForSectionInfo:(id)arg1;
- (id)unc_vibrationIdentifierForAlertConfiguration:(id)arg1;

@end
