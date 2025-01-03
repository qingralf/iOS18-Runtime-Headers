/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AAPreferences : NSObject

+ (long long)customHealthCheckIntervalMinutes;
+ (long long)customHealthCheckReachabilityIntervalMinutes;
+ (long long)customHealthCheckVersion;
+ (bool)disableADPStateHealing;
+ (id)getCustodianInfo;
+ (bool)isAppleAccountInformationCacheEnabled;
+ (bool)isCustomHealthCheckIntervalEnabled;
+ (bool)isExperimentalModeEnabled;
+ (bool)isHealthCheckTTREnabled;
+ (bool)isMomentsDataclassEnabled;
+ (bool)isMultipleFullAccountsEnabled;
+ (bool)isNeverSkipCustodianCheckEnabled;
+ (bool)isRunningInStoreDemoMode;
+ (bool)isSignInSecurityRedesignEnabled;
+ (bool)isSignInSecurityRedesignMacOSEnabled;
+ (bool)isSimulateUnhealthyCustodianEnabled;
+ (bool)isSpyglass2023Enabled;
+ (bool)isYorktownEnabled;
+ (void)setCustodianInfo:(id)arg1;
+ (void)setCustomHealthCheckIntervalEnabled:(bool)arg1;
+ (void)setCustomHealthCheckIntervalMinutes:(long long)arg1;
+ (void)setCustomHealthCheckVersion:(long long)arg1;
+ (void)setCustomHealthFailureReachabilityIntervalMinutes:(long long)arg1;
+ (void)setDisableADPStateHealing:(bool)arg1;
+ (void)setExperimentalModeEnabled:(bool)arg1;
+ (void)setHealthCheckTTREnabled:(bool)arg1;
+ (void)setMultipleFullAccountsEnabled:(bool)arg1;
+ (void)setNeverSkipCustodianCheckEnabled:(bool)arg1;
+ (void)setShouldShowAccountContacts:(bool)arg1;
+ (void)setShouldUseUnifiedLoginEndpoint:(bool)arg1;
+ (void)setSimulateUnhealthyCustodianEnabled:(bool)arg1;
+ (bool)shouldEnableAccountUserNotifications;
+ (bool)shouldEnableFastSignIn;
+ (bool)shouldShowAccountContacts;
+ (bool)shouldSkipIdMSFinalizeCustodian;
+ (bool)shouldSkipIdMSKeyUpdate;
+ (bool)shouldSkipRecoveryInfoRecordStorage;
+ (bool)shouldUseUnifiedLoginEndpoint;
+ (bool)simulate2FAFA;

- (bool)isLCDeletionChangeCKStatusToDeclinedEnabled;

@end
