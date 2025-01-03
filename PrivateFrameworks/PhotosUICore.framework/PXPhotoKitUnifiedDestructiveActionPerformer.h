/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotoKitUnifiedDestructiveActionPerformer : PXPhotoKitAssetActionPerformer {
    NSArray * _performerClasses;
}

@property (nonatomic, readonly) NSArray *performerClasses;

+ (id)_containedPerformerClasses;
+ (id)_localizedTitleForAsset:(id)arg1 titleUseCase:(unsigned long long)arg2 key:(id)arg3;
+ (id)_localizedTitleForAssets:(id)arg1 titleUseCase:(unsigned long long)arg2 key:(id)arg3;
+ (bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 person:(id)arg3 socialGroup:(id)arg4;
+ (bool)canPerformOnSubsetOfSelection;
+ (id)createBarButtonItemWithTarget:(id)arg1 action:(SEL)arg2 actionManager:(id)arg3;
+ (bool)isActionDestructive;
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 actionManager:(id)arg2;
+ (id)systemImageNameForActionManager:(id)arg1;

- (void).cxx_destruct;
- (void)_handleActionPickForPerformerClass:(Class)arg1;
- (void)completeUserInteractionTaskWithSuccess:(bool)arg1 error:(id)arg2;
- (id)createContainedPerformers;
- (void)performUserInteractionTask;
- (id)performerClasses;

@end
