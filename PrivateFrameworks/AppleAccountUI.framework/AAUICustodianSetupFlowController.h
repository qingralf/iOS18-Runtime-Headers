/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUICustodianSetupFlowController : NSObject <AAUIAccountContactSelectorDelegate, AAUIChooseContactControllerDelegate, AAUIGrandSlamRemoteUIPresenterDelegate, AAUIInviteMessageFlowControllerDelegate> {
    AIDAAccountManager * _accountManager;
    NSDictionary * _authResults;
    CDPContext * _cdpContext;
    AAUIChooseContactController * _chooseContactController;
    AACustodianController * _custodianController;
    NSUUID * _custodianshipID;
    <AAUICustodianSetupFlowControllerDelegate> * _delegate;
    AAUIDTOHelper * _dtoHelper;
    AAUIOBWelcomeController * _firstTimeSetupVC;
    bool  _forceInlinePresentation;
    AAUIInviteMessageFlowController * _inviteFlowController;
    AALocalContactInfo * _invitedContact;
    bool  _isADPUpsellFlow;
    bool  _isWalrusEnabled;
    UINavigationController * _navigationController;
    bool  _preValidate;
    UIViewController * _presentedViewController;
    AAUIGrandSlamRemoteUIPresenter * _remoteUIPresenter;
    NSString * _telemetryFlowID;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <AAUICustodianSetupFlowControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool forceInlinePresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isWalrusEnabled;
@property (nonatomic, retain) UINavigationController *navigationController;
@property (nonatomic) bool preValidate;
@property (nonatomic) UIViewController *presentedViewController;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *telemetryFlowID;

- (void).cxx_destruct;
- (void)_beginAddRecoveryContactFlow;
- (void)_cancelCustodianInvite;
- (void)_continueAddRecoveryContactFlow;
- (void)_dismissCFUIfNeeded;
- (void)_dismissWithCancel;
- (void)_dismissWithError:(id)arg1;
- (void)_displayAlertForNotReachableContact:(id)arg1;
- (void)_displayCustodianAddNotAllowedAlert;
- (void)_displayRatchetGenericErrorAlert;
- (void)_fetchSuggestedContacts;
- (void)_hideActivityIndicator;
- (void)_inviteContact:(id)arg1;
- (void)_loadRemoteUIPresenterRequest:(id)arg1;
- (void)_postAdpUpsellCFUCustodianFirstTimeSetupEvent;
- (void)_removeRecoveryKeyAndDismissCFUIfNeeded;
- (void)_sendEscapeOfferSelectedEvent:(id)arg1;
- (void)_sendTelemetryEventWithEscapeOffers:(id)arg1 offers:(id)arg2;
- (id)_setupContactSelectorVCWithViewModel:(id)arg1;
- (void)_showActivityIndicator;
- (void)_showAlertWithTitle:(id)arg1 message:(id)arg2;
- (void)_showChooseContact;
- (void)_showChooseContactWithCancel;
- (void)_showDataRecoveryServiceEnableUI;
- (void)_showDataRecoveryServiceEnableUIWithPresenter:(id)arg1 modal:(bool)arg2;
- (void)_showDeviceUpgradeUI;
- (void)_showFirstTimeSetup;
- (void)_showSuggestedContactSelector:(id)arg1;
- (void)_startInviteMessageFlow;
- (void)_validateAccountWithCompletion:(id /* block */)arg1;
- (void)_verifyAndInviteContact:(id)arg1;
- (void)_verifyCDPWithCompletion:(id /* block */)arg1;
- (void)accountContactSelector:(id)arg1 didSelectContact:(id)arg2;
- (void)accountContactSelectorDismiss:(id)arg1;
- (void)accountContactSelectorShowOtherContacts:(id)arg1;
- (void)chooseContactController:(id)arg1 didSelectContact:(id)arg2;
- (id)delegate;
- (bool)forceInlinePresentation;
- (id)initWithAccountManager:(id)arg1;
- (id)initWithAccountManager:(id)arg1 navigationController:(id)arg2;
- (id)initWithAccountManager:(id)arg1 navigationController:(id)arg2 isADPUpsellFlow:(bool)arg3 cdpContext:(id)arg4;
- (void)inviteMessageFlowDidFinish:(id)arg1;
- (void)inviteMessageFlowWasCancelled:(id)arg1;
- (bool)isWalrusEnabled;
- (id)navController;
- (id)navigationController;
- (bool)preValidate;
- (id)presentedViewController;
- (void)remoteUIDidDismiss:(id)arg1;
- (void)remoteUIRequestComplete:(id)arg1 error:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setForceInlinePresentation:(bool)arg1;
- (void)setIsWalrusEnabled:(bool)arg1;
- (void)setNavigationController:(id)arg1;
- (void)setPreValidate:(bool)arg1;
- (void)setPresentedViewController:(id)arg1;
- (void)setTelemetryFlowID:(id)arg1;
- (void)start;
- (void)startAddingDataRecoveryService:(id)arg1;
- (void)startWithoutFirstTimeSetup;
- (id)telemetryFlowID;

@end