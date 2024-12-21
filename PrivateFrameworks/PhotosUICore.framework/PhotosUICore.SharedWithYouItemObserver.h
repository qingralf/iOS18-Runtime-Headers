/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PhotosUICore.SharedWithYouItemObserver : NSObject <PXContentSyndicationAssetFetchResultProviderChangeObserver, PXContentSyndicationSocialLayerHighlightProviderChangeObserver> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _$observationRegistrar;
    void _asset;
    void _assetCollection;
    void _assetFetchResult;
    void _highlight;
    void assetFetchResultProvider;
    void highlightProvider;
    void item;
}

- (void).cxx_destruct;
- (void)assetFetchResultProvider:(id)arg1 didChangeAssetFetchResult:(id)arg2 forAssetCollection:(id)arg3;
- (id)init;
- (void)socialLayerHighlightProvider:(id)arg1 didChangeSocialLayerHighlight:(id)arg2 forAsset:(id)arg3;

@end