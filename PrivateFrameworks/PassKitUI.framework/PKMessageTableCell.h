/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKMessageTableCell : PKTableViewCell {
    id /* block */  _actionOnDismiss;
    UIButton * _dismissButton;
    UIListContentView * _listContentView;
}

- (void).cxx_destruct;
- (void)_dismissButtonPressed;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setActionOnDismiss:(id /* block */)arg1;
- (void)setContent:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end