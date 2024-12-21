/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLMediaAnalysisEmbeddingSearch : NSObject

+ (unsigned long long)_minimumNumberOfProbes;
+ (id)_numberOfProbesForEmbeddingSearchWithLimit:(int)arg1;
+ (double)_scalingFactorForNumberOfProbes;
+ (id)_searchWithEmbeddings:(id)arg1 photoLibraryURL:(id)arg2 searchOptions:(id)arg3 numberOfProbes:(id)arg4 error:(id*)arg5;
+ (id)fetchEmbeddingsWithAssetUUIDs:(id)arg1 photoLibraryURL:(id)arg2 error:(id*)arg3;
+ (bool)prewarmSearchWithConcurrencyLimit:(unsigned long long)arg1 photoLibraryURL:(id)arg2 error:(id*)arg3;
+ (id)searchWithEmbeddings:(id)arg1 photoLibraryURL:(id)arg2 searchOptions:(id)arg3 error:(id*)arg4;

@end