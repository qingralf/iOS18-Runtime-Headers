/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXImportFilesAction : PXPhotosAction {
    PHAssetCollection * _assetCollection;
    NSArray * _fileURLs;
    PHFetchResult * _importedAssets;
    NSArray * _importedAssetsIdentifiers;
}

@property (nonatomic, readonly) PHFetchResult *importedAssets;

- (void).cxx_destruct;
- (id)actionIdentifier;
- (id)actionNameLocalizationKey;
- (id)importedAssets;
- (id)initWithPhotoLibrary:(id)arg1 fileURLs:(id)arg2 assetCollection:(id)arg3;
- (void)performAction:(id /* block */)arg1;
- (void)performUndo:(id /* block */)arg1;

@end
