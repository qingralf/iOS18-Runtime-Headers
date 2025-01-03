/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUHomeHubMigrationOnboardingFlow : NSObject <HUFeatureOnboardingFlow> {
    NSArray * _appleTVsToUpdate;
    NSSet * _devices;
    bool  _hasiPadOnlyHub;
    HMHome * _home;
    NSArray * _homePodsToUpdate;
    NSArray * _homes;
    NSMapTable * _homesToUsersMap;
    UIViewController<HUConfigurationViewController> * _initialViewController;
    NAFuture * _onboardingFuture;
    NSArray * _sharedHomes;
    bool  _shouldAbortAllOnboarding;
    bool  _shouldAbortThisOnboardingFlowGroup;
    bool  _shouldBlockMigrationWithAppleTVWarning;
    bool  _shouldShowAppleTVWarning;
    bool  _shouldShowDeviceWarning;
    bool  _shouldShowResidentWarning;
    bool  _shouldShowSharedHomeWarning;
    bool  _shouldShowUserWarning;
    unsigned long long  _upgradeRequirements;
}

@property (nonatomic, retain) NSArray *appleTVsToUpdate;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSSet *devices;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hasiPadOnlyHub;
@property (nonatomic, retain) HMHome *home;
@property (nonatomic, retain) NSArray *homePodsToUpdate;
@property (nonatomic, retain) NSArray *homes;
@property (nonatomic, retain) NSMapTable *homesToUsersMap;
@property (nonatomic, retain) UIViewController<HUConfigurationViewController> *initialViewController;
@property (nonatomic, retain) NAFuture *onboardingFuture;
@property (nonatomic, retain) NAFuture *readyFuture; /* unknown property attribute: ? */
@property (nonatomic, retain) NSArray *sharedHomes;
@property (nonatomic, readonly) bool shouldAbortAllOnboarding;
@property (nonatomic, readonly) bool shouldAbortThisOnboardingFlowGroup;
@property (nonatomic) bool shouldBlockMigrationWithAppleTVWarning;
@property (nonatomic) bool shouldShowAppleTVWarning;
@property (nonatomic) bool shouldShowDeviceWarning;
@property (nonatomic) bool shouldShowResidentWarning;
@property (nonatomic) bool shouldShowSharedHomeWarning;
@property (nonatomic) bool shouldShowUserWarning;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long upgradeRequirements;

+ (id)needsOnboardingForHome:(id)arg1 options:(id)arg2;

- (void).cxx_destruct;
- (void)_checkHomePodResidentUpgradeRequirementsInHome:(id)arg1;
- (void)_checkResidentStatusInHome:(id)arg1;
- (id)_determineNextViewControllerWithPriorResults:(id)arg1;
- (id)appleTVsToUpdate;
- (id)devices;
- (bool)hasiPadOnlyHub;
- (id)home;
- (id)homePodsToUpdate;
- (id)homes;
- (id)homesToUsersMap;
- (id)initWithUsageOptions:(id)arg1 home:(id)arg2 devices:(id)arg3;
- (id)initialViewController;
- (id)onboardingFuture;
- (id)processUserInput:(id)arg1;
- (void)setAppleTVsToUpdate:(id)arg1;
- (void)setDevices:(id)arg1;
- (void)setHasiPadOnlyHub:(bool)arg1;
- (void)setHome:(id)arg1;
- (void)setHomePodsToUpdate:(id)arg1;
- (void)setHomes:(id)arg1;
- (void)setHomesToUsersMap:(id)arg1;
- (void)setInitialViewController:(id)arg1;
- (void)setOnboardingFuture:(id)arg1;
- (void)setSharedHomes:(id)arg1;
- (void)setShouldBlockMigrationWithAppleTVWarning:(bool)arg1;
- (void)setShouldShowAppleTVWarning:(bool)arg1;
- (void)setShouldShowDeviceWarning:(bool)arg1;
- (void)setShouldShowResidentWarning:(bool)arg1;
- (void)setShouldShowSharedHomeWarning:(bool)arg1;
- (void)setShouldShowUserWarning:(bool)arg1;
- (void)setUpgradeRequirements:(unsigned long long)arg1;
- (id)sharedHomes;
- (bool)shouldAbortAllOnboarding;
- (bool)shouldAbortThisOnboardingFlowGroup;
- (bool)shouldBlockMigrationWithAppleTVWarning;
- (bool)shouldShowAppleTVWarning;
- (bool)shouldShowDeviceWarning;
- (bool)shouldShowResidentWarning;
- (bool)shouldShowSharedHomeWarning;
- (bool)shouldShowUserWarning;
- (unsigned long long)upgradeRequirements;

@end
