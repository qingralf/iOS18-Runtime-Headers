/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FitnessCoreUI.framework/FitnessCoreUI
 */

@interface FitnessCoreUI.PlatterlessNonScalingButton : UIControl {
    void floatingContentView;
    void titleLabel;
}

@property (nonatomic, readonly) bool canBecomeFocused;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } intrinsicContentSize;

- (void).cxx_destruct;
- (bool)canBecomeFocused;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
