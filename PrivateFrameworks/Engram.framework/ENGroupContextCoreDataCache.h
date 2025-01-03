/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Engram.framework/Engram
 */

@interface ENGroupContextCoreDataCache : NSObject <ENGroupContextCacheMiddleware> {
    NSPersistentContainer * _container;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSPersistentContainer *container;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_groupFromCypher:(id)arg1 groupID:(id)arg2 applicationData:(id)arg3 context:(id)arg4 completion:(id /* block */)arg5;
- (id)container;
- (void)deleteAllKnownGroupsForGroupContext:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteCachedValueForForGroupContext:(id)arg1 withGroupID:(id)arg2 completion:(id /* block */)arg3;
- (void)groupContext:(id)arg1 cacheGroup:(id)arg2 completion:(id /* block */)arg3;
- (void)groupContext:(id)arg1 cachedGroupWithID:(id)arg2 completion:(id /* block */)arg3;
- (void)groupContext:(id)arg1 fetchAllKnownGroups:(id /* block */)arg2;
- (void)groupContext:(id)arg1 latestCachedGroupWithStableID:(id)arg2 completion:(id /* block */)arg3;
- (id)initInMemoryCacheWithQueue:(id)arg1;
- (id)initOnDiskCacheWithContainerURL:(id)arg1 Queue:(id)arg2;
- (id)initWithType:(unsigned long long)arg1 containerURL:(id)arg2 queue:(id)arg3;
- (void)loadWithCompletion:(id /* block */)arg1;
- (long long)middlewareCacheCostForContext:(id)arg1;
- (id)queue;
- (void)setContainer:(id)arg1;
- (void)setQueue:(id)arg1;

@end
