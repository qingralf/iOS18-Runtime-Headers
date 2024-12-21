/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotoKitRestoreAssetActionPerformer : PXPhotoKitDestructiveActionPerformer

+ (bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 person:(id)arg3 socialGroup:(id)arg4;
+ (bool)canPerformOnImplicitSelectionInContainerCollection:(id)arg1;
+ (bool)canPerformOnSubsetOfSelection;
+ (bool)canPerformWithSelectionSnapshot:(id)arg1 person:(id)arg2 socialGroup:(id)arg3;
+ (id)createBarButtonItemWithTarget:(id)arg1 action:(SEL)arg2 actionManager:(id)arg3;
+ (id)createPreviewActionWithTitle:(id)arg1 image:(id)arg2 handler:(id /* block */)arg3;
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 actionManager:(id)arg2;
+ (id)systemImageNameForActionManager:(id)arg1;

- (long long)destructivePhotosAction;

@end