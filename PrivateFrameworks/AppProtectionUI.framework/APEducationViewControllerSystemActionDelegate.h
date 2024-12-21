/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppProtectionUI.framework/AppProtectionUI
 */

@interface APEducationViewControllerSystemActionDelegate : NSObject <APEducationViewControllerDelegate> {
    void delegate;
}

@property (nonatomic) <APEducationViewControllerSystemActionDelegateDismissalDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (void)educationViewController:(id)arg1 requestAuthenticationWithCompletion:(id /* block */)arg2;
- (void)educationViewController:(id)arg1 requestHideOfApplication:(id)arg2 completion:(id /* block */)arg3;
- (void)educationViewController:(id)arg1 requestLockOfApplication:(id)arg2 completion:(id /* block */)arg3;
- (void)educationViewControllerRequestsDismissal:(id)arg1 withResult:(long long)arg2;
- (id)init;
- (void)setDelegate:(id)arg1;

@end