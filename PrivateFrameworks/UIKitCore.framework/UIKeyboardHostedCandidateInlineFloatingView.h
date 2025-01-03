/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKeyboardHostedCandidateInlineFloatingView : UIKeyboardCandidateInlineFloatingView {
    <UIKeyboardHostedCandidateInlineFloatingViewDelegate> * _delegate;
}

@property (nonatomic) <UIKeyboardHostedCandidateInlineFloatingViewDelegate> *delegate;

- (void).cxx_destruct;
- (void)adjustFrameForInlineText:(id)arg1 inlineRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 maxX:(double)arg3;
- (id)delegate;
- (bool)hostInlineRectIsVertical;
- (void)hostIsTextVerticalDidChange:(id)arg1;
- (id)initWithContainer:(id)arg1 delegate:(id)arg2;
- (bool)inlineRectIsVertical;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHidden:(bool)arg1;
- (void)setInlineText:(id)arg1 inlineRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 maxX:(double)arg3 layout:(bool)arg4;
- (bool)shouldExtendUpwards;

@end
