/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CDMFoundation.framework/CDMFoundation
 */

@interface CDMServiceAssetConfig : NSObject {
    CDMAssetSetToFactorsConfig * _assetSetToFactorsConfig;
    bool  _isAssetRequiredForSetup;
}

- (void).cxx_destruct;
- (void)addCDMFactorToFoldersMapping:(id)arg1 forAssetSet:(long long)arg2;
- (id)getAllAssetSets;
- (id)getAllFactors;
- (id)getCDMAssetFactorToFoldersMappingForAssetSet:(long long)arg1;
- (id)getCDMAssetSetToFactorsConfig;
- (id)getCDMAssetsFactorConfigForAssetSet:(long long)arg1;
- (id)init;
- (bool)isAssetRequiredForSetup;
- (void)setIsAssetRequiredForSetup:(bool)arg1;

@end
