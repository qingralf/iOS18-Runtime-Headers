/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSubtitleDisclosureTableCell : PSTableCell {
    UILabel * _valueLabel;
}

@property (nonatomic, retain) UILabel *valueLabel;

+ (long long)cellStyle;

- (void).cxx_destruct;
- (void)_valueLabelForSpecifier:(id)arg1;
- (bool)canReload;
- (double)contentAccessoryPadding;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)layoutSubviews;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)setValueLabel:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)valueLabel;

@end
