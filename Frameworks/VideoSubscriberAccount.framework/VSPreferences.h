/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSPreferences : NSObject {
    VSDevice * _device;
    NSUserDefaults * _globalUserDefaults;
    NSUndoManager * _undoManager;
    NSUserDefaults * _userDefaults;
}

@property (nonatomic, readonly) bool allowInsecureAuthContext;
@property (nonatomic, readonly) bool allowNonSystemTrust;
@property (nonatomic) long long cachedAvailabilityStatus;
@property (nonatomic) long long cachedDeveloperProviderStatus;
@property (nonatomic) long long cachedStoreProviderStatus;
@property (nonatomic, retain) VSDevice *device;
@property (nonatomic, readonly) bool flushMetrics;
@property (nonatomic, readonly) NSString *forceSingleProviderID;
@property (nonatomic, retain) NSUserDefaults *globalUserDefaults;
@property (nonatomic) bool ignoreSetTopBoxProfile;
@property (nonatomic) bool isInSTBMode;
@property (nonatomic, copy) NSString *metricUserID;
@property (nonatomic, readonly) NSDate *metricUserIDLastGenerated;
@property (nonatomic, readonly, copy) NSURL *overridingAppBootURL;
@property (nonatomic, readonly) bool performedSubcriptionToUserAccountMigration;
@property (nonatomic, readonly) NSDate *setTopBoxActivationTime;
@property (nonatomic, readonly) NSString *setTopBoxInfoAppAdamIdOverride;
@property (nonatomic, readonly) NSString *setTopBoxInfoBundleIdentifierOverride;
@property (nonatomic, readonly) bool setTopBoxInfoIsSetTopBoxOverride;
@property (nonatomic, readonly) NSString *setTopBoxInfoProviderDisplayNameOverride;
@property (nonatomic, readonly) NSString *setTopBoxInfoProviderIdOverride;
@property (nonatomic, readonly) bool shouldAlwaysAllowRemoteInspection;
@property (nonatomic, readonly) bool shouldDisableRequestTimeouts;
@property (nonatomic, readonly) bool shouldSkipSetup;
@property (nonatomic, retain) NSUndoManager *undoManager;
@property (nonatomic, readonly) bool useLegacyVendorIdentifier;
@property (nonatomic, retain) NSUserDefaults *userDefaults;
@property (nonatomic, copy) NSDictionary *vendorIdentifierDictionary;

- (void).cxx_destruct;
- (void)_updateShouldSkipSetupWithNumber:(id)arg1;
- (void)_updateValue:(id)arg1 forKey:(id)arg2;
- (bool)allowInsecureAuthContext;
- (bool)allowNonSystemTrust;
- (long long)cachedAvailabilityStatus;
- (long long)cachedDeveloperProviderStatus;
- (long long)cachedStoreProviderStatus;
- (void)clearFeature:(id)arg1;
- (void)clearSetTopBoxActivationTime;
- (id)device;
- (void)disableFeature:(id)arg1;
- (void)enableFeature:(id)arg1;
- (bool)featureIsEnabled:(id)arg1 present:(bool*)arg2;
- (bool)flushMetrics;
- (id)forceSingleProviderID;
- (long long)forcedAvailabilityStatus;
- (id)globalUserDefaults;
- (bool)hasChosenDesiredApp;
- (bool)ignoreSetTopBoxProfile;
- (bool)isInSTBMode;
- (id)metricUserID;
- (id)metricUserIDLastGenerated;
- (void)noteDesiredApp:(id)arg1;
- (id)overridingAppBootURL;
- (bool)performedSubcriptionToUserAccountMigration;
- (void)removeSkipSetupPreset;
- (void)setCachedAvailabilityStatus:(long long)arg1;
- (void)setCachedDeveloperProviderStatus:(long long)arg1;
- (void)setCachedStoreProviderStatus:(long long)arg1;
- (void)setDevice:(id)arg1;
- (void)setGlobalUserDefaults:(id)arg1;
- (void)setIgnoreSetTopBoxProfile:(bool)arg1;
- (void)setIsInSTBMode:(bool)arg1;
- (void)setMetricUserID:(id)arg1;
- (void)setPerformedSubcriptionToUserAccountMigration;
- (void)setSetTopBoxActivationTime;
- (void)setShouldSkipSetup;
- (id)setTopBoxActivationTime;
- (id)setTopBoxInfoAppAdamIdOverride;
- (id)setTopBoxInfoBundleIdentifierOverride;
- (bool)setTopBoxInfoIsSetTopBoxOverride;
- (id)setTopBoxInfoProviderDisplayNameOverride;
- (id)setTopBoxInfoProviderIdOverride;
- (void)setUndoManager:(id)arg1;
- (void)setUserDefaults:(id)arg1;
- (void)setVendorIdentifierDictionary:(id)arg1;
- (bool)shouldAlwaysAllowRemoteInspection;
- (bool)shouldDisableRequestTimeouts;
- (bool)shouldSkipSetup;
- (bool)shouldUseLegacyVendorIdentifier;
- (id)undoManager;
- (bool)useLegacyVendorIdentifier;
- (id)userDefaults;
- (id)vendorIdentifierDictionary;

@end
