/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentRewardsBalance : NSObject <NSCopying, NSSecureCoding> {
    NSDecimalNumber * _conversionRate;
    unsigned long long  _eligibility;
    NSString * _identifier;
    NSDate * _lastFetchedAt;
    PKCurrencyAmount * _monetaryValue;
    NSString * _programName;
    NSURL * _programURL;
    unsigned long long  _roundingStrategy;
    unsigned long long  _type;
    NSDecimalNumber * _value;
}

@property (nonatomic, copy) NSDecimalNumber *conversionRate;
@property (nonatomic) unsigned long long eligibility;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSDate *lastFetchedAt;
@property (nonatomic, retain) PKCurrencyAmount *monetaryValue;
@property (nonatomic, copy) NSString *programName;
@property (nonatomic, copy) NSURL *programURL;
@property (nonatomic) unsigned long long roundingStrategy;
@property (nonatomic) unsigned long long type;
@property (nonatomic, copy) NSDecimalNumber *value;

+ (id)cashbackRewardsBalanceWithIdentifier:(id)arg1 monetaryValue:(id)arg2 eligibility:(unsigned long long)arg3 programName:(id)arg4 programURL:(id)arg5 lastFetchedAt:(id)arg6;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_nsDecimalRoundingBehavior;
- (unsigned long long)_nsDecimalRoundingMode;
- (id)conversionRate;
- (id)convertAmountFromValue:(id)arg1;
- (id)convertMonetaryValueFromValue:(id)arg1;
- (id)convertValueFromAmount:(id)arg1;
- (id)convertValueFromMonetaryValue:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)eligibility;
- (void)encodeWithCoder:(id)arg1;
- (id)formattedMonetaryValue;
- (id)formattedQuantityValue;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2 value:(id)arg3 monetaryValue:(id)arg4 conversionRate:(id)arg5 roundingStrategy:(unsigned long long)arg6 eligibility:(unsigned long long)arg7 programName:(id)arg8 programURL:(id)arg9 lastFetchedAt:(id)arg10;
- (bool)isEqual:(id)arg1;
- (bool)isFresh;
- (bool)isFreshForNow:(id)arg1;
- (bool)isQuantitative;
- (bool)isRedeemable;
- (bool)isValid;
- (id)lastFetchedAt;
- (id)monetaryValue;
- (id)programName;
- (id)programURL;
- (unsigned long long)roundingStrategy;
- (void)setConversionRate:(id)arg1;
- (void)setEligibility:(unsigned long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLastFetchedAt:(id)arg1;
- (void)setMonetaryValue:(id)arg1;
- (void)setProgramName:(id)arg1;
- (void)setProgramURL:(id)arg1;
- (void)setRoundingStrategy:(unsigned long long)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setValue:(id)arg1;
- (unsigned long long)type;
- (id)value;

@end
