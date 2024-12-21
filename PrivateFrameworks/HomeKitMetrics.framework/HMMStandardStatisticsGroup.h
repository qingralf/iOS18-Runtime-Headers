/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitMetrics.framework/HomeKitMetrics
 */

@interface HMMStandardStatisticsGroup : NSObject <HMMStatisticsGroup> {
    HMMCoreDataNamedGroup * _coreDataGroup;
    long long  _coreDataGroupToken;
    HMMCoreDataCounterStorage * _coreDataStorage;
    NSMutableDictionary * _ephemeralContainers;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _observers;
    <HMMCounterDatePartitionProvider> * _partitionProvider;
}

@property (nonatomic, retain) HMMCoreDataNamedGroup *coreDataGroup;
@property (nonatomic, readonly) HMMCoreDataCounterStorage *coreDataStorage;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSArray *ephemeralContainerNames;
@property (nonatomic, readonly) NSMutableDictionary *ephemeralContainers;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableDictionary *observers;
@property (nonatomic, readonly) <HMMCounterDatePartitionProvider> *partitionProvider;
@property (readonly) Class superclass;

+ (void)deletePartitionsAfterDate:(id)arg1 coreDataStorage:(id)arg2;
+ (void)deletePartitionsBeforeDate:(id)arg1 coreDataStorage:(id)arg2;
+ (void)deleteStatisticsUsingPredicate:(id)arg1 coreDataStorage:(id)arg2;
+ (id)groupFromSpecifier:(id)arg1 partitionProvider:(id)arg2 coreDataStorage:(id)arg3;

- (void).cxx_destruct;
- (bool)addEphemeralContainerWithName:(id)arg1;
- (void)addMaxValueObserver:(id)arg1 forStatistics:(id)arg2;
- (void)addValue:(long long)arg1 toStatistics:(id)arg2;
- (id)coreDataGroup;
- (id)coreDataStorage;
- (id)datePartitions;
- (void)deactivateEphemeralContainerWithName:(id)arg1;
- (id)ephemeralContainerNames;
- (id)ephemeralContainers;
- (id)initWithCoreDataGroup:(id)arg1 partitionProvider:(id)arg2 coreDataStorage:(id)arg3;
- (void)notifyObserversForStatistics:(id)arg1 previousMax:(long long)arg2 newMax:(long long)arg3;
- (id)observers;
- (id)observersForStatistics:(id)arg1;
- (id)partitionProvider;
- (void)removeEphemeralContainerWithName:(id)arg1;
- (void)setCoreDataGroup:(id)arg1;
- (id)statistics:(id)arg1 inDatePartition:(id)arg2;
- (id)statistics:(id)arg1 inEphemeralContainer:(id)arg2;
- (id)statisticsInDatePartition:(id)arg1;
- (id)statisticsInEphemeralContainer:(id)arg1;

@end