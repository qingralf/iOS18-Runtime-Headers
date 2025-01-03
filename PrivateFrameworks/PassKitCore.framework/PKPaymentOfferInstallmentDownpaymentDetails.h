/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentOfferInstallmentDownpaymentDetails : NSObject <NSCopying, NSSecureCoding> {
    PKCurrencyAmount * _amount;
    NSDate * _paymentDate;
}

@property (nonatomic, readonly) PKCurrencyAmount *amount;
@property (nonatomic, readonly, copy) NSDate *paymentDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)amount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)paymentDate;

@end
