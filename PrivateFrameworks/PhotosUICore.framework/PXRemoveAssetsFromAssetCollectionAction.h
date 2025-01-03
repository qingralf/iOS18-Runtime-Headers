/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXRemoveAssetsFromAssetCollectionAction : PXAssetsSelectionAction {
    NSArray * _assetsInput;
    PHAssetCollection * _collectionInput;
    NSDictionary * _removedAssetIdentifiers;
    NSDictionary * _removedAssetIndexes;
}

- (void).cxx_destruct;
- (id)actionIdentifier;
- (id)actionNameLocalizationKey;
- (id)initWithAssets:(id)arg1 assetCollection:(id)arg2;
- (void)performAction:(id /* block */)arg1;
- (void)performUndo:(id /* block */)arg1;

@end
