/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileStoreUI.framework/MobileStoreUI
 */

@interface SUUIRedeemInputViewController : SUUIRedeemStepViewController <UITextFieldDelegate> {
    long long  _category;
    SUUIRedeemTextField * _field;
    UIImageView * _imageView;
    NSString * _initialCode;
    SUUIRedeemITunesPassLockup * _passbookLockup;
    UIBarButtonItem * _redeemButton;
}

@property (nonatomic, readonly) long long category;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *initialCode;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelAction:(id)arg1;
- (id)_newTextFieldWithClientContext:(id)arg1;
- (void)_passbookLockupAction:(id)arg1;
- (void)_redeemAction:(id)arg1;
- (void)_redeemConfigurationImagesDidLoad:(id)arg1;
- (void)_termsButtonAction:(id)arg1;
- (void)_textFieldTextDidChange:(id)arg1;
- (void)_toggleActivityIndicatorBarButtonItem:(bool)arg1;
- (long long)category;
- (void)dealloc;
- (id)initWithRedeemCategory:(long long)arg1;
- (id)initialCode;
- (void)loadView;
- (void)setInitialCode:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;

@end