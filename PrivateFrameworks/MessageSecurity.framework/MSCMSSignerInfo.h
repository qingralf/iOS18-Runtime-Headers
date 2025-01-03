/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MessageSecurity.framework/MessageSecurity
 */

@interface MSCMSSignerInfo : NSObject {
    NSData * _LAContext;
    MSCMSSignedData * _containingSignedData;
    bool  _contentChanged;
    MSAlgorithmIdentifier * _digestAlgorithm;
    struct SignerInfo { int x1; struct heim_base_data { unsigned long long x_2_1_1; void *x_2_1_2; } x2; struct AlgorithmIdentifier { struct heim_oid { unsigned long long x_1_2_1; unsigned int *x_1_2_2; } x_3_1_1; struct heim_base_data {} *x_3_1_2; } x3; struct heim_base_data {} *x4; struct AlgorithmIdentifier { struct heim_oid { unsigned long long x_1_2_1; unsigned int *x_1_2_2; } x_5_1_1; struct heim_base_data {} *x_5_1_2; } x5; struct heim_base_data { unsigned long long x_6_1_1; void *x_6_1_2; } x6; struct heim_base_data {} *x7; } * _encodedSignerInfo;
    NSData * _identifierData;
    MSCMSMutableAttributeArray * _protectedAttributes;
    NSData * _signature;
    MSAlgorithmIdentifier * _signatureAlgorithm;
    bool  _signatureCalculated;
    NSData * _signedAttrsData;
    struct __SecCertificate { } * _signerCertificate;
    struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; } * _signerPrivKey;
    MSCMSMutableAttributeArray * _unprotectedAttributes;
    NSData * _unsignedAttrsData;
    bool  _useIssuerAndSerialNumber;
    NSNumber * _version;
}

@property (retain) NSData *LAContext;
@property (readonly) NSArray *certificates;
@property MSCMSSignedData *containingSignedData;
@property bool contentChanged;
@property (retain) MSAlgorithmIdentifier *digestAlgorithm;
@property struct SignerInfo { int x1; struct heim_base_data { unsigned long long x_2_1_1; void *x_2_1_2; } x2; struct AlgorithmIdentifier { struct heim_oid { unsigned long long x_1_2_1; unsigned int *x_1_2_2; } x_3_1_1; struct heim_base_data {} *x_3_1_2; } x3; struct heim_base_data {} *x4; struct AlgorithmIdentifier { struct heim_oid { unsigned long long x_1_2_1; unsigned int *x_1_2_2; } x_5_1_1; struct heim_base_data {} *x_5_1_2; } x5; struct heim_base_data { unsigned long long x_6_1_1; void *x_6_1_2; } x6; struct heim_base_data {} *x7; }*encodedSignerInfo;
@property (retain) NSData *identifierData;
@property (retain) MSCMSMutableAttributeArray *protectedAttributes;
@property (nonatomic, retain) NSData *signature;
@property (retain) MSAlgorithmIdentifier *signatureAlgorithm;
@property (readonly) bool signatureCalculated;
@property (retain) NSData *signedAttrsData;
@property struct __SecCertificate { }*signerCertificate;
@property struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*signerPrivKey;
@property (retain) MSCMSMutableAttributeArray *unprotectedAttributes;
@property (retain) NSData *unsignedAttrsData;
@property bool useIssuerAndSerialNumber;
@property (retain) NSNumber *version;

+ (id)decodeSignerInfo:(struct SignerInfo { int x1; struct heim_base_data { unsigned long long x_2_1_1; void *x_2_1_2; } x2; struct AlgorithmIdentifier { struct heim_oid { unsigned long long x_1_2_1; unsigned int *x_1_2_2; } x_3_1_1; struct heim_base_data {} *x_3_1_2; } x3; struct heim_base_data {} *x4; struct AlgorithmIdentifier { struct heim_oid { unsigned long long x_1_2_1; unsigned int *x_1_2_2; } x_5_1_1; struct heim_base_data {} *x_5_1_2; } x5; struct heim_base_data { unsigned long long x_6_1_1; void *x_6_1_2; } x6; struct heim_base_data {} *x7; }*)arg1 certificates:(id)arg2 LAContext:(id)arg3 error:(id*)arg4;

- (void).cxx_destruct;
- (id)LAContext;
- (void)addCounterSignerAttribute:(id)arg1;
- (void)addMultipleSignaturesAttribute;
- (void)addProtectedAttribute:(id)arg1;
- (void)addSMIMECapabilitiesAttribute:(id)arg1;
- (void)addSMIMEEncryptionKeyPreferenceAttribute:(id)arg1;
- (id)calculateSignatureDigestWithAlgorithm:(id)arg1 error:(id*)arg2;
- (id)calculateSignedAttributesDigest:(id*)arg1;
- (id)calculateSignerInfoDigest:(id*)arg1;
- (id)certificates;
- (id)containingSignedData;
- (bool)contentChanged;
- (bool)createRequiredAttributes:(id*)arg1;
- (struct __SecTrust { }*)createTrustObjectWithPolicies:(id)arg1 error:(id*)arg2;
- (struct __SecTrust { }*)createTrustObjectWithPolicies:(id)arg1 verifyTime:(id)arg2 anchorCertificates:(id)arg3 error:(id*)arg4;
- (void)dealloc;
- (id)digestAlgorithm;
- (bool)encodeSignerInfo:(struct SignerInfo { int x1; struct heim_base_data { unsigned long long x_2_1_1; void *x_2_1_2; } x2; struct AlgorithmIdentifier { struct heim_oid { unsigned long long x_1_2_1; unsigned int *x_1_2_2; } x_3_1_1; struct heim_base_data {} *x_3_1_2; } x3; struct heim_base_data {} *x4; struct AlgorithmIdentifier { struct heim_oid { unsigned long long x_1_2_1; unsigned int *x_1_2_2; } x_5_1_1; struct heim_base_data {} *x_5_1_2; } x5; struct heim_base_data { unsigned long long x_6_1_1; void *x_6_1_2; } x6; struct heim_base_data {} *x7; }*)arg1 error:(id*)arg2;
- (struct SignerInfo { int x1; struct heim_base_data { unsigned long long x_2_1_1; void *x_2_1_2; } x2; struct AlgorithmIdentifier { struct heim_oid { unsigned long long x_1_2_1; unsigned int *x_1_2_2; } x_3_1_1; struct heim_base_data {} *x_3_1_2; } x3; struct heim_base_data {} *x4; struct AlgorithmIdentifier { struct heim_oid { unsigned long long x_1_2_1; unsigned int *x_1_2_2; } x_5_1_1; struct heim_base_data {} *x_5_1_2; } x5; struct heim_base_data { unsigned long long x_6_1_1; void *x_6_1_2; } x6; struct heim_base_data {} *x7; }*)encodedSignerInfo;
- (id)getAttributesWithType:(id)arg1;
- (id)getAttributesWithType:(id)arg1 protectedAttributes:(bool)arg2;
- (id)identifierData;
- (id)initWithCertificate:(struct __SecCertificate { }*)arg1 error:(id*)arg2;
- (id)initWithCertificate:(struct __SecCertificate { }*)arg1 recipientsAlgorithmCapabilities:(id)arg2 error:(id*)arg3;
- (id)initWithCertificate:(struct __SecCertificate { }*)arg1 signatureAlgorithm:(id)arg2 error:(id*)arg3;
- (id)initWithCertificate:(struct __SecCertificate { }*)arg1 signatureAlgorithm:(id)arg2 useIssuerAndSerialNumber:(bool)arg3 error:(id*)arg4;
- (id)initWithEmail:(id)arg1 LAContext:(id)arg2 error:(id*)arg3;
- (id)initWithEmail:(id)arg1 recipientsAlgorithmCapabilities:(id)arg2 LAContext:(id)arg3 error:(id*)arg4;
- (id)initWithEmail:(id)arg1 signatureAlgorithm:(id)arg2 LAContext:(id)arg3 error:(id*)arg4;
- (id)initWithIdentity:(struct __SecIdentity { }*)arg1 error:(id*)arg2;
- (id)initWithIdentity:(struct __SecIdentity { }*)arg1 recipientsAlgorithmCapabilities:(id)arg2 error:(id*)arg3;
- (id)initWithIdentity:(struct __SecIdentity { }*)arg1 signatureAlgorithm:(id)arg2 error:(id*)arg3;
- (id)initWithIdentity:(struct __SecIdentity { }*)arg1 signatureAlgorithm:(id)arg2 useIssuerAndSerialNumber:(bool)arg3 error:(id*)arg4;
- (id)protectedAttributes;
- (void)setContainingSignedData:(id)arg1;
- (void)setContentChanged:(bool)arg1;
- (void)setDigestAlgorithm:(id)arg1;
- (void)setEncodedSignerInfo:(struct SignerInfo { int x1; struct heim_base_data { unsigned long long x_2_1_1; void *x_2_1_2; } x2; struct AlgorithmIdentifier { struct heim_oid { unsigned long long x_1_2_1; unsigned int *x_1_2_2; } x_3_1_1; struct heim_base_data {} *x_3_1_2; } x3; struct heim_base_data {} *x4; struct AlgorithmIdentifier { struct heim_oid { unsigned long long x_1_2_1; unsigned int *x_1_2_2; } x_5_1_1; struct heim_base_data {} *x_5_1_2; } x5; struct heim_base_data { unsigned long long x_6_1_1; void *x_6_1_2; } x6; struct heim_base_data {} *x7; }*)arg1;
- (void)setIdentifierData:(id)arg1;
- (void)setLAContext:(id)arg1;
- (void)setProtectedAttributes:(id)arg1;
- (void)setSignature:(id)arg1;
- (void)setSignatureAlgorithm:(id)arg1;
- (void)setSignedAttrsData:(id)arg1;
- (void)setSignerCertificate:(struct __SecCertificate { }*)arg1;
- (void)setSignerPrivKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)arg1;
- (void)setUnprotectedAttributes:(id)arg1;
- (void)setUnsignedAttrsData:(id)arg1;
- (void)setUseIssuerAndSerialNumber:(bool)arg1;
- (void)setVersion:(id)arg1;
- (bool)sign:(id*)arg1;
- (id)signature;
- (id)signatureAlgorithm;
- (bool)signatureCalculated;
- (id)signedAttrsData;
- (struct __SecCertificate { }*)signerCertificate;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)signerPrivKey;
- (id)unprotectedAttributes;
- (id)unsignedAttrsData;
- (bool)useIssuerAndSerialNumber;
- (bool)verifyContentTypeAttribute:(id*)arg1;
- (bool)verifyCountersignatures:(id*)arg1;
- (bool)verifyCountersignaturesAndCountersignersWithPolicies:(id)arg1 verifyTime:(id)arg2 anchorCertificates:(id)arg3 error:(id*)arg4;
- (bool)verifyMessageDigestAttribute:(id)arg1 error:(id*)arg2;
- (bool)verifySignature:(id*)arg1;
- (bool)verifySignatureAndSignerWithPolicies:(id)arg1 verifyTime:(id)arg2 anchorCertificates:(id)arg3 error:(id*)arg4;
- (id)verifyTime:(id)arg1;
- (bool)verifyTimestamps:(id*)arg1;
- (bool)verifyTimestamps:(bool)arg1 error:(id*)arg2;
- (id)version;

@end
