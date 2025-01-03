/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPassSnapshotter : NSObject {
    NSMutableArray * _currentSnapshotKeys;
    PKPassLibrary * _passLibrary;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _runsInBackgroundProcess;
    double  _scale;
    NSObject<OS_dispatch_semaphore> * _snapshotSem;
}

@property (nonatomic) bool runsInBackgroundProcess;

+ (void)purgeCache;
+ (void)purgeCacheOfPassSnapshotsWithUinqueID:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_cacheItem:(id)arg1 withKey:(id)arg2;
- (bool)_cachedImageWithKey:(id)arg1 completion:(id /* block */)arg2;
- (void)_performSnapshot:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 cacheKey:(id)arg3 completion:(id /* block */)arg4;
- (void)_prepareSnapshotViewWithPass:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 suppressedContent:(unsigned long long)arg3 cacheKey:(id)arg4 completion:(id /* block */)arg5;
- (void)_snapshotWithPass:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 suppressedContent:(unsigned long long)arg3 withCache:(bool)arg4 completion:(id /* block */)arg5;
- (void)dealloc;
- (id)init;
- (id)passLibrary;
- (bool)runsInBackgroundProcess;
- (void)setRunsInBackgroundProcess:(bool)arg1;
- (void)snapshotWithPass:(id)arg1 completion:(id /* block */)arg2;
- (void)snapshotWithPass:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 completion:(id /* block */)arg3;
- (void)snapshotWithPass:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 suppressedContent:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)snapshotWithUniqueID:(id)arg1 completion:(id /* block */)arg2;
- (void)snapshotWithUniqueID:(id)arg1 manifestHash:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3 completion:(id /* block */)arg4;
- (void)snapshotWithUniqueID:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 completion:(id /* block */)arg3;
- (void)snapshotWithUniqueID:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 suppressedContent:(unsigned long long)arg3 completion:(id /* block */)arg4;

@end
