/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraOverlayServices.framework/CameraOverlayServices
 */

@interface CAMAbstractOverlayServiceControl : NSObject <NSCopying, NSSecureCoding> {
    long long  _controlType;
    bool  _enabled;
    NSString * _identifier;
    NSString * _imageName;
    bool  _persistentlyVisible;
    NSString * _title;
}

@property (nonatomic, readonly) long long controlType;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *imageName;
@property (nonatomic, readonly) bool persistentlyVisible;
@property (nonatomic, readonly) NSString *title;

+ (id)_preferredLocale;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithIdentifier:(id)arg1 title:(id)arg2 imageName:(id)arg3;
- (long long)controlType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)imageName;
- (id)initWithCoder:(id)arg1;
- (bool)isContentEqual:(id)arg1;
- (bool)isEnabled;
- (bool)persistentlyVisible;
- (void)setEnabled:(bool)arg1;
- (id)title;
- (id)updateWithEnabled:(bool)arg1;
- (id)validateUpdate:(id)arg1;

@end
