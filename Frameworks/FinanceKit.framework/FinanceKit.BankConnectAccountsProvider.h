/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/FinanceKit.framework/FinanceKit
 */

@interface FinanceKit.BankConnectAccountsProvider : NSObject {
    void consentStore;
    void context;
    void delegate;
    void lastNotificationToken;
    void lastToken;
    void persistentHistoryTransactionProvider;
    void primaryAccountIdentifier;
    void remoteChangeNotificationTask;
    void store;
}

@property (nonatomic) <FKBankConnectAccountsProviderDelegate> *delegate;

+ (id)makeProviderWithPrimaryAccountIdentifier:(id)arg1;
+ (id)makeProviderWithPrimaryAccountIdentifier:(id)arg1 returnError:(id*)arg2;

- (void).cxx_destruct;
- (void)accountAndReconsentStatusWithCompletion:(void *)arg1; // needs 1 arg types, found 39: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'F' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'K' using 'void*' */ void*, bool, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, in /* Warning: Unrecognized filer type: 'k' using 'void*' */ void*, unsigned char, out in in /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, BOOL, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, _Atomic /* Warning: Unrecognized filer type: '' using 'void*' */ void*, BOOL, BOOL, out /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*, in /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, short, /* Warning: Unrecognized filer type: 'P' using 'void*' */ void*, const out void, int, double, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, const byref /* Warning: Unrecognized filer type: '' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, short, /* Warning: Unrecognized filer type: 'p' using 'void*' */ void*, out in short, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'E' using 'void*' */ void*, const const out const /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (id)delegate;
- (id)init;
- (void)setDelegate:(id)arg1;

@end