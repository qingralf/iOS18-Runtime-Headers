/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
 */

@interface DNDModeSymbolDescriptor : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSString * _imageName;
    NSArray * _tintColorNames;
    unsigned long long  _tintStyle;
}

@property (nonatomic, readonly, copy) NSString *imageName;
@property (nonatomic, readonly, copy) NSString *primaryTintColorName;
@property (nonatomic, readonly, copy) NSArray *tintColorNames;
@property (nonatomic, readonly) unsigned long long tintStyle;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)imageName;
- (id)initWithCoder:(id)arg1;
- (id)initWithTintStyle:(unsigned long long)arg1 tintColorNames:(id)arg2 imageName:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)primaryTintColorName;
- (id)tintColorNames;
- (unsigned long long)tintStyle;

@end
