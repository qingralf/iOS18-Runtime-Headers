/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/FinanceKitUI.framework/FinanceKitUI
 */

@interface FinanceKitUI.BankConnectAuthorizationViewControllerProvider : NSObject

+ (id)makeAuthorizationViewControllerFor:(id)arg1 completion:(id /* block */)arg2;
+ (id)makeConsentViewControllerWithPaymentPass:(id)arg1 fkInstitution:(id)arg2 completion:(id /* block */)arg3;
+ (id)makeMismatchedAccountViewControllerWithPaymentPass:(id)arg1 fkInstitution:(id)arg2 previousConsentUUID:(id)arg3 completion:(id /* block */)arg4;
+ (id)makeReconsentViewControllerWithPaymentPass:(id)arg1 fkInstitution:(id)arg2 previousConsentUUID:(id)arg3 completion:(id /* block */)arg4;

- (id)init;

@end