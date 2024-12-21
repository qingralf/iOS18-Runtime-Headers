/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPeerPaymentSetupFlowController : NSObject <PKPaymentSelectPassesViewControllerDelegate, PKPaymentSetupViewControllerDelegate, PKPeerPaymentConfirmNameViewControllerDelegate> {
    unsigned long long  _completedOperations;
    <PKPeerPaymentSetupFlowControllerConfiguration> * _configuration;
    PKPeerPaymentConfirmNameViewController * _confirmNameViewControllerBeingPresented;
    long long  _context;
    PKDeviceSharingCapabilitiesManager * _deviceCapabiltiesManager;
    <PKPeerPaymentSetupFlowControllerDelegate> * _flowItemDelegate;
    bool  _hasPresentedDeviceToDeviceEncryptionFlow;
    id /* block */  _nextViewControllerCompletion;
    unsigned long long  _operations;
    UIViewController<PKPeerPaymentSetupFlowControllerDataSource> * _parentViewController;
    <PKPassLibraryDataProvider> * _passLibraryDataProvider;
    UIImage * _passSnapShot;
    PKPaymentWebService * _paymentWebService;
    PKPeerPaymentAccount * _peerPaymentAccount;
    PKPeerPaymentCredential * _peerPaymentCredential;
    PKPaymentPass * _peerPaymentPass;
    PKPeerPaymentService * _peerPaymentService;
    PKPeerPaymentWebService * _peerPaymentWebService;
    PKPaymentProvisioningController * _provisioningController;
    PKSecurityCapabilitiesController * _securityCapabiltiesController;
    PKPeerPaymentTermsController * _termsController;
}

@property (nonatomic, readonly) <PKPeerPaymentSetupFlowControllerConfiguration> *configuration;
@property (nonatomic, readonly) long long context;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PKDeviceSharingCapabilitiesManager *deviceCapabiltiesManager;
@property (nonatomic) <PKPeerPaymentSetupFlowControllerDelegate> *flowItemDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIViewController<PKPeerPaymentSetupFlowControllerDataSource> *parentViewController;
@property (nonatomic, readonly) UIImage *passSnapShot;
@property (nonatomic, readonly) PKPaymentWebService *paymentWebService;
@property (nonatomic, readonly) PKPeerPaymentAccount *peerPaymentAccount;
@property (nonatomic, readonly) PKPeerPaymentCredential *peerPaymentCredential;
@property (nonatomic, readonly) PKPeerPaymentService *peerPaymentService;
@property (nonatomic, readonly) PKPeerPaymentWebService *peerPaymentWebService;
@property (nonatomic, readonly) PKPaymentProvisioningController *provisioningController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addAssociatedAccountWithCompletion:(id /* block */)arg1;
- (void)_checkCloudStoreSetupWithCompletion:(id /* block */)arg1;
- (void)_checkManateeCapabilityWithCompletion:(id /* block */)arg1;
- (void)_checkMissingTLKsWithCompletion:(id /* block */)arg1;
- (unsigned long long)_cipState;
- (void)_completedOperation:(unsigned long long)arg1;
- (void)_fetchAppleCashCapabilitiesIfNecessary;
- (void)_fitlerOperations:(unsigned long long)arg1 peerPaymentAccount:(id)arg2 context:(long long)arg3;
- (void)_handleDisplayableError:(id)arg1 completion:(id /* block */)arg2;
- (void)_handlePeerPaymentAccountDidChangeNotification;
- (bool)_hasTooManyPasses;
- (void)_nextViewControllerWithCompletion:(id /* block */)arg1;
- (id)_paymentWebService;
- (bool)_peerPaymentPassIsProvisioned;
- (id)_peerPaymentWebService;
- (void)_presentEnsurePassCountWithCompletion:(id /* block */)arg1;
- (void)_presentIdentityVerificationFlowWithError:(id)arg1 completion:(id /* block */)arg2;
- (void)_presentManateeCapableOperationWithCompletion:(id /* block */)arg1;
- (void)_presentMissingTLKsFlowWithCompletion:(id /* block */)arg1;
- (void)_presentNameConfirmationViewControllerWithError:(id)arg1 completion:(id /* block */)arg2;
- (void)_presentTermWithTermsResponse:(id)arg1 completion:(id /* block */)arg2;
- (void)_provisionPassWithCompletion:(id /* block */)arg1;
- (void)_setupCloudStoreWithCompletion:(id /* block */)arg1;
- (void)_termsOperationWithTermsResponse:(id)arg1 completion:(id /* block */)arg2;
- (bool)_willDisplayErrorForOperationOperationInContext:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (id)configuration;
- (void)confirmNameViewController:(id)arg1 enteredFirstName:(id)arg2 lastName:(id)arg3;
- (void)confirmNameViewControllerCancelled:(id)arg1;
- (long long)context;
- (id)deviceCapabiltiesManager;
- (id)firstPeerPaymentAccountSetupViewController;
- (id)flowItemDelegate;
- (id)initWithPeerPaymentCredential:(id)arg1 provisioningController:(id)arg2 passLibraryDataProvider:(id)arg3 configuration:(id)arg4 context:(long long)arg5;
- (void)nextViewControllerAfterPerfomingOperations:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (id)parentViewController;
- (id)passSnapShot;
- (id)passesIncludingPeerPaymentPass:(bool)arg1 isCheckingTotalPassCount:(bool)arg2;
- (id)paymentWebService;
- (id)peerPaymentAccount;
- (id)peerPaymentCredential;
- (id)peerPaymentService;
- (id)peerPaymentWebService;
- (id)provisioningController;
- (void)selectPassesViewController:(id)arg1 didSelectPasses:(id)arg2 completion:(id /* block */)arg3;
- (void)selectPassesViewControllerDidTapBackButton:(id)arg1;
- (void)setFlowItemDelegate:(id)arg1;
- (void)setOperations:(unsigned long long)arg1;
- (void)setParentViewController:(id)arg1;
- (void)viewControllerDidCancelSetupFlow:(id)arg1;
- (void)viewControllerDidTerminateSetupFlow:(id)arg1;

@end