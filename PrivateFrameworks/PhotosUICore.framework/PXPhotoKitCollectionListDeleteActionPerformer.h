/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotoKitCollectionListDeleteActionPerformer : PXPhotoKitCollectionListActionPerformer

+ (bool)canPerformOnCollectionList:(id)arg1;
+ (bool)isActionDestructive;
+ (id)localizedTitleForActionType:(id)arg1 collectionList:(id)arg2;
+ (id)systemImageNameForCollectionList:(id)arg1 actionType:(id)arg2;

- (void)_promptDeleteConfirmationWithCompletionHandler:(id /* block */)arg1;
- (void)performUserInteractionTask;

@end
