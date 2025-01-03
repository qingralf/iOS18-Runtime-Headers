/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCuratedLibraryAssetsDataSourceManagerConfiguration : NSObject {
    bool  _enableDays;
    PHPhotoLibrary * _photoLibrary;
}

@property (nonatomic) bool enableDays;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;

+ (id)configurationWithPhotoLibrary:(id)arg1 enableDays:(bool)arg2;
+ (id)configurationWithPhotoLibrary:(id)arg1 yearsAssetsDataSourceManager:(id)arg2 monthsAssetsDataSourceManager:(id)arg3 daysAssetsDataSourceManager:(id)arg4 allPhotosAssetsDataSourceManager:(id)arg5;

- (void).cxx_destruct;
- (id)configurationForZoomLevel:(long long)arg1;
- (bool)enableDays;
- (id)initWithPhotoLibrary:(id)arg1;
- (id)keyAssetCollectionReferenceInDataSource:(id)arg1 zoomLevel:(long long)arg2 matchingAssetCollectionReference:(id)arg3 fromDataSource:(id)arg4 zoomLevel:(long long)arg5;
- (id)photoLibrary;
- (void)setEnableDays:(bool)arg1;

@end
