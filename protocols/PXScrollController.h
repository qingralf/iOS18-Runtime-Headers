/* Generated by RuntimeBrowser.
 */

@protocol PXScrollController <NSObject>

@required

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })activeRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })constrainedVisibleRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentBounds;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInset;
- (struct CGSize { double x1; double x2; })presentedContentSize;
- (struct CGSize { double x1; double x2; })referenceSize;
- (bool)respectsContentZOrder;
- (PXScrollInfo *)scrollInfo;
- (void)setContentBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setNeedsUpdate;
- (void)setPresentedContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setRespectsContentZOrder:(bool)arg1;
- (void)setScrollInfo:(PXScrollInfo *)arg1;
- (void)setUpdateDelegate:(id <PXScrollControllerUpdateDelegate>)arg1;
- (void)setVisibleOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })targetRect;
- (<PXScrollControllerUpdateDelegate> *)updateDelegate;
- (void)updateIfNeeded;
- (struct CGPoint { double x1; double x2; })visibleOrigin;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;

@end