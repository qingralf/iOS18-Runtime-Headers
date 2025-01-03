/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FIUIActionButton : UIButton {
    bool  _animatingTouchDown;
    UIColor * _backgroundImageColor;
    UIColor * _imageViewTintColor;
    id /* block */  _touchUpAnimationCompleteHandler;
    UIImageView * _transformingImageView;
}

@property (nonatomic) bool animatingTouchDown;
@property (nonatomic, retain) UIColor *backgroundImageColor;
@property (nonatomic, retain) UIColor *imageViewTintColor;
@property (nonatomic, copy) id /* block */ touchUpAnimationCompleteHandler;
@property (nonatomic, retain) UIImageView *transformingImageView;

+ (id)buttonWithTitle:(id)arg1 color:(id)arg2 icon:(id)arg3;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })FIUIActionButtonSize;
- (void)_animateHighlighted:(bool)arg1;
- (void)_setupInternalTouchActions;
- (void)_touchDown;
- (void)_touchUp;
- (bool)animatingTouchDown;
- (id)backgroundImageColor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })backgroundImageFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })backgroundRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageRectForContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)imageViewTintColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setAnimatingTouchDown:(bool)arg1;
- (void)setBackgroundImageColor:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setImageViewTintColor:(id)arg1;
- (void)setTouchUpAnimationCompleteHandler:(id /* block */)arg1;
- (void)setTransformingImageView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)tintColorDidChange;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })titleRectForContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id /* block */)touchUpAnimationCompleteHandler;
- (id)transformingImageView;
- (void)turnIntoSolidDotWithDuration:(double)arg1 completion:(id /* block */)arg2;

@end
