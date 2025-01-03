/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKAccountBillPaymentConfirmationViewController : PKExplanationViewController <PKBillPaymentRingViewDataSource, PKBillPaymentRingViewDelegate> {
    PKAccount * _account;
    NSNumberFormatter * _amountFormatter;
    PKAccountBillPaymentCheckmarkRingView * _checkmarkRingView;
    bool  _hasPerformedCategoryAnimation;
    bool  _hasRecurringPayments;
    NSDecimalNumber * _interestForPaymentTotal;
    NSDecimalNumber * _interestForStatementBalance;
    bool  _isScheduledPayment;
    PKAccountBillPaymentMessageContentView * _messageContentView;
    PKPaymentPass * _paymentPass;
    PKPaymentService * _paymentService;
    NSArray * _payments;
    NSDecimalNumber * _paymentsTotal;
    NSDecimalNumber * _pendingPaymentsTotal;
    PKCreditAccountSummary * _previousAccountSummary;
    NSDateFormatter * _productMonthDayFormatter;
    NSDate * _scheduledDate;
    PKBillPaymentSuggestedAmountList * _suggestionList;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_availableCreditText;
- (bool)_shouldDisplayInterestSummary;
- (bool)_shouldShowSetupAutoPayView;
- (id)_trailingInterestMonthMidpoint;
- (void)_updateBodyContentViewMessage;
- (id)billPaymentRingView:(id)arg1 bottomCurvedTextForSuggestedAmount:(id)arg2;
- (id)billPaymentRingView:(id)arg1 interestTextForAmount:(id)arg2;
- (void)billPaymentRingView:(id)arg1 selectedSuggestedAmount:(id)arg2 selectedSuggestedAmountIsTarget:(bool)arg3 userInitiatedChange:(bool)arg4;
- (id)billPaymentRingView:(id)arg1 topCurvedTextForSuggestedAmount:(id)arg2;
- (id)billPaymentRingViewZeroInterestText:(id)arg1;
- (id)disabledBottomCurvedTextForBillPaymentRingView:(id)arg1;
- (id)disabledTopCurvedTextForBillPaymentRingView:(id)arg1;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (id)initWithAccount:(id)arg1 paymentPass:(id)arg2 scheduledPayments:(id)arg3;
- (id)initWithAccount:(id)arg1 previousAccountSummary:(id)arg2 paymentPass:(id)arg3 payments:(id)arg4 suggestionList:(id)arg5 interestForPaymentTotal:(id)arg6 interestForStatementBalance:(id)arg7;
- (void)loadView;
- (void)preflightWithCompletion:(id /* block */)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
