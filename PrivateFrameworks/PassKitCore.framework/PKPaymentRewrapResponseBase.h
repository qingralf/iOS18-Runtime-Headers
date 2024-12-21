/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentRewrapResponseBase : PKPaymentWebServiceResponse {
    PKAccount * _account;
    PKPayLaterFinancingPlan * _financingPlan;
    NSURL * _issuerInstallmentManagementURL;
    NSString * _primaryAccountNumberSuffix;
    PKPaymentRewardsRedemption * _redemption;
    NSData * _rewrappedPaymentData;
    NSString * _transactionIdentifier;
}

@property (nonatomic, readonly) PKAccount *account;
@property (nonatomic, readonly) PKPayLaterFinancingPlan *financingPlan;
@property (nonatomic, readonly) NSURL *issuerInstallmentManagementURL;
@property (nonatomic, readonly, copy) NSString *primaryAccountNumberSuffix;
@property (nonatomic, readonly) PKPaymentRewardsRedemption *redemption;
@property (nonatomic, copy) NSData *rewrappedPaymentData;
@property (nonatomic, readonly, copy) NSString *transactionIdentifier;

- (void).cxx_destruct;
- (id)account;
- (id)financingPlan;
- (id)initWithData:(id)arg1;
- (id)issuerInstallmentManagementURL;
- (id)primaryAccountNumberSuffix;
- (id)redemption;
- (id)rewrappedPaymentData;
- (void)setRewrappedPaymentData:(id)arg1;
- (id)transactionIdentifier;

@end