/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFAccountPickerViewController : UINavigationController <_SFAccountPickerTableViewControllerDelegate> {
    _SFAccountPickerTableViewController * _accountPickerTableViewController;
    _ASIncomingCallObserver * _callObserver;
    id /* block */  _completionHandler;
    bool  _isDismissingSelf;
    <SFAccountPickerViewControllerSystemAutoFillDelegate> * _systemAutoFillDelegate;
}

@property (nonatomic, retain) LAContext *authenticatedContext;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *searchQuery;
@property (readonly) Class superclass;
@property (nonatomic) <SFAccountPickerViewControllerSystemAutoFillDelegate> *systemAutoFillDelegate;

- (void).cxx_destruct;
- (void)_callCompletionHandlerIfNeeded:(id)arg1;
- (void)_dismiss;
- (void)_dismissWithAnimation:(bool)arg1 accounts:(id)arg2;
- (void)_viewControllerDismissalTransitionDidEnd:(id)arg1;
- (void)accountPickerTableViewController:(id)arg1 didPickSavedAccounts:(id)arg2;
- (void)accountPickerTableViewController:(id)arg1 fillPasswordForSavedAccount:(id)arg2;
- (void)accountPickerTableViewController:(id)arg1 fillUsernameForSavedAccount:(id)arg2;
- (void)accountPickerTableViewController:(id)arg1 fillVerificationCode:(id)arg2;
- (void)accountPickerTableViewController:(id)arg1 fillVerificationCodeForSavedAccount:(id)arg2;
- (void)accountPickerTableViewControllerDidCancel:(id)arg1;
- (id)authenticatedContext;
- (void)buildMenuWithBuilder:(id)arg1;
- (id)initWithConfiguration:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)searchQuery;
- (void)setAuthenticatedContext:(id)arg1;
- (void)setSearchQuery:(id)arg1;
- (void)setSystemAutoFillDelegate:(id)arg1;
- (id)systemAutoFillDelegate;

@end
