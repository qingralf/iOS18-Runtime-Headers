/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileStoreUI.framework/MobileStoreUI
 */

@interface SUUICollectionViewLayoutAttributes : UICollectionViewLayoutAttributes <NSCopying> {
    UIColor * _backgroundColor;
    long long  _position;
    double  _zoomingImageAlpha;
    double  _zoomingImageImposedAlphaOfOtherViews;
    double  _zoomingImageLambda;
    double  _zoomingImageWidth;
}

@property (nonatomic, copy) UIColor *backgroundColor;
@property (nonatomic) long long position;
@property (nonatomic) double zoomingImageAlpha;
@property (nonatomic) double zoomingImageImposedAlphaOfOtherViews;
@property (getter=_zoomingImageLambda, setter=_setZoomingImageLambda:, nonatomic) double zoomingImageLambda;
@property (nonatomic) double zoomingImageWidth;

- (void).cxx_destruct;
- (void)_setZoomingImageLambda:(double)arg1;
- (double)_zoomingImageLambda;
- (id)backgroundColor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)isEqual:(id)arg1;
- (long long)position;
- (void)setBackgroundColor:(id)arg1;
- (void)setPosition:(long long)arg1;
- (void)setZoomingImageAlpha:(double)arg1;
- (void)setZoomingImageImposedAlphaOfOtherViews:(double)arg1;
- (void)setZoomingImageWidth:(double)arg1;
- (double)zoomingImageAlpha;
- (double)zoomingImageImposedAlphaOfOtherViews;
- (double)zoomingImageWidth;

@end
