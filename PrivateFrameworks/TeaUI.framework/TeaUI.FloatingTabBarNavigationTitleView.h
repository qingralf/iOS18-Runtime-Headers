/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
 */

@interface TeaUI.FloatingTabBarNavigationTitleView : _UINavigationBarTitleView <TUNavigationBarCompressible> {
    void contentInsets;
    void contentView;
    void lastLeadingItemsRect;
    void lastTrailingItemsRect;
    void layout;
    void showExpandedHeight;
    void visibility;
}

@property (nonatomic) double contentAlpha;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic) double verticalOffset;

- (void).cxx_destruct;
- (double)contentAlpha;
- (void)contentDidChange;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setContentAlpha:(double)arg1;
- (void)setVerticalOffset:(double)arg1;
- (double)verticalOffset;

@end
