/* Generated by RuntimeBrowser.
 */

@protocol PXPresentationEnvironment <NSObject>

@required

- (bool)canPresentPopovers;
- (bool)canPushViewController;
- (void)dismissAlertWithToken:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 6: <NSObject> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)dismissViewController:(void *)arg1 animated:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 7: UIViewController *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (bool)popToViewController:(UIViewController *)arg1 animated:(bool)arg2;
- (<NSObject> *)presentAlertWithConfigurationHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PXAlertConfiguration *, void*
- (void)presentViewController:(void *)arg1 animated:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 7: UIViewController *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (UIViewController *)presentingViewController;
- (bool)pushViewController:(UIViewController *)arg1 animated:(bool)arg2;

@end
