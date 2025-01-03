/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PasswordManagerUI.framework/PasswordManagerUI
 */

@interface PasswordManagerUI.PMCredentialPickerViewController : PasswordManagerUI.PMCredentialPickerViewControllerBase <ASCredentialPickerViewControllerProtocol, ASCredentialRequestSubPaneConfirmButtonDelegate, _ASAuthenticationPresentationProvider, _ASCredentialAuthenticationViewControllerDelegate, _ASCredentialListViewControllerDelegate> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _selectedLoginChoiceIndex;
    void alertQueue;
    void authKitAuthorizationProvider;
    void confirmButtonSubpane;
    void credentialAuthenticationViewController;
    void credentialListViewController;
    void externalPasswordCredentialForSelectedLoginChoice;
    void loginChoicesToShow;
    void presentationContext;
    void secondaryButton;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  uiContext;
}

@property (nonatomic, readonly) long long numberOfTableRows;
@property (nonatomic, readonly) UIWindow *presentationAnchor;

- (void).cxx_destruct;
- (void)authenticationProvider:(id)arg1 hideViewController:(id)arg2;
- (void)authenticationProvider:(id)arg1 presentAlert:(id)arg2 primaryAction:(id /* block */)arg3 alternateAction:(id /* block */)arg4;
- (void)authenticationProvider:(id)arg1 showViewController:(id)arg2;
- (void)confirmButtonSubPaneDidEnterProcessingState:(id)arg1 withAuthenticatedContext:(id)arg2;
- (void)confirmButtonSubPaneDidFailBiometry:(id)arg1 allowingPasscodeFallback:(bool)arg2;
- (void)credentialAuthenticationViewController:(id)arg1 didFinishWithCredential:(id)arg2 error:(id)arg3 completion:(id /* block */)arg4;
- (void)credentialAuthenticationViewController:(id)arg1 didFinishWithPasskeyAssertionCredential:(id)arg2 error:(id)arg3 completion:(id /* block */)arg4;
- (void)credentialAuthenticationViewController:(id)arg1 didFinishWithPasskeyRegistrationCredential:(id)arg2 error:(id)arg3 completion:(id /* block */)arg4;
- (void)credentialListViewController:(id)arg1 didFinishWithCredential:(id)arg2 completion:(id /* block */)arg3;
- (void)credentialListViewController:(id)arg1 didFinishWithPasskeyAssertionCredential:(id)arg2 completion:(id /* block */)arg3;
- (void)credentialListViewControllerDidPrepareInterface:(id)arg1;
- (void)expandLoginChoicesButtonPressed;
- (id)initRequiringTableView:(bool)arg1;
- (id)initWithPresentationContext:(id)arg1 shouldExpandOtherLoginChoices:(bool)arg2 activity:(id)arg3;
- (void)keychainSyncStatusMayHaveChangedWithNotificaiton:(id)arg1;
- (void)manualPasswordEntryButtonPressed;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)numberOfTableRows;
- (void)performAuthorization:(id)arg1 withAuthenticatedLAContext:(id)arg2;
- (void)performConditionalRegistrationIfPossible;
- (void)performPasswordAuthentication:(id)arg1;
- (void)presentUIForPasswordCredentialAuthenticationViewController:(id)arg1;
- (id)presentationAnchor;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)useCABLEButtonPressed;
- (void)userTappedContinueButton;
- (bool)validateReadyForAuthorization:(id)arg1;
- (void)viewDidLoad;

@end
