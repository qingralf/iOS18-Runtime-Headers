/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CellularBridgeUI.framework/CellularBridgeUI
 */

@interface NPHBSCellularFauxCardViewController : UIViewController <NPHBSCellularConfirmationCodeViewControllerDelegate, NPHCellularBridgeBarcodeScannerCaptureDelegate, UINavigationControllerDelegate> {
    UILabel * _activationCodeLabel;
    UIButton * _bypassFauxCardButton;
    id /* block */  _codelessActivationBlock;
    id /* block */  _completion;
    UIView * _cutoutView;
    UIButton * _enterFauxCardDataManuallyButton;
    NSString * _fauxCardData;
    UILabel * _fauxDataLabel;
    UIView * _fauxScanView;
    CAShapeLayer * _fillWithHoleLayer;
    CAShapeLayer * _holeOutlineLayer;
    NSDate * _nextTimeToAcceptScan;
    NPHCellularBridgeBarcodeScannerView * _scannerView;
    CTXPCServiceSubscriptionContext * _subscriptionContext;
    long long  _userConsentResponse;
}

@property (nonatomic) UILabel *activationCodeLabel;
@property (nonatomic) UIButton *bypassFauxCardButton;
@property (nonatomic, copy) id /* block */ codelessActivationBlock;
@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic) UIView *cutoutView;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) UIButton *enterFauxCardDataManuallyButton;
@property (nonatomic) UILabel *fauxDataLabel;
@property (nonatomic) UIView *fauxScanView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NPHCellularBridgeBarcodeScannerView *scannerView;
@property (nonatomic) CTXPCServiceSubscriptionContext *subscriptionContext;
@property (readonly) Class superclass;
@property (nonatomic) long long userConsentResponse;

- (void).cxx_destruct;
- (id)_getFauxCardData;
- (void)_setFauxCardData:(id)arg1;
- (id)activationCodeLabel;
- (void)addNewRemotePlanWithCardData:(id)arg1 confirmationCode:(id)arg2;
- (void)bypassFauxCard:(id)arg1;
- (id)bypassFauxCardButton;
- (void)cancelAction:(id)arg1;
- (void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3;
- (void)captureSession:(id)arg1 isRunning:(bool)arg2;
- (void)cellularConfirmationCodeViewController:(id)arg1 confirmedWithCode:(id)arg2;
- (id /* block */)codelessActivationBlock;
- (id /* block */)completion;
- (id)cutoutView;
- (void)enterFauxCardDataManually:(id)arg1;
- (id)enterFauxCardDataManuallyButton;
- (id)fauxDataLabel;
- (id)fauxScanView;
- (id)init;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(bool)arg3;
- (void)presentConfirmationCodeRequest;
- (id)scannerView;
- (void)setActivationCodeLabel:(id)arg1;
- (void)setBypassFauxCardButton:(id)arg1;
- (void)setCodelessActivationBlock:(id /* block */)arg1;
- (void)setCompletion:(id /* block */)arg1;
- (void)setCutoutView:(id)arg1;
- (void)setEnterFauxCardDataManuallyButton:(id)arg1;
- (void)setFauxDataLabel:(id)arg1;
- (void)setFauxScanView:(id)arg1;
- (void)setScannerView:(id)arg1;
- (void)setSubscriptionContext:(id)arg1;
- (void)setUserConsentResponse:(long long)arg1;
- (id)subscriptionContext;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)userConsentResponse;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
