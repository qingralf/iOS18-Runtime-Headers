/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PassKitUI.ProvisioningCarInvitationActivationViewController : PKExplanationViewController <PKExplanationViewControllerDelegate, PKLoadingUIProviding> {
    void delegate;
    void invitation;
    void isExpressEnabled;
    void provisionedPasses;
    void provisioningContext;
}

- (void).cxx_destruct;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (id)initWithContext:(long long)arg1;
- (void)loadView;
- (void)showLoadingUI:(bool)arg1 animated:(bool)arg2;

@end
