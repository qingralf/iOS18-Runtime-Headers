/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorSearch.framework/VectorSearch
 */

@interface VSKClient : NSObject {
    _TtC12VectorSearch21VSKSwiftClientWrapper * clientWrapper;
}

- (void).cxx_destruct;
- (id)assetsWithIdentifiers:(id)arg1 attributeFilters:(id)arg2 pagination:(id)arg3 error:(id*)arg4;
- (id)assetsWithIdentifiers:(id)arg1 attributeFilters:(id)arg2 pagination:(id)arg3 includeVectors:(bool)arg4 error:(id*)arg5;
- (void)cooldown;
- (id)countWithError:(id*)arg1;
- (bool)deleteAllWithError:(id*)arg1;
- (id)deleteIdentifiers:(id)arg1 error:(id*)arg2;
- (id)deleteStringIdentifiers:(id)arg1 error:(id*)arg2;
- (bool)dropWithError:(id*)arg1;
- (id)embeddingCountWithError:(id*)arg1;
- (id)identifiersApplyingFilters:(id)arg1 error:(id*)arg2;
- (id)initWithConfig:(id)arg1 error:(id*)arg2;
- (id)insertAssets:(id)arg1 error:(id*)arg2;
- (bool)rebuildWithError:(id*)arg1;
- (id)searchByBatch:(id)arg1 attributeFilters:(id)arg2 limit:(int)arg3 batchSize:(id)arg4 numConcurrentReaders:(id)arg5 error:(id*)arg6;
- (id)searchByBatch:(id)arg1 attributeFilters:(id)arg2 limit:(int)arg3 includePayload:(bool)arg4 numberOfProbes:(id)arg5 batchSize:(id)arg6 numConcurrentReaders:(id)arg7 error:(id*)arg8;
- (id)searchByBatch:(id)arg1 identifiers:(id)arg2 attributeFilters:(id)arg3 limit:(int)arg4 fullScan:(bool)arg5 includePayload:(bool)arg6 numberOfProbes:(id)arg7 batchSize:(id)arg8 numConcurrentReaders:(id)arg9 error:(id*)arg10;
- (id)searchByBatch:(id)arg1 stringIdentifiers:(id)arg2 attributeFilters:(id)arg3 limit:(int)arg4 fullScan:(bool)arg5 includePayload:(bool)arg6 numberOfProbes:(id)arg7 batchSize:(id)arg8 numConcurrentReaders:(id)arg9 error:(id*)arg10;
- (id)searchByVector:(id)arg1 attributeFilters:(id)arg2 limit:(int)arg3 error:(id*)arg4;
- (id)searchByVector:(id)arg1 attributeFilters:(id)arg2 limit:(int)arg3 includePayload:(bool)arg4 numberOfProbes:(id)arg5 batchSize:(id)arg6 numConcurrentReaders:(id)arg7 error:(id*)arg8;
- (id)searchByVector:(id)arg1 identifiers:(id)arg2 attributeFilters:(id)arg3 limit:(int)arg4 fullScan:(bool)arg5 includePayload:(bool)arg6 numberOfProbes:(id)arg7 batchSize:(id)arg8 numConcurrentReaders:(id)arg9 error:(id*)arg10;
- (id)searchByVector:(id)arg1 stringIdentifiers:(id)arg2 attributeFilters:(id)arg3 limit:(int)arg4 fullScan:(bool)arg5 includePayload:(bool)arg6 numberOfProbes:(id)arg7 batchSize:(id)arg8 numConcurrentReaders:(id)arg9 error:(id*)arg10;
- (id)statisticsWithError:(id*)arg1;
- (id)stringIdentifiedAssetsWithIdentifiers:(id)arg1 attributeFilters:(id)arg2 pagination:(id)arg3 error:(id*)arg4;
- (id)stringIdentifiedAssetsWithIdentifiers:(id)arg1 attributeFilters:(id)arg2 pagination:(id)arg3 includeVectors:(bool)arg4 error:(id*)arg5;
- (id)stringIdentifiersApplyingFilters:(id)arg1 error:(id*)arg2;
- (void)warmup;
- (void)warmupWithNumConcurrentReaders:(long long)arg1;

@end
