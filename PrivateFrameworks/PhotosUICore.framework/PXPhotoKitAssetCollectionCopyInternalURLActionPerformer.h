/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotoKitAssetCollectionCopyInternalURLActionPerformer : PXPhotoKitAssetCollectionActionPerformer <PXPhotoKitPersonActionPerformer>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)canPerformOn:(id)arg1;
+ (bool)canPerformOnAssetCollectionReference:(id)arg1 withInputs:(id)arg2;
+ (id)createActivityWithTitle:(id)arg1 actionType:(id)arg2 actionSystemImageName:(id)arg3;
+ (id)localizedTitleForPerson:(id)arg1;
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 assetCollectionReference:(id)arg2 withInputs:(id)arg3;
+ (id)systemImageNameForAssetCollectionReference:(id)arg1 withInputs:(id)arg2;
+ (id)systemImageNameForPerson:(id)arg1;

- (void)performUserInteractionTask;

@end