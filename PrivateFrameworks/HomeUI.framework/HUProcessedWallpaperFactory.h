/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUProcessedWallpaperFactory : NSObject <HFProcessedWallpaperSource>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long processVersionNumber;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *supportedVariants;

+ (id)_defaultBackdropSettings;

- (id)_croppedImageFromWallpaper:(id)arg1 image:(id)arg2;
- (id)_darkContentBlurredImageForWallpaper:(id)arg1 image:(id)arg2;
- (id)_darkContentDarkModeBlurredImageForWallpaper:(id)arg1 image:(id)arg2;
- (id)_imageByApplyingLayerEffects:(id)arg1 toImage:(id)arg2;
- (id)_layerWithCompositingFilterType:(id)arg1 color:(id)arg2;
- (id)_lightContentBlurredImageForWallpaper:(id)arg1 image:(id)arg2;
- (id)_processedImageForWallpaper:(id)arg1 image:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_scaledCropRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 wallpaper:(id)arg2 image:(id)arg3;
- (id)applyCustomFilterForWallpaper:(id)arg1 image:(id)arg2;
- (id)generateFilteredImageForWallpaper:(id)arg1 image:(id)arg2;
- (unsigned long long)processVersionNumber;
- (id)processedImageForVariant:(long long)arg1 wallpaper:(id)arg2 image:(id)arg3;
- (id)supportedVariants;

@end