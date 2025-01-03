/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKSettingsDetailValueCell : PSTableCell {
    UILabel * _detailTextLabel;
    UITableViewCellLayoutManager * _layoutManager;
    long long  _settingsContext;
    UILabel * _textLabel;
    bool  _usesAccessibilityLayout;
}

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_layoutWithContentViewBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 applyLayout:(bool)arg2;
- (id)detailTextLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)textLabel;

@end
