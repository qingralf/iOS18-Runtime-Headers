/* Generated by RuntimeBrowser.
 */

@protocol CKMessageEditingViewDelegate <NSObject>

@required

- (BOOL)messageEditingColor;
- (void)messageEditingView:(CKMessageEditingView *)arg1 didChangeTextAnimationInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (bool)messageEditingViewBalloonHasTail;
- (void)messageEditingViewConfirmButtonSelected:(CKMessageEditingView *)arg1;
- (void)messageEditingViewDidUpdateBalloonViewContent:(CKMessageEditingView *)arg1;
- (void)messageEditingViewDidUpdateBalloonViewFrame:(CKMessageEditingView *)arg1;
- (double)messageEditingViewDismissAnimationBalloonMaxWidth;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })messageEditingViewDismissAnimationContentInsets;
- (void)messageEditingViewRejectButtonSelected:(CKMessageEditingView *)arg1;
- (void)messageEditingViewWritingToolsDidEnd:(CKMessageEditingView *)arg1;
- (void)messageEditingViewWritingToolsWillBegin:(CKMessageEditingView *)arg1;

@end
