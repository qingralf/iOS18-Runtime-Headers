/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKSTSTapToProvisionParameters : NSObject {
    long long  _countryCode;
    long long  _currencyCode;
    NSData * _nonce;
    NSString * _sid;
    long long  _timeout;
}

@property (nonatomic) long long countryCode;
@property (nonatomic) long long currencyCode;
@property (nonatomic, copy) NSData *nonce;
@property (nonatomic, copy) NSString *sid;
@property (nonatomic) long long timeout;

- (void).cxx_destruct;
- (long long)countryCode;
- (long long)currencyCode;
- (id)nonce;
- (void)setCountryCode:(long long)arg1;
- (void)setCurrencyCode:(long long)arg1;
- (void)setNonce:(id)arg1;
- (void)setSid:(id)arg1;
- (void)setTimeout:(long long)arg1;
- (id)sid;
- (id)stsParameters;
- (long long)timeout;

@end
