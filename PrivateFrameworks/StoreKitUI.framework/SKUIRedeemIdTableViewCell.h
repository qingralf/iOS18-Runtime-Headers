/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIRedeemIdTableViewCell : UITableViewCell <UITextFieldDelegate> {
    <SKUIRedeemIdTableViewCellDelegate> * _delegate;
    UITextField * _textField;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <SKUIRedeemIdTableViewCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITextField *textField;

- (void).cxx_destruct;
- (void)_initializeTextField;
- (bool)becomeFirstResponder;
- (id)delegate;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (bool)resignFirstResponder;
- (void)setAutoCapitalizationType:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setKeyboardType:(long long)arg1;
- (void)setPlaceholderText:(id)arg1;
- (void)setReturnKeyType:(long long)arg1;
- (void)setTextField:(id)arg1;
- (id)textField;
- (void)textFieldDidChange:(id)arg1;
- (bool)textFieldShouldClear:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;

@end
