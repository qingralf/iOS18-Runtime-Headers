/* Generated by RuntimeBrowser.
 */

@protocol PXPhotoKitAssetCollectionActionPerformerInput <NSObject>

@optional

- (PXAssetsDataSource *)assetsDataSource;
- (PHFetchResult *)assetsFetchResult;
- (PHAssetCollection *)containingAlbum;
- (<UIDragSession> *)dragSession;
- (<UIDropSession> *)dropSession;
- (PXAssetReference *)dropTargetAssetReference;
- (<PXMemoryAssetsActionFactory> *)memoryAssetsActionFactory;
- (PHFetchResult *)people;
- (<PXAssetCollectionActionPerformerDelegate> *)performerDelegate;
- (PHFetchResult *)socialGroups;
- (<UITraitEnvironment> *)traitEnvironment;

@end