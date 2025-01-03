/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXComponentStyleRenderer : NSObject <SXComponentStyleRenderer, SXViewportChangeListener> {
    SXShapeLayer * _borderLayer;
    SXShapeLayer * _bottomBorderLayer;
    <SXComponentStyle> * _componentStyle;
    SXComponentView * _componentView;
    bool  _didRegisterForDynamicBounds;
    <SXGradientFactory> * _gradientFactory;
    SXGradientFillView * _gradientFillView;
    SXImageFillView * _imageFillView;
    <SXImageFillViewFactory> * _imageFillViewFactory;
    SXShapeLayer * _leftBorderLayer;
    SXRepeatableImageFillView * _repeatableImageFillView;
    <SXRepeatableImageFillViewFactory> * _repeatableImageFillViewFactory;
    SXShapeLayer * _rightBorderLayer;
    SXLayer * _shadowLayer;
    SXShapeLayer * _topBorderLayer;
    SXVideoFillView * _videoFillView;
    <SXVideoFillViewFactory> * _videoFillViewFactory;
    SXViewport * _viewport;
}

@property (nonatomic, retain) SXShapeLayer *borderLayer;
@property (nonatomic, retain) SXShapeLayer *bottomBorderLayer;
@property (nonatomic, readonly) <SXComponentStyle> *componentStyle;
@property (nonatomic, readonly) SXComponentView *componentView;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didRegisterForDynamicBounds;
@property (nonatomic, readonly) <SXGradientFactory> *gradientFactory;
@property (nonatomic, retain) SXGradientFillView *gradientFillView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SXImageFillView *imageFillView;
@property (nonatomic, readonly) <SXImageFillViewFactory> *imageFillViewFactory;
@property (nonatomic, retain) SXShapeLayer *leftBorderLayer;
@property (nonatomic, retain) SXRepeatableImageFillView *repeatableImageFillView;
@property (nonatomic, readonly) <SXRepeatableImageFillViewFactory> *repeatableImageFillViewFactory;
@property (nonatomic, retain) SXShapeLayer *rightBorderLayer;
@property (nonatomic, retain) SXLayer *shadowLayer;
@property (readonly) Class superclass;
@property (nonatomic, retain) SXShapeLayer *topBorderLayer;
@property (nonatomic, retain) SXVideoFillView *videoFillView;
@property (nonatomic, readonly) <SXVideoFillViewFactory> *videoFillViewFactory;
@property (nonatomic, readonly) SXViewport *viewport;

- (void).cxx_destruct;
- (void)applyBackgroundColor:(id)arg1;
- (void)applyBorder:(id)arg1;
- (void)applyComponentStyle;
- (void)applyCornerRadius:(double)arg1 cornerMask:(unsigned long long)arg2 curve:(id)arg3 onView:(id)arg4;
- (void)applyFill:(id)arg1;
- (void)applyMask:(id)arg1;
- (void)applyOpacity:(double)arg1;
- (void)applyShadow:(id)arg1;
- (void)applyStrokeStyle:(id)arg1 borderLayer:(id)arg2 path:(id)arg3 lineWidth:(double)arg4;
- (id)borderLayer;
- (id)bottomBorderLayer;
- (id)componentStyle;
- (id)componentView;
- (void)componentVisiblityStateDidChange:(long long)arg1;
- (void)dealloc;
- (bool)didRegisterForDynamicBounds;
- (id)gradientFactory;
- (id)gradientFillView;
- (id)gradientViewForFill:(id)arg1;
- (id)imageFillView;
- (id)imageFillViewFactory;
- (id)imageViewForFill:(id)arg1;
- (id)initWithComponentStyle:(id)arg1 viewport:(id)arg2 imageFillViewFactory:(id)arg3 videoFillViewFactory:(id)arg4 gradientViewFactory:(id)arg5 repeatableImageFillViewFactory:(id)arg6;
- (id)leftBorderLayer;
- (void)prepareBorder:(id)arg1;
- (void)prepareFill:(id)arg1;
- (void)prepareForComponentView:(id)arg1;
- (void)prepareShadow:(id)arg1;
- (id)repeatableImageFillView;
- (id)repeatableImageFillViewFactory;
- (id)repeatableImageFillViewForFill:(id)arg1;
- (id)rightBorderLayer;
- (void)setBorderLayer:(id)arg1;
- (void)setBottomBorderLayer:(id)arg1;
- (void)setDidRegisterForDynamicBounds:(bool)arg1;
- (void)setGradientFillView:(id)arg1;
- (void)setImageFillView:(id)arg1;
- (void)setLeftBorderLayer:(id)arg1;
- (void)setRepeatableImageFillView:(id)arg1;
- (void)setRightBorderLayer:(id)arg1;
- (void)setShadowLayer:(id)arg1;
- (void)setTopBorderLayer:(id)arg1;
- (void)setVideoFillView:(id)arg1;
- (id)shadowLayer;
- (id)topBorderLayer;
- (id)videoFillView;
- (id)videoFillViewFactory;
- (id)videoPlayerViewForFill:(id)arg1;
- (id)viewForFill:(id)arg1;
- (id)viewport;
- (void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2;
- (void)viewport:(id)arg1 dynamicBoundsDidChangeFromBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;

@end
