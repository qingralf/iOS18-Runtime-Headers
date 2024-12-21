/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

@interface CLSPublicEventManager : NSObject {
    CLSPublicEventCache * _cache;
    double  _queryRadius;
}

@property (nonatomic) double queryRadius;

- (void).cxx_destruct;
- (id)cachedPublicEventsForMuid:(unsigned long long)arg1;
- (id)initWithURL:(id)arg1;
- (void)invalidateCacheItemsBeforeDateWithTimestamp:(double)arg1;
- (void)invalidateDiskCaches;
- (void)invalidateMemoryCaches;
- (id)loadInvalidationTokensAndInvalidateCachesIfNeeded;
- (id)publicEventsByTimeLocationTupleIdentifierForTimeLocationTuples:(id)arg1 progressBlock:(id /* block */)arg2;
- (double)queryRadius;
- (void)saveEventsForCacheInvalidation:(id)arg1;
- (void)setQueryRadius:(double)arg1;
- (id)urlForEventsForCacheInvalidation;

@end