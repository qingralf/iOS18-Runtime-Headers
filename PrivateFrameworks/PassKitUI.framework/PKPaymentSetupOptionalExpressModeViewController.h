/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentSetupOptionalExpressModeViewController : PKExplanationViewController <PKLoadingUIProviding> {
    <PKPaymentSetupOptionalExpressModeViewControllerFlowDelegate> * _flowItemDelegate;
    PKSecureElementPass * _pass;
    PKPaymentProvisioningController * _provisioningController;
    PKPaymentProvisioningTracker * _provisioningTracker;
    PKProvisioningAnalyticsSessionUIReporter * _reporter;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) <PKPaymentSetupOptionalExpressModeViewControllerFlowDelegate> *flowItemDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PKProvisioningAnalyticsSessionUIReporter *reporter;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_snapshotSize;
- (void)_terminateSetupFlow;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (void)explanationViewDidSelectSetupLater:(id)arg1;
- (id)flowItemDelegate;
- (id)initWithProvisioningController:(id)arg1 secureElementPass:(id)arg2 context:(long long)arg3;
- (void)loadView;
- (void)proceedToNextScreen;
- (id)reporter;
- (void)setFlowItemDelegate:(id)arg1;
- (void)setReporter:(id)arg1;
- (void)showLoadingUI:(bool)arg1 animated:(bool)arg2;
- (void)viewDidAppear:(bool)arg1;

@end