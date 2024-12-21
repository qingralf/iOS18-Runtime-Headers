/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentRewardsRedemptionDetails : NSObject <NSCopying, NSSecureCoding> {
    PKPaymentRewardsRedemptionUnit * _intended;
    PKPaymentRewardsRedemptionTransactionDetails * _originalTransaction;
    PKPaymentRewardsRedemptionUnit * _redeemed;
}

@property (nonatomic, copy) PKPaymentRewardsRedemptionUnit *intended;
@property (nonatomic, copy) PKPaymentRewardsRedemptionTransactionDetails *originalTransaction;
@property (nonatomic, copy) PKPaymentRewardsRedemptionUnit *redeemed;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithIntended:(id)arg1 redeemed:(id)arg2 originalTransactionDetails:(id)arg3;
- (id)intended;
- (bool)isEqual:(id)arg1;
- (id)originalTransaction;
- (id)redeemed;
- (void)setIntended:(id)arg1;
- (void)setOriginalTransaction:(id)arg1;
- (void)setRedeemed:(id)arg1;

@end