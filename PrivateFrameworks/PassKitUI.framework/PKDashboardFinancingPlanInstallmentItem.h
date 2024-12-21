/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKDashboardFinancingPlanInstallmentItem : NSObject <PKDashboardItem> {
    PKPayLaterFinancingPlan * _financingPlan;
    PKPayLaterPaymentIntentController * _paymentIntentController;
    PKPayLaterInstallment * _relevantInstallment;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PKPayLaterFinancingPlan *financingPlan;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PKPayLaterPaymentIntentController *paymentIntentController;
@property (nonatomic, readonly) PKPayLaterInstallment *relevantInstallment;
@property (readonly) Class superclass;

+ (id)identifier;

- (void).cxx_destruct;
- (id)financingPlan;
- (id)initWithFinancingPlan:(id)arg1 relevantInstallment:(id)arg2 paymentIntentController:(id)arg3;
- (id)paymentIntentController;
- (id)relevantInstallment;

@end