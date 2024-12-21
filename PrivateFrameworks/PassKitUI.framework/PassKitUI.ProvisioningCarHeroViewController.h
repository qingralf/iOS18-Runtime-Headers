/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PassKitUI.ProvisioningCarHeroViewController : PKExplanationViewController <PKExplanationViewControllerDelegate, PKLoadingUIProviding> {
    void allowPartnerAppFlow;
    void credential;
    void delegate;
    void linkedApplication;
    void provisioningContext;
}

- (void).cxx_destruct;
- (void)explanationViewControllerDidSelectCancel:(id)arg1;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (id)initWithContext:(long long)arg1;
- (void)loadView;
- (void)showLoadingUI:(bool)arg1 animated:(bool)arg2;
- (void)skipCardButtonPressed;

@end