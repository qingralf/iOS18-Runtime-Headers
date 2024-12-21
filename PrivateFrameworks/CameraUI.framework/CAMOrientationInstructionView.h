/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMOrientationInstructionView : UIView {
    UIVisualEffectView * __effectView;
    long long  __interfaceOrientation;
    UILabel * __label;
    bool  _hasBlurredBackground;
    long long  _orientation;
}

@property (nonatomic, retain) UIVisualEffectView *_effectView;
@property (nonatomic) long long _interfaceOrientation;
@property (nonatomic, readonly) UILabel *_label;
@property (nonatomic) bool hasBlurredBackground;
@property (nonatomic) long long orientation;

- (void).cxx_destruct;
- (id)_effectView;
- (void)_formatLabel;
- (long long)_interfaceOrientation;
- (id)_label;
- (bool)hasBlurredBackground;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (long long)orientation;
- (void)setHasBlurredBackground:(bool)arg1;
- (void)setHasBlurredBackground:(bool)arg1 animated:(bool)arg2;
- (void)setOrientation:(long long)arg1;
- (void)setOrientation:(long long)arg1 animated:(bool)arg2;
- (void)set_effectView:(id)arg1;
- (void)set_interfaceOrientation:(long long)arg1;

@end