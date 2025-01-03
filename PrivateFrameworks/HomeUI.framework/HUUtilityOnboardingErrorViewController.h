/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUUtilityOnboardingErrorViewController : OBWelcomeController <HUConfigurationViewController, HUConfigurationViewControllerFlow> {
    void delegate;
    void error;
    void onboardingContext;
}

@property (nonatomic, retain) <HUConfigurationViewControllerDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (void)finishOnboarding:(id)arg1;
- (id)initWithContext:(id)arg1 error:(id)arg2;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentLayout:(long long)arg4;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3 contentLayout:(long long)arg4;
- (Class)onboardingFlowClass;
- (void)setDelegate:(id)arg1;
- (void)viewDidLoad;

@end
