/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
 */

@interface AMSUIPaymentSheetTask : AMSPaymentSheetTask <PKPaymentAuthorizationControllerDelegate, PKPaymentAuthorizationControllerPrivateDelegate>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_didDismissPaymentAuthorizationController:(id)arg1;
- (void)paymentAuthorizationControllerDidFinish:(id)arg1;
- (id)presentationSceneBundleIdentifierForPaymentAuthorizationController:(id)arg1;
- (id)presentationSceneIdentifierForPaymentAuthorizationController:(id)arg1;
- (id)presentationWindowForPaymentAuthorizationController:(id)arg1;

@end
