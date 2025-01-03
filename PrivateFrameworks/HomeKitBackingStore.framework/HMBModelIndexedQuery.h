/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

@interface HMBModelIndexedQuery : HMBModelUnindexedQuery {
    NSString * _indexNameSuffix;
    NSArray * _indexedColumns;
}

@property (nonatomic, readonly, copy) NSString *indexName;
@property (nonatomic, readonly) NSString *indexNameSuffix;
@property (nonatomic, readonly, copy) NSArray *indexedColumns;

+ (id)queryWithSQLPredicate:(id)arg1 ascending:(bool)arg2 indexedProperties:(id)arg3 arguments:(id)arg4;

- (void).cxx_destruct;
- (bool)hasExpectedIndexes;
- (id)indexName;
- (id)indexNameSuffix;
- (id)indexedColumns;
- (id)initWithSQLPredicate:(id)arg1 initialSequence:(id)arg2 maximumRowsPerSelect:(unsigned long long)arg3 indexNameSuffix:(id)arg4 indexedColumns:(id)arg5 arguments:(id)arg6;

@end
