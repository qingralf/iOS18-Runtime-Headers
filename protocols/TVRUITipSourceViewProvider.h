/* Generated by RuntimeBrowser.
 */

@protocol TVRUITipSourceViewProvider <NSObject>

@required

- (bool)canPresentTip;
- (unsigned long long)permittedArrowDirections;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })tipSourceRect;
- (UIView *)tipSourceView;

@optional

- (bool)tipSourceSupportsSiri;

@end