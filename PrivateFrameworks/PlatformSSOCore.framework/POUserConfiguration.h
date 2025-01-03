/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PlatformSSOCore.framework/PlatformSSOCore
 */

@interface POUserConfiguration : NSObject <NSSecureCoding> {
    NSData * __credential;
    NSData * __sepKeyData;
    NSArray * _kerberosStatus;
    NSDate * _lastLoginDate;
    unsigned long long  _loginType;
    bool  _newUser;
    NSNumber * _pendingSigningAlgorithm;
    struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; } * _sepKey;
    struct __SecCertificate { } * _sepKeyCertificate;
    NSNumber * _signingAlgorithm;
    NSData * _smartCardHash;
    NSString * _smartCardTokenId;
    NSString * _ssoExtensionIdentifier;
    long long  _state;
    NSString * _uniqueIdentifier;
    struct __SecCertificate { } * _userDecryptionCertificate;
    NSString * _userDecryptionContext;
    NSData * _userDecryptionKeyHash;
    POUserLoginConfiguration * _userLoginConfiguration;
    struct __SecCertificate { } * _userUnlockCertificate;
    NSString * _userUnlockData;
    NSData * _userUnlockHash;
    int  _version;
}

@property (copy) NSString *__ssoExtensionIdentifier;
@property (copy) NSData *_credential;
@property (retain) NSData *_sepKeyData;
@property (copy) NSArray *kerberosStatus;
@property (nonatomic, retain) NSDate *lastLoginDate;
@property unsigned long long loginType;
@property (getter=isNewUser, readonly) bool newUser;
@property (nonatomic, copy) NSNumber *pendingSigningAlgorithm;
@property struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*sepKey;
@property (nonatomic) struct __SecCertificate { }*sepKeyCertificate;
@property (nonatomic, copy) NSNumber *signingAlgorithm;
@property (copy) NSData *smartCardHash;
@property (copy) NSString *smartCardTokenId;
@property (copy) NSString *ssoExtensionIdentifier;
@property long long state;
@property (readonly) NSString *tokenId;
@property (copy) NSString *uniqueIdentifier;
@property (readonly) NSString *unlockTokenId;
@property struct __SecCertificate { }*userDecryptionCertificate;
@property (copy) NSString *userDecryptionContext;
@property (copy) NSData *userDecryptionKeyHash;
@property (retain) POUserLoginConfiguration *userLoginConfiguration;
@property struct __SecCertificate { }*userUnlockCertificate;
@property (copy) NSString *userUnlockData;
@property (copy) NSData *userUnlockHash;
@property (readonly) int version;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)__ssoExtensionIdentifier;
- (id)_credential;
- (id)_sepKeyData;
- (id)dataRepresentation;
- (id)dataRepresentationForDisplay:(bool)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (bool)isNewUser;
- (id)kerberosStatus;
- (id)lastLoginDate;
- (unsigned long long)loginType;
- (bool)newUser;
- (id)pendingSigningAlgorithm;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)sepKey;
- (struct __SecCertificate { }*)sepKeyCertificate;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)sepKeyWithContext:(id)arg1;
- (void)setKerberosStatus:(id)arg1;
- (void)setLastLoginDate:(id)arg1;
- (void)setLoginType:(unsigned long long)arg1;
- (void)setPendingSigningAlgorithm:(id)arg1;
- (void)setSepKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)arg1;
- (void)setSepKeyCertificate:(struct __SecCertificate { }*)arg1;
- (void)setSigningAlgorithm:(id)arg1;
- (void)setSmartCardHash:(id)arg1;
- (void)setSmartCardTokenId:(id)arg1;
- (void)setSsoExtensionIdentifier:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (void)setUserDecryptionCertificate:(struct __SecCertificate { }*)arg1;
- (void)setUserDecryptionContext:(id)arg1;
- (void)setUserDecryptionKeyHash:(id)arg1;
- (void)setUserLoginConfiguration:(id)arg1;
- (void)setUserUnlockCertificate:(struct __SecCertificate { }*)arg1;
- (void)setUserUnlockData:(id)arg1;
- (void)setUserUnlockHash:(id)arg1;
- (void)set__ssoExtensionIdentifier:(id)arg1;
- (void)set_credential:(id)arg1;
- (void)set_sepKeyData:(id)arg1;
- (id)signingAlgorithm;
- (id)smartCardHash;
- (id)smartCardTokenId;
- (id)ssoExtensionIdentifier;
- (long long)state;
- (id)tokenId;
- (id)uniqueIdentifier;
- (id)unlockTokenId;
- (void)updateVersion;
- (struct __SecCertificate { }*)userDecryptionCertificate;
- (id)userDecryptionContext;
- (id)userDecryptionKeyHash;
- (id)userLoginConfiguration;
- (struct __SecCertificate { }*)userUnlockCertificate;
- (id)userUnlockData;
- (id)userUnlockHash;
- (int)version;

@end
