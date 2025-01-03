/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentOfferInstallmentAssessment : NSObject <NSCopying, NSSecureCoding> {
    PKPaymentOfferAction * _action;
    PKPaymentOfferDynamicContent * _dynamicContent;
    NSString * _identifier;
    unsigned long long  _offerEligibility;
    NSArray * _offers;
    NSString * _selectedOfferIdentifier;
    NSString * _sessionIdentifier;
}

@property (nonatomic, readonly) PKPaymentOfferAction *action;
@property (nonatomic, readonly) PKPaymentOfferDynamicContent *dynamicContent;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) unsigned long long offerEligibility;
@property (nonatomic, readonly) NSArray *offers;
@property (nonatomic, readonly, copy) NSString *selectedOfferIdentifier;
@property (nonatomic, copy) NSString *sessionIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)action;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)dynamicContent;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 sessionIdentifier:(id)arg2;
- (id)installmentOfferWithIdentifier:(id)arg1;
- (bool)isEligible;
- (bool)isEqual:(id)arg1;
- (unsigned long long)offerEligibility;
- (id)offers;
- (id)selectedOfferIdentifier;
- (id)sessionIdentifier;
- (void)setSessionIdentifier:(id)arg1;

@end
