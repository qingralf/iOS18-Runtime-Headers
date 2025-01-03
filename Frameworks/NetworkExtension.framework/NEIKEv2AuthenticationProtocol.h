/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEIKEv2AuthenticationProtocol : NSObject <NSCopying> {
    unsigned long long  _digitalSignatureAlgorithm;
    bool  _isNonStandard;
    unsigned long long  _method;
    unsigned long long  _securePasswordMethod;
}

@property (nonatomic, readonly) unsigned long long digitalSignatureAlgorithm;
@property (nonatomic, readonly) bool isDigitalSignature;
@property (nonatomic, readonly) bool isNonStandard;
@property (nonatomic, readonly) bool isSecurePassword;
@property (nonatomic, readonly) bool isSignature;
@property (nonatomic, readonly) unsigned long long method;
@property (nonatomic, readonly) unsigned long long securePasswordMethod;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)digitalSignatureAlgorithm;
- (unsigned long long)hash;
- (id)initWithDigitalSignature:(unsigned long long)arg1;
- (id)initWithMethod:(unsigned long long)arg1;
- (id)initWithNonStandardDigitalSignature:(unsigned long long)arg1;
- (id)initWithSecurePassword:(unsigned long long)arg1;
- (bool)isDigitalSignature;
- (bool)isEqual:(id)arg1;
- (bool)isNonStandard;
- (bool)isSecurePassword;
- (bool)isSignature;
- (unsigned long long)method;
- (unsigned long long)securePasswordMethod;

@end
