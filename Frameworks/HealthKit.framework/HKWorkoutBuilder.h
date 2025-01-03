/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKWorkoutBuilder : NSObject <HKStateMachineDelegate, HKWorkoutBuilderClientInterface, _HKXPCExportable> {
    double  _accumulatedElapsedTime;
    NSMutableDictionary * _activitiesPerUUID;
    id /* block */  _beginCollectionCompletionHandler;
    HKWorkoutBuilderConfiguration * _builderConfiguration;
    HKStateMachine * _constructionStateMachine;
    HKWorkoutActivity * _currentActivity;
    bool  _currentlyRunning;
    id /* block */  _endCollectionCompletionHandler;
    id /* block */  _finishWorkoutCompletionHandler;
    HKHealthStore * _healthStore;
    NSUUID * _identifier;
    double  _lastResumeTimestamp;
    NSDictionary * _metadata;
    HKTaskServerProxyProvider * _proxyProvider;
    NSObject<OS_dispatch_queue> * _resourceQueue;
    HKRetryableOperation * _retryableOperation;
    NSMutableDictionary * _seriesBuilders;
    long long  _serverConstructionState;
    NSMutableDictionary * _statisticsByType;
    id /* block */  _unitTest_failureHandler;
    id /* block */  _unitTest_recoveryFinishedHandler;
    id /* block */  _unitTest_serverStateChangedHandler;
    HKWorkoutConfiguration * _workoutConfiguration;
    NSDate * _workoutEndDate;
    NSArray * _workoutEvents;
    NSDate * _workoutStartDate;
}

@property (readonly, copy) NSDictionary *allStatistics;
@property (nonatomic, copy) HKWorkoutBuilderConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly, copy) HKDevice *device;
@property (nonatomic, readonly) NSArray *downhillRunEvents;
@property (readonly, copy) NSDate *endDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (nonatomic, readonly, copy) NSUUID *identifier;
@property (readonly) bool isCurrentlyRunning;
@property (readonly, copy) NSDictionary *metadata;
@property (nonatomic, readonly) HKTaskServerProxyProvider *proxyProvider;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *resourceQueue;
@property (nonatomic, retain) NSMutableDictionary *seriesBuilders;
@property (readonly, copy) NSDate *startDate;
@property (nonatomic, retain) NSMutableDictionary *statisticsByType;
@property (readonly) Class superclass;
@property (readonly, copy) NSArray *workoutActivities;
@property (readonly, copy) HKWorkoutConfiguration *workoutConfiguration;
@property (readonly, copy) NSArray *workoutEvents;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (long long)_collectionStateAtDate:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 sortedEvents:(id)arg4;
+ (id)_constructionStateMachineForBuilderConfiguration:(id)arg1 builderIdentifier:(id)arg2;
+ (double)_elapsedTimeAtDate:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 sortedEvents:(id)arg4;
+ (id)clientInterface;
+ (id)serverInterface;

- (void).cxx_destruct;
- (double)_currentElapsedTime;
- (id)_currentSnapshot;
- (void)_pushCurrentTargetState;
- (void)_recoverWithCompletion:(id /* block */)arg1;
- (void)_removeMetadata:(id)arg1 completion:(id /* block */)arg2;
- (void)_resourceQueue_addMetadata:(id)arg1 completion:(id /* block */)arg2;
- (void)_resourceQueue_addSamples:(id)arg1 completion:(id /* block */)arg2;
- (void)_resourceQueue_addWorkoutActivity:(id)arg1 completion:(id /* block */)arg2;
- (void)_resourceQueue_addWorkoutEvents:(id)arg1 completion:(id /* block */)arg2;
- (void)_resourceQueue_beginCollectionWithStartDate:(id)arg1 completion:(id /* block */)arg2;
- (bool)_resourceQueue_canAddMetadataInCurrentState;
- (void)_resourceQueue_endCollectionWithEndDate:(id)arg1 completion:(id /* block */)arg2;
- (id)_resourceQueue_endDateForSnapshotWithStartDate:(id)arg1;
- (id)_resourceQueue_eventsBetweenStartDate:(id)arg1 endDate:(id)arg2;
- (void)_resourceQueue_finishWorkoutWithCompletion:(id /* block */)arg1;
- (void)_resourceQueue_freezeSeriesBuilders;
- (void)_resourceQueue_markRecoveryRequired;
- (void)_resourceQueue_removeMetadata:(id)arg1 completion:(id /* block */)arg2;
- (id)_resourceQueue_seriesBuilderWithIdentifier:(id)arg1 type:(id)arg2;
- (void)_resourceQueue_setStatisticsComputationMethod:(long long)arg1 forType:(id)arg2;
- (void)_resourceQueue_setStatisticsMergeStrategy:(unsigned long long)arg1 forType:(id)arg2;
- (id)_resourceQueue_startDateForSnapshot;
- (void)_resourceQueue_updateActivityWithUUID:(id)arg1 addMetadata:(id)arg2 completion:(id /* block */)arg3;
- (void)_resourceQueue_updateActivityWithUUID:(id)arg1 endDate:(id)arg2 completion:(id /* block */)arg3;
- (void)_resourceQueue_updateDevice:(id)arg1;
- (void)_resourceQueue_updateElapsedTimeCache;
- (void)_resourceQueue_updateEvents:(id)arg1;
- (void)_restoreRecoveredSeriesBuildersWithCompletion:(id /* block */)arg1;
- (void)_setDevice:(id)arg1;
- (void)_setStatisticsComputationMethod:(long long)arg1 forType:(id)arg2;
- (void)_setStatisticsMergeStrategy:(unsigned long long)arg1 forType:(id)arg2;
- (void)addMetadata:(id)arg1 completion:(id /* block */)arg2;
- (void)addSamples:(id)arg1 completion:(id /* block */)arg2;
- (void)addWorkoutActivity:(id)arg1 completion:(id /* block */)arg2;
- (void)addWorkoutEvents:(id)arg1 completion:(id /* block */)arg2;
- (id)allStatistics;
- (void)beginCollectionWithStartDate:(id)arg1 completion:(id /* block */)arg2;
- (void)clientRemote_didBeginActivity:(id)arg1;
- (void)clientRemote_didChangeElapsedTimeBasisWithStartDate:(id)arg1 endDate:(id)arg2;
- (void)clientRemote_didEndActivity:(id)arg1;
- (void)clientRemote_didFailWithError:(id)arg1;
- (void)clientRemote_didFinishRecovery;
- (void)clientRemote_didRecoverSeriesBuilders:(id)arg1;
- (void)clientRemote_didUpdateActivities:(id)arg1;
- (void)clientRemote_didUpdateEvents:(id)arg1;
- (void)clientRemote_didUpdateMetadata:(id)arg1;
- (void)clientRemote_didUpdateStatistics:(id)arg1;
- (void)clientRemote_finishedWorkout:(id)arg1;
- (void)clientRemote_stateDidChange:(long long)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (void)clientRemote_synchronizeWithCompletion:(id /* block */)arg1;
- (id)configuration;
- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (void)currentZonesForType:(id)arg1 completion:(id /* block */)arg2;
- (id)description;
- (id)device;
- (void)discardWorkout;
- (double)elapsedTimeAtDate:(id)arg1;
- (void)endCollectionWithEndDate:(id)arg1 completion:(id /* block */)arg2;
- (id)endDate;
- (id)exportedInterface;
- (void)finishWorkoutWithCompletion:(id /* block */)arg1;
- (id)goal;
- (unsigned long long)goalType;
- (id)healthStore;
- (id)identifier;
- (id)init;
- (id)initWithHealthStore:(id)arg1 builderConfiguration:(id)arg2 builderIdentifier:(id)arg3;
- (id)initWithHealthStore:(id)arg1 configuration:(id)arg2 device:(id)arg3;
- (id)initWithHealthStore:(id)arg1 configuration:(id)arg2 goalType:(unsigned long long)arg3 goal:(id)arg4 device:(id)arg5;
- (bool)isCurrentlyRunning;
- (id)metadata;
- (id)proxyProvider;
- (id)remoteInterface;
- (id)resourceQueue;
- (id)seriesBuilderForType:(id)arg1;
- (id)seriesBuilders;
- (void)setConfiguration:(id)arg1;
- (void)setSeriesBuilders:(id)arg1;
- (void)setStatisticsByType:(id)arg1;
- (bool)shouldRetry;
- (id)startDate;
- (void)stateMachine:(id)arg1 didEnterState:(id)arg2 date:(id)arg3 error:(id)arg4;
- (void)stateMachine:(id)arg1 didTransition:(id)arg2 fromState:(id)arg3 toState:(id)arg4 date:(id)arg5 error:(id)arg6;
- (id)statisticsByType;
- (id)statisticsForType:(id)arg1;
- (void)unitTest_setFailureHandler:(id /* block */)arg1;
- (void)unitTest_setRecoveryFinishedHandler:(id /* block */)arg1;
- (void)unitTest_setServerStateChangeHandler:(id /* block */)arg1;
- (void)updateActivityWithUUID:(id)arg1 addMedatata:(id)arg2 completion:(id /* block */)arg3;
- (void)updateActivityWithUUID:(id)arg1 endDate:(id)arg2 completion:(id /* block */)arg3;
- (id)workoutActivities;
- (id)workoutConfiguration;
- (id)workoutEvents;

// Image: /System/Library/PrivateFrameworks/WorkoutUI.framework/WorkoutUI

- (id)downhillRunEvents;

@end
