/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PosterKit.framework/PosterKit
 */

@interface PRPosterHomeScreenCustomizationConfiguration : NSObject <BSDescriptionStreamable, BSXPCSecureCoding, NSCopying, NSSecureCoding> {
    bool  _dimmed;
    unsigned long long  _hash;
    NSString * _iconUserInterfaceSize;
    NSString * _iconUserInterfaceStyleType;
    UIColor * _suggestedTintColor;
    PUIDiscreteGradientVariatedCustomStyle * _tintColorStyle;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (getter=isDimmed, nonatomic, readonly) bool dimmed;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *iconUserInterfaceSize;
@property (nonatomic, readonly, copy) NSString *iconUserInterfaceStyleType;
@property (nonatomic, readonly, copy) UIColor *suggestedTintColor;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) PUIDiscreteGradientVariatedCustomStyle *tintColorStyle;

+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)appendDescriptionToFormatter:(id)arg1;
- (id)configurationUpdatingDimmed:(bool)arg1;
- (id)configurationUpdatingIconUserInterfaceSize:(id)arg1;
- (id)configurationUpdatingIconUserInterfaceStyle:(id)arg1;
- (id)configurationUpdatingSuggestedTintColor:(id)arg1;
- (id)configurationUpdatingTintColorStyle:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)iconUserInterfaceSize;
- (id)iconUserInterfaceStyleType;
- (id)init;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTintColorStyle:(id)arg1 suggestedTintColor:(id)arg2 isDimmed:(bool)arg3 iconUserInterfaceSize:(id)arg4 iconUserInterfaceStyleType:(id)arg5;
- (bool)isDimmed;
- (bool)isEqual:(id)arg1;
- (id)suggestedTintColor;
- (id)tintColorStyle;

@end