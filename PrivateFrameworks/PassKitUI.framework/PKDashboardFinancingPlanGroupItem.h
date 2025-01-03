/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKDashboardFinancingPlanGroupItem : NSObject <PKDashboardItem> {
    long long  _financingPlansCount;
    PKAccount * _payLaterAccount;
    PKPayLaterPaymentIntentController * _paymentIntentController;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long financingPlansCount;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PKAccount *payLaterAccount;
@property (nonatomic, readonly) PKPayLaterPaymentIntentController *paymentIntentController;
@property (readonly) Class superclass;

+ (id)identifier;

- (void).cxx_destruct;
- (long long)financingPlansCount;
- (id)initWithFinancingPlansCount:(long long)arg1 payLaterAccount:(id)arg2 paymentIntentController:(id)arg3;
- (id)payLaterAccount;
- (id)paymentIntentController;

@end
