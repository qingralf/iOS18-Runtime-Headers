/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarPlayUIServices.framework/CarPlayUIServices
 */

@interface CRSUIResolvedWallpaper : NSObject {
    UIColor * _color;
    id /* block */  _imageResolver;
    CRSUIStatefulCAPackage * _statefulPackage;
    id /* block */  _thumbnailResolver;
    <CRSUIWallpaper> * _wallpaper;
}

@property (nonatomic, readonly) <CRSUIWallpaper> *wallpaper;

- (void).cxx_destruct;
- (id)initWithWallpaperInformation:(id)arg1 color:(id)arg2;
- (id)initWithWallpaperInformation:(id)arg1 imageResolver:(id /* block */)arg2;
- (id)initWithWallpaperInformation:(id)arg1 imageResolver:(id /* block */)arg2 thumbnailResolver:(id /* block */)arg3;
- (id)initWithWallpaperInformation:(id)arg1 imageResolver:(id /* block */)arg2 thumbnailResolver:(id /* block */)arg3 statefulPackage:(id)arg4 color:(id)arg5;
- (id)initWithWallpaperInformation:(id)arg1 statefulPackage:(id)arg2;
- (id)thumbnailWithCompatibleTraitCollection:(id)arg1;
- (id)view;
- (id)wallpaper;

@end
