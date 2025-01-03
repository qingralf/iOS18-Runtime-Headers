/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNInstantMessageAddress : NSObject <CNObjectValidation, NSCopying, NSSecureCoding> {
    NSArray * _bundleIdentifiers;
    NSString * _service;
    NSString * _teamIdentifier;
    NSString * _userIdentifier;
    NSString * _username;
}

@property (nonatomic, copy) NSArray *bundleIdentifiers;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *service;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *teamIdentifier;
@property (nonatomic, copy) NSString *userIdentifier;
@property (nonatomic, copy) NSString *username;

+ (id /* block */)Username;
+ (id)instantMessageAddressWithDictionaryRepresentation:(id)arg1;
+ (id)localizedStringForKey:(id)arg1;
+ (id)localizedStringForService:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifiers;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithUsername:(id)arg1 service:(id)arg2;
- (id)initWithUsername:(id)arg1 userIdentifier:(id)arg2 service:(id)arg3 teamIdentifier:(id)arg4 bundleIdentifiers:(id)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isValid:(id*)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)service;
- (void)setBundleIdentifiers:(id)arg1;
- (void)setService:(id)arg1;
- (void)setTeamIdentifier:(id)arg1;
- (void)setUserIdentifier:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)teamIdentifier;
- (id)userIdentifier;
- (id)username;

@end
