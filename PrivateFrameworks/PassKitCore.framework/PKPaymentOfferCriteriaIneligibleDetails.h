/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentOfferCriteriaIneligibleDetails : NSObject {
    bool  _isWebPaymentRequest;
    NSArray * _maximumAmounts;
    NSArray * _minimumAmounts;
    NSString * _overrideDisplayString;
    NSString * _preferredLanguage;
    unsigned long long  _reason;
    NSSet * _supportedCurrencyCodes;
}

@property (nonatomic, readonly) bool isWebPaymentRequest;
@property (nonatomic, readonly) NSArray *maximumAmounts;
@property (nonatomic, readonly) NSArray *minimumAmounts;
@property (nonatomic, readonly, copy) NSString *overrideDisplayString;
@property (nonatomic, readonly, copy) NSString *preferredLanguage;
@property (nonatomic, readonly) unsigned long long reason;
@property (nonatomic, readonly, copy) NSSet *supportedCurrencyCodes;

+ (id)ineligibleDetailsWithReason:(unsigned long long)arg1 preferredLanguage:(id)arg2 criteria:(id)arg3 isWebPaymentRequest:(bool)arg4;
+ (id)ineligibleDetailsWithReason:(unsigned long long)arg1 preferredLanguage:(id)arg2 overrideDisplayString:(id)arg3 criteria:(id)arg4 isWebPaymentRequest:(bool)arg5;

- (void).cxx_destruct;
- (id)analyticsValue;
- (id)description;
- (unsigned long long)hash;
- (id)initWithIneligibleDetailsWithReason:(unsigned long long)arg1 overrideDisplayString:(id)arg2 preferredLanguage:(id)arg3 criteria:(id)arg4 isWebPaymentRequest:(bool)arg5;
- (bool)isEligible;
- (bool)isEqual:(id)arg1;
- (bool)isWebPaymentRequest;
- (id)maximumAmounts;
- (id)minimumAmounts;
- (id)overrideDisplayString;
- (id)preferredLanguage;
- (unsigned long long)reason;
- (id)supportedCurrencyCodes;

@end
