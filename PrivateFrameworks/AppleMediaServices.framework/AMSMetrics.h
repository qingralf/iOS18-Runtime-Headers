/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSMetrics : NSObject <AMSBagConsumer, AMSMetricsProtocol> {
    <AMSBagProtocol> * _bag;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _bagLock;
    NSString * _containerId;
    AMSMetricsFlushOperation * _currentFlushOperation;
    AMSMetricsDatabaseDataSource * _databaseSource;
    long long  _destination;
    AMSEngagement * _engagement;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _engagementLock;
    NSMutableArray * _enqueuedOperations;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _enqueuedOperationsLock;
    id /* block */  _flushIntervalBlock;
    NSDate * _flushIntervalStartTime;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _flushModeLock;
    id /* block */  _flushOnDidBecomeActiveBlock;
    Class  _flushTaskClass;
    bool  _flushTimerEnabled;
    _Atomic bool  _flushingDisabled;
    bool  _includeMMeClientInfoAndDeviceHeaders;
    long long  _maxBatchSize;
    long long  _maxRequestCount;
    unsigned long long  _metricsSigningFlavour;
    bool  _monitorsLifecycleEvents;
    AMSTreatmentStore * _treatmentStore;
}

@property (nonatomic, retain) <AMSBagProtocol> *bag;
@property (nonatomic, retain) <AMSMetricsBagContract> *bagContract;
@property (nonatomic, readonly) NSString *containerId;
@property (nonatomic, retain) AMSMetricsDatabaseDataSource *databaseSource;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) long long destination;
@property (nonatomic, retain) AMSEngagement *engagement;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } engagementLock;
@property (nonatomic, readonly) long long eventCount;
@property (nonatomic, copy) id /* block */ flushIntervalBlock;
@property (nonatomic, retain) NSDate *flushIntervalStartTime;
@property (nonatomic, copy) id /* block */ flushOnDidBecomeActiveBlock;
@property (nonatomic) bool flushTimerEnabled;
@property (nonatomic) bool flushingDisabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool includeMMeClientInfoAndDeviceHeaders;
@property (nonatomic) long long maxBatchSize;
@property (nonatomic) long long maxRequestCount;
@property (nonatomic) unsigned long long metricsSigningFlavour;
@property (nonatomic) bool monitorsLifecycleEvents;
@property (readonly) Class superclass;
@property (nonatomic, retain) AMSTreatmentStore *treatmentStore;

+ (bool)appAnalyticsAllowed;
+ (id)bagKeySet;
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)createBagForSubProfile;
+ (bool)diagnosticsSubmissionAllowed;
+ (bool)disableBackgroundMetrics;
+ (bool)flushDelayEnabled;
+ (bool)flushTimerEnabled;
+ (id)internalInstanceUsingBag:(id)arg1;
+ (bool)recordAppAnalyticsForEvent:(id)arg1 bugType:(id)arg2;
+ (id)serverTimeFromDate:(id)arg1;
+ (id)serverTimeFromTimeInterval:(double)arg1;
+ (void)setDisableBackgroundMetrics:(bool)arg1;
+ (void)setFlushDelayEnabled:(bool)arg1;
+ (void)setFlushTimerEnabled:(bool)arg1;
+ (id)sharedTimerQueue;
+ (double)timeIntervalFromServerTime:(id)arg1;

- (void).cxx_destruct;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_beginFlushIntervalWithStyle:(long long)arg1 events:(id)arg2;
- (id)_determineFlushStrategyWithDataSource:(id)arg1 topic:(id)arg2;
- (id)_enqueueFigaroEvents:(id)arg1;
- (id)_flushDataSource:(id)arg1 topic:(id)arg2;
- (void)_flushIntervalInvalidate;
- (double)_flushIntervalWithConfiguration:(id)arg1 forEvents:(id)arg2;
- (void)_flushTimerEnabledChanged;
- (void)_handleFlushIntervalWithStyle:(long long)arg1;
- (id)_modifiedEvents:(id)arg1;
- (void)_processOperationQueue;
- (bool)_scheduledFlushAllowedForStyle:(long long)arg1;
- (void)_showTTRWithEvent:(id)arg1;
- (id)bag;
- (id)bagContract;
- (void)cancel;
- (id)containerId;
- (id)databaseSource;
- (void)dealloc;
- (long long)destination;
- (void)dropEvents;
- (id)engagement;
- (struct os_unfair_lock_s { unsigned int x1; })engagementLock;
- (id)enqueueAsyncEvents:(id)arg1;
- (void)enqueueEvent:(id)arg1;
- (void)enqueueEvents:(id)arg1;
- (long long)eventCount;
- (id)flush;
- (id)flushEvents:(id)arg1;
- (id /* block */)flushIntervalBlock;
- (id)flushIntervalStartTime;
- (id /* block */)flushOnDidBecomeActiveBlock;
- (bool)flushTimerEnabled;
- (id)flushTopic:(id)arg1;
- (bool)flushingDisabled;
- (bool)includeMMeClientInfoAndDeviceHeaders;
- (id)initWithContainerID:(id)arg1 bag:(id)arg2;
- (id)initWithContainerID:(id)arg1 bag:(id)arg2 flushTaskClass:(Class)arg3;
- (id)initWithContainerId:(id)arg1 bagContract:(id)arg2;
- (long long)maxBatchSize;
- (long long)maxRequestCount;
- (unsigned long long)metricsSigningFlavour;
- (bool)monitorsLifecycleEvents;
- (id)promiseForEnqueueingEvents:(id)arg1;
- (void)setBag:(id)arg1;
- (void)setBagContract:(id)arg1;
- (void)setDatabaseSource:(id)arg1;
- (void)setDestination:(long long)arg1;
- (void)setEngagement:(id)arg1;
- (void)setEngagementLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setFlushIntervalBlock:(id /* block */)arg1;
- (void)setFlushIntervalStartTime:(id)arg1;
- (void)setFlushOnDidBecomeActiveBlock:(id /* block */)arg1;
- (void)setFlushTimerEnabled:(bool)arg1;
- (void)setFlushingDisabled:(bool)arg1;
- (void)setIncludeMMeClientInfoAndDeviceHeaders:(bool)arg1;
- (void)setMaxBatchSize:(long long)arg1;
- (void)setMaxRequestCount:(long long)arg1;
- (void)setMetricsSigningFlavour:(unsigned long long)arg1;
- (void)setMonitorsLifecycleEvents:(bool)arg1;
- (void)setTreatmentStore:(id)arg1;
- (id)treatmentStore;

@end
