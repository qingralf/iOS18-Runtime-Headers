/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKUIDividedGridViewTableViewCell : UITableViewCell {
    bool  _drawsTopDivider;
    EKUIDividedGridViewController * _gridViewController;
}

@property (nonatomic) bool drawsTopDivider;
@property (retain) EKUIDividedGridViewController *gridViewController;

- (void).cxx_destruct;
- (bool)_isWiderThanMaximum;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_separatorFrame;
- (bool)drawsTopDivider;
- (id)gridViewController;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 gridViewType:(long long)arg3 buttonTitles:(id)arg4 cellBackgroundColor:(id)arg5;
- (void)layoutSubviews;
- (void)setDrawsTopDivider:(bool)arg1;
- (void)setGridViewController:(id)arg1;
- (bool)wantsDrawBackground;

@end