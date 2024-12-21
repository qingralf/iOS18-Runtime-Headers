/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
 */

@interface WDClinicalAccountOnboardingSession : NSObject {
    void analyticsManager;
    void context;
    void options;
    void profile;
    void sharingClient;
    void sourceIdentifier;
    void stateManager;
}

@property (nonatomic, readonly) bool allowsCancellingClinicalOnboarding;
@property (nonatomic, readonly) long long context;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) HRProfile *profile;
@property (nonatomic, readonly) bool shouldLaunchClinicalSharing;

- (void).cxx_destruct;
- (bool)allowsCancellingClinicalOnboarding;
- (long long)context;
- (void)didAddStaticSampleAccount:(id)arg1;
- (id)init;
- (id)initWithContext:(long long)arg1 options:(unsigned long long)arg2 sourceIdentifier:(id)arg3 profile:(id)arg4 analyticsManager:(id)arg5;
- (id)makeDataTypeSelectionViewControllerForAccount:(id)arg1;
- (id)makeNecessaryScopesNotPresentViewControllerForAccount:(id)arg1;
- (void)markShouldDismissOnboardingTileViewController;
- (void)onboardingWillDisappearWith:(id)arg1 animated:(bool)arg2;
- (unsigned long long)options;
- (void)persistEphemeralAccount:(id)arg1 fromSharing:(bool)arg2 completion:(id /* block */)arg3;
- (id)profile;
- (bool)shouldLaunchClinicalSharing;
- (void)submitClinicalSharingOnboardingStepAnalytic:(long long)arg1;

@end