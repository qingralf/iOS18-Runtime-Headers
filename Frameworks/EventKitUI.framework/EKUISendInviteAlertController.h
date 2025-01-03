/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKUISendInviteAlertController : NSObject <UIActionSheetDelegate> {
    UIAlertController * _alertController;
    id /* block */  _completionHandler;
    EKUISendInviteAlertController * _strongSelf;
}

@property (retain) UIAlertController *alertController;
@property (copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) EKUISendInviteAlertController *strongSelf;
@property (readonly) Class superclass;

+ (id)newAlertControllerWithCompletionHandler:(id /* block */)arg1;
+ (id)presentInviteAlertWithOptions:(unsigned long long)arg1 viewController:(id)arg2 withCompletionHandler:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)_cleanup;
- (void)_completeWithSelection:(int)arg1;
- (void)_presentAlertWithOptions:(unsigned long long)arg1 viewController:(id)arg2;
- (bool)_useSheetForViewController:(id)arg1;
- (id)alertController;
- (id)alertIconImage;
- (void)cancelAnimated:(bool)arg1;
- (id /* block */)completionHandler;
- (void)dealloc;
- (void)setAlertController:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setStrongSelf:(id)arg1;
- (id)strongSelf;

@end
