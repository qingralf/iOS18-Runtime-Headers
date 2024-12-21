/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/FinanceKit.framework/FinanceKit
 */

@interface FinanceKit.BankConnectInstitutionProvider : NSObject {
    void delegate;
    void store;
}

@property (nonatomic) <FKBankConnectInstitutionsProviderDelegate> *delegate;

+ (id)makeProviderAndReturnError:(id*)arg1;

- (void).cxx_destruct;
- (id)delegate;
- (id)init;
- (void)institutionFor:(id)arg1 completion:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;

@end