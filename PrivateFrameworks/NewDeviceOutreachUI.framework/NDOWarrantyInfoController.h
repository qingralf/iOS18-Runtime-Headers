/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewDeviceOutreachUI.framework/NewDeviceOutreachUI
 */

@interface NDOWarrantyInfoController : PSListController <NDOAppleCareFlowDelegate> {
    NDOACController * _acController;
    NSDictionary * _appSupportDictionary;
    NSString * _deeplinkParams;
    bool  _hasLoaded;
    bool  _isSignedIn;
    PSSpecifier * _lastCoverageSpecifier;
    PSSpecifier * _lastDetailSpecifier;
    unsigned long long  _previousAppSupportAvailabilityType;
    bool  _reloadInProgress;
    bool  _shouldRefreshOnAppear;
}

@property (nonatomic) NDOACController *acController;
@property (retain) NSDictionary *appSupportDictionary;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (retain) NSString *deeplinkParams;
@property (readonly, copy) NSString *description;
@property bool hasLoaded;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isSignedIn;
@property (retain) PSSpecifier *lastCoverageSpecifier;
@property (retain) PSSpecifier *lastDetailSpecifier;
@property unsigned long long previousAppSupportAvailabilityType;
@property bool reloadInProgress;
@property bool shouldRefreshOnAppear;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addKey:(id)arg1 isCopyable:(bool)arg2 toSpecifiers:(id)arg3;
- (void)_addKey:(id)arg1 value:(id)arg2 isCopyable:(bool)arg3 toSpecifiers:(id)arg4;
- (id)_errorStateConfig;
- (bool)_isValidSubscriptionPlan;
- (id)_noAccountConfig;
- (void)_refresh:(id)arg1;
- (void)_refreshWithForcedNetworkPolicy:(bool)arg1 forceUpdateFollowup:(bool)arg2 withCompletion:(id /* block */)arg3;
- (void)_setValue:(id)arg1 forSpecifier:(id)arg2;
- (void)_setValue:(id)arg1 forSpecifierWithKey:(id)arg2 inSpecifiers:(id)arg3;
- (id)acController;
- (id)appSupportDictionary;
- (void)benefitsDescLinkTapped:(id)arg1;
- (id)coverageItemSubTitle:(id)arg1;
- (id)deeplinkParams;
- (void)donePressed:(id)arg1;
- (void)errorUI;
- (void)footer1Tapped:(id)arg1;
- (void)footer2Tapped:(id)arg1;
- (void)handleURL:(id)arg1 withCompletion:(id /* block */)arg2;
- (bool)hasLoaded;
- (void)hideUI;
- (id)initWithSpecifier:(id)arg1;
- (bool)isSignedIn;
- (bool)isWarrantyValid;
- (id)lastCoverageSpecifier;
- (id)lastDetailSpecifier;
- (void)loadView;
- (void)managePlanPressed:(id)arg1;
- (void)ndoAppleCareCoveragePressed:(id)arg1;
- (id)noCoverageInternalSubtitle:(id)arg1;
- (void)openURL:(id)arg1;
- (void)outreachFinishedForDeviceWithSerialNumber:(id)arg1 withCompletion:(unsigned long long)arg2;
- (void)postCAEventWithDeviceInfo:(id)arg1;
- (unsigned long long)previousAppSupportAvailabilityType;
- (bool)reloadInProgress;
- (void)reloadSpecifiers;
- (void)setAcController:(id)arg1;
- (void)setAppSupportDictionary:(id)arg1;
- (void)setDeeplinkParams:(id)arg1;
- (void)setHasLoaded:(bool)arg1;
- (void)setIsSignedIn:(bool)arg1;
- (void)setLastCoverageSpecifier:(id)arg1;
- (void)setLastDetailSpecifier:(id)arg1;
- (void)setPreviousAppSupportAvailabilityType:(unsigned long long)arg1;
- (void)setReloadInProgress:(bool)arg1;
- (void)setShouldRefreshOnAppear:(bool)arg1;
- (bool)shouldRefreshOnAppear;
- (bool)shouldReloadSpecifiersOnResume;
- (void)showUI;
- (id)specifierForID:(id)arg1 inSpecifiers:(id)arg2;
- (id)specifiers;
- (void)updateAppStoreLookupWithSpecifiers:(id)arg1;
- (void)updateAppSupportSpecifiersWithSpecifiers:(id)arg1;
- (id)valueForSpecifier:(id)arg1;
- (void)viewDidAppear:(bool)arg1;

@end