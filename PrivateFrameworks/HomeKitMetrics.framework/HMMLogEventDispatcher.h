/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitMetrics.framework/HomeKitMetrics
 */

@interface HMMLogEventDispatcher : NSObject <HMMLogEventDispatching> {
    NSObject<OS_dispatch_queue> * _clientQueue;
    <HMMLogEventDispatchingDataSource> * _dataSource;
    bool  _isProcessingPending;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMapTable * _observersByClass;
    NSMapTable * _observersByProtocol;
    NSMutableArray * _pendingLogEvents;
    bool  _shouldFault;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property <HMMLogEventDispatchingDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_checkPendingLogEventBuffer;
- (id)_getOrCreateObserversForEventClass:(Class)arg1;
- (void)addObserver:(id)arg1 forEventClass:(Class)arg2;
- (void)addObserver:(id)arg1 forEventClasses:(id)arg2;
- (void)addObserver:(id)arg1 forProtocol:(id)arg2;
- (id)clientQueue;
- (id)dataSource;
- (void)handleMemoryPressureState:(long long)arg1;
- (id)init;
- (void)processAndSubmitLogEvents;
- (void)removeObserver:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)submitLogEvent:(id)arg1;
- (void)submitLogEvent:(id)arg1 error:(id)arg2;

@end
