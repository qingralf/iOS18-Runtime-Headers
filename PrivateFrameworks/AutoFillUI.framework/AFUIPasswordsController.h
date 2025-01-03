/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AutoFillUI.framework/AutoFillUI
 */

@interface AFUIPasswordsController : NSObject <_SFAppAutoFillPasswordViewControllerDelegate> {
    RTIDocumentTraits * _documentTraits;
    <AFUIPasswordPickerDelegate> * _passwordPickerDelegate;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <AFUIPasswordPickerDelegate> *passwordPickerDelegate;
@property (readonly) Class superclass;

+ (bool)isPasswordPickerViewControllerAuthenticating:(id)arg1;

- (void).cxx_destruct;
- (bool)_shouldPresentAllPasswordsViewInPopover;
- (id)initWithDocumentTraits:(id)arg1;
- (id)makePasswordPickerViewController;
- (id)passwordPickerDelegate;
- (void)passwordViewController:(id)arg1 fillPassword:(id)arg2;
- (void)passwordViewController:(id)arg1 fillText:(id)arg2;
- (void)passwordViewController:(id)arg1 fillUsername:(id)arg2;
- (void)passwordViewController:(id)arg1 fillVerificationCode:(id)arg2;
- (void)passwordViewController:(id)arg1 selectedCredential:(id)arg2;
- (void)passwordViewControllerDidFinish:(id)arg1;
- (void)presentPasswordPickerFromViewController:(id)arg1 didFinishAuthenticationBlock:(id /* block */)arg2;
- (void)setPasswordPickerDelegate:(id)arg1;

@end
