/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSDefaults : NSObject

+ (bool)QAMode;
+ (id)_allKeysForDomain:(struct __CFString { }*)arg1;
+ (bool)_boolForKey:(id)arg1 defaultValue:(bool)arg2;
+ (bool)_boolForKey:(id)arg1 defaultValue:(bool)arg2 domain:(struct __CFString { }*)arg3;
+ (void)_cleanupSampleSessions;
+ (long long)_integerForKey:(id)arg1 defaultValue:(long long)arg2;
+ (long long)_integerForKey:(id)arg1 defaultValue:(long long)arg2 domain:(struct __CFString { }*)arg3;
+ (bool)_resultFromSampleSession:(id)arg1 isActive:(bool*)arg2;
+ (void)_setBool:(bool)arg1 forKey:(id)arg2;
+ (void)_setBool:(bool)arg1 forKey:(id)arg2 domain:(struct __CFString { }*)arg3;
+ (void)_setInteger:(long long)arg1 forKey:(id)arg2;
+ (void)_setValue:(id)arg1 forKey:(id)arg2;
+ (void)_setValue:(id)arg1 forKey:(id)arg2 domain:(struct __CFString { }*)arg3;
+ (id)_valueForKey:(id)arg1;
+ (id)_valueForKey:(id)arg1 domain:(struct __CFString { }*)arg2;
+ (id)accountFlagOverrides;
+ (long long)acknowledgePrivacyOverride;
+ (id)allKeys;
+ (bool)allowDuplicateAccounts;
+ (bool)allowUpsellEnrollmentForAppliedAccounts;
+ (bool)alwaysSendBlindedData;
+ (bool)alwaysSendCacheBuster;
+ (bool)alwaysSendGUID;
+ (long long)applePayClassic;
+ (id)authenticationStarted;
+ (bool)autoSyncDisabledForAccountData;
+ (bool)autoSyncDisabledForMetricsIdentifierStore;
+ (bool)automationMode;
+ (id)bagOverrideIgnoredKeys;
+ (id)bagOverrideInserts;
+ (id)bagOverrides;
+ (id)bagURLCookies;
+ (long long)cardEnrollmentAutomatic;
+ (long long)cardEnrollmentManual;
+ (long long)cardEnrollmentSilent;
+ (long long)cardEnrollmentUpsell;
+ (bool)cleanedUpUserDefaultsDataAfterMigrationToStorage;
+ (id)debugUI;
+ (bool)debugUIDynamicUIEnabled;
+ (bool)debugUIMessagingUIEnabled;
+ (id)defaultPaymentPassIdentifier;
+ (id)demoAccount;
+ (bool)devMode;
+ (id)deviceBiometricIdentities;
+ (long long)deviceBiometricsState;
+ (id)deviceGroups;
+ (bool)deviceIsBundleOverride;
+ (id)deviceOfferEligibility;
+ (id)deviceOffersSerialNumber;
+ (id)deviceRegistrationDenyList;
+ (bool)didFetchBundleOwnerStatus;
+ (bool)didRetrieveDeviceOffers;
+ (bool)didRetrieveDeviceOffersEligibility;
+ (bool)didRetrieveTVOffers;
+ (bool)didSetUpServerDataCache;
+ (bool)disableHARLogging;
+ (bool)disablePrivacyAcknowledgement;
+ (bool)disableStubbedMarketingItems;
+ (bool)enableCameraRedeem;
+ (bool)enablePurchaseQueue;
+ (bool)enableRemoteSecuritySigning;
+ (bool)engagementExtendTimeouts;
+ (bool)forceEngagementPurchaseSuccess;
+ (long long)forceLoadUrlMetrics;
+ (id)forwardedForIPAddress;
+ (id)harURLFilters;
+ (bool)ignoreServerTrustEvaluation;
+ (bool)includeFullRequestInHARLogging;
+ (bool)includeFullResponseInHARLogging;
+ (id)journeysURLOverride;
+ (id)journeysURLOverrides;
+ (id)jsSourceOverrides;
+ (id)jsVersionMap;
+ (id)lastCarrierOfferRegistrationDate;
+ (id)lastFraudScoreStateCleanupDate;
+ (id)lastMigratedBuildVersion;
+ (bool)logHARData;
+ (id)marketingItemOverrides;
+ (id)mediaClientIdOverrides;
+ (id)mediaTokenOverride;
+ (id)mescalCertExpiration;
+ (id)metricsCanaryIdentifier;
+ (id)metricsTimingWindowStartTime;
+ (bool)migratedDeviceOffers;
+ (bool)migratedDeviceOffersForWatch;
+ (bool)migratedPrivacyAcknowledgements;
+ (bool)migratedStorageToDefaultsForNonAMSInternal;
+ (bool)migratedToNewCookieStorage;
+ (id)multiUserContainerID;
+ (bool)perfomedDeviceOfferSetup;
+ (long long)pushEnvironment;
+ (id)regulatoryEligibilityAttributes;
+ (long long)reversePushEnabled;
+ (bool)reviewComposerDemoMode;
+ (void)setAccountFlagOverrides:(id)arg1;
+ (void)setAcknowledgePrivacyOverride:(long long)arg1;
+ (void)setAllowDuplicateAccounts:(bool)arg1;
+ (void)setAllowUpsellEnrollmentForAppliedAccounts:(bool)arg1;
+ (void)setAlwaysSendBlindedData:(bool)arg1;
+ (void)setAlwaysSendCacheBuster:(bool)arg1;
+ (void)setAlwaysSendGUID:(bool)arg1;
+ (void)setApplePayClassic:(long long)arg1;
+ (void)setAuthenticationStarted:(id)arg1;
+ (void)setAutoSyncDisabledForAccountData:(bool)arg1;
+ (void)setAutoSyncDisabledForMetricsIdentifierStore:(bool)arg1;
+ (void)setAutomationMode:(bool)arg1;
+ (void)setBagOverrideIgnoredKeys:(id)arg1;
+ (void)setBagOverrideInserts:(id)arg1;
+ (void)setBagOverrides:(id)arg1;
+ (void)setBagURLCookies:(id)arg1;
+ (void)setCardEnrollmentAutomatic:(long long)arg1;
+ (void)setCardEnrollmentManual:(long long)arg1;
+ (void)setCardEnrollmentSilent:(long long)arg1;
+ (void)setCardEnrollmentUpsell:(long long)arg1;
+ (void)setCleanedUpUserDefaultsDataAfterMigrationToStorage:(bool)arg1;
+ (void)setDebugUI:(id)arg1;
+ (void)setDefaultPaymentPassIdentifier:(id)arg1;
+ (void)setDemoAccount:(id)arg1;
+ (void)setDevMode:(bool)arg1;
+ (void)setDeviceBiometricIdentities:(id)arg1;
+ (void)setDeviceBiometricsState:(long long)arg1;
+ (void)setDeviceGroups:(id)arg1;
+ (void)setDeviceIsBundleOverride:(bool)arg1;
+ (void)setDeviceOfferEligibility:(id)arg1;
+ (void)setDeviceRegistrationDenyList:(id)arg1;
+ (void)setDidFetchBundleOwnerStatus:(bool)arg1;
+ (void)setDidRetrieveDeviceOffers:(bool)arg1;
+ (void)setDidRetrieveDeviceOffersEligibility:(bool)arg1;
+ (void)setDidRetrieveTVOffers:(bool)arg1;
+ (void)setDidSetUpServerDataCache:(bool)arg1;
+ (void)setDisableHARLogging:(bool)arg1;
+ (void)setDisablePrivacyAcknowledgement:(bool)arg1;
+ (void)setDisableStubbedMarketingItems:(bool)arg1;
+ (void)setEnableCameraRedeem:(bool)arg1;
+ (void)setEnablePurchaseQueue:(bool)arg1;
+ (void)setEnableRemoteSecuritySigning:(bool)arg1;
+ (void)setEngagementExtendTimeouts:(bool)arg1;
+ (void)setForceEngagementPurchaseSuccess:(bool)arg1;
+ (void)setForceLoadUrlMetrics:(long long)arg1;
+ (void)setForwardedForIPAddress:(id)arg1;
+ (void)setHarURLFilters:(id)arg1;
+ (void)setIgnoreServerTrustEvaluation:(bool)arg1;
+ (void)setIncludeFullRequestInHARLogging:(bool)arg1;
+ (void)setIncludeFullResponseInHARLogging:(bool)arg1;
+ (void)setJourneysURLOverride:(id)arg1;
+ (void)setJourneysURLOverrides:(id)arg1;
+ (void)setJsSourceOverrides:(id)arg1;
+ (void)setJsVersionMap:(id)arg1;
+ (void)setLastCarrierOfferRegistrationDate:(id)arg1;
+ (void)setLastFraudScoreStateCleanupDate:(id)arg1;
+ (void)setLastMigratedBuildVersion:(id)arg1;
+ (void)setLogHARData:(bool)arg1;
+ (void)setMarketingItemOverrides:(id)arg1;
+ (void)setMediaClientIdOverrides:(id)arg1;
+ (void)setMediaTokenOverride:(id)arg1;
+ (void)setMescalCertExpiration:(id)arg1;
+ (void)setMetricsCanaryIdentifier:(id)arg1;
+ (void)setMetricsTimingWindowStartTime:(id)arg1;
+ (void)setMigratedDeviceOffers:(bool)arg1;
+ (void)setMigratedDeviceOffersForWatch:(bool)arg1;
+ (void)setMigratedPrivacyAcknowledgements:(bool)arg1;
+ (void)setMigratedStorageToDefaultsForNonAMSInternal:(bool)arg1;
+ (void)setMigratedToNewCookieStorage:(bool)arg1;
+ (void)setPerfomedDeviceOfferSetup:(bool)arg1;
+ (void)setPushEnvironment:(long long)arg1;
+ (void)setQAMode:(bool)arg1;
+ (void)setRegulatoryEligibilityAttributes:(id)arg1;
+ (void)setReversePushEnabled:(long long)arg1;
+ (void)setReviewComposerDemoMode:(bool)arg1;
+ (void)setSharedDatabaseChangeToken:(id)arg1;
+ (void)setSharedStoreReviewMetrics:(id)arg1 forProcess:(id)arg2;
+ (void)setShowSandboxAccountUI:(bool)arg1;
+ (void)setShowSpyglassPurchases:(bool)arg1;
+ (void)setSourceOverrides:(id)arg1;
+ (void)setStorefrontSuffixes:(id)arg1;
+ (void)setStreamHARToDisk:(bool)arg1;
+ (void)setTreatmentOverrides:(id)arg1;
+ (void)setTtrMetricsClickStreamUserIdHistory:(id)arg1;
+ (id)sharedDatabaseChangeToken;
+ (id)sharedStoreReviewMetricsForProcess:(id)arg1;
+ (bool)shouldSampleWithPercentage:(double)arg1 sessionDuration:(double)arg2 identifier:(id)arg3;
+ (void)shouldSampleWithPercentageValue:(id)arg1 sessionDurationValue:(id)arg2 identifier:(id)arg3 completion:(id /* block */)arg4;
+ (bool)showSandboxAccountUI;
+ (bool)showSpyglassPurchases;
+ (id)sourceOverrides;
+ (bool)ss_ignoreServerTrustEvaluation;
+ (id)storefrontSuffixes;
+ (bool)streamHARToDisk;
+ (id)treatmentOverrides;
+ (id)ttrMetricsClickStreamUserIdHistory;
+ (void)updateBadgeIdsForBundle:(id)arg1 block:(id /* block */)arg2;
+ (bool)useNewAccountStore;
+ (bool)useNewCookieStorage;

@end
