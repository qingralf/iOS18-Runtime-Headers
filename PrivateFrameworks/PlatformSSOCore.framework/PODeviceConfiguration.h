/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PlatformSSOCore.framework/PlatformSSOCore
 */

@interface PODeviceConfiguration : NSObject <NSSecureCoding> {
    NSData * __deviceEncryptionKeyData;
    NSData * __deviceSigningKeyData;
    NSString * _accountDisplayName;
    NSArray * _administratorGroups;
    NSDate * _authGracePeriodStart;
    bool  _authorizationEnabled;
    NSDictionary * _authorizationGroups;
    bool  _createUsersEnabled;
    NSString * _defaultUserDomain;
    struct __SecCertificate { } * _deviceEncryptionCertificate;
    struct __SecKey { } * _deviceEncryptionKey;
    struct __SecCertificate { } * _deviceSigningCertificate;
    struct __SecKey { } * _deviceSigningKey;
    NSNumber * _encryptionAlgorithm;
    NSString * _extensionIdentifier;
    unsigned long long  _fileVaultPolicy;
    NSDate * _lastEncryptionKeyChange;
    NSNumber * _loginFrequency;
    unsigned long long  _loginPolicy;
    unsigned long long  _loginType;
    long long  _newUserAuthorizationMode;
    NSArray * _nonPlatformSSOAccounts;
    long long  _offlineGracePeriod;
    NSArray * _otherGroups;
    NSNumber * _pendingEncryptionAlgorithm;
    NSNumber * _pendingSigningAlgorithm;
    long long  _protocolVersion;
    bool  _registrationCompleted;
    long long  _requireAuthGracePeriod;
    NSNumber * _sdkVersionString;
    bool  _sharedDeviceKeys;
    NSNumber * _signingAlgorithm;
    NSDictionary * _tokenToUserMapping;
    unsigned long long  _unlockPolicy;
    long long  _userAuthorizationMode;
    int  _version;
}

@property (nonatomic, retain) NSData *_deviceEncryptionKeyData;
@property (nonatomic, retain) NSData *_deviceSigningKeyData;
@property (nonatomic, copy) NSString *accountDisplayName;
@property (nonatomic, copy) NSArray *administratorGroups;
@property (nonatomic, copy) NSDate *authGracePeriodStart;
@property bool authorizationEnabled;
@property (nonatomic, copy) NSDictionary *authorizationGroups;
@property bool createUsersEnabled;
@property (nonatomic, copy) NSString *defaultUserDomain;
@property (nonatomic) struct __SecCertificate { }*deviceEncryptionCertificate;
@property (readonly) struct __SecIdentity { }*deviceEncryptionIdentity;
@property (nonatomic) struct __SecKey { }*deviceEncryptionKey;
@property (nonatomic, readonly) struct __SecKey { }*deviceEncryptionPublicKey;
@property (nonatomic) struct __SecCertificate { }*deviceSigningCertificate;
@property (readonly) struct __SecIdentity { }*deviceSigningIdentity;
@property (nonatomic) struct __SecKey { }*deviceSigningKey;
@property (nonatomic, readonly) struct __SecKey { }*deviceSigningPublicKey;
@property (nonatomic, copy) NSNumber *encryptionAlgorithm;
@property (nonatomic, copy) NSString *extensionIdentifier;
@property (nonatomic) unsigned long long fileVaultPolicy;
@property (nonatomic, copy) NSDate *lastEncryptionKeyChange;
@property (nonatomic, copy) NSNumber *loginFrequency;
@property (nonatomic) unsigned long long loginPolicy;
@property unsigned long long loginType;
@property long long newUserAuthorizationMode;
@property (nonatomic, copy) NSArray *nonPlatformSSOAccounts;
@property (nonatomic) long long offlineGracePeriod;
@property (nonatomic, copy) NSArray *otherGroups;
@property (nonatomic, copy) NSNumber *pendingEncryptionAlgorithm;
@property (nonatomic, copy) NSNumber *pendingSigningAlgorithm;
@property long long protocolVersion;
@property bool registrationCompleted;
@property (nonatomic) long long requireAuthGracePeriod;
@property (copy) NSNumber *sdkVersionString;
@property bool sharedDeviceKeys;
@property (nonatomic, copy) NSNumber *signingAlgorithm;
@property (nonatomic, copy) NSDictionary *tokenToUserMapping;
@property (nonatomic) unsigned long long unlockPolicy;
@property long long userAuthorizationMode;
@property (readonly) int version;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_deviceEncryptionKeyData;
- (id)_deviceSigningKeyData;
- (id)accountDisplayName;
- (id)administratorGroups;
- (id)authGracePeriodStart;
- (bool)authorizationEnabled;
- (id)authorizationGroups;
- (bool)createUsersEnabled;
- (id)dataRepresentation;
- (id)dataRepresentationForDisplay:(bool)arg1;
- (id)defaultUserDomain;
- (id)description;
- (struct __SecCertificate { }*)deviceEncryptionCertificate;
- (struct __SecIdentity { }*)deviceEncryptionIdentity;
- (struct __SecKey { }*)deviceEncryptionKey;
- (struct __SecKey { }*)deviceEncryptionPublicKey;
- (struct __SecCertificate { }*)deviceSigningCertificate;
- (struct __SecIdentity { }*)deviceSigningIdentity;
- (struct __SecKey { }*)deviceSigningKey;
- (struct __SecKey { }*)deviceSigningPublicKey;
- (void)encodeWithCoder:(id)arg1;
- (id)encryptionAlgorithm;
- (id)extensionIdentifier;
- (unsigned long long)fileVaultPolicy;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)lastEncryptionKeyChange;
- (id)loginFrequency;
- (unsigned long long)loginPolicy;
- (unsigned long long)loginType;
- (long long)newUserAuthorizationMode;
- (id)nonPlatformSSOAccounts;
- (long long)offlineGracePeriod;
- (id)otherGroups;
- (id)pendingEncryptionAlgorithm;
- (id)pendingSigningAlgorithm;
- (long long)protocolVersion;
- (bool)registrationCompleted;
- (long long)requireAuthGracePeriod;
- (id)sdkVersionString;
- (void)setAccountDisplayName:(id)arg1;
- (void)setAdministratorGroups:(id)arg1;
- (void)setAuthGracePeriodStart:(id)arg1;
- (void)setAuthorizationEnabled:(bool)arg1;
- (void)setAuthorizationGroups:(id)arg1;
- (void)setCreateUsersEnabled:(bool)arg1;
- (void)setDefaultUserDomain:(id)arg1;
- (void)setDeviceEncryptionCertificate:(struct __SecCertificate { }*)arg1;
- (void)setDeviceEncryptionKey:(struct __SecKey { }*)arg1;
- (void)setDeviceSigningCertificate:(struct __SecCertificate { }*)arg1;
- (void)setDeviceSigningKey:(struct __SecKey { }*)arg1;
- (void)setEncryptionAlgorithm:(id)arg1;
- (void)setExtensionIdentifier:(id)arg1;
- (void)setFileVaultPolicy:(unsigned long long)arg1;
- (void)setLastEncryptionKeyChange:(id)arg1;
- (void)setLoginFrequency:(id)arg1;
- (void)setLoginPolicy:(unsigned long long)arg1;
- (void)setLoginType:(unsigned long long)arg1;
- (void)setNewUserAuthorizationMode:(long long)arg1;
- (void)setNonPlatformSSOAccounts:(id)arg1;
- (void)setOfflineGracePeriod:(long long)arg1;
- (void)setOtherGroups:(id)arg1;
- (void)setPendingEncryptionAlgorithm:(id)arg1;
- (void)setPendingSigningAlgorithm:(id)arg1;
- (void)setProtocolVersion:(long long)arg1;
- (void)setRegistrationCompleted:(bool)arg1;
- (void)setRequireAuthGracePeriod:(long long)arg1;
- (void)setSdkVersionString:(id)arg1;
- (void)setSharedDeviceKeys:(bool)arg1;
- (void)setSigningAlgorithm:(id)arg1;
- (void)setTokenToUserMapping:(id)arg1;
- (void)setUnlockPolicy:(unsigned long long)arg1;
- (void)setUserAuthorizationMode:(long long)arg1;
- (void)set_deviceEncryptionKeyData:(id)arg1;
- (void)set_deviceSigningKeyData:(id)arg1;
- (bool)sharedDeviceKeys;
- (id)signingAlgorithm;
- (bool)supportsAuthorization;
- (bool)supportsCreateNewUsers;
- (bool)supportsTokenUnlock;
- (id)tokenToUserMapping;
- (unsigned long long)unlockPolicy;
- (void)updateVersion;
- (long long)userAuthorizationMode;
- (int)version;

@end