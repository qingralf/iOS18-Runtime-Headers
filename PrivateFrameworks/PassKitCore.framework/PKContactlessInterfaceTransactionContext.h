/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKContactlessInterfaceTransactionContext : NSObject {
    NSArray * _activatedPaymentApplications;
    NSString * _appletIdentifier;
    NSString * _credentialIdentifier;
    NSDate * _date;
    PKExpressTransactionState * _expressState;
    bool  _incompatible;
    PKPaymentApplication * _paymentApplication;
    PKPaymentPass * _paymentPass;
    bool  _success;
    PKPaymentTransaction * _transaction;
    PKTransitAppletHistory * _transitHistory;
    NSArray * _valueAddedServicePasses;
    NSArray * _valueAddedServiceTransactions;
}

@property (nonatomic, readonly) NSArray *activatedPaymentApplications;
@property (nonatomic, retain) NSString *appletIdentifier;
@property (nonatomic, retain) NSString *credentialIdentifier;
@property (nonatomic, retain) NSDate *date;
@property (nonatomic, retain) PKExpressTransactionState *expressState;
@property (nonatomic, readonly) PKFelicaAppletHistory *felicaHistory;
@property (getter=isIncompatible, nonatomic) bool incompatible;
@property (nonatomic, retain) PKPaymentApplication *paymentApplication;
@property (nonatomic, readonly) PKPaymentPass *paymentPass;
@property (nonatomic) bool success;
@property (nonatomic, retain) PKPaymentTransaction *transaction;
@property (nonatomic, retain) PKTransitAppletHistory *transitHistory;
@property (nonatomic, retain) NSArray *valueAddedServicePasses;
@property (nonatomic, retain) NSArray *valueAddedServiceTransactions;

- (void).cxx_destruct;
- (id)activatedPaymentApplications;
- (id)appletIdentifier;
- (id)credentialIdentifier;
- (id)date;
- (id)expressState;
- (id)felicaHistory;
- (id)initWithPaymentPass:(id)arg1 activatedPaymentApplications:(id)arg2;
- (bool)isIncompatible;
- (id)paymentApplication;
- (id)paymentPass;
- (void)setAppletIdentifier:(id)arg1;
- (void)setCredentialIdentifier:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setExpressState:(id)arg1;
- (void)setIncompatible:(bool)arg1;
- (void)setPaymentApplication:(id)arg1;
- (void)setSuccess:(bool)arg1;
- (void)setTransaction:(id)arg1;
- (void)setTransitHistory:(id)arg1;
- (void)setValueAddedServicePasses:(id)arg1;
- (void)setValueAddedServiceTransactions:(id)arg1;
- (bool)success;
- (id)transaction;
- (id)transitHistory;
- (id)valueAddedServicePasses;
- (id)valueAddedServiceTransactions;

@end