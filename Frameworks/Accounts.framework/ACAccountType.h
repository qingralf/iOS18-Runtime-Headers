/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

@interface ACAccountType : NSObject <ACProtobufCoding, NSCopying, NSSecureCoding> {
    NSSet * _accessKeys;
    ACAccountStore * _accountStore;
    NSString * _accountTypeDescription;
    NSString * _credentialProtectionPolicy;
    NSString * _credentialType;
    NSString * _identifier;
    NSURL * _objectID;
    bool  _obsolete;
    NSString * _owningBundleID;
    NSSet * _supportedDataclasses;
    int  _supportsAuthentication;
    bool  _supportsMultipleAccounts;
    NSSet * _syncableDataclasses;
    int  _visibility;
}

@property (nonatomic, readonly) bool accessGranted;
@property (nonatomic, readonly) NSSet *accessKeys;
@property (nonatomic) ACAccountStore *accountStore;
@property (nonatomic, readonly) NSString *accountTypeDescription;
@property (nonatomic, copy) id credentialProtectionPolicy;
@property (nonatomic, retain) NSString *credentialType;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *fullDescription;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, retain) NSURL *objectID;
@property (getter=isObsolete, nonatomic) bool obsolete;
@property (nonatomic, retain) NSString *owningBundleID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSSet *supportedDataclasses;
@property (nonatomic) int supportsAuthentication;
@property (nonatomic) bool supportsMultipleAccounts;
@property (nonatomic, readonly) NSSet *syncableDataclasses;
@property (nonatomic) int visibility;

+ (id)allIdentifiers;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_encodeProtobuf;
- (id)_encodeProtobufData;
- (id)_initWithProtobuf:(id)arg1;
- (id)_initWithProtobufData:(id)arg1;
- (bool)accessGranted;
- (id)accessKeys;
- (id)accountStore;
- (id)accountTypeDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)credentialProtectionPolicy;
- (id)credentialType;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fullDescription;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 description:(id)arg2;
- (id)initWithManagedAccountType:(id)arg1;
- (id)initWithManagedAccountType:(id)arg1 accountStore:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isObsolete;
- (id)objectID;
- (id)owningBundleID;
- (void)setAccountStore:(id)arg1;
- (void)setAccountTypeDescription:(id)arg1;
- (void)setCredentialProtectionPolicy:(id)arg1;
- (void)setCredentialType:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setObjectID:(id)arg1;
- (void)setObsolete:(bool)arg1;
- (void)setOwningBundleID:(id)arg1;
- (void)setSupportedDataclasses:(id)arg1;
- (void)setSupportsAuthentication:(int)arg1;
- (void)setSupportsMultipleAccounts:(bool)arg1;
- (void)setSyncableDataclasses:(id)arg1;
- (void)setVisibility:(int)arg1;
- (id)supportedDataclasses;
- (int)supportsAuthentication;
- (bool)supportsMultipleAccounts;
- (id)syncableDataclasses;
- (int)visibility;

@end
