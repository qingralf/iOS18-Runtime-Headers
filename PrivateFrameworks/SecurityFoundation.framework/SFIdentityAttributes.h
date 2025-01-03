/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

@interface SFIdentityAttributes : NSObject <SFKeychainItemAttributes> {
    id  _identityAttributesInternal;
    NSString * _privateKeyDomain;
    NSString * persistentIdentifier;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasCertificate;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identityName;
@property (nonatomic, readonly, copy) _SFKeySpecifier *keySpecifier;
@property (nonatomic, copy) NSString *localizedDescription;
@property (nonatomic, copy) NSString *localizedLabel;
@property (nonatomic, readonly, copy) NSString *persistentIdentifier;
@property (nonatomic, readonly, copy) NSString *privateKeyDomain;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasCertificate;
- (id)identityName;
- (id)initWithCoder:(id)arg1;
- (id)keySpecifier;
- (id)localizedDescription;
- (id)localizedLabel;
- (id)persistentIdentifier;
- (id)privateKeyDomain;
- (void)setIdentityName:(id)arg1;
- (void)setKeySpecifier:(id)arg1;
- (void)setLocalizedDescription:(id)arg1;
- (void)setLocalizedLabel:(id)arg1;

@end
