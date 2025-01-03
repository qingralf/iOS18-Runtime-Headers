/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUIPrivate.framework/PhotosUIPrivate
 */

@interface PUAssetExplorerReviewScreenAssetsDataSourceManager : PUAssetsDataSourceManager <PUAssetsDataSourceManagerDelegate> {
    PUAssetsDataSourceManager * __originalDataSourceManager;
    NSDictionary * __replacementAssetsByUUID;
}

@property (setter=_setOriginalDataSourceManager:, nonatomic, retain) PUAssetsDataSourceManager *_originalDataSourceManager;
@property (setter=_setReplacementAssetsByUUID:, nonatomic, copy) NSDictionary *_replacementAssetsByUUID;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_originalDataSourceManager;
- (id)_replacementAssetsByUUID;
- (void)_setOriginalDataSourceManager:(id)arg1;
- (void)_setReplacementAssetsByUUID:(id)arg1;
- (void)_updateDataSource;
- (void)assetsDataSourceManager:(id)arg1 didChangeAssetsDataSource:(id)arg2;
- (id)assetsDataSourceManagerInterestingAssetReferences:(id)arg1;
- (void)detachFromOriginalDataSourceManager;
- (id)initWithOriginalDataSourceManager:(id)arg1;
- (void)performChanges:(id /* block */)arg1;

@end
