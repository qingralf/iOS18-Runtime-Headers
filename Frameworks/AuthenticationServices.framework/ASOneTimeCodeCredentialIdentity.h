/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
 */

@interface ASOneTimeCodeCredentialIdentity : NSObject <ASCredentialIdentity, ASCredentialIdentityPrivate, NSCopying, NSSecureCoding> {
    SFExternalCredentialIdentityStoreIdentifier * _credentialIdentityStoreIdentifier;
    NSString * _label;
    long long  _rank;
    NSString * _recordIdentifier;
    ASCredentialServiceIdentifier * _serviceIdentifier;
}

@property (nonatomic, readonly) SFExternalCredentialIdentityStoreIdentifier *credentialIdentityStoreIdentifier;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *label;
@property (nonatomic) long long rank;
@property (nonatomic, readonly, copy) NSString *recordIdentifier;
@property (nonatomic, readonly) ASCredentialServiceIdentifier *serviceIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *user;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithFoundationCredentialIdentity:(id)arg1;
- (id)_initWithServiceIdentifier:(id)arg1 label:(id)arg2 recordIdentifier:(id)arg3 rank:(long long)arg4 credentialIdentityStoreIdentifier:(id)arg5;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)credentialIdentityStoreIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithServiceIdentifier:(id)arg1 label:(id)arg2 recordIdentifier:(id)arg3;
- (id)label;
- (long long)rank;
- (id)recordIdentifier;
- (id)serviceIdentifier;
- (void)setRank:(long long)arg1;
- (id)user;

@end