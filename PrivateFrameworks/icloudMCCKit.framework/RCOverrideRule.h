/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/icloudMCCKit.framework/icloudMCCKit
 */

@interface RCOverrideRule : NSObject <NSCopying, NSSecureCoding> {
    RCAddress * _address;
    NSString * _category;
    NSNumber * _categoryUpdateTime;
    NSString * _messageIdHeader;
    NSString * _xAppleRequestHeader;
}

@property (nonatomic, retain) RCAddress *address;
@property (nonatomic, copy) NSString *category;
@property (nonatomic, retain) NSNumber *categoryUpdateTime;
@property (nonatomic, copy) NSString *messageIdHeader;
@property (nonatomic, copy) NSString *xAppleRequestHeader;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)address;
- (id)category;
- (id)categoryUpdateTime;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEmailAddress:(id)arg1 category:(id)arg2 categoryUpdateTime:(double)arg3;
- (id)initWithEmailAddress:(id)arg1 displayName:(id)arg2 category:(id)arg3 categoryUpdateTime:(double)arg4;
- (id)initWithMessageIdHeader:(id)arg1 appleRequestHeader:(id)arg2 category:(id)arg3 categoryUpdateTime:(double)arg4;
- (id)messageIdHeader;
- (void)setAddress:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setCategoryUpdateTime:(id)arg1;
- (void)setMessageIdHeader:(id)arg1;
- (void)setXAppleRequestHeader:(id)arg1;
- (id)xAppleRequestHeader;

@end