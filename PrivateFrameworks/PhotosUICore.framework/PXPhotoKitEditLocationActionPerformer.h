/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotoKitEditLocationActionPerformer : PXPhotoKitAssetActionPerformer <PXPhotosDetailsLocationSearchDelegate>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 person:(id)arg3 socialGroup:(id)arg4;
+ (id)createPreviewActionWithTitle:(id)arg1 image:(id)arg2 handler:(id /* block */)arg3;
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 actionManager:(id)arg2;
+ (id)systemImageNameForActionManager:(id)arg1;

- (void)_presentLocationEditViewControllerWithAssets:(id)arg1;
- (void)locationSearchDataSource:(id)arg1 didSelectLocationSearchResult:(id)arg2;
- (void)locationSearchDataSourceDidRemoveLocation:(id)arg1;
- (void)performUserInteractionTask;

@end
