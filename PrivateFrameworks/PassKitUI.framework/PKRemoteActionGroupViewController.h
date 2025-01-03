/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKRemoteActionGroupViewController : UIViewController <PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate, PKPaymentSetupDelegate, PKPerformActionViewControllerDelegate, PKSelectActionGroupActionsViewDelegate> {
    PKPaymentPassActionGroup * _actionGroup;
    PKSelectActionGroupActionsView * _actionGroupActionView;
    UIBarButtonItem * _button;
    <PKRemoteActionGroupViewControllerDelegate> * _delegate;
    PKPaymentPass * _pass;
    <PKPaymentDataProvider> * _paymentDataProvider;
    bool  _remoteContentFetched;
    PKPaymentPassAction * _selectedAction;
    UIBarButtonItem * _spinner;
    PKPaymentWebService * _webService;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <PKRemoteActionGroupViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_canPerformPaymentWithCompletion:(id /* block */)arg1;
- (bool)_canSkipSecondaryScreen;
- (void)_cancelButtonPressed:(id)arg1;
- (void)_fetchRemoteContentIfNeeded;
- (id)_generateGenericAlertForError:(id)arg1;
- (id)_generateGenericAlertForError:(id)arg1 completion:(id /* block */)arg2;
- (id)_generateNoActionsAvailableDueToConflictErrorAlert;
- (id)_generateNoActionsAvailableDueToConflictErrorAlertWithCompletion:(id /* block */)arg1;
- (void)_presentAddAnotherCardFlowWithTransitNetworkIdentifiers:(id)arg1;
- (void)_presentPaymentSetupControllerWithAllowedPaymentNetworks:(id)arg1;
- (void)_reloadActionGroupActionsView;
- (void)_rightBarButtonPressed:(id)arg1;
- (void)_rightBarButtonPressedForOslo:(id)arg1;
- (void)_rightBarButtonPressedForPerformAction:(id)arg1;
- (bool)_shouldPresentPaymentRequest:(long long)arg1;
- (void)_showGenericErrorAlert:(id /* block */)arg1;
- (void)_showGenericErrorAlertForError:(id)arg1 completion:(id /* block */)arg2;
- (void)_showSpinner:(bool)arg1;
- (id)delegate;
- (void)fetchServiceProviderDataWithCompletion:(id /* block */)arg1;
- (id)initWithPass:(id)arg1 actionGroup:(id)arg2 paymentDataProvider:(id)arg3 webService:(id)arg4;
- (void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePayment:(id)arg2 handler:(id /* block */)arg3;
- (void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePurchase:(id)arg2 completion:(id /* block */)arg3;
- (void)paymentAuthorizationCoordinatorDidFinish:(id)arg1;
- (void)paymentSetupDidFinish:(id)arg1;
- (void)performActionViewControllerDidCancel:(id)arg1;
- (void)performActionViewControllerDidPerformAction:(id)arg1;
- (bool)pkui_disablesAutomaticDismissalUponEnteringBackground;
- (void)preflightWithCompletion:(id /* block */)arg1;
- (id)presentationSceneIdentifierForPaymentAuthorizationCoordinator:(id)arg1;
- (void)selectActionGroupActionsViewDidSelectActionGroupAction:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRightBarButtonEnabled:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
