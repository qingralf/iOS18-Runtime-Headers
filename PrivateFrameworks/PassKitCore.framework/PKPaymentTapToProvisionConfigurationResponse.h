/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentTapToProvisionConfigurationResponse : PKPaymentWebServiceResponse {
    long long  _countryCode;
    long long  _currencyCode;
    NSData * _nonce;
}

@property (nonatomic, readonly) long long countryCode;
@property (nonatomic, readonly) long long currencyCode;
@property (nonatomic, readonly) NSData *nonce;

- (void).cxx_destruct;
- (long long)countryCode;
- (long long)currencyCode;
- (id)initWithData:(id)arg1;
- (id)nonce;

@end
