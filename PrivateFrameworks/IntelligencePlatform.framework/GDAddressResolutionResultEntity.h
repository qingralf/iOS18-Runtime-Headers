/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IntelligencePlatform.framework/IntelligencePlatform
 */

@interface GDAddressResolutionResultEntity : NSObject <NSCopying, NSSecureCoding> {
    NSString * _contactId;
    NSString * _mdId;
}

@property (nonatomic, readonly, copy) NSString *contactId;
@property (nonatomic, readonly, copy) NSString *mdId;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contactId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithMdId:(id)arg1 contactId:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAddressResolutionResultEntity:(id)arg1;
- (id)mdId;

@end
