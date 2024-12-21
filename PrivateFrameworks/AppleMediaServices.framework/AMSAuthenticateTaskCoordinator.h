/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSAuthenticateTaskCoordinator : NSObject

+ (id)internalQueue;
+ (id)promiseStore;

- (void)_addToStoreRequest:(id)arg1 promise:(id)arg2;
- (id)_authenticateTaskForItem:(id)arg1;
- (id)_authenticateTaskForItem:(id)arg1 authenticationResults:(id)arg2;
- (id)_enqueueItem:(id)arg1 handleAuthenticationWithBlock:(id /* block */)arg2;
- (id)_handleAuthenticateRequestWithItem:(id)arg1 authenticationResults:(id)arg2;
- (id)_promiseStorePairForRequest:(id)arg1;
- (id)_promiseWithResultsForRequest:(id)arg1;
- (void)_removeFromPromiseStore:(id)arg1;
- (id)enqueueAuthenticationRequest:(id)arg1 handleAuthenticationWithBlock:(id /* block */)arg2;
- (id)handleRequest:(id)arg1;
- (id)handleRequestDictionary:(id)arg1;

@end