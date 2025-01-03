/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentOfferInstallmentCriteriaEligibilityConfiguration : NSObject <PKPaymentOfferCriteriaEligibilityConfiguration> {
    NSDecimalNumber * _amount;
    NSString * _currencyCode;
    NSString * _deviceRegion;
    unsigned long long  _merchantCapabilities;
    NSString * _merchantCountryCode;
    unsigned long long  _options;
    long long  _payLaterSuppressionMode;
    NSArray * _supportedNetworks;
}

@property (nonatomic, readonly, copy) NSDecimalNumber *amount;
@property (nonatomic, readonly, copy) NSString *currencyCode;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *deviceRegion;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long merchantCapabilities;
@property (nonatomic, readonly, copy) NSString *merchantCountryCode;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) long long payLaterSuppressionMode;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *supportedNetworks;

- (void).cxx_destruct;
- (id)amount;
- (id)currencyCode;
- (id)description;
- (id)deviceRegion;
- (id)initWithAmount:(id)arg1 currencyCode:(id)arg2 merchantCountryCode:(id)arg3 deviceRegion:(id)arg4 supportedNetworks:(id)arg5 merchantCapabilities:(unsigned long long)arg6 payLaterSuppressionMode:(long long)arg7 options:(unsigned long long)arg8;
- (unsigned long long)merchantCapabilities;
- (id)merchantCountryCode;
- (unsigned long long)options;
- (long long)payLaterSuppressionMode;
- (id)supportedNetworks;

@end
