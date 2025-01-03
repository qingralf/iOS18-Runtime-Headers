/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BarcodeSupportUI.framework/BarcodeSupportUI
 */

@interface BCSDissolveEffectView : UIView {
    UIImageView * _contentView;
    CAEmitterLayer * _dissolveLayer;
    CAEmitterLayer * _expandingLayer;
    UIImageView * _targetAppIcon;
}

@property (nonatomic) UIImageView *contentView;

- (void).cxx_destruct;
- (id)_averageColorAtCornerForImage:(id)arg1;
- (id)_imageForCellWithColor:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (void)startAnimation;
- (void)startAnimationWithDuration:(double)arg1 appImageBlock:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)stopAnimation;

@end
