/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/icloudMCCKit.framework/icloudMCCKit
 */

@interface RCAddress : NSObject <NSCopying, NSSecureCoding> {
    NSString * _displayName;
    NSString * _emailAddress;
}

@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSString *emailAddress;

+ (id)addressWith:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)displayName;
- (id)emailAddress;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAddress:(id)arg1 displayName:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setEmailAddress:(id)arg1;

@end
