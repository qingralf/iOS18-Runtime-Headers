/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _TtGC12HealthDaemon34EpochBasedSyncStateUpdaterDelegateC21HealthAppHealthDaemon24PinnedContentDaemonStore_ : NSObject <HDCloudSyncStateUpdaterDelegate> {
    void domain;
    void key;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logger;
    void maxDataSizeInBytes;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  store;
    void supportedSyncVersionRange;
}

@property (nonatomic, readonly) NSString *domain;
@property (nonatomic, readonly) NSString *key;
@property (nonatomic, readonly) struct { int x1; int x2; } supportedSyncVersionRange;

- (void).cxx_destruct;
- (id)domain;
- (long long)fetchCloudState:(id*)arg1 codableSyncState:(id)arg2 profile:(id)arg3 error:(id*)arg4;
- (bool)fetchLocalState:(id*)arg1 profile:(id)arg2 transaction:(id)arg3 error:(id*)arg4;
- (id)init;
- (id)key;
- (bool)persistCloudState:(id)arg1 profile:(id)arg2 error:(id*)arg3;
- (long long)shouldUpdateWithMergedState:(id*)arg1 cloudState:(id)arg2 localState:(id)arg3 profile:(id)arg4 transaction:(id)arg5 error:(id*)arg6;
- (struct { int x1; int x2; })supportedSyncVersionRange;
- (bool)updateCodableSyncState:(id)arg1 withMergeState:(id)arg2 profile:(id)arg3 error:(id*)arg4;

@end