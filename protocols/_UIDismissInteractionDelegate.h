/* Generated by RuntimeBrowser.
 */

@protocol _UIDismissInteractionDelegate <NSObject>

@required

- (void)dismissInteraction:(_UIDismissInteraction *)arg1 didBeginAtLocation:(struct CGPoint { double x1; double x2; })arg2 withVelocity:(struct CGPoint { double x1; double x2; })arg3;
- (void)dismissInteraction:(_UIDismissInteraction *)arg1 didCancelWithVelocity:(struct CGPoint { double x1; double x2; })arg2 originalPosition:(struct CGPoint { double x1; double x2; })arg3;
- (void)dismissInteraction:(_UIDismissInteraction *)arg1 didDismissWithVelocity:(struct CGPoint { double x1; double x2; })arg2;
- (void)dismissInteraction:(_UIDismissInteraction *)arg1 didIssueUpdate:(_UIDismissInteractionUpdate *)arg2;
- (bool)dismissInteraction:(_UIDismissInteraction *)arg1 shouldBeginWithAxis:(unsigned long long)arg2 location:(struct CGPoint { double x1; double x2; })arg3 velocity:(struct CGPoint { double x1; double x2; })arg4 proposal:(bool)arg5;
- (double)hysteresisForInteraction:(_UIDismissInteraction *)arg1;
- (UIView *)trackingViewForInteraction:(_UIDismissInteraction *)arg1;

@end
