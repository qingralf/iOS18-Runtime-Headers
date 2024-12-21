/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
 */

@interface ASAuthorizationSecurityKeyPublicKeyCredentialRegistrationRequest : ASAuthorizationRequest <ASAuthorizationPublicKeyCredentialRegistrationRequest, ASAuthorizationWebBrowserSecurityKeyPublicKeyCredentialRegistrationRequest> {
    NSString * _attestationPreference;
    NSData * _challenge;
    ASPublicKeyCredentialClientData * _clientData;
    NSArray * _credentialParameters;
    NSString * _displayName;
    NSArray * _excludedCredentials;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _internalLock;
    NSString * _name;
    NSString * _relyingPartyIdentifier;
    NSString * _residentKeyPreference;
    NSData * _userID;
    NSString * _userVerificationPreference;
}

@property (nonatomic, retain) NSString *attestationPreference;
@property (nonatomic, copy) NSData *challenge;
@property (nonatomic, readonly) ASPublicKeyCredentialClientData *clientData;
@property (nonatomic, readonly) ASCPublicKeyCredentialCreationOptions *coreCredentialCreationOptions;
@property (nonatomic, copy) NSArray *credentialParameters;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSArray *excludedCredentials;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *relyingPartyIdentifier;
@property (nonatomic, retain) NSString *residentKeyPreference;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSData *userID;
@property (nonatomic, retain) NSString *userVerificationPreference;

- (void).cxx_destruct;
- (id)_initWithProvider:(id)arg1 relyingPartyIdentifier:(id)arg2 challenge:(id)arg3 displayName:(id)arg4 name:(id)arg5 userID:(id)arg6 clientData:(id)arg7;
- (id)attestationPreference;
- (id)challenge;
- (id)clientData;
- (id)coreCredentialCreationOptions;
- (id)credentialParameters;
- (id)displayName;
- (id)excludedCredentials;
- (id)name;
- (id)relyingPartyIdentifier;
- (id)residentKeyPreference;
- (void)setAttestationPreference:(id)arg1;
- (void)setChallenge:(id)arg1;
- (void)setClientData:(id)arg1;
- (void)setCredentialParameters:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setExcludedCredentials:(id)arg1;
- (void)setName:(id)arg1;
- (void)setResidentKeyPreference:(id)arg1;
- (void)setUserID:(id)arg1;
- (void)setUserVerificationPreference:(id)arg1;
- (bool)supportsStyle:(long long)arg1;
- (id)userID;
- (id)userVerificationPreference;

@end