/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKRemoteAccountPageViewController : _UIRemoteViewController <SKUIClientAccountPageViewController> {
    SKAccountPageViewController * _accountPageViewController;
}

@property (nonatomic) SKAccountPageViewController *accountPageViewController;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (id)accountPageViewController;
- (void)didFinishLoading;
- (void)didPrepareWithResult:(id)arg1 error:(id)arg2;
- (id)disconnect;
- (void)dismissBridgedViewController;
- (void)dismissViewControllerWithResult:(id)arg1 error:(id)arg2;
- (void)financeInterruptionResolved:(bool)arg1;
- (void)overrideCreditCardPresentationWithCompletion:(id /* block */)arg1;
- (void)overrideRedeemCameraPerformAction:(long long)arg1 withObject:(id)arg2;
- (void)overrideRedeemCameraWithCompletion:(id /* block */)arg1;
- (void)popBridgedViewControllersToIndex:(unsigned long long)arg1;
- (void)presentBridgedViewController;
- (void)pushBridgedViewControllerAnimated:(bool)arg1 options:(id)arg2;
- (void)setAccountPageViewController:(id)arg1;
- (void)setBridgedNavigationItemWithOptions:(id)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
