/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PosterUIFoundation.framework/PosterUIFoundation
 */

@interface PUINumberingSystem : NSObject <NSCopying, NSSecureCoding> {
    UIImage * _image;
    NSLocale * _locale;
    NSString * _localizedDisplayName;
    NSString * _systemName;
    NSString * _type;
}

@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly) NSLocale *locale;
@property (nonatomic, readonly) NSString *localizedDisplayName;
@property (nonatomic, readonly) NSString *systemName;
@property (nonatomic, readonly) NSString *type;

+ (id)allNumberingSystemTypes;
+ (id)allNumberingSystems;
+ (id)numberingSystemDisplayFontForFont:(id)arg1;
+ (id)numberingSystemForType:(id)arg1;
+ (id)supportedNumberingSystemTypes;
+ (id)supportedNumberingSystems;
+ (bool)supportsSecureCoding;
+ (id)systemDefaultNumberingSystem;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)image;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNumberingSystemType:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)locale;
- (id)localizedDisplayName;
- (id)systemName;
- (id)type;

@end