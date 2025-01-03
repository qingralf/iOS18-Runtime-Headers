/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKOrderPhysicalCardAddressConfirmationViewController : PKExplanationViewController <PKExplanationViewControllerDelegate, PKExplanationViewDelegate, PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate, PKViewControllerPreflightable> {
    PKPhysicalCardArtworkOption * _artworkOption;
    bool  _authorized;
    PKBusinessChatController * _businessChatController;
    PKOrderPhysicalCardController * _controller;
    <PKPaymentSetupViewControllerDelegate> * _delegate;
    unsigned long long  _featureIdentifier;
    CLInUseAssertion * _inUseAssertion;
    PKPaymentAuthorizationCoordinator * _paymentAuthorizationCoordinator;
    PKOrderPhysicalCardHeroView * _physicalCardHeroView;
    CNPostalAddress * _shippingAddress;
    bool  _supportsAddressChange;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <PKPaymentSetupViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_addressBodyStringWithPostalAddress:(id)arg1;
- (void)_presentNextViewControllerOrTerminate;
- (void)_presentViewController:(id)arg1;
- (bool)_shouldShowCancelNavigationButton;
- (void)_showDisplayableError:(id)arg1;
- (void)_showSpinner:(bool)arg1;
- (void)_terminateFlow;
- (void)dealloc;
- (id)delegate;
- (void)explanationViewControllerDidSelectCancel:(id)arg1;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (void)explanationViewDidSelectSetupLater:(id)arg1;
- (id)initWithOrderPhysicalCardController:(id)arg1;
- (void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizeApplePayTrustSignature:(id)arg2 handler:(id /* block */)arg3;
- (void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePayment:(id)arg2 handler:(id /* block */)arg3;
- (void)paymentAuthorizationCoordinatorDidFinish:(id)arg1;
- (void)preflightWithCompletion:(id /* block */)arg1;
- (id)presentationSceneIdentifierForPaymentAuthorizationCoordinator:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
