/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SeymourUI.framework/SeymourUI
 */

@interface SeymourUI.FilterButton : UIButton {
    void highlightTimer;
    void shouldShowHighlight;
}

@property (nonatomic) bool highlighted;

- (void).cxx_destruct;
- (void)handleTimer:(id)arg1;
- (void)handleTouchDown:(id)arg1;
- (void)handleTouchUp:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isHighlighted;
- (void)setHighlighted:(bool)arg1;

@end