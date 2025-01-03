/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKTransactionReceiptAuthorizationRequest : PKPaymentWebServiceRequest {
    NSString * _altDSID;
    NSString * _cardNumberSuffix;
    unsigned long long  _featureIdentifier;
    NSString * _receiptIdentifier;
    NSString * _receiptServiceIdentifier;
}

@property (nonatomic, readonly) NSString *altDSID;
@property (nonatomic, readonly) NSString *cardNumberSuffix;
@property (nonatomic, readonly) unsigned long long featureIdentifier;
@property (nonatomic, readonly) NSString *receiptIdentifier;
@property (nonatomic, readonly) NSString *receiptServiceIdentifier;

- (void).cxx_destruct;
- (void)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 webService:(id)arg3 completion:(id /* block */)arg4;
- (id)altDSID;
- (id)cardNumberSuffix;
- (unsigned long long)featureIdentifier;
- (id)initWithReceiptServiceIdentifier:(id)arg1 receiptIdentifier:(id)arg2 altDSID:(id)arg3 featureIdentifier:(unsigned long long)arg4;
- (id)initWithReceiptServiceIdentifier:(id)arg1 receiptIdentifier:(id)arg2 cardNumberSuffix:(id)arg3 featureIdentifier:(unsigned long long)arg4;
- (id)receiptIdentifier;
- (id)receiptServiceIdentifier;

@end
