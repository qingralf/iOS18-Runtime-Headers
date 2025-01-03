/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKAuxiliaryCapabilityRequirementKeyMaterialContent : NSObject <NSSecureCoding> {
    NSData * _applicationIdentifier;
    NSArray * _attestation;
    NSData * _authorization;
    NSArray * _certificateChain;
    NSString * _keyReferenceIdentifier;
    NSData * _publicKey;
    NSString * _publicKeyIdentifier;
    NSArray * _secondaryAttestation;
    NSData * _securityAccessControl;
    NSData * _signature;
}

@property (nonatomic, retain) NSData *applicationIdentifier;
@property (nonatomic, retain) NSArray *attestation;
@property (nonatomic, retain) NSData *authorization;
@property (nonatomic, retain) NSArray *certificateChain;
@property (nonatomic, retain) NSString *keyReferenceIdentifier;
@property (nonatomic, retain) NSData *publicKey;
@property (nonatomic, retain) NSString *publicKeyIdentifier;
@property (nonatomic, retain) NSArray *secondaryAttestation;
@property (nonatomic, retain) NSData *securityAccessControl;
@property (nonatomic, retain) NSData *signature;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)applicationIdentifier;
- (id)attestation;
- (id)authorization;
- (id)certificateChain;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAuxiliaryCapabilityRequirementKey:(id)arg1;
- (id)keyReferenceIdentifier;
- (id)publicKey;
- (id)publicKeyIdentifier;
- (id)secondaryAttestation;
- (id)securityAccessControl;
- (void)setApplicationIdentifier:(id)arg1;
- (void)setAttestation:(id)arg1;
- (void)setAuthorization:(id)arg1;
- (void)setCertificateChain:(id)arg1;
- (void)setKeyReferenceIdentifier:(id)arg1;
- (void)setPublicKey:(id)arg1;
- (void)setPublicKeyIdentifier:(id)arg1;
- (void)setSecondaryAttestation:(id)arg1;
- (void)setSecurityAccessControl:(id)arg1;
- (void)setSignature:(id)arg1;
- (id)signature;

@end
