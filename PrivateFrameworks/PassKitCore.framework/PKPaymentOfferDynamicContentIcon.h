/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentOfferDynamicContentIcon : NSObject <NSCopying, NSSecureCoding> {
    PKPaymentOfferDynamicContentIconVariant * _darkVariant;
    PKPaymentOfferDynamicContentIconVariant * _defaultVariant;
    PKPaymentOfferDynamicContentIconVariant * _lightVariant;
}

@property (nonatomic, retain) PKPaymentOfferDynamicContentIconVariant *darkVariant;
@property (nonatomic, retain) PKPaymentOfferDynamicContentIconVariant *defaultVariant;
@property (nonatomic, retain) PKPaymentOfferDynamicContentIconVariant *lightVariant;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)darkVariant;
- (id)defaultVariant;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)lightVariant;
- (void)setDarkVariant:(id)arg1;
- (void)setDefaultVariant:(id)arg1;
- (void)setLightVariant:(id)arg1;
- (id)urlForScreenScale:(double)arg1 appearance:(long long)arg2;

@end