/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIIPadRedeemCameraView : UIView <UITextFieldDelegate> {
    <SKUIRedeemCameraViewDelegate> * _delegate;
    SKUIRedeemTextField * _inputAccessoryTextField;
    SKUIRedeemCameraLandingView * _landingView;
    UIView * _redeemerView;
    UIScrollView * _scrollView;
    UIButton * _termsButton;
    SKUIRedeemTextField * _textField;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <SKUIRedeemCameraViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *image;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;

- (void).cxx_destruct;
- (double)_adjustVerticalSpacingForHeight:(double)arg1;
- (void)_hideKeyboard;
- (void)_landingButtonAction:(id)arg1;
- (id)_newTextFieldWithClientContext:(id)arg1 placeholderColor:(id)arg2;
- (void)_termsButtonAction:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (bool)enabled;
- (id)image;
- (id)initWithClientContext:(id)arg1;
- (void)keyboardDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setText:(id)arg1;
- (void)showKeyboard;
- (void)start;
- (id)text;
- (void)textFieldDidEndEditing:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldTextDidChange:(id)arg1;

@end
