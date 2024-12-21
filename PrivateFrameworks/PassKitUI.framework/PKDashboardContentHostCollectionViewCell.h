/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKDashboardContentHostCollectionViewCell : PKDashboardCollectionViewCell {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _hostedContentInset;
    UIView * _hostedContentView;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } hostedContentInset;
@property (nonatomic, retain) UIView *hostedContentView;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })hostedContentInset;
- (id)hostedContentView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setHostedContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setHostedContentView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end