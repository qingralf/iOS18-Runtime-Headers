/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentSetupRemoteAlertViewController : SBUIRemoteAlertServiceViewController <PKAppProtectionCoordinatorObserver, PKAppProtectionShieldViewControllerDelegate, PKPaymentSetupDelegate> {
    PKAppProtectionCoordinator * _appProtectionCoordinator;
    UIViewController * _shieldViewController;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_isSecureForRemoteViewService;

- (void).cxx_destruct;
- (void)_dismiss;
- (bool)_shouldRemoveViewFromHierarchyOnDisappear;
- (void)appProtectionCoordinatorDidGainAccess;
- (void)appProtectionShieldRequestsDismiss;
- (void)configureWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (void)handleButtonActions:(id)arg1;
- (id)init;
- (void)paymentSetupDidFinish:(id)arg1;
- (long long)preferredStatusBarStyle;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(bool)arg2;
- (void)viewWillDisappear:(bool)arg1;

@end