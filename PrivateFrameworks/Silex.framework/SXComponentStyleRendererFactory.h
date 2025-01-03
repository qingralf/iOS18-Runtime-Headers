/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXComponentStyleRendererFactory : NSObject <SXComponentStyleRendererFactory> {
    <SXGradientFactory> * _gradientFactory;
    <SXImageFillViewFactory> * _imageFillViewFactory;
    <SXRepeatableImageFillViewFactory> * _repeatableImageFillViewFactory;
    <SXVideoFillViewFactory> * _videoFillViewFactory;
    SXViewport * _viewport;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <SXGradientFactory> *gradientFactory;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SXImageFillViewFactory> *imageFillViewFactory;
@property (nonatomic, readonly) <SXRepeatableImageFillViewFactory> *repeatableImageFillViewFactory;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SXVideoFillViewFactory> *videoFillViewFactory;
@property (nonatomic, readonly) SXViewport *viewport;

- (void).cxx_destruct;
- (id)componentStyleRendererForComponentStyle:(id)arg1;
- (id)gradientFactory;
- (id)imageFillViewFactory;
- (id)initWithImageFillViewFactory:(id)arg1 videoFillViewFactory:(id)arg2 gradientFactory:(id)arg3 repeatableImageFillViewFactory:(id)arg4 viewport:(id)arg5;
- (id)repeatableImageFillViewFactory;
- (id)videoFillViewFactory;
- (id)viewport;

@end
