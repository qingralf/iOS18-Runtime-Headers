/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _DUIPresentationUpdate : NSObject <NSSecureCoding> {
    long long  _badgeStyle;
    NSArray * _modifiedPreviews;
}

@property (nonatomic) long long badgeStyle;
@property (nonatomic, retain) NSArray *modifiedPreviews;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)badgeStyle;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)modifiedPreviews;
- (void)setBadgeStyle:(long long)arg1;
- (void)setModifiedPreviews:(id)arg1;

@end