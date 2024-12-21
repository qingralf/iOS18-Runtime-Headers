/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKAccountWebServiceDeleteBeneficiaryRequest : PKAccountWebServiceRequest {
    NSString * _accountIdentifier;
    NSURL * _baseURL;
    NSString * _beneficiaryIdentifier;
}

@property (nonatomic, copy) NSString *accountIdentifier;
@property (nonatomic, copy) NSURL *baseURL;
@property (nonatomic, copy) NSString *beneficiaryIdentifier;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;
- (id)accountIdentifier;
- (id)baseURL;
- (id)beneficiaryIdentifier;
- (void)setAccountIdentifier:(id)arg1;
- (void)setBaseURL:(id)arg1;
- (void)setBeneficiaryIdentifier:(id)arg1;

@end