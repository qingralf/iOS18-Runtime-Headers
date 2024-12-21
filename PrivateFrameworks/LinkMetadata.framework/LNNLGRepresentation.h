/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LinkMetadata.framework/LinkMetadata
 */

@interface LNNLGRepresentation : NSObject <NSCopying, NSSecureCoding> {
    NSString * _format;
    NSData * _securityScopeData;
    LNStaticDeferredLocalizedString * _title;
    NSString * _type;
    NSString * _value;
}

@property (nonatomic, readonly, copy) NSString *format;
@property (nonatomic, retain) NSData *securityScopeData;
@property (nonatomic, readonly, copy) LNStaticDeferredLocalizedString *title;
@property (nonatomic, readonly, copy) NSString *type;
@property (nonatomic, readonly, copy) NSString *value;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)format;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(id)arg1 title:(id)arg2 value:(id)arg3 format:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)securityScopeData;
- (void)setSecurityScopeData:(id)arg1;
- (id)title;
- (id)type;
- (id)value;

@end