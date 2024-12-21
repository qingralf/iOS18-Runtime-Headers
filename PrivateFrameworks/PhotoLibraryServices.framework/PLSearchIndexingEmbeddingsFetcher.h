/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLSearchIndexingEmbeddingsFetcher : NSObject {
    NSMutableDictionary * _mutableEmbeddingsByUUID;
    NSError * _prefetchError;
}

- (void).cxx_destruct;
- (id)embeddingForAsset:(id)arg1 indexingContext:(id)arg2 allowFetchIfMissing:(bool)arg3;
- (id)init;
- (void)prefetchEmbeddingsForAssets:(id)arg1 indexingContext:(id)arg2;

@end