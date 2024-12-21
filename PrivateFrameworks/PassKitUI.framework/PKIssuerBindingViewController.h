/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKIssuerBindingViewController : PKExplanationViewController <PKExplanationViewControllerDelegate, PKExplanationViewDelegate, PKPassLibraryDelegate> {
    NSString * _accountName;
    <PKIssuerBindingViewControllerDelegate> * _delegate;
    NSData * _issuerData;
    NSString * _issuerName;
    PKPassLibrary * _passLibrary;
    NSString * _relyingPartyIdentifier;
    unsigned long long  _source;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <PKIssuerBindingViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_alertViewControllerForError:(id)arg1;
- (void)_cancel;
- (void)_confirmSecurityCapabilitiesWithCompletion:(id /* block */)arg1;
- (void)_enableControls;
- (void)_presentFailureWithError:(id)arg1;
- (void)_sendAnalyticsDidTapButton:(id)arg1;
- (void)_sendAnalyticsViewVisibilityUpdateWithType:(id)arg1;
- (void)_sendAuthenticationEvent;
- (void)_sendInternalErrorEventWithError:(id)arg1;
- (id)delegate;
- (void)explanationViewControllerDidSelectCancel:(id)arg1;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (id)initWithIssuerData:(id)arg1 signature:(id)arg2 referralSource:(unsigned long long)arg3;
- (void)issuerBindingAuthenticationOccured;
- (void)setDelegate:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;

@end