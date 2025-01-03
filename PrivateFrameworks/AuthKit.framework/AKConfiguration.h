/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

@interface AKConfiguration : NSObject {
    NSMutableDictionary * _cachedSettings;
    int  _notificationToken;
    NSObject<OS_dispatch_queue> * _settingsQueue;
    long long  _shouldEnablePiggybackingPresence;
}

@property (nonatomic) long long contactKeyVerification;
@property (nonatomic) long long criticalAccountEditsAllowedOverride;
@property (nonatomic) long long deviceSafetyRestrictionReasonOverride;
@property (nonatomic) long long forceHasSOSActiveDevice;
@property (nonatomic) long long forceSOSNeeded;
@property (nonatomic) long long forceSilentBurnCDPRepairEnabled;
@property (nonatomic) long long forceSilentEscrowRecordRepairEnabled;
@property (nonatomic) long long forceSilentEscrowRecordRepairEnabledV2;
@property (nonatomic, readonly) unsigned long long internalFeaturesMaskValue;
@property (nonatomic) unsigned long long lastKnownIDMSEnvironment;
@property (nonatomic, copy) NSString *lastKnownLocale;
@property (nonatomic) long long piggybackingIDMSPresenceOverride;
@property (nonatomic) long long piggybackingLocalPresenceOverride;
@property (nonatomic) long long requestedCloudPartition;
@property (nonatomic) long long shouldAddHSA2CreateHeader;
@property (nonatomic) long long shouldAllowDemoMode;
@property (nonatomic) long long shouldAllowExperimentalMode;
@property (nonatomic) long long shouldAllowPhoneNumberAccounts;
@property (nonatomic) long long shouldAllowTestApplication;
@property (nonatomic) long long shouldAlwaysShowWelcome;
@property (nonatomic) long long shouldAskToBuy;
@property (nonatomic) long long shouldAutocycleAppsInTiburon;
@property (nonatomic) long long shouldAutocycleAppsInWebTakeover;
@property (nonatomic) long long shouldBypassCustodianDeviceCheck;
@property (nonatomic) long long shouldDisablePiggybacking;
@property (nonatomic) long long shouldEnableAttestationLogging;
@property (nonatomic) long long shouldEnableBeneficiaryLiveOn;
@property (nonatomic) long long shouldEnablePiggybackingPresence;
@property (nonatomic) long long shouldEnableTelemetryOptIn;
@property (nonatomic) long long shouldEnableTestAccountMode;
@property (nonatomic) long long shouldFakeAuthSuccess;
@property (nonatomic) long long shouldForceBaaValidation;
@property (nonatomic) long long shouldHideInternalBuildHeader;
@property (nonatomic) long long shouldHideSeedBuildHeader;
@property (nonatomic) long long shouldSuppressHSA2Suggestions;
@property (nonatomic) long long shouldSuppressModalSheetsInMacBuddy;
@property (nonatomic, copy) NSData *strongDeviceIdentityMarker;
@property (nonatomic) long long telemetryOptInGracePeriodOverride;

+ (id)sharedConfiguration;

- (void).cxx_destruct;
- (bool)_validCloudPartition:(long long)arg1;
- (id)configurationValueForKey:(id)arg1;
- (long long)contactKeyVerification;
- (long long)criticalAccountEditsAllowedOverride;
- (void)dealloc;
- (long long)deviceSafetyRestrictionReasonOverride;
- (long long)forceHasSOSActiveDevice;
- (long long)forceSOSNeeded;
- (long long)forceSilentBurnCDPRepairEnabled;
- (long long)forceSilentEscrowRecordRepairEnabled;
- (long long)forceSilentEscrowRecordRepairEnabledV2;
- (id)init;
- (unsigned long long)internalFeaturesMaskValue;
- (unsigned long long)lastKnownIDMSEnvironment;
- (id)lastKnownLocale;
- (long long)overrideForKey:(id)arg1;
- (long long)piggybackingIDMSPresenceOverride;
- (long long)piggybackingLocalPresenceOverride;
- (long long)requestedCloudPartition;
- (void)setConfigurationValue:(id)arg1 forKey:(id)arg2;
- (void)setContactKeyVerification:(long long)arg1;
- (void)setCriticalAccountEditsAllowedOverride:(long long)arg1;
- (void)setDeviceSafetyRestrictionReasonOverride:(long long)arg1;
- (void)setForceHasSOSActiveDevice:(long long)arg1;
- (void)setForceSOSNeeded:(long long)arg1;
- (void)setForceSilentBurnCDPRepairEnabled:(long long)arg1;
- (void)setForceSilentEscrowRecordRepairEnabled:(long long)arg1;
- (void)setForceSilentEscrowRecordRepairEnabledV2:(long long)arg1;
- (void)setLastKnownIDMSEnvironment:(unsigned long long)arg1;
- (void)setLastKnownLocale:(id)arg1;
- (void)setOverride:(long long)arg1 forKey:(id)arg2;
- (void)setPiggybackingIDMSPresenceOverride:(long long)arg1;
- (void)setPiggybackingLocalPresenceOverride:(long long)arg1;
- (void)setRequestedCloudPartition:(long long)arg1;
- (void)setShouldAddHSA2CreateHeader:(long long)arg1;
- (void)setShouldAllowDemoMode:(long long)arg1;
- (void)setShouldAllowExperimentalMode:(long long)arg1;
- (void)setShouldAllowPhoneNumberAccounts:(long long)arg1;
- (void)setShouldAllowTestApplication:(long long)arg1;
- (void)setShouldAlwaysShowWelcome:(long long)arg1;
- (void)setShouldAskToBuy:(long long)arg1;
- (void)setShouldAutocycleAppsInTiburon:(long long)arg1;
- (void)setShouldAutocycleAppsInWebTakeover:(long long)arg1;
- (void)setShouldBypassCustodianDeviceCheck:(long long)arg1;
- (void)setShouldDisablePiggybacking:(long long)arg1;
- (void)setShouldEnableAttestationLogging:(long long)arg1;
- (void)setShouldEnableBeneficiaryLiveOn:(long long)arg1;
- (void)setShouldEnablePiggybackingPresence:(long long)arg1;
- (void)setShouldEnableTelemetryOptIn:(long long)arg1;
- (void)setShouldEnableTestAccountMode:(long long)arg1;
- (void)setShouldFakeAuthSuccess:(long long)arg1;
- (void)setShouldForceBaaValidation:(long long)arg1;
- (void)setShouldHideInternalBuildHeader:(long long)arg1;
- (void)setShouldHideSeedBuildHeader:(long long)arg1;
- (void)setShouldSuppressHSA2Suggestions:(long long)arg1;
- (void)setShouldSuppressModalSheetsInMacBuddy:(long long)arg1;
- (void)setStrongDeviceIdentityMarker:(id)arg1;
- (void)setTelemetryOptInGracePeriodOverride:(long long)arg1;
- (long long)shouldAddHSA2CreateHeader;
- (long long)shouldAllowDemoMode;
- (long long)shouldAllowExperimentalMode;
- (long long)shouldAllowPhoneNumberAccounts;
- (long long)shouldAllowTestApplication;
- (long long)shouldAlwaysShowWelcome;
- (long long)shouldAskToBuy;
- (long long)shouldAutocycleAppsInTiburon;
- (long long)shouldAutocycleAppsInWebTakeover;
- (long long)shouldBypassCustodianDeviceCheck;
- (long long)shouldDisablePiggybacking;
- (long long)shouldEnableAttestationLogging;
- (long long)shouldEnableBeneficiaryLiveOn;
- (long long)shouldEnablePiggybackingPresence;
- (long long)shouldEnableTelemetryOptIn;
- (long long)shouldEnableTestAccountMode;
- (long long)shouldFakeAuthSuccess;
- (long long)shouldForceBaaValidation;
- (long long)shouldHideInternalBuildHeader;
- (long long)shouldHideSeedBuildHeader;
- (long long)shouldRequestPiggybackingPresenceEnforcement;
- (long long)shouldSuppressHSA2Suggestions;
- (long long)shouldSuppressModalSheetsInMacBuddy;
- (id)strongDeviceIdentityMarker;
- (long long)telemetryOptInGracePeriodOverride;

@end
