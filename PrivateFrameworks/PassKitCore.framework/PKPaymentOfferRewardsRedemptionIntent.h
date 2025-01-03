/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentOfferRewardsRedemptionIntent : NSObject <NSCopying, NSSecureCoding> {
    PKCurrencyAmount * _monetaryValue;
    PKPaymentRewardsBalance * _rewardsBalance;
    NSDecimalNumber * _value;
}

@property (nonatomic, readonly, copy) NSString *balanceIdentifier;
@property (nonatomic, readonly) bool hasFullBalanceSelected;
@property (nonatomic, readonly) bool isEmptyValued;
@property (nonatomic, readonly, copy) PKCurrencyAmount *monetaryValue;
@property (nonatomic, readonly, copy) NSString *programName;
@property (nonatomic, readonly, copy) PKPaymentRewardsBalance *rewardsBalance;
@property (nonatomic, readonly) unsigned long long rewardsType;
@property (nonatomic, readonly, copy) NSDecimalNumber *value;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)balanceIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasFullBalanceSelected;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRewardsBalance:(id)arg1 amount:(id)arg2 value:(id)arg3;
- (bool)isEmptyValued;
- (bool)isEqual:(id)arg1;
- (id)monetaryValue;
- (id)programName;
- (id)rewardsBalance;
- (unsigned long long)rewardsType;
- (id)value;

@end
