/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
 */

@interface ASAuthorizationPlatformPublicKeyCredentialAssertion : NSObject <ASAuthorizationPublicKeyCredentialAssertion> {
    ASCPlatformPublicKeyCredentialAssertion * _coreCredential;
}

@property (nonatomic, readonly) ASAuthorizationPublicKeyCredentialLargeBlobAssertionOutput *__largeBlobSwift;
@property (nonatomic, readonly) ASAuthorizationPublicKeyCredentialPRFAssertionOutput *__prfSwift;
@property (nonatomic, readonly) long long attachment;
@property (nonatomic, readonly) ASCPlatformPublicKeyCredentialAssertion *coreCredential;
@property (nonatomic, readonly, copy) NSData *credentialID;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) ASAuthorizationPublicKeyCredentialLargeBlobAssertionOutput *largeBlob;
@property (nonatomic, readonly) ASAuthorizationPublicKeyCredentialPRFAssertionOutput *prf;
@property (nonatomic, readonly, copy) NSData *rawAuthenticatorData;
@property (nonatomic, readonly, copy) NSData *rawClientDataJSON;
@property (nonatomic, readonly, copy) NSData *signature;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSData *userID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)__largeBlobSwift;
- (id)__prfSwift;
- (long long)attachment;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)coreCredential;
- (id)credentialID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCoreCredential:(id)arg1;
- (id)largeBlob;
- (id)prf;
- (id)rawAuthenticatorData;
- (id)rawClientDataJSON;
- (id)signature;
- (id)userID;

@end