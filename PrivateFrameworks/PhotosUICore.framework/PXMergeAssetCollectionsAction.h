/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMergeAssetCollectionsAction : PXPhotosAction {
    PXAddAssetsToAssetCollectionAction * _addAssetsToCollectionAction;
    PXDeleteCollectionsAction * _deleteCollectionsAction;
    <PXFastEnumeration> * _sourceAssetCollections;
    PHAssetCollection * _targetAssetCollection;
}

@property (nonatomic, retain) PXAddAssetsToAssetCollectionAction *addAssetsToCollectionAction;
@property (nonatomic, retain) PXDeleteCollectionsAction *deleteCollectionsAction;
@property (nonatomic, readonly) <PXFastEnumeration> *sourceAssetCollections;
@property (nonatomic, readonly) PHAssetCollection *targetAssetCollection;

+ (bool)canPerformOnCollection:(id)arg1;

- (void).cxx_destruct;
- (id)actionIdentifier;
- (id)actionNameLocalizationKey;
- (id)addAssetsToCollectionAction;
- (id)deleteCollectionsAction;
- (id)initWithSourceAssetCollections:(id)arg1 targetAssetCollection:(id)arg2;
- (void)performAction:(id /* block */)arg1;
- (void)performUndo:(id /* block */)arg1;
- (void)setAddAssetsToCollectionAction:(id)arg1;
- (void)setDeleteCollectionsAction:(id)arg1;
- (id)sourceAssetCollections;
- (id)targetAssetCollection;

@end
