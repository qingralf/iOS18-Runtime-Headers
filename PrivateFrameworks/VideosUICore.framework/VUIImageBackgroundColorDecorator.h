/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore
 */

@interface VUIImageBackgroundColorDecorator : VUIImageDecorator {
    UIColor * _backgroundColor;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic, readonly, copy) UIColor *backgroundColor;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;

- (void).cxx_destruct;
- (id)backgroundColor;
- (id)decorate:(id)arg1 scaledWithSize:(struct CGSize { double x1; double x2; })arg2 croppedToFit:(bool)arg3;
- (id)decoratorIdentifier;
- (struct CGSize { double x1; double x2; })expectedSize;
- (id)initWithBackgroundColor:(id)arg1 andSize:(struct CGSize { double x1; double x2; })arg2;
- (bool)isEqual:(id)arg1;
- (bool)loaderCropToFit;
- (struct CGSize { double x1; double x2; })loaderScaleToSize;
- (struct CGSize { double x1; double x2; })size;

@end
