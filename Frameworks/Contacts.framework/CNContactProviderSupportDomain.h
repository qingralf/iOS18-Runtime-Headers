/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNContactProviderSupportDomain : NSObject <NSCopying, NSSecureCoding> {
    NSString * _bundleIdentifier;
    NSString * _displayName;
    NSString * _domainIdentifier;
    bool  _enabled;
    bool  _registered;
    NSDictionary * _userInfo;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *domainIdentifier;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (getter=isRegistered, nonatomic) bool registered;
@property (nonatomic, readonly) NSDictionary *userInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)displayName;
- (id)domainIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomainIdentifer:(id)arg1 displayName:(id)arg2 userInfo:(id)arg3 bundleIdentifier:(id)arg4 registered:(bool)arg5 enabled:(bool)arg6;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (bool)isRegistered;
- (void)setEnabled:(bool)arg1;
- (void)setRegistered:(bool)arg1;
- (id)userInfo;

@end
