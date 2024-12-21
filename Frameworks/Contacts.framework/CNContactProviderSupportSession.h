/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNContactProviderSupportSession : NSObject <NSCopying, NSSecureCoding> {
    NSString * _displayName;
    NSProgress * _progress;
    NSString * _synchronizationReason;
    NSDictionary * _userInfo;
}

@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, retain) NSProgress *progress;
@property (nonatomic, copy) NSString *synchronizationReason;
@property (nonatomic, retain) NSDictionary *userInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)progress;
- (void)setDisplayName:(id)arg1;
- (void)setProgress:(id)arg1;
- (void)setSynchronizationReason:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)synchronizationReason;
- (id)userInfo;

@end