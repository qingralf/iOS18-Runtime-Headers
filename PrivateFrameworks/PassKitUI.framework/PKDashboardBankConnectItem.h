/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKDashboardBankConnectItem : NSObject <PKDashboardItem> {
    unsigned long long  _accountType;
    NSDate * _asOfDate;
    NSString * _availableBalance;
    NSString * _bookedBalance;
    NSString * _creditLimit;
    bool  _hasMultipleBalances;
    bool  _isAccountEnabled;
    bool  _isAccountMismatched;
    bool  _isPaymentOverdue;
    NSString * _minimumCreditPayment;
    id /* block */  _payBillAction;
    NSString * _paymentDueDate;
    id /* block */  _transferAction;
}

@property (nonatomic) unsigned long long accountType;
@property (nonatomic, retain) NSDate *asOfDate;
@property (nonatomic, retain) NSString *availableBalance;
@property (nonatomic, readonly) NSString *balanceSubtitle;
@property (nonatomic, readonly) NSString *balanceTitle;
@property (nonatomic, retain) NSString *bookedBalance;
@property (nonatomic, retain) NSString *creditLimit;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *displayedBalance;
@property (nonatomic) bool hasMultipleBalances;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isAccountEnabled;
@property (nonatomic) bool isAccountMismatched;
@property (nonatomic) bool isPaymentOverdue;
@property (nonatomic, retain) NSString *minimumCreditPayment;
@property (nonatomic, copy) id /* block */ payBillAction;
@property (nonatomic, retain) NSString *paymentDueDate;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ transferAction;

+ (id)dashboardBankConnectCreditCardItemFrom:(id)arg1;
+ (id)dashboardBankConnectDebitCardItemFrom:(id)arg1;
+ (id)formatAvailableBalance:(id)arg1 for:(unsigned long long)arg2;
+ (id)formatBookedBalance:(id)arg1 for:(unsigned long long)arg2;
+ (id)fromAccount:(id)arg1;
+ (id)identifier;
+ (id)nextPaymentDateFormatter;
+ (id /* block */)payBillActionFor:(id)arg1;
+ (id /* block */)transferActionFor:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)accountType;
- (id)asOfDate;
- (id)availableBalance;
- (id)balanceSubtitle;
- (id)balanceTitle;
- (id)bookedBalance;
- (id)creditLimit;
- (id)displayedBalance;
- (bool)hasMultipleBalances;
- (bool)isAccountEnabled;
- (bool)isAccountMismatched;
- (bool)isPaymentOverdue;
- (id)minimumCreditPayment;
- (id /* block */)payBillAction;
- (id)paymentDueDate;
- (void)setAccountType:(unsigned long long)arg1;
- (void)setAsOfDate:(id)arg1;
- (void)setAvailableBalance:(id)arg1;
- (void)setBookedBalance:(id)arg1;
- (void)setCreditLimit:(id)arg1;
- (void)setHasMultipleBalances:(bool)arg1;
- (void)setIsAccountEnabled:(bool)arg1;
- (void)setIsAccountMismatched:(bool)arg1;
- (void)setIsPaymentOverdue:(bool)arg1;
- (void)setMinimumCreditPayment:(id)arg1;
- (void)setPayBillAction:(id /* block */)arg1;
- (void)setPaymentDueDate:(id)arg1;
- (void)setTransferAction:(id /* block */)arg1;
- (id /* block */)transferAction;

@end