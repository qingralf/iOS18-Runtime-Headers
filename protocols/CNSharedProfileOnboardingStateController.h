/* Generated by RuntimeBrowser.
 */

@protocol CNSharedProfileOnboardingStateController <NSObject>

@required

+ (void)writeToDefaultsDidSkipPosterSetup:(bool)arg1;

- (bool)accountCanCreateSNaP;
- (bool)alwaysShowSNaPOnboarding;
- (bool)canShowOnboardingAllowingMultiplePhoneNumbers:(bool)arg1;
- (long long)currentOnboardingVersion;
- (bool)deviceSupportsPosters;
- (bool)didSkipPosterSetup;
- (bool)hasCompletedOnboarding;
- (bool)iCloudSignedInToUseNicknames;
- (bool)isPhotosReadyForOnboarding;
- (long long)lastShowOnboardingVersionInSettings;
- (long long)lastShownOnboardingVersion;
- (bool)multiplePhoneNumbersTiedToAppleID;
- (bool)shouldShowOnboarding;
- (void)writeToDefaultsCompletedOnboarding:(bool)arg1;
- (void)writeToDefaultsLastShownOnboardingVersion;
- (void)writeToDefaultsLastShownSettingsOnboardingVersion;

@end
