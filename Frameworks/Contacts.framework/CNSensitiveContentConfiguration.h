/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNSensitiveContentConfiguration : NSObject <NSCopying, NSSecureCoding> {
    long long  _override;
}

@property (nonatomic) long long override;

+ (id)configurationWithOverride:(long long)arg1;
+ (id)log;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDataRepresentation:(id)arg1;
- (id)initWithSensitiveContentOverride:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (long long)override;
- (void)setOverride:(long long)arg1;
- (id)updatedWithOverride:(long long)arg1;

@end
