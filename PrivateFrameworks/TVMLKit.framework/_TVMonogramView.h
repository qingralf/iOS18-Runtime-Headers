/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVMonogramView : _UIFloatingContentView <TVAuxiliaryViewSelecting, _UIFloatingContentViewDelegate> {
    TVMonogramViewConfiguration * _configuration;
    UIView * _focusedShadowView;
    bool  _focusedStateEnabled;
    UIImage * _image;
    TVImageProxy * _imageProxy;
    _TVImageView * _imageView;
    bool  _isSelected;
    _TVMonogramDescription * _monogramDescription;
    UIView * _overlayView;
    UIImage * _placeholderImage;
    UIView * _placeholderView;
    id /* block */  _pressCompletionBlock;
    double  _unfocusedImageAlpha;
    UIView * _unfocusedShadowView;
}

@property (nonatomic, readonly) TVMonogramViewConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (getter=isFocusedStateEnabled, nonatomic) bool focusedStateEnabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) TVImageProxy *imageProxy;
@property (nonatomic, retain) _TVImageView *imageView;
@property (nonatomic, retain) _TVMonogramDescription *monogramDescription;
@property (nonatomic, retain) UIView *overlayView;
@property (nonatomic, retain) UIImage *placeholderImage;
@property (nonatomic, copy) id /* block */ pressCompletionBlock;
@property (readonly) Class superclass;
@property (nonatomic) double unfocusedImageAlpha;

- (void).cxx_destruct;
- (void)_loadWithMonogramDescription:(id)arg1 imageProxy:(id)arg2;
- (void)_updateAppearanceForSelectionStateWithCoordinator:(id)arg1;
- (void)_updateFocusedShadowFrameAndLayerWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_updatePlaceholerView;
- (void)_updateUnfocusedShadowFrameAndLayerWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)configuration;
- (void)floatingContentView:(id)arg1 didFinishTransitioningToState:(unsigned long long)arg2;
- (void)floatingContentView:(id)arg1 isTransitioningFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (id)image;
- (id)imageProxy;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 configuration:(id)arg2;
- (bool)isFocusedStateEnabled;
- (void)layoutSubviews;
- (id)monogramDescription;
- (id)overlayView;
- (id)placeholderImage;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id /* block */)pressCompletionBlock;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })selectionMarginsForSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setFocusedStateEnabled:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setImageProxy:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setMonogramDescription:(id)arg1;
- (void)setOverlayView:(id)arg1;
- (void)setPlaceholderImage:(id)arg1;
- (void)setPressCompletionBlock:(id /* block */)arg1;
- (void)setPressed:(bool)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (void)setSelected:(bool)arg1 animated:(bool)arg2 withAnimationCoordinator:(id)arg3;
- (void)setUnfocusedImageAlpha:(double)arg1;
- (double)unfocusedImageAlpha;

@end
