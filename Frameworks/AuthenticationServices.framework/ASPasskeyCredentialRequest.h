/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
 */

@interface ASPasskeyCredentialRequest : NSObject <ASCredentialRequest> {
    ASPasskeyAssertionCredentialExtensionInput * _assertionExtensionInput;
    NSData * _clientDataHash;
    <ASCredentialIdentity> * _credentialIdentity;
    long long  _credentialType;
    NSArray * _excludedCredentials;
    ASPasskeyRegistrationCredentialExtensionInput * _registrationExtensionInput;
    NSArray * _supportedAlgorithms;
    NSString * _userVerificationPreference;
}

@property (nonatomic, readonly) ASPasskeyAssertionCredentialExtensionInput *assertionExtensionInput;
@property (nonatomic, readonly) NSData *clientDataHash;
@property (nonatomic, readonly) <ASCredentialIdentity> *credentialIdentity;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *excludedCredentials;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) ASPasskeyRegistrationCredentialExtensionInput *registrationExtensionInput;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *supportedAlgorithms;
@property (nonatomic, readonly) long long type;
@property (nonatomic, retain) NSString *userVerificationPreference;

+ (id)requestWithCredentialIdentity:(id)arg1 clientDataHash:(id)arg2 userVerificationPreference:(id)arg3 supportedAlgorithms:(id)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithCredentialIdentity:(id)arg1 clientDataHash:(id)arg2 userVerificationPreference:(id)arg3 supportedAlgorithms:(id)arg4 credentialType:(long long)arg5 excludedCredentials:(id)arg6 registrationExtensionInput:(id)arg7 assertionExtensionInput:(id)arg8;
- (id)assertionExtensionInput;
- (id)clientDataHash;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)credentialIdentity;
- (void)encodeWithCoder:(id)arg1;
- (id)excludedCredentials;
- (id)initWithCoder:(id)arg1;
- (id)initWithCredentialIdentity:(id)arg1 clientDataHash:(id)arg2 userVerificationPreference:(id)arg3 supportedAlgorithms:(id)arg4;
- (id)initWithCredentialIdentity:(id)arg1 clientDataHash:(id)arg2 userVerificationPreference:(id)arg3 supportedAlgorithms:(id)arg4 assertionExtensionInput:(id)arg5;
- (id)initWithCredentialIdentity:(id)arg1 clientDataHash:(id)arg2 userVerificationPreference:(id)arg3 supportedAlgorithms:(id)arg4 registrationExtensionInput:(id)arg5;
- (id)initWithLoginChoice:(id)arg1 assertionExtensionInput:(id)arg2;
- (id)initWithLoginChoice:(id)arg1 registrationExtensionInput:(id)arg2;
- (id)registrationExtensionInput;
- (void)setUserVerificationPreference:(id)arg1;
- (id)supportedAlgorithms;
- (long long)type;
- (id)userVerificationPreference;

@end
