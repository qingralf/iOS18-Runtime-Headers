/* Generated by RuntimeBrowser.
 */

@protocol UIInputViewSetPlacementApplicator <NSObject>

@required

+ (<UIInputViewSetPlacementApplicator> *)applicatorForOwner:(id <UIInputViewSetPlacementOwner>)arg1 withPlacement:(UIInputViewSetPlacement *)arg2;

- (bool)allConstraintsActive;
- (void)applyChanges:(NSDictionary *)arg1;
- (UIView *)backdropContainer;
- (NSArray *)constraints;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (UIView *)draggableView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })inputAccessoryPadding;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })inputAssistantPadding;
- (void)invalidate;
- (bool)isGesture:(UIGestureRecognizer *)arg1 inDraggableView:(struct CGPoint { double x1; double x2; })arg2;
- (struct CGPoint { double x1; double x2; })origin;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })popoverFrame;
- (bool)preBeginGesture:(UIGestureRecognizer *)arg1 shouldBegin:(bool*)arg2;
- (void)prepare;
- (UIView *)twoFingerDraggableView;

@end
