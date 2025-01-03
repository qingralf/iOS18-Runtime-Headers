/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDWatchSettingsReconciliationManager : NSObject <HDFeatureSettingsManagerObserver, HDHealthDaemonReadyObserver, HDProfileReadyObserver> {
    NSString * _debugIdentifier;
    <HDWatchSettingsReconciliationManagerDelegate> * _delegate;
    NSObject<OS_os_log> * _loggingCategory;
    NSArray * _managedKeys;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    NSUserDefaults * _userDefaults;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <HDWatchSettingsReconciliationManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (void).cxx_destruct;
- (void)_queue_applyReconciledValueFromSettingValues:(id)arg1 forSettingKeys:(id)arg2 completion:(id /* block */)arg3;
- (void)_queue_reconcileValuesForAllKeys;
- (void)_queue_reconcileValuesForKeys:(id)arg1;
- (id)_queue_settingValuesForSettingKeys:(id)arg1 error:(id*)arg2;
- (void)_startKeyValueObserving;
- (void)daemonReady:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)featureSettingsManager:(id)arg1 didUpdateSettingsForFeatureIdentifier:(id)arg2;
- (id)initWithProfile:(id)arg1 userDefaults:(id)arg2 managedKeys:(id)arg3 debugIdentifier:(id)arg4 loggingCategory:(id)arg5;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)profileDidBecomeReady:(id)arg1;
- (void)setDelegate:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HealthMenstrualCyclesDaemon.framework/HealthMenstrualCyclesDaemon

- (id)initWithProfile:(id)arg1 userDefaults:(id)arg2;

@end
