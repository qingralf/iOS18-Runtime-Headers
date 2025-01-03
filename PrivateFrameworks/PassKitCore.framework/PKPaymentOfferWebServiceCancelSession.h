/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentOfferWebServiceCancelSession : PKPaymentOfferWebServiceRequest {
    NSURL * _baseURL;
    NSError * _error;
    NSSet * _sessionIdentifiers;
}

@property (nonatomic, copy) NSURL *baseURL;
@property (nonatomic, copy) NSError *error;
@property (nonatomic, copy) NSSet *sessionIdentifiers;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;
- (id)baseURL;
- (id)error;
- (id)sessionIdentifiers;
- (void)setBaseURL:(id)arg1;
- (void)setError:(id)arg1;
- (void)setSessionIdentifiers:(id)arg1;

@end
