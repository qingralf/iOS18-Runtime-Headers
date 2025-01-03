/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
 */

@interface BMStoreSource : BMSource {
    BMAccessClient * _accessClient;
    BMComputeSourceClient * _computeSource;
    BMStoreConfig * _config;
    Class  _eventDataClass;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    id  _lockStateRegistration;
    NSMutableArray * _pendingWrites;
    bool  _shouldSendMetrics;
    NSObject<OS_os_transaction> * _transaction;
    BMStreamDatastoreWriter * _writer;
}

@property (nonatomic, readonly) BMComputeSourceClient *computeSource;
@property (nonatomic) bool outOfProcess;

+ (id)_processPendingWritesQueue;

- (void).cxx_destruct;
- (void)_processPendingWrites;
- (bool)_writeEvent:(id)arg1 timestamp:(double)arg2 signpostID:(unsigned long long)arg3 notifyCompute:(bool)arg4;
- (id)computeSource;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 storeConfig:(id)arg2;
- (id)initWithIdentifier:(id)arg1 storeConfig:(id)arg2 accessClient:(id)arg3;
- (id)initWithIdentifier:(id)arg1 storeConfig:(id)arg2 accessClient:(id)arg3 eventDataClass:(Class)arg4;
- (bool)outOfProcess;
- (void)sendEvent:(id)arg1;
- (void)sendEvent:(id)arg1 timestamp:(double)arg2;
- (void)setOutOfProcess:(bool)arg1;

@end
