/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKPaymentQueue : NSObject {
    id  _internal;
}

@property (nonatomic) <SKPaymentQueueDelegate> *delegate;
@property (nonatomic, readonly) SKPaymentQueueClient *paymentQueueClient;
@property (nonatomic, readonly) SKStorefront *storefront;
@property (nonatomic, readonly) NSArray *transactionObservers;
@property (nonatomic, readonly) NSArray *transactions;

+ (bool)canMakePayments;
+ (id)defaultQueue;
+ (void)listenForStorefrontChanges;

- (void).cxx_destruct;
- (void)_applicationDidBecomeActiveNotification:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_checkForMessages;
- (void)_checkServerQueueForced:(bool)arg1;
- (id)_initSKPaymentQueue;
- (void)_logEventWithPrimaryError:(id)arg1 mappedError:(id)arg2 inAppPurchaseID:(id)arg3 userAction:(long long)arg4;
- (void)_notifyObserversAboutChanges:(id)arg1 sendUpdatedDownloads:(bool)arg2;
- (void)_notifyObserversAboutRemovals:(id)arg1;
- (void)_processTransactionDict:(id)arg1 forTransaction:(id)arg2 error:(id)arg3;
- (void)_removeLocalTransaction:(id)arg1;
- (void)_removeNilTransactionObservers;
- (void)_updatedTransactions:(id)arg1 restored:(bool)arg2;
- (void)addPayment:(id)arg1;
- (void)addTransactionObserver:(id)arg1;
- (void)askToShowMessageWithReplyBlock:(id /* block */)arg1;
- (void)cancelDownloads:(id)arg1;
- (void)clearTransactions;
- (void)dealloc;
- (id)delegate;
- (void)downloadAdded:(id)arg1;
- (void)downloadRemoved:(id)arg1;
- (void)downloadStatusChanged:(id)arg1;
- (void)finishTransaction:(id)arg1;
- (void)forceSandboxForBundleIdentifier:(id)arg1 untilDate:(id)arg2;
- (void)handleEngagementRequest:(id)arg1 resultHandler:(id /* block */)arg2;
- (id)init;
- (id)initWithPaymentQueueClient:(id)arg1;
- (void)listenForPurchaseIntents;
- (void)notifyObserversForNewStorefront:(id)arg1;
- (void)notifyPurchaseIntentObserversForProducts:(id)arg1;
- (void)pauseDownloads:(id)arg1;
- (id)paymentQueueClient;
- (void)presentCodeRedemptionSheet;
- (void)processTransaction:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 39: id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, unsigned short, /* Warning: Unrecognized filer type: 'K' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'P' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'y' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'm' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, in /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'T' using 'void*' */ void*, const /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, in short, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, BOOL, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, int, out in /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, long double, int, BOOL, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, int, out in /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, const /* Warning: Unrecognized filer type: 'y' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'E' using 'void*' */ void*, const const out const /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (void)removeTransactionObserver:(id)arg1;
- (void)removeTransactionWithID:(unsigned long long)arg1;
- (void)removedEntitlementsForProductIdentifiers:(id)arg1;
- (void)removedTransactions:(id)arg1;
- (void)restoreCompletedTransactions;
- (void)restoreCompletedTransactionsWithApplicationUsername:(id)arg1;
- (void)resumeDownloads:(id)arg1;
- (void)setDelegate:(id)arg1;
- (bool)shouldContinueTransaction:(id)arg1 inNewStorefront:(id)arg2;
- (void)showPriceConsentIfNeeded;
- (void)startDownloads:(id)arg1;
- (void)stopListeningForPurchaseIntents;
- (id)storefront;
- (id)transactionObservers;
- (id)transactions;
- (void)updatedTransactions:(id)arg1;

@end
