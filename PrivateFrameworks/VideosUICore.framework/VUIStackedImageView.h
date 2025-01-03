/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore
 */

@interface VUIStackedImageView : UIView <VUIAuxiliaryViewSelecting> {
    bool  _imageLoaded;
    VUIImageProxy * _imageProxy;
    _UIStackedImageConfiguration * _imageStackConfig;
    _UIStackedImageContainerLayer * _imageStackLayer;
    double  _layerSelectionDuration;
    double  _layerUnselectionDuration;
    UIMotionEffectGroup * _motionEffectGroup;
    bool  _overlayComposited;
    UIView * _overlayView;
    double  _repositionUnselectionDuration;
    NSShadow * _shadow;
    double  _shadowSelectionDuration;
    double  _shadowUnselectionDuration;
    struct CGSize { 
        double width; 
        double height; 
    }  _stackSize;
    UIImage * _staticImage;
    VUIStackedImageNamedLayerStack * _uiLayerStack;
    UIView * _unmaskedOverlayView;
}

@property (nonatomic) bool allowsNonOpaqueShadow;
@property (nonatomic) unsigned long long controlState;
@property (nonatomic) double cornerRadius;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) struct CGPoint { double x1; double x2; } focusDirection;
@property (nonatomic) double focusSizeIncrease;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIImage *image;
@property (getter=isImageLoaded, nonatomic) bool imageLoaded;
@property (nonatomic, retain) VUIImageProxy *imageProxy;
@property (getter=isOverlayComposited, nonatomic) bool overlayComposited;
@property (nonatomic, retain) UIView *overlayView;
@property (nonatomic, retain) UIImage *placeholderImage;
@property (getter=isPressed, nonatomic) bool pressed;
@property (nonatomic, readonly) unsigned long long primaryControlState;
@property (getter=isSelected, nonatomic) bool selected;
@property (nonatomic) long long selectionStyle;
@property (nonatomic, copy) NSShadow *shadow;
@property (nonatomic) struct CGSize { double x1; double x2; } stackSize;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIView *unmaskedOverlayView;

+ (struct CGSize { double x1; double x2; })_scaledSizeForSize:(struct CGSize { double x1; double x2; })arg1 focusSizeIncrease:(double)arg2 selectionStyle:(long long)arg3;
+ (struct CGSize { double x1; double x2; })_scaledSizeForSize:(struct CGSize { double x1; double x2; })arg1 selectionStyle:(long long)arg2;
+ (Class)layerClass;

- (void).cxx_destruct;
- (bool)_applyKeyPathsAndRelativeValues:(id)arg1 forMotionEffect:(id)arg2;
- (void)_attachMotionEffects;
- (void)_commitLayerStack:(id)arg1;
- (void)_detachMotionEffects;
- (double)_idleModeFocusSizeOffset;
- (id)_imageConfiguration;
- (id)_layerBelowTitles;
- (id)_layeredImageContainerLayer;
- (void)_loadImage;
- (id)_newImageConfiguration;
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;
- (void)_resetShadowSettings;
- (void)_setFocusDirection:(struct CGPoint { double x1; double x2; })arg1 duration:(double)arg2;
- (void)_setShadowOpacity:(double)arg1;
- (void)_setShadowRadius:(double)arg1;
- (void)_setShadowVerticalOffset:(double)arg1;
- (void)_updateImageSamplingOverlays;
- (void)_updateLayerStack:(id)arg1 withImage:(struct CGImage { }*)arg2 size:(struct CGSize { double x1; double x2; })arg3;
- (void)_updateStackedImageConfiguration;
- (bool)allowsNonOpaqueShadow;
- (void)animateWithAuxiliarySelectionState:(bool)arg1 animations:(id /* block */)arg2;
- (unsigned long long)controlState;
- (double)cornerRadius;
- (void)dealloc;
- (struct CGPoint { double x1; double x2; })focusDirection;
- (double)focusSizeIncrease;
- (id)image;
- (id)imageProxy;
- (id)initWithImage:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (id)initWithImageProxy:(id)arg1;
- (bool)isImageLoaded;
- (bool)isOverlayComposited;
- (bool)isPressed;
- (bool)isSelected;
- (id)overlayView;
- (id)placeholderImage;
- (unsigned long long)primaryControlState;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })selectionMarginsForSize:(struct CGSize { double x1; double x2; })arg1;
- (long long)selectionStyle;
- (void)setAllowsNonOpaqueShadow:(bool)arg1;
- (void)setControlState:(unsigned long long)arg1;
- (void)setControlState:(unsigned long long)arg1 animated:(bool)arg2;
- (void)setControlState:(unsigned long long)arg1 animated:(bool)arg2 focusAnimationCoordinator:(id)arg3;
- (void)setCornerRadius:(double)arg1;
- (void)setFocusDirection:(struct CGPoint { double x1; double x2; })arg1;
- (void)setFocusDirection:(struct CGPoint { double x1; double x2; })arg1 animated:(bool)arg2;
- (void)setFocusSizeIncrease:(double)arg1;
- (void)setFocused:(bool)arg1;
- (void)setImage:(id)arg1 withSize:(struct CGSize { double x1; double x2; })arg2;
- (void)setImageLoaded:(bool)arg1;
- (void)setImageProxy:(id)arg1;
- (void)setOverlayComposited:(bool)arg1;
- (void)setOverlayView:(id)arg1;
- (void)setPlaceholderImage:(id)arg1;
- (void)setPressed:(bool)arg1;
- (void)setPressed:(bool)arg1 animated:(bool)arg2;
- (void)setPressed:(bool)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)setPressed:(bool)arg1 duration:(double)arg2 completion:(id /* block */)arg3;
- (void)setSelected:(bool)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (void)setSelected:(bool)arg1 animated:(bool)arg2 focusAnimationCoordinator:(id)arg3;
- (void)setSelected:(bool)arg1 animated:(bool)arg2 withAnimationCoordinator:(id)arg3;
- (void)setSelectionStyle:(long long)arg1;
- (void)setShadow:(id)arg1;
- (void)setStackSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setUnmaskedOverlayView:(id)arg1;
- (id)shadow;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })stackSize;
- (id)unmaskedOverlayView;
- (void)willMoveToWindow:(id)arg1;

@end
