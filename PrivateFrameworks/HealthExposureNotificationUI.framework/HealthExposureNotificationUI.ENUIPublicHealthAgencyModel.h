/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthExposureNotificationUI.framework/HealthExposureNotificationUI
 */

@interface HealthExposureNotificationUI.ENUIPublicHealthAgencyModel : NSObject {
    void analyticsConsentStatus;
    void analyticsConsentText;
    void appBundleId;
    void consentStatus;
    void consentVersion;
    void diagnosisKeysPreAuthorization;
    void featureFlags;
    void header;
    void introductoryText;
    void isAssociatedDomainAllowed;
    void isAuthorized;
    void isPreauthorizationDomainAllowed;
    void legalese;
    void name;
    void region;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  regionFAQWebsiteURL;
    void regionVersion;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  regionWebsiteURL;
    void selfReportIntroductoryText;
    void vaccinationQuestionText;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  verificationCodeHelpURL;
    void verificationIntroductoryText;
    void verificationSymptomOnsetText;
    void verificationTravelStatusText;
    void wantsAnalytics;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  webReportURL;
}

@property (nonatomic) long long analyticsConsentStatus;
@property (nonatomic, readonly) NSString *analyticsConsentText;
@property (nonatomic, readonly) NSString *appBundleId;
@property (nonatomic, readonly) _TtC28HealthExposureNotificationUI21ENUIUserConsentStatus *consentStatus;
@property (nonatomic, readonly) NSString *consentVersion;
@property (nonatomic, readonly) ENUserAuthorization *diagnosisKeysPreAuthorization;
@property (nonatomic, readonly) unsigned int featureFlags;
@property (nonatomic, readonly) _TtC28HealthExposureNotificationUI22ENUIPublicHealthHeader *header;
@property (nonatomic, readonly) UIImage *installedAppIcon;
@property (nonatomic, readonly) NSString *installedAppName;
@property (nonatomic, readonly) NSString *introductoryText;
@property (nonatomic, readonly) bool isAppInstalled;
@property (nonatomic, readonly) bool isAppInstalledAndRegionYetToBeOnboarded;
@property (nonatomic, readonly) bool isAssociatedDomainAllowed;
@property (nonatomic, readonly) bool isAuthorized;
@property (nonatomic, readonly) bool isPreauthorizationDomainAllowed;
@property (nonatomic, readonly) bool isRegionUsingApp;
@property (nonatomic, readonly) bool isSymptomOnsetNeeded;
@property (nonatomic, readonly) bool isTravelStatusNeeded;
@property (nonatomic, readonly) bool isVaccinationQuestionNeeded;
@property (nonatomic, readonly) _TtC28HealthExposureNotificationUI29ENUIPublicHealthLegalDocument *legalese;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) ENRegion *region;
@property (nonatomic, readonly) NSURL *regionFAQWebsiteURL;
@property (nonatomic, readonly) bool regionIsPlaceholder;
@property (nonatomic, readonly) long long regionVersion;
@property (nonatomic, readonly) NSURL *regionWebsiteURL;
@property (nonatomic, readonly) NSString *selfReportIntroductoryText;
@property (nonatomic, readonly) NSString *vaccinationQuestionText;
@property (nonatomic, readonly) NSURL *verificationCodeHelpURL;
@property (nonatomic, readonly) NSString *verificationIntroductoryText;
@property (nonatomic, readonly) NSString *verificationSymptomOnsetText;
@property (nonatomic, readonly) NSString *verificationTravelStatusText;
@property (nonatomic, readonly) bool wantsAnalytics;
@property (nonatomic, readonly) NSURL *webReportURL;

+ (id)activeRegion;
+ (id)allRegions;
+ (id)authorizedRegions;
+ (id)availableRegions;
+ (id)defaultModelWithBundleId:(id)arg1 isAuthorized:(bool)arg2;
+ (id)dummyRegionCountryCode;
+ (void)refreshRegionsWithCompletion:(id /* block */)arg1;
+ (id)regionForRegionCode:(id)arg1;
+ (void)setActiveRegion:(id)arg1;
+ (void)setAuthorizedRegions:(id)arg1;
+ (void)setAvailableRegions:(id)arg1;
+ (void)setTurndownEntity:(id)arg1;
+ (id)turndownEntity;

- (void).cxx_destruct;
- (long long)analyticsConsentStatus;
- (id)analyticsConsentText;
- (id)appBundleId;
- (id)consentStatus;
- (id)consentVersion;
- (id)diagnosisKeysPreAuthorization;
- (unsigned int)featureFlags;
- (id)header;
- (id)init;
- (id)initWithRegion:(id)arg1 name:(id)arg2 appBundleId:(id)arg3 introductoryText:(id)arg4 header:(id)arg5 legalese:(id)arg6 consentStatus:(id)arg7 consentVersion:(id)arg8 diagnosisKeysPreAuthorization:(id)arg9 isAssociatedDomainAllowed:(bool)arg10 isPreauthorizationDomainAllowed:(bool)arg11 isAuthorized:(bool)arg12 regionVersion:(long long)arg13 regionWebsiteURL:(id)arg14 regionFAQWebsiteURL:(id)arg15 featureFlags:(unsigned int)arg16 wantsAnalytics:(bool)arg17 analyticsConsentStatus:(long long)arg18 analyticsConsentText:(id)arg19 verificationIntroductoryText:(id)arg20 selfReportIntroductoryText:(id)arg21 verificationCodeHelpURL:(id)arg22 verificationSymptomOnsetText:(id)arg23 verificationTravelStatusText:(id)arg24 vaccinationQuestionText:(id)arg25 webReportURL:(id)arg26;
- (id)installedAppIcon;
- (id)installedAppName;
- (id)introductoryText;
- (bool)isAppInstalled;
- (bool)isAppInstalledAndRegionYetToBeOnboarded;
- (bool)isAssociatedDomainAllowed;
- (bool)isAuthorized;
- (bool)isPreauthorizationDomainAllowed;
- (bool)isRegionUsingApp;
- (bool)isSymptomOnsetNeeded;
- (bool)isTravelStatusNeeded;
- (bool)isVaccinationQuestionNeeded;
- (id)legalese;
- (id)name;
- (id)region;
- (id)regionFAQWebsiteURL;
- (bool)regionIsPlaceholder;
- (long long)regionVersion;
- (id)regionWebsiteURL;
- (id)selfReportIntroductoryText;
- (void)setAnalyticsConsentStatus:(long long)arg1;
- (bool)supportsFeatures:(unsigned int)arg1;
- (id)vaccinationQuestionText;
- (id)verificationCodeHelpURL;
- (id)verificationIntroductoryText;
- (id)verificationSymptomOnsetText;
- (id)verificationTravelStatusText;
- (bool)wantsAnalytics;
- (id)webReportURL;

@end
