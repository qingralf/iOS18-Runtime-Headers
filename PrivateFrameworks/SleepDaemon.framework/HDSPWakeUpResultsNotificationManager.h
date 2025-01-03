/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
 */

@interface HDSPWakeUpResultsNotificationManager : NSObject <HDSPDiagnosticsProvider, HDSPEnvironmentAware, HDSPNotificationObserver, HDSPSleepEventHandler, HDSPSleepEventProvider, HDSPSleepScheduleModelObserver, HDSPSleepScheduleStateObserver, HDSPTimeChangeObserver, HDSPWakeUpResultsNotificationStateMachineDelegate, HDSPWakeUpResultsNotificationStateMachineInfoProvider> {
    HDSPEnvironment * _environment;
    <HKSPMutexProvider> * _mutexProvider;
    NAFuture * _queryResultFuture;
    <HDSPActivityScheduler> * _retryAttemptScheduler;
    <HDSPSleepEventDelegate> * _sleepEventDelegate;
    HKSHSleepMetricsEngine * _sleepMetricsEngine;
    HDSPWakeUpResultsNotificationStateMachine * _stateMachine;
}

@property (nonatomic, readonly) <NAScheduler> *callbackScheduler; /* unknown property attribute: ? */
@property (nonatomic, readonly) NSDate *currentDate;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HDSPEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isWakeUpResultsNotificationEnabled;
@property (nonatomic, readonly) <HKSPMutexProvider> *mutexProvider;
@property (nonatomic, readonly, copy) NSString *providerIdentifier;
@property (nonatomic, readonly) NAFuture *queryResultFuture;
@property (nonatomic, readonly) <HDSPActivityScheduler> *retryAttemptScheduler;
@property (nonatomic) <HDSPSleepEventDelegate> *sleepEventDelegate;
@property (nonatomic, readonly) HKSHSleepMetricsEngine *sleepMetricsEngine;
@property (nonatomic, readonly) HDSPWakeUpResultsNotificationStateMachine *stateMachine;
@property (readonly) Class superclass;

+ (id)retryActivity;
+ (id)retryCriteria;

- (void).cxx_destruct;
- (id)_currentState;
- (id)_fetchSleepDaySummariesForMorningIndexRange:(struct { long long x1; long long x2; })arg1 healthStore:(id)arg2;
- (id)_fetchUserFirstNameWithHealthStore:(id)arg1;
- (bool)_isDelayingForTracking;
- (bool)_isWaitingForWakeUp;
- (void)_lock_startQuery;
- (id)_sleepDaySummariesFromResult:(id)arg1 error:(id*)arg2;
- (id)_sleepScheduleModel;
- (double)_trackingDelayDuration;
- (void)_updateState;
- (id)_userFirstNameFromResult:(id)arg1;
- (void)_withLock:(id /* block */)arg1;
- (id)currentDate;
- (id)diagnosticDescription;
- (id)environment;
- (void)environmentDidBecomeReady:(id)arg1;
- (void)environmentWillBecomeReady:(id)arg1;
- (id)eventIdentifiers;
- (void)executeQuery;
- (id)initWithEnvironment:(id)arg1;
- (id)initWithEnvironment:(id)arg1 retryAttemptScheduler:(id)arg2;
- (bool)isWakeUpResultsNotificationEnabled;
- (id)mutexProvider;
- (id)notificationAttemptWindowForWakeUpBeforeDate:(id)arg1;
- (id)notificationListener:(id)arg1 didReceiveNotificationWithName:(id)arg2;
- (id)performImmediateQueryForNotification;
- (void)postResultsNotification;
- (id)providerIdentifier;
- (id)queryResultFuture;
- (id)retryAttemptScheduler;
- (void)scheduleRetryAttempt;
- (void)scheduleStateExpiration;
- (void)setSleepEventDelegate:(id)arg1;
- (void)significantTimeChangeDetected:(id)arg1;
- (id)sleepEventDelegate;
- (void)sleepEventIsDue:(id)arg1;
- (id)sleepMetricsEngine;
- (void)sleepScheduleModelManager:(id)arg1 didUpdateSleepScheduleModel:(id)arg2;
- (void)sleepScheduleStateDidChange:(unsigned long long)arg1 previousState:(unsigned long long)arg2 reason:(unsigned long long)arg3;
- (void)startObservingProtectedHealthDataAvailability;
- (id)stateMachine;
- (void)stopObservingProtectedHealthDataAvailability;
- (void)unscheduleRetryAttempt;
- (void)unscheduleStateExpiration;
- (id)upcomingEventsDueAfterDate:(id)arg1;

@end
