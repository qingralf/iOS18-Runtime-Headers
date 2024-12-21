/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotosExportUtilities : NSObject

+ (void)_downscaleAssetAtURLIfNeeded:(id)arg1 configuration:(id)arg2 completion:(id /* block */)arg3;
+ (void)_downscaleImageAtURL:(id)arg1 targetDimension:(id)arg2 completion:(id /* block */)arg3;
+ (id)_exportAssetUsingExportRequest:(id)arg1 configuration:(id)arg2 completion:(id /* block */)arg3;
+ (void)_exportAssets:(id)arg1 toURL:(id)arg2 configuration:(id)arg3 progress:(id)arg4;
+ (void)_exportCollectionList:(id)arg1 configuration:(id)arg2 progress:(id)arg3 completion:(id /* block */)arg4;
+ (id)_exportRequestForAsset:(id)arg1 analyticsActivityType:(id)arg2 error:(id*)arg3;
+ (void)_markURLAsPurgable:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)_optionsForExportRequest:(id)arg1 configuration:(id)arg2;
+ (void)_replaceAssetAtURL:(id)arg1 withItemAtURL:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)exportAsset:(id)arg1 configuration:(id)arg2 progress:(id)arg3 completion:(id /* block */)arg4;
+ (void)exportAssets:(id)arg1 configuration:(id)arg2 progress:(id)arg3 completion:(id /* block */)arg4;
+ (void)exportAssetsInContainer:(id)arg1 configuration:(id)arg2 progress:(id)arg3 completion:(id /* block */)arg4;

@end