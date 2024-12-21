/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HeartHealthDaemon.framework/HeartHealthDaemon
 */

@interface HRAtrialFibrillationEventDetector : NSObject <HDDataObserver, HDDatabaseProtectedDataObserver, HDDiagnosticObject, HDHealthDaemonReadyObserver> {
    bool  __unitTest_detectionDisabled;
    id /* block */  __unitTest_moreTachogramsRequestedHandler;
    id /* block */  __unitTest_processTachograms;
    id /* block */  __unitTest_userAlertedHandler;
    bool  __unitTesting;
    HRAtrialFibrillationAnalyticsCollector * _analyticsCollector;
    HDHRIrregularRhythmNotificationsFeatureAvailabilityManager * _availabilityManager;
    NSArray * _cachedConfirmationCycleSamples;
    NSNumber * _cachedLastAlgorithmVersionUsed;
    NSNumber * _cachedLastAnalyzedSampleAnchor;
    NSDate * _cachedLatestAnalyzedSampleDate;
    HDKeyValueDomain * _localKeyValueDomain;
    HRAtrialFibrillationNotificationManager * _notificationManager;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    int  _settingDidUpdateNotificationToken;
    HKFeatureStatusManager * _statusManager;
    HDKeyValueDomain * _syncedKeyValueDomain;
}

@property (nonatomic, readonly) NSArray *_unitTest_confirmationCycleSamples;
@property (nonatomic) bool _unitTest_detectionDisabled;
@property (nonatomic, readonly) NSNumber *_unitTest_lastAlgorithmVersionUsed;
@property (nonatomic, readonly) NSNumber *_unitTest_lastAnalyzedSampleAnchor;
@property (nonatomic, readonly) NSDate *_unitTest_latestAnalyzedSampleDate;
@property (nonatomic, copy) id /* block */ _unitTest_moreTachogramsRequestedHandler;
@property (nonatomic, copy) id /* block */ _unitTest_processTachograms;
@property (nonatomic, copy) id /* block */ _unitTest_userAlertedHandler;
@property (nonatomic) bool _unitTesting;
@property (nonatomic, retain) HDHRIrregularRhythmNotificationsFeatureAvailabilityManager *availabilityManager;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)_currentAlgorithmVersion;
- (id)_getProductVersionWithError:(id*)arg1;
- (id)_initWithAnalyticsCollector:(id)arg1 availabilityManager:(id)arg2 featureStatusManager:(id)arg3 profile:(id)arg4;
- (id)_processTachograms:(id)arg1 withAlgorithmVersion:(long long)arg2;
- (void)_queue_alertUserWithDate:(id)arg1 positiveTachogramUUIDs:(id)arg2;
- (bool)_queue_analyzeCurrentConfirmationCycleSamples:(id)arg1 withAlgorithmVersion:(long long)arg2;
- (void)_queue_analyzeFilteredSeriesSamples:(id)arg1 lastAnchor:(id)arg2;
- (void)_queue_analyzeTachogramsSinceLastAnchor;
- (id)_queue_confirmationCycleSamples;
- (bool)_queue_detectionDisabled;
- (bool)_queue_detectionDisabledWithFeatureStatus:(id)arg1;
- (void)_queue_endConfirmationCycleIfNeeded;
- (void)_queue_enqueueMaintainanceOperationForMissedTachograms;
- (id)_queue_filterSamplesByDateThreshold:(id)arg1;
- (void)_queue_forceHealthKitSync;
- (bool)_queue_inConfirmationCycle;
- (id)_queue_lastAlgorithmVersionUsed;
- (id)_queue_lastAnalyzedSampleAnchor;
- (id)_queue_latestAnalyzedSampleDate;
- (id)_queue_orderedConfirmationCycleSamplesFromSamples:(id)arg1 requestedUUIDs:(id)arg2;
- (id)_queue_orderedConfirmationCycleSamplesFromUUIDs:(id)arg1;
- (void)_queue_requestAnotherTachogram;
- (void)_queue_seriesSamplesAdded:(id)arg1 lastAnchor:(id)arg2;
- (void)_queue_setConfirmationCycleSamples:(id)arg1;
- (void)_queue_setLastAlgorithmVersionUsed:(id)arg1;
- (void)_queue_setLastAnalyzedSampleAnchor:(id)arg1;
- (void)_queue_setLatestAnalyzedSampleDate:(id)arg1;
- (id)_unitTest_confirmationCycleSamples;
- (bool)_unitTest_detectionDisabled;
- (id)_unitTest_lastAlgorithmVersionUsed;
- (id)_unitTest_lastAnalyzedSampleAnchor;
- (id)_unitTest_latestAnalyzedSampleDate;
- (id /* block */)_unitTest_moreTachogramsRequestedHandler;
- (id /* block */)_unitTest_processTachograms;
- (id /* block */)_unitTest_userAlertedHandler;
- (bool)_unitTesting;
- (id)availabilityManager;
- (void)daemonReady:(id)arg1;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(bool)arg2;
- (void)dealloc;
- (id)diagnosticDescription;
- (id)initWithProfile:(id)arg1 availabilityManager:(id)arg2 featureStatusManager:(id)arg3 notificationManager:(id)arg4;
- (id)initWithProfile:(id)arg1 availabilityManager:(id)arg2 notificationManager:(id)arg3;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)setAvailabilityManager:(id)arg1;
- (void)set_unitTest_detectionDisabled:(bool)arg1;
- (void)set_unitTest_moreTachogramsRequestedHandler:(id /* block */)arg1;
- (void)set_unitTest_processTachograms:(id /* block */)arg1;
- (void)set_unitTest_userAlertedHandler:(id /* block */)arg1;
- (void)set_unitTesting:(bool)arg1;

@end