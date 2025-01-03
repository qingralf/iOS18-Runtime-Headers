/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFTouchRemoteAccountServicesHandler : NSObject {
    ACAccountStore * _accountStore;
    BSAtomicSignal * _activated;
    long long  _appleAccountSignInState;
    SFTouchRemoteAccountServicesHandlerConfiguration * _configuration;
    BSAtomicSignal * _invalidated;
    TRSession * _trSession;
}

@property (nonatomic, retain) ACAccountStore *accountStore;
@property (nonatomic, retain) BSAtomicSignal *activated;
@property (nonatomic, readonly) long long appleAccountSignInState;
@property (nonatomic, retain) SFTouchRemoteAccountServicesHandlerConfiguration *configuration;
@property (nonatomic, retain) BSAtomicSignal *invalidated;
@property (nonatomic, retain) TRSession *trSession;

- (void).cxx_destruct;
- (void)_authenticateAccount:(id)arg1 serviceType:(long long)arg2 companionDevice:(id)arg3 anisetteDataProvider:(id)arg4 completion:(id /* block */)arg5;
- (void)_authenticateAccount:(id)arg1 serviceType:(long long)arg2 rawPassword:(id)arg3 completion:(id /* block */)arg4;
- (void)_authenticateGameCenterWithAuthResults:(id)arg1 completion:(id /* block */)arg2;
- (void)_authenticateWithServiceType:(unsigned long long)arg1 authResults:(id)arg2 completion:(id /* block */)arg3;
- (void)_authenticateWithServiceTypes:(id)arg1 authResults:(id)arg2 completion:(id /* block */)arg3;
- (void)_authenticateiCloudWithAuthResults:(id)arg1 completion:(id /* block */)arg2;
- (void)_authenticateiTunesWithAuthResults:(id)arg1 completion:(id /* block */)arg2;
- (void)_handleTRCompanionAuthenticationRequest:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)_handleTRProxyAuthenticationRequest:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)_handleTRProxyDeviceRequest:(id)arg1 responseHandler:(id /* block */)arg2;
- (long long)_nextServiceTypeForTRAccountServices:(id)arg1;
- (unsigned long long)_nextTRServiceTypeForTRAccountServices:(id)arg1;
- (void)_saveNewAccount:(id)arg1 completion:(id /* block */)arg2;
- (void)_saveRemoteVerifiedAccount:(id)arg1 completion:(id /* block */)arg2;
- (id)accountStore;
- (bool)activateWithSession:(id)arg1 error:(id*)arg2;
- (id)activated;
- (long long)appleAccountSignInState;
- (id)configuration;
- (id)initWithConfiguration:(id)arg1;
- (void)invalidate;
- (id)invalidated;
- (void)setAccountStore:(id)arg1;
- (void)setActivated:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setInvalidated:(id)arg1;
- (void)setTrSession:(id)arg1;
- (id)trSession;

@end
