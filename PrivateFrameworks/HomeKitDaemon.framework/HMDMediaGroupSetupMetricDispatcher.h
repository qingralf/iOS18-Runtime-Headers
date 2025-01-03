/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy
 */

@interface HMDMediaGroupSetupMetricDispatcher : HMFObject <HMFLogging, HMFTimerDelegate> {
    NSUUID * _activeGroupIdentifier;
    id /* block */  _currentUpTicksFactory;
    <HMDMediaGroupSetupMetricDispatcherDataSource> * _dataSource;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    <HMMLogEventSubmitting> * _logEventSubmitter;
    unsigned long long  _metricType;
    unsigned long long  _requestCommittedTimeMS;
    unsigned long long  _requestReceivedTimeMS;
    NSUUID * _setupSessionIdentifier;
    unsigned long long  _setupSessionStartTimeMS;
    HMFTimer * _submissionTimer;
    id /* block */  _submissionTimerFactory;
}

@property (retain) NSUUID *activeGroupIdentifier;
@property (readonly) id /* block */ currentUpTicksFactory;
@property (readonly) <HMDMediaGroupSetupMetricDispatcherDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) <HMMLogEventSubmitting> *logEventSubmitter;
@property (readonly) unsigned long long metricType;
@property (readonly) unsigned long long requestCommittedTimeMS;
@property (readonly) unsigned long long requestReceivedTimeMS;
@property (readonly, copy) NSUUID *setupSessionIdentifier;
@property (readonly) unsigned long long setupSessionStartTimeMS;
@property (retain) HMFTimer *submissionTimer;
@property (readonly) id /* block */ submissionTimerFactory;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_resetActiveTracking;
- (void)_submitLogEvent:(id)arg1 error:(id)arg2;
- (void)_submitLogEventWithTotalDuration:(unsigned long long)arg1 totalDurationSinceSetupSessionStart:(unsigned long long)arg2 error:(id)arg3;
- (id)activeGroupIdentifier;
- (unsigned long long)activeMetricType;
- (id /* block */)currentUpTicksFactory;
- (id)dataSource;
- (id)initWithDataSource:(id)arg1 logEventSubmitter:(id)arg2;
- (id)initWithDataSource:(id)arg1 logEventSubmitter:(id)arg2 currentUpTicksFactory:(id /* block */)arg3 submissionTimerFactory:(id /* block */)arg4;
- (id)logEventSubmitter;
- (void)markRequestCommittedForGroupIdentifier:(id)arg1 metricType:(unsigned long long)arg2 error:(id)arg3;
- (void)markRequestReceivedForGroupIdentifier:(id)arg1 metricType:(unsigned long long)arg2 setupSessionIdentifier:(id)arg3 setupSessionStartTimeMS:(unsigned long long)arg4;
- (unsigned long long)metricType;
- (unsigned long long)requestCommittedTimeMS;
- (unsigned long long)requestReceivedTimeMS;
- (void)setActiveGroupIdentifier:(id)arg1;
- (void)setSubmissionTimer:(id)arg1;
- (id)setupLatencyLogEvent:(unsigned long long)arg1 groupIdentifier:(id)arg2 isController:(bool)arg3 isPrimaryResident:(bool)arg4 totalDuration:(unsigned long long)arg5 setupSessionIdentifier:(id)arg6 totalDurationSinceSetupSessionStart:(unsigned long long)arg7 errorStage:(id)arg8;
- (id)setupSessionIdentifier;
- (unsigned long long)setupSessionStartTimeMS;
- (id)submissionTimer;
- (id /* block */)submissionTimerFactory;
- (void)timerDidFire:(id)arg1;

@end
