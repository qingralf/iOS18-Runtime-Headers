/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUIPrivate.framework/PhotosUIPrivate
 */

@interface PUPhotoKitSyndicationDeleteActionPerformer : PUPhotoKitDestructiveActionsPerformer {
    PXActionRecord * _record;
}

+ (bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;
+ (bool)shouldEnableOnAsset:(id)arg1 inAssetCollection:(id)arg2;

- (void).cxx_destruct;
- (void)_createRecord;
- (void)_recordUserConfirmation:(long long)arg1;
- (void)_recordVariant:(id)arg1;
- (long long)destructivePhotosAction;
- (void)performBackgroundTask;
- (void)performUserInteractionTask;

@end