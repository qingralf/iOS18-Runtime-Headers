/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthHearingDaemon.framework/HealthHearingDaemon
 */

@interface HDHeadphoneDoseManager : NSObject <HDDataObserver, HDDatabaseProtectedDataObserver, HDHeadphoneExposureNotificationSyncObserver, HDProfileReadyObserver, HDQuantitySeriesObserver> {
    HDDataCollectionAssertion * _collectionAssertion;
    double  _dose;
    bool  _enabled;
    HDHeadphoneDoseMetadataStore * _keyValueStore;
    NSDate * _lastLockDateForAnalytics;
    bool  _lastUpdateSuppressedUserNotification;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HDHeadphoneExposureNotificationCenter * _notificationCenter;
    HDHeadphoneExposureNotificationSyncManager * _notificationSyncManager;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    HDHeadphoneAudioExposureStatisticsCalculator * _statisticsCalculator;
    id /* block */  _unitTesting_didFinishResetDosageToFireDate;
    id /* block */  _unitTesting_didNotifyUser;
    id /* block */  _unitTesting_didObserveProtectedDataHandler;
    id /* block */  _unitTesting_didUpdateHandler;
    id /* block */  _unitTesting_profileDidBecomeReadyHandler;
    id /* block */  _unitTesting_protectedDataDidBecomeAvailable;
    id /* block */  _unitTesting_updateCurrentDoseNowDateProvider;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HDHeadphoneAudioExposureStatisticsCalculator *unitTesting_calculator;
@property (nonatomic, copy) id /* block */ unitTesting_didFinishResetDosageToFireDate;
@property (nonatomic, copy) id /* block */ unitTesting_didNotifyUser;
@property (nonatomic, copy) id /* block */ unitTesting_didObserveProtectedDataHandler;
@property (nonatomic, copy) id /* block */ unitTesting_didUpdateHandler;
@property (nonatomic, readonly) HDHeadphoneDoseMetadataStore *unitTesting_keyValueStore;
@property (nonatomic, copy) id /* block */ unitTesting_profileDidBecomeReadyHandler;
@property (nonatomic, copy) id /* block */ unitTesting_protectedDataDidBecomeAvailable;
@property (nonatomic, copy) id /* block */ unitTesting_updateCurrentDoseNowDateProvider;

- (void).cxx_destruct;
- (id)_fetchDoseLimitInfoWithError:(id*)arg1;
- (void)_handleSignificantTimeChangeNotification:(id)arg1;
- (void)_headphoneExposureNotificationsEnabledDidChange:(id)arg1;
- (id)_infoDictWithError:(id*)arg1;
- (id)_infoWithError:(id*)arg1;
- (id)_initWithProfile:(id)arg1 keyValueStore:(id)arg2 calculator:(id)arg3;
- (id)_initWithProfile:(id)arg1 keyValueStore:(id)arg2 calculator:(id)arg3 unitTesting_didUpdateHandler:(id /* block */)arg4;
- (id)_initWithProfile:(id)arg1 keyValueStore:(id)arg2 calculator:(id)arg3 unitTesting_profileDidBecomeReadyHandler:(id /* block */)arg4 unitTesting_didObserveProtectedDataHandler:(id /* block */)arg5 unitTesting_didUpdateHandler:(id /* block */)arg6;
- (id)_lock_pruneWithNowDate:(id)arg1 limit:(unsigned long long)arg2 error:(id*)arg3;
- (bool)_lock_rebuildWithAssertion:(id)arg1 error:(id*)arg2;
- (bool)_lock_rebuildWithAssertion:(id)arg1 resetSyncNotification:(bool)arg2 error:(id*)arg3;
- (void)_lock_setCollectionAssertion:(id)arg1;
- (void)_lock_updateCollectionAssertionForDoseAccumulated:(double)arg1;
- (bool)_lock_updateCurrentDoseUsingStatisticsResult:(id)arg1 assertion:(id)arg2 error:(id*)arg3;
- (void)_lock_updateIsEnabledForInitialSetup:(bool)arg1 assertion:(id)arg2;
- (void)_lock_updateWithNotifications:(id)arg1 journaled:(bool)arg2 assertion:(id)arg3;
- (void)_lock_updateWithRemoteNotificationDismissalDate:(id)arg1 assertion:(id)arg2;
- (bool)_overrideDoseLimit:(id)arg1 error:(id*)arg2;
- (id)_pruneWithNowDate:(id)arg1 limit:(unsigned long long)arg2 error:(id*)arg3;
- (bool)_rebuildWithError:(id*)arg1;
- (void)_registerForSignificantTimeChangeNotification;
- (void)_reportSyncedHeadphoneNotificationSamples:(id)arg1 journaled:(bool)arg2 nowDate:(id)arg3;
- (id)_takeAccessibilityAssertion;
- (void)_unregisterForSignificantTimeChangeNotification;
- (void)_updateCurrentDoseFromResult:(id)arg1 context:(id)arg2 sampleCount:(unsigned long long)arg3 assertion:(id)arg4;
- (void)_updateWithRemoteNotificationDismissalDate:(id)arg1 assertion:(id)arg2;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(bool)arg2;
- (void)dealloc;
- (void)didReceiveResetDosageToFireDate:(id)arg1;
- (id)initWithProfile:(id)arg1;
- (void)profile:(id)arg1 didDiscardSeriesOfType:(id)arg2;
- (void)profileDidBecomeReady:(id)arg1;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)samplesJournaled:(id)arg1 type:(id)arg2;
- (void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2;
- (void)setUnitTesting_didFinishResetDosageToFireDate:(id /* block */)arg1;
- (void)setUnitTesting_didNotifyUser:(id /* block */)arg1;
- (void)setUnitTesting_didObserveProtectedDataHandler:(id /* block */)arg1;
- (void)setUnitTesting_didUpdateHandler:(id /* block */)arg1;
- (void)setUnitTesting_profileDidBecomeReadyHandler:(id /* block */)arg1;
- (void)setUnitTesting_protectedDataDidBecomeAvailable:(id /* block */)arg1;
- (void)setUnitTesting_updateCurrentDoseNowDateProvider:(id /* block */)arg1;
- (id /* block */)transactionalQuantityInsertHandlerForProfile:(id)arg1 journaled:(bool)arg2 count:(long long)arg3;
- (id)unitTesting_calculator;
- (id /* block */)unitTesting_didFinishResetDosageToFireDate;
- (id /* block */)unitTesting_didNotifyUser;
- (id /* block */)unitTesting_didObserveProtectedDataHandler;
- (void)unitTesting_didReceiveResetDosageToFireDate:(id)arg1;
- (id /* block */)unitTesting_didUpdateHandler;
- (id)unitTesting_keyValueStore;
- (id /* block */)unitTesting_profileDidBecomeReadyHandler;
- (id /* block */)unitTesting_protectedDataDidBecomeAvailable;
- (id /* block */)unitTesting_updateCurrentDoseNowDateProvider;

@end
