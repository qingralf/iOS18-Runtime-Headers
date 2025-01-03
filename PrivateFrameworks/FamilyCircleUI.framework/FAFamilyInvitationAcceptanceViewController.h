/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
 */

@interface FAFamilyInvitationAcceptanceViewController : AAUIBleachedNavigationController <FAConfirmIdentityViewControllerDelegate, RemoteUIControllerDelegate> {
    ACAccount * _account;
    ACAccountStore * _accountStore;
    NSMutableURLRequest * _currentRemoteUIRequest;
    AAGrandSlamSigner * _grandSlamSigner;
    FAFamilyInvite * _invite;
    NSOperationQueue * _inviteOperationQueue;
    AAUIRemoteUIController * _remoteUIController;
    NSMutableURLRequest * _startRemoteUIRequest;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <FAInvitationAcceptanceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelButtonWasTapped:(id)arg1;
- (id)_createCancelButton;
- (void)_loadiTunesLinkingRemoteUI;
- (void)_sendUserToiTunesSettings;
- (void)_showErrorAlert;
- (void)confirmIdentityViewController:(id)arg1 didCompleteWithSuccess:(bool)arg2;
- (id)initWithInvite:(id)arg1 appleAccount:(id)arg2 grandSlamSigner:(id)arg3;
- (void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2;
- (void)remoteUIController:(id)arg1 willLoadRequest:(id)arg2;
- (void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(bool)arg3;
- (void)remoteUIControllerDidDismiss:(id)arg1;

@end
