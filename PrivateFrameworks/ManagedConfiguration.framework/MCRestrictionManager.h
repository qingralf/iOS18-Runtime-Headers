/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCRestrictionManager : NSObject {
    NSObject<OS_dispatch_queue> * _memberQueue;
    NSMutableDictionary * _memberQueueEffectiveUserSettings;
    NSArray * _memberQueueEffectiveWhitelistedAppsAndOptions;
    NSString * _memberQueueOverridingRestrictionClientUUID;
    NSMutableDictionary * _memberQueueRestrictions;
    NSMutableDictionary * _memberQueueSettingsEvents;
    NSMutableDictionary * _memberQueueSystemClientRestrictions;
    NSMutableDictionary * _memberQueueSystemNamespacedUserSettings;
    NSMutableDictionary * _memberQueueSystemProfileRestrictions;
    NSMutableDictionary * _memberQueueSystemUserSettings;
    NSMutableDictionary * _memberQueueUserClientRestrictions;
    NSMutableDictionary * _memberQueueUserNamespacedUserSettings;
    NSMutableDictionary * _memberQueueUserProfileRestrictions;
    NSMutableDictionary * _memberQueueUserUserSettings;
}

@property (nonatomic, readonly, copy) NSDictionary *combinedProfileRestrictions;
@property (nonatomic, readonly) NSDictionary *currentRestrictions;
@property (nonatomic, readonly) NSDictionary *defaultRestrictions;
@property (nonatomic, readonly) NSDictionary *defaultSettings;
@property (nonatomic, readonly, copy) NSDictionary *effectiveUserSettings;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *memberQueue;
@property (nonatomic, readonly) NSMutableDictionary *memberQueueCombinedProfileRestrictions;
@property (nonatomic, readonly) NSMutableDictionary *memberQueueCombinedSystemProfileRestrictions;
@property (nonatomic, retain) NSMutableDictionary *memberQueueEffectiveUserSettings;
@property (nonatomic, retain) NSArray *memberQueueEffectiveWhitelistedAppsAndOptions;
@property (nonatomic, retain) NSString *memberQueueOverridingRestrictionClientUUID;
@property (nonatomic, retain) NSMutableDictionary *memberQueueRestrictions;
@property (nonatomic, retain) NSMutableDictionary *memberQueueSettingsEvents;
@property (nonatomic, retain) NSMutableDictionary *memberQueueSystemClientRestrictions;
@property (nonatomic, retain) NSMutableDictionary *memberQueueSystemNamespacedUserSettings;
@property (nonatomic, retain) NSMutableDictionary *memberQueueSystemProfileRestrictions;
@property (nonatomic, retain) NSMutableDictionary *memberQueueSystemUserSettings;
@property (nonatomic, retain) NSMutableDictionary *memberQueueUserClientRestrictions;
@property (nonatomic, retain) NSMutableDictionary *memberQueueUserNamespacedUserSettings;
@property (nonatomic, retain) NSMutableDictionary *memberQueueUserProfileRestrictions;
@property (nonatomic, retain) NSMutableDictionary *memberQueueUserUserSettings;
@property (nonatomic, readonly, copy) NSDictionary *systemProfileRestrictions;
@property (nonatomic, readonly, copy) NSDictionary *systemUserSettings;
@property (nonatomic, readonly, copy) NSDictionary *userProfileRestrictions;
@property (nonatomic, readonly, copy) NSDictionary *userSettings;
@property (nonatomic, readonly, copy) NSDictionary *userUserSettings;

+ (id)_addRestrictionPayloadKeysDictionary:(id)arg1 toRestrictionPayloadKeysDictionary:(id)arg2 forRestrictionKey:(id)arg3;
+ (id)_filterRestrictionDictionary:(id)arg1 removingPayloadKeysInRestrictionPayloadKeysDictionary:(id)arg2 forRestrictionKey:(id)arg3;
+ (id)_filterRestrictionPayloadKeysDictionary:(id)arg1 removingPayloadKeysInRestrictionPayloadKeysDictionary:(id)arg2 forRestrictionKey:(id)arg3;
+ (id)_lockedDownRestrictionPayloadKeysWithPayloadKeysDictionary:(id)arg1 forRestrictionKey:(id)arg2;
+ (id)_payloadKeysDictionaryAfterAddingFeature:(id)arg1 toRestrictionPayloadKeysDictionary:(id)arg2 forRestrictionKey:(id)arg3;
+ (id)addRestrictionPayloadKeysDictionary:(id)arg1 toRestrictionPayloadKeysDictionary:(id)arg2;
+ (id)allowedGrandfatheredRestrictionPayloadKeysDictionary;
+ (id)allowedImportFromAppBundleIDsWithOriginalAppBundleIDs:(id)arg1 managedAppBundleIDs:(id)arg2 localAppBundleID:(id)arg3 localAccountIsManaged:(bool)arg4 mayOpenFromUnmanagedToManaged:(bool)arg5 mayOpenFromManagedToUnmanaged:(bool)arg6 isAppBundleIDExemptBlock:(id /* block */)arg7 isAppBundleIDAccountBasedBlock:(id /* block */)arg8;
+ (id)allowedKeyboardBundleIDsAfterApplyingFilterToBundleIDs:(id)arg1 managedAppBundleIDs:(id)arg2 hostAppIsManaged:(bool)arg3 mayOpenFromUnmanagedToManaged:(bool)arg4 mayOpenFromManagedToUnmanaged:(bool)arg5;
+ (id)allowedOpenInAppBundleIDsWithOriginalAppBundleIDs:(id)arg1 managedAppBundleIDs:(id)arg2 localAppBundleID:(id)arg3 localAccountIsManaged:(bool)arg4 mayOpenFromUnmanagedToManaged:(bool)arg5 mayOpenFromManagedToUnmanaged:(bool)arg6 isAppBundleIDExemptBlock:(id /* block */)arg7 isAppBundleIDAccountBasedBlock:(id /* block */)arg8;
+ (int)appWhitelistStateWithSettingsDictionary:(id)arg1 restrictionsDictionary:(id)arg2;
+ (id)applyRestrictions:(id)arg1 forFeature:(id)arg2 toParametersForBoolSetting:(id)arg3;
+ (bool)boolSetting:(id)arg1 valueChangedBetweenOldSettings:(id)arg2 andNewSettings:(id)arg3;
+ (int)boolSettingForFeature:(id)arg1 outAsk:(bool*)arg2 withUserSettingDictionary:(id)arg3;
+ (int)boolSettingForFeature:(id)arg1 withNewUserSetting:(id)arg2 currentSettings:(id)arg3;
+ (int)boolSettingForFeature:(id)arg1 withUserSettingDictionary:(id)arg2;
+ (int)defaultBoolValueForSetting:(id)arg1;
+ (int)defaultBoolValueForSetting:(id)arg1 outAsk:(bool*)arg2;
+ (id)defaultIntersectedValuesForSetting:(id)arg1;
+ (id)defaultParametersForBoolSetting:(id)arg1;
+ (id)defaultParametersForIntersectedValuesSetting:(id)arg1;
+ (id)defaultParametersForUnionValuesSetting:(id)arg1;
+ (id)defaultParametersForValueSetting:(id)arg1;
+ (id)defaultRestrictionFilePath;
+ (id)defaultSettings;
+ (id)defaultUnionValuesForSetting:(id)arg1;
+ (id)defaultValueForSetting:(id)arg1;
+ (id)effectiveGrandfatheredRestrictionPayloadKeysDictionary;
+ (id)explicitlyRestrictedAppsBySetting;
+ (id)explicitlyRestrictedEphemeralMultiUserApps;
+ (id)filterGrandfatheredRestrictionsIfNeededFromRestrictions:(id)arg1;
+ (id)filterRestrictionDictionary:(id)arg1 acceptedKeysDict:(id)arg2;
+ (id)filterRestrictionDictionary:(id)arg1 removingPayloadKeysInRestrictionPayloadKeysDictionary:(id)arg2;
+ (id)filterRestrictionDictionary:(id)arg1 toIncludeOnlyRestrictionsThatDifferFromRestrictions:(id)arg2;
+ (id)filterRestrictionDictionaryForPublicUse:(id)arg1;
+ (id)filterRestrictionPayloadKeysDictionary:(id)arg1 removingPayloadKeysInRestrictionPayloadKeysDictionary:(id)arg2;
+ (id)filterUserSettingsForPublicUse:(id)arg1;
+ (id)grandfatheredRestrictionPayloadKeysDictionary;
+ (bool)intersectedValuesForFeature:(id)arg1 changedBetweenOldRestrictions:(id)arg2 andNewRestrictions:(id)arg3;
+ (id)intersectedValuesForFeature:(id)arg1 withRestrictionsDictionary:(id)arg2;
+ (bool)intersectedValuesSetting:(id)arg1 valueChangedBetweenOldSettings:(id)arg2 andNewSettings:(id)arg3;
+ (id)intersectedValuesSettingForFeature:(id)arg1 withUserSettingDectionary:(id)arg2;
+ (bool)isInSingleAppModeWithSettingsDictionary:(id)arg1;
+ (bool)isPasscodeRequiredToAccessWhitelistedAppsWithSettingsDictionary:(id)arg1;
+ (bool)isSingleAppModeLogoutAllowedWithSettingsDictionary:(id)arg1;
+ (bool)isWebContentFilterUIActiveWithRestrictionDictionary:(id)arg1;
+ (bool)isWhitelistedAppsRestrictionEnforcedWithRestrictionsDictionary:(id)arg1;
+ (id)maximumValueForSetting:(id)arg1;
+ (bool)mayChangePasscode;
+ (bool)mayEnterPasscodeToAccessNonWhitelistedAppsWithSettingsDictionary:(id)arg1;
+ (id)minimumValueForSetting:(id)arg1;
+ (id)newEffectiveSettingsByApplyingRestrictions:(id)arg1 toSettings:(id)arg2;
+ (id)objectForFeature:(id)arg1 withRestrictionsDictionary:(id)arg2;
+ (id)parametersForBoolSetting:(id)arg1 withUserSettingDictionary:(id)arg2;
+ (id)parametersForIntersectedSetting:(id)arg1 withUserSettingDictionary:(id)arg2;
+ (id)parametersForSetting:(id)arg1 ofType:(id)arg2 withUserSettingDictionary:(id)arg3;
+ (id)parametersForUnionSetting:(id)arg1 withUserSettingDictionary:(id)arg2;
+ (id)parametersForValueSetting:(id)arg1 withUserSettingDictionary:(id)arg2;
+ (bool)restrictedBool:(id)arg1 changedBetweenOldRestrictions:(id)arg2 andNewRestrictions:(id)arg3;
+ (int)restrictedBoolForFeature:(id)arg1 withRestrictionsDictionary:(id)arg2;
+ (bool)restrictedValue:(id)arg1 changedBetweenOldRestrictions:(id)arg2 andNewRestrictions:(id)arg3;
+ (id)restrictionKeys;
+ (id)restrictionsAfterApplyingRestrictionsDictionary:(id)arg1 toRestrictionsDictionary:(id)arg2 outChangeDetected:(bool*)arg3 outError:(id*)arg4;
+ (id)restrictionsWithCurrentRestrictions:(id)arg1 defaultRestrictions:(id)arg2 systemProfileRestrictions:(id)arg3 userProfileRestrictions:(id)arg4 systemClientRestrictions:(id)arg5 userClientRestrictions:(id)arg6 outRestrictionsChanged:(bool*)arg7 outError:(id*)arg8;
+ (id)sharedManager;
+ (id)systemMetadataValueForKey:(id)arg1;
+ (bool)unionValuesForFeature:(id)arg1 changedBetweenOldRestrictions:(id)arg2 andNewRestrictions:(id)arg3;
+ (id)unionValuesForFeature:(id)arg1 withRestrictionsDictionary:(id)arg2;
+ (bool)unionValuesSetting:(id)arg1 valueChangedBetweenOldSettings:(id)arg2 andNewSettings:(id)arg3;
+ (id)unionValuesSettingForFeature:(id)arg1 withUserSettingDictionary:(id)arg2;
+ (id)valueForFeature:(id)arg1 withRestrictionsDictionary:(id)arg2;
+ (bool)valueSetting:(id)arg1 valueChangedBetweenOldSettings:(id)arg2 andNewSettings:(id)arg3;
+ (id)valueSettingForFeature:(id)arg1 withUserSettingDictionary:(id)arg2;

- (void).cxx_destruct;
- (id)_effectiveIntersectedValuesForSetting:(id)arg1 effectiveUserSettings:(id)arg2;
- (id)_effectiveUnionValuesForSetting:(id)arg1 effectiveUserSettings:(id)arg2;
- (bool)_isBoolSettingLockedDown:(id)arg1;
- (bool)_isValueSettingLockedDown:(id)arg1 effectiveSetting:(id)arg2;
- (id)_settingsEventFromProcess:(id)arg1 withTag:(id)arg2;
- (id)_updatedDomainSettingsEvents:(id)arg1 fromPreviousSettings:(id)arg2 toNewSettings:(id)arg3 sender:(id)arg4;
- (id)allClientUUIDsForClientType:(id)arg1;
- (bool)allowedToRunAppWithBundleID:(id)arg1;
- (int)appWhitelistState;
- (bool)applyConfiguration:(id)arg1 toDomain:(unsigned long long)arg2 inNamespace:(id)arg3 fromSender:(id)arg4;
- (id)appsAndOptionsForClientUUID:(id)arg1;
- (int)boolSettingForFeature:(id)arg1;
- (void)clearEffectiveWhitelistedAppsAndOptionsCache;
- (id)clientRestrictionsForClientUUID:(id)arg1;
- (id)combinedProfileRestrictions;
- (id)currentRestrictions;
- (id)defaultRestrictions;
- (id)defaultSettings;
- (id)description;
- (id)effectiveBlockedAppBundleIDsExcludingRemovedSystemApps:(bool)arg1;
- (id)effectiveIntersectedValuesForSetting:(id)arg1;
- (id)effectiveParametersForBoolSetting:(id)arg1;
- (id)effectiveParametersForBoolSetting:(id)arg1 configurationUUID:(id)arg2;
- (id)effectiveParametersForIntersectedSetting:(id)arg1;
- (id)effectiveParametersForUnionSetting:(id)arg1;
- (id)effectiveParametersForValueSetting:(id)arg1;
- (int)effectiveRestrictedBoolForSetting:(id)arg1;
- (int)effectiveRestrictedBoolForSetting:(id)arg1 configurationUUID:(id)arg2;
- (id)effectiveUnionValuesForSetting:(id)arg1;
- (id)effectiveUserSettings;
- (id)effectiveValueForSetting:(id)arg1;
- (id)effectiveWhitelistedAppBundleIDs;
- (id)effectiveWhitelistedAppsAndOptions;
- (id)exchangeUUIDsRestrictingSettings:(id)arg1;
- (id)init;
- (id)intersectedValuesForFeature:(id)arg1;
- (id)intersectedValuesSettingForFeature:(id)arg1;
- (void)invalidateRestrictions;
- (void)invalidateSettings;
- (bool)isBoolSettingLockedDownByRestrictions:(id)arg1;
- (bool)isInSingleAppMode;
- (bool)isIntersectionSettingLockedDownByRestrictions:(id)arg1;
- (bool)isSettingLockedDownByRestrictions:(id)arg1;
- (bool)isSingleAppModeLogoutAllowed;
- (bool)isUnionSettingLockedDownByRestrictions:(id)arg1;
- (bool)isValueSettingLockedDownByRestrictions:(id)arg1;
- (id)memberQueue;
- (id)memberQueueAppsAndOptionsForClientUUID:(id)arg1;
- (id)memberQueueClientRestrictionsDictionaryForClientUUID:(id)arg1;
- (id)memberQueueClientRestrictionsForClientUUID:(id)arg1;
- (id)memberQueueClientTypeForClientUUID:(id)arg1;
- (id)memberQueueCombinedProfileRestrictions;
- (id)memberQueueCombinedSystemProfileRestrictions;
- (id)memberQueueEffectiveUserSettings;
- (id)memberQueueEffectiveWhitelistedAppsAndOptions;
- (id)memberQueueOverridingRestrictionClientUUID;
- (id)memberQueueRestrictions;
- (id)memberQueueSettingsEvents;
- (id)memberQueueSystemClientRestrictions;
- (id)memberQueueSystemNamespacedUserSettings;
- (id)memberQueueSystemProfileRestrictions;
- (id)memberQueueSystemUserSettings;
- (id)memberQueueUserClientRestrictions;
- (id)memberQueueUserInfoForClientUUID:(id)arg1;
- (id)memberQueueUserNamespacedUserSettings;
- (id)memberQueueUserProfileRestrictions;
- (id)memberQueueUserUserSettings;
- (id)objectForFeature:(id)arg1;
- (id)parentalControlsBlockedAppBundleIDs;
- (id)parentalControlsWhitelistedAppBundleIDs;
- (id)potentialRestrictionsAfterApplyingRestrictionsDictionary:(id)arg1 outChangeDetected:(bool*)arg2 outError:(id*)arg3;
- (id)profileIdentifiersRestrictingSettings:(id)arg1;
- (id)restrictedAppBundleIDs;
- (id)restrictedAppBundleIDsExcludingRemovedSystemApps:(bool)arg1;
- (int)restrictedBoolForFeature:(id)arg1;
- (id)restrictionEnforcedBlockedAppBundleIDsExcludingRemovedSystemApps:(bool)arg1;
- (id)restrictionEnforcedWhitelistedAppBundleIDs;
- (void)setMemberQueue:(id)arg1;
- (void)setMemberQueueEffectiveUserSettings:(id)arg1;
- (void)setMemberQueueEffectiveWhitelistedAppsAndOptions:(id)arg1;
- (void)setMemberQueueOverridingRestrictionClientUUID:(id)arg1;
- (void)setMemberQueueRestrictions:(id)arg1;
- (void)setMemberQueueSettingsEvents:(id)arg1;
- (void)setMemberQueueSystemClientRestrictions:(id)arg1;
- (void)setMemberQueueSystemNamespacedUserSettings:(id)arg1;
- (void)setMemberQueueSystemProfileRestrictions:(id)arg1;
- (void)setMemberQueueSystemUserSettings:(id)arg1;
- (void)setMemberQueueUserClientRestrictions:(id)arg1;
- (void)setMemberQueueUserNamespacedUserSettings:(id)arg1;
- (void)setMemberQueueUserProfileRestrictions:(id)arg1;
- (void)setMemberQueueUserUserSettings:(id)arg1;
- (id)singleAppModeBundleID;
- (id)systemClientRestrictions;
- (id)systemProfileRestrictions;
- (id)systemUserSettings;
- (id)unionValuesForFeature:(id)arg1;
- (id)unionValuesSettingForFeature:(id)arg1;
- (id)userClientRestrictions;
- (id)userInfoForClientUUID:(id)arg1;
- (id)userProfileRestrictions;
- (id)userSettings;
- (id)userUserSettings;
- (id)valueForFeature:(id)arg1;
- (id)valueSettingForFeature:(id)arg1;

@end