/* Generated by RuntimeBrowser.
 */

@protocol SearchUIBatchedCachePrewarmer <NSObject>

@required

- (TLKAsyncCache *)cacheToPrewarm;
- (NSArray *)itemsToBatchPreFetchForRowModel:(SearchUIRowModel *)arg1;

@end