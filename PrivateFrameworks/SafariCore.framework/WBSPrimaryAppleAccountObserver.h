/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

@interface WBSPrimaryAppleAccountObserver : NSObject <ACMonitoredAccountStoreDelegateProtocol> {
    ACMonitoredAccountStore * _accountStore;
    ACAccount * _primaryAppleAccount;
    NSString * _primaryAppleAccountAltDSID;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCurrentAppleIDManaged;
@property (nonatomic, readonly) bool isUsingICloud;
@property (readonly) Class superclass;

+ (id)sharedObserver;

- (void).cxx_destruct;
- (void)_registerForUpdates;
- (void)_setAccountIfPrimary:(id)arg1;
- (void)_setAccountOnInternalQueue:(id)arg1;
- (void)accountWasAdded:(id)arg1;
- (void)accountWasModified:(id)arg1;
- (void)accountWasRemoved:(id)arg1;
- (void)getPrimaryAppleAccountAltDSIDWithCompletionHandler:(id /* block */)arg1;
- (void)getPrimaryAppleAccountHasSafariSyncEnabledWithCompletionHandler:(id /* block */)arg1;
- (void)getPrimaryAppleAccountWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (bool)isCurrentAppleIDManaged;
- (bool)isUsingICloud;
- (void)needsToVerifyTermsWithCompletionHandler:(id /* block */)arg1;

@end
