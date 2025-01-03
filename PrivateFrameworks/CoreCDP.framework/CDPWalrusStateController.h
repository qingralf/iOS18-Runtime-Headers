/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
 */

@interface CDPWalrusStateController : NSObject <CDPWalrusStatusProvider> {
    CDPContext * _context;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_makeAnalyticsEvent:(unsigned long long)arg1 state:(id)arg2 error:(id)arg3;
- (void)_startObservingWalrusStateChangeNotification;
- (void)broadcastWalrusStateChange;
- (id)combinedWalrusStatus:(id*)arg1;
- (void)combinedWalrusStatusWithCompletion:(id /* block */)arg1;
- (id)initWithContext:(id)arg1;
- (void)pcsKeysForServices:(id)arg1 completion:(id /* block */)arg2;
- (void)repairWalrusStatusWithCompletion:(id /* block */)arg1;
- (bool)shouldOpenGate;
- (void)updateWalrusStatus:(unsigned long long)arg1 authenticatedContext:(id)arg2 completion:(id /* block */)arg3;
- (unsigned long long)walrusStatus:(id*)arg1;
- (void)walrusStatusWithCompletion:(id /* block */)arg1;

@end
