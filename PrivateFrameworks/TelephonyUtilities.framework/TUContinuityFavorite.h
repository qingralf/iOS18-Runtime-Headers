/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUContinuityFavorite : NSObject <NSSecureCoding> {
    NSString * _actionType;
    TUContinuityHandleAnonym * _anonym;
    NSString * _bundleIdentifier;
    CNContact * _contact;
    NSString * _contactIdentifier;
}

@property (nonatomic, readonly) NSString *actionType;
@property (nonatomic, readonly) TUContinuityHandleAnonym *anonym;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) CNContact *contact;
@property (nonatomic, readonly) NSString *contactIdentifier;
@property (nonatomic, readonly) NSString *displayName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionType;
- (id)anonym;
- (id)bundleIdentifier;
- (id)contact;
- (id)contactIdentifier;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContact:(id)arg1 contactIdentifier:(id)arg2 anonym:(id)arg3 actionType:(id)arg4 bundleIdentifier:(id)arg5;

@end