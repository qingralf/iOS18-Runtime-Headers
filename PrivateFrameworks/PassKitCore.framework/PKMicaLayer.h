/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKMicaLayer : CALayer <PKMicaResizableView> {
    NSDictionary * _publishedColorLayers;
    NSDictionary * _publishedColorShapeLayers;
    CALayer * _rootLayer;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDictionary *publishedColorLayers;
@property (nonatomic, readonly) NSDictionary *publishedColorShapeLayers;
@property (nonatomic, readonly) CALayer *rootLayer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })boundsSizeToMatchPointScale:(double)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 package:(id)arg2;
- (void)layoutSublayers;
- (double)pointScaleToMatchBoundsSize:(struct CGSize { double x1; double x2; })arg1;
- (id)publishedColorLayers;
- (id)publishedColorShapeLayers;
- (id)rootLayer;

@end
