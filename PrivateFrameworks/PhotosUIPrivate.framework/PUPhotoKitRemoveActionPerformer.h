/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUIPrivate.framework/PhotosUIPrivate
 */

@interface PUPhotoKitRemoveActionPerformer : PUPhotoKitActionPerformer <PUAssetActionPerformerDelegate> {
    NSDictionary * _fetchResultsByAssetCollection;
    PUPhotoKitTrashActionPerformer * _trashActionPerformer;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDictionary *fetchResultsByAssetCollection;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool shouldShowConfirmation;
@property (readonly) Class superclass;
@property (nonatomic, retain) PUPhotoKitTrashActionPerformer *trashActionPerformer;

+ (bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;

- (void).cxx_destruct;
- (void)_performTrashTask;
- (bool)assetActionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)assetActionPerformer:(id)arg1 presentViewController:(id)arg2;
- (id)fetchResultsByAssetCollection;
- (void)performBackgroundTask;
- (void)performUserInteractionTask;
- (void)setFetchResultsByAssetCollection:(id)arg1;
- (void)setTrashActionPerformer:(id)arg1;
- (bool)shouldShowConfirmation;
- (id)trashActionPerformer;
- (id)undoManagerForAssetActionPerformer:(id)arg1;

@end
