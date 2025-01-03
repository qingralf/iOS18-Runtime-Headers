/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKAppleAccountManager : NSObject {
    ACAccountStore * _accountStore;
}

@property (nonatomic, readonly) ACAccountStore *accountStore;
@property (nonatomic, readonly) PKAppleAccountInformation *appleAccountInformation;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_aidaAccount;
- (id)_primaryAppleAccount;
- (void)_renewAppleAccountSilently:(bool)arg1 completion:(id /* block */)arg2;
- (id)accountStore;
- (id)appleAccountInformation;
- (void)renewAppleAccountWithCompletionHandler:(id /* block */)arg1;
- (void)silentlyRenewAppleAccountWithCompletionHandler:(id /* block */)arg1;

@end
