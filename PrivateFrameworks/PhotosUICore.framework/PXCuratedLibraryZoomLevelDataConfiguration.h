/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCuratedLibraryZoomLevelDataConfiguration : NSObject <PXPhotosDataSourceProvider> {
    PXAssetsDataSourceManager * _assetsDataSourceManager;
    bool  _enableDays;
    PHPhotoLibrary * _photoLibrary;
    long long  _zoomLevel;
}

@property (nonatomic, readonly) PXAssetsDataSourceManager *assetsDataSourceManager;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enableDays;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PHPhotoLibrary *photoLibrary;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long zoomLevel;

- (void).cxx_destruct;
- (id)assetsDataSourceManager;
- (id)createInitialPhotosDataSourceForDataSourceManager:(id)arg1;
- (bool)enableDays;
- (id)init;
- (id)initWithZoomLevel:(long long)arg1;
- (id)initWithZoomLevel:(long long)arg1 assetsDataSourceManager:(id)arg2;
- (id)initWithZoomLevel:(long long)arg1 assetsDataSourceManager:(id)arg2 enableDays:(bool)arg3;
- (id)photoLibrary;
- (void)setEnableDays:(bool)arg1;
- (void)setPhotoLibrary:(id)arg1;
- (long long)zoomLevel;

@end
