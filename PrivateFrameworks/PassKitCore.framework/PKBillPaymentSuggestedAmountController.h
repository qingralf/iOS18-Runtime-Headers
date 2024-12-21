/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKBillPaymentSuggestedAmountController : NSObject {
    PKAccount * _account;
    PKAccountUserCollection * _accountUserCollection;
    PKAccountServiceAccountResolutionConfiguration * _configuration;
    bool  _currentStatementIsLastMonthsStatement;
    NSDictionary * _currentStatementMerchantCategoryTransactionSums;
    NSDecimalNumber * _currentStatementPaymentsSum;
    NSDecimalNumber * _currentStatementPurchasesSum;
    NSArray * _currentStatementSelectedSuggestedAmountEvents;
    NSMutableArray * _differentialPrivacyFeatures;
    _DPStringRecorder * _differentialPrivacyRecorder;
    FHPaymentRingSuggestionController * _fhController;
    bool  _isMonthOne;
    bool  _isMonthZero;
    bool  _isOnPaymentPlan;
    bool  _isOnPlanCompletion;
    NSDictionary * _merchantCategoryTransactionSums;
    NSDateFormatter * _monthAndDayFormatter;
    NSDateFormatter * _monthFormatter;
    long long  _numberOfActiveInstallments;
    long long  _numberOfActiveStatementedInstallments;
    NSMutableDictionary * _paymentRingInstrumentationRecord;
    NSDictionary * _previousStatementMerchantCategoryTransactionSums;
    NSDecimalNumber * _previousStatementPaymentsSum;
    NSDecimalNumber * _previousStatementPurchasesSum;
    NSArray * _previousStatementSelectedSuggestedAmountEvents;
    NSDecimalNumber * _statementPurchasesSum;
    PKTransactionSource * _transactionSource;
}

@property (nonatomic, readonly) PKAccount *account;
@property (nonatomic, readonly) PKAccountUserCollection *accountUserCollection;
@property (nonatomic, retain) PKAccountServiceAccountResolutionConfiguration *configuration;
@property (nonatomic, readonly) NSDictionary *currentStatementMerchantCategoryTransactionSums;
@property (nonatomic, readonly) NSDecimalNumber *currentStatementPaymentsSum;
@property (nonatomic, readonly) NSDecimalNumber *currentStatementPurchasesSum;
@property (nonatomic, readonly) NSArray *currentStatementSelectedSuggestedAmountEvents;
@property (nonatomic, readonly) NSDictionary *previousStatementMerchantCategoryTransactionSums;
@property (nonatomic, readonly) NSDecimalNumber *previousStatementPaymentsSum;
@property (nonatomic, readonly) NSDecimalNumber *previousStatementPurchasesSum;
@property (nonatomic, readonly) NSArray *previousStatementSelectedSuggestedAmountEvents;
@property (nonatomic, readonly) PKTransactionSource *transactionSource;

+ (id)_transactionsRequestForPreviousStatementForAccount:(id)arg1 transactionSource:(id)arg2 transactionType:(long long)arg3;
+ (id)_transactionsRequestSinceStatementForAccount:(id)arg1 transactionSource:(id)arg2 transactionType:(long long)arg3;
+ (void)_transactionsTotalAmountForRequest:(id)arg1 completion:(id /* block */)arg2;
+ (void)approvedTransactionsSpendingTotalForPreviousStatementForAccount:(id)arg1 transactionSource:(id)arg2 merchantCategory:(long long)arg3 completion:(id /* block */)arg4;
+ (void)approvedTransactionsSpendingTotalSinceStatementForAccount:(id)arg1 transactionSource:(id)arg2 merchantCategory:(long long)arg3 completion:(id /* block */)arg4;
+ (void)approvedTransactionsTotalForPreviousStatementForAccount:(id)arg1 transactionSource:(id)arg2 transactionType:(long long)arg3 completion:(id /* block */)arg4;
+ (void)approvedTransactionsTotalSinceStatementForAccount:(id)arg1 transactionSource:(id)arg2 transactionType:(long long)arg3 completion:(id /* block */)arg4;
+ (void)currentStatementSelectedSuggestedAmountEventsForAccount:(id)arg1 completion:(id /* block */)arg2;
+ (void)defaultControllerForAccount:(id)arg1 accountUserCollection:(id)arg2 transactionSource:(id)arg3 configuration:(id)arg4 completion:(id /* block */)arg5;
+ (void)previousStatementSelectedSuggestedAmountEventsForAccount:(id)arg1 completion:(id /* block */)arg2;

- (void).cxx_destruct;
- (bool)_allMandatoryValuesAreSameAmount;
- (bool)_calculateCurrentStatementIsLastMonthsStatement;
- (id)_calculateThresholdForLastPaymentCategory:(unsigned long long)arg1 statementBalance:(id)arg2 suggestedAmountWithSameCategory:(id)arg3;
- (bool)_categoryIsCurrentBalanceType:(unsigned long long)arg1;
- (bool)_categoryIsPaymentPlan:(unsigned long long)arg1;
- (id)_createDefaultAmountSuggestionListFromAccount;
- (id)_filterSuggestions:(id)arg1 belowThreshold:(id)arg2;
- (void)_generateAmountSuggestionListUsingTransactionHistoryForList:(id)arg1;
- (void)_initializeDifferentialPrivacy:(id)arg1 accountSummary:(id)arg2;
- (void)_initializePaymentRingInstrumentationRecord:(id)arg1 accountSummary:(id)arg2;
- (id)_messageForSuggestion:(id)arg1;
- (void)_minimumMerchcantCategoriesAboveMinimumAmount:(id)arg1 minMerchantCategory1:(long long*)arg2 minMerchantCategory2:(long long*)arg3 minMerchantCategorySum1:(id*)arg4 minMerchantCategorySum2:(id*)arg5;
- (id)_planCompletionTitleString;
- (void)_populatePriorityValuesForList:(id)arg1;
- (void)_populateStringValuesForList:(id)arg1;
- (id)_remainingStatementBalanceGapDescriptionText;
- (id)_remainingStatementBalanceGapTitleText;
- (id)_remainingStatementBalanceMessageString;
- (id)_remainingStatementBalanceTitleString;
- (void)_setDifferentialPrivacyFeature:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (bool)_suggestedAmountListIsValidAfterPurgeIfNecessary:(id)arg1;
- (id)_suggestedAmountsForPayOffDateForStatementBalance:(id)arg1 creditUtilization:(id)arg2 lastPaymentCategory:(unsigned long long)arg3;
- (id)_titleForSuggestion:(id)arg1;
- (void)_zerothOrFirstMonthBillPaymentSuggestionsForList:(id)arg1;
- (id)account;
- (id)accountUserCollection;
- (id)configuration;
- (id)currentStatementMerchantCategoryTransactionSums;
- (id)currentStatementPaymentsSum;
- (id)currentStatementPurchasesSum;
- (id)currentStatementSelectedSuggestedAmountEvents;
- (id)differentialPrivacyFeaturesAsString;
- (id)generateAmountSuggestionListWithFinHealth:(bool)arg1;
- (id)initWithAccount:(id)arg1 accountUserCollection:(id)arg2 transactionSource:(id)arg3 currentStatementSelectedSuggestedAmountEvents:(id)arg4 previousStatementSelectedSuggestedAmountEvents:(id)arg5 currentStatementPaymentsSum:(id)arg6 previousStatementPaymentsSum:(id)arg7 currentStatementPurchasesSum:(id)arg8 previousStatementPurchasesSum:(id)arg9 currentStatementMerchantCategoryTransactionSums:(id)arg10 previousStatementMerchantCategoryTransactionSums:(id)arg11 configuration:(id)arg12;
- (id)paymentRingInstrumentationRecordAsString;
- (id)previousStatementMerchantCategoryTransactionSums;
- (id)previousStatementPaymentsSum;
- (id)previousStatementPurchasesSum;
- (id)previousStatementSelectedSuggestedAmountEvents;
- (void)recordPaymentActionWithDifferentialPrivacy:(unsigned long long)arg1;
- (void)recordPaymentRingAction:(unsigned long long)arg1;
- (void)setConfiguration:(id)arg1;
- (id)transactionSource;

@end