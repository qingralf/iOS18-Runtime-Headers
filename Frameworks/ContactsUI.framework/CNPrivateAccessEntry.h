/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNPrivateAccessEntry : NSObject <NSSecureCoding> {
    NSString * _bundleIdentifier;
    bool  _isPrivateAccessTipDismissedByUser;
    double  _lastAccessTimestamp;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) bool isExpired;
@property (nonatomic, readonly) bool isPrivateAccessTipDismissedByUser;
@property (nonatomic, readonly) double lastAccessTimestamp;

+ (id)log;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBundleIdentifier:(id)arg1 privateAccessTipDismissedByUser:(bool)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isExpired;
- (bool)isForClientWithBundleIdentifier:(id)arg1;
- (bool)isPrivateAccessTipDismissedByUser;
- (double)lastAccessTimestamp;
- (void)setLastAccessTimeToNow;

@end