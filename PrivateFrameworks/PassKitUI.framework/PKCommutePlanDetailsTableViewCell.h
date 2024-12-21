/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKCommutePlanDetailsTableViewCell : UITableViewCell {
    UILabel * _primaryLabel;
    NSString * _primaryText;
    UILabel * _secondaryLabel;
    NSString * _secondaryText;
    bool  _templateLayout;
}

@property (nonatomic, copy) NSString *primaryText;
@property (nonatomic, copy) NSString *secondaryText;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 passDetailViewStyle:(long long)arg3;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)primaryText;
- (id)secondaryText;
- (void)setPrimaryText:(id)arg1;
- (void)setSecondaryText:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end