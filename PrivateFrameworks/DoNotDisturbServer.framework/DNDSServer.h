/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

@interface DNDSServer : NSObject <DNDSAppFocusConfigurationCoordinatorDelegate, DNDSAppForegroundTriggerManagerDataSource, DNDSAssertionSyncManagerDataSource, DNDSAssertionSyncManagerDelegate, DNDSDrivingTriggerManagerDataSource, DNDSEventBehaviorResolverDataSource, DNDSGamingTriggerManagerDataSource, DNDSGlobalConfigurationManagerDelegate, DNDSHearingTestTriggerManagerDataSource, DNDSLegacyAssertionSyncManagerDataSource, DNDSLifetimeMonitorDataSource, DNDSLifetimeMonitorDelegate, DNDSLocationLifetimeMonitorDataSource, DNDSMeDeviceServiceListener, DNDSMindfulnessTriggerManagerDataSource, DNDSModeConfigurationManagerDelegate, DNDSPairedDeviceStateMonitorDelegate, DNDSReachabilityDelegate, DNDSRemoteAppConfigurationServiceProviderDelegate, DNDSRemoteAvailabilityServiceProviderDelegate, DNDSRemoteServiceProviderDelegate, DNDSScheduleLifetimeMonitorDataSource, DNDSScheduleManagerDataSource, DNDSSettingsManagerDelegate, DNDSSettingsSyncManagerDataSource, DNDSSettingsSyncManagerDelegate, DNDSSleepingTriggerManagerDataSource, DNDSSmartTriggerManagerDataSource, DNDSSystemFocusConfigurationCoordinatorDelegate, DNDSWorkoutTriggerManagerDataSource> {
    DNDSAppConfigurationManager * _appConfigurationManager;
    DNDSRemoteAppConfigurationServiceProvider * _appConfigurationServiceProvider;
    DNDSAppFocusConfigurationCoordinator * _appFocusConfigurationCoordinator;
    DNDSAppForegroundTriggerManager * _appForegroundTriggerManager;
    DNDSAppInfoCache * _appInfoCache;
    <DNDSAssertionSyncManager> * _assertionSyncManager;
    DNDSAuxiliaryStateMonitor * _auxiliaryStateMonitor;
    DNDSRemoteAvailabilityServiceProvider * _availabilityServiceProvider;
    DNDSBiomeDonationManager * _biomeDonationManager;
    DNDSCalendarEventLifetimeMonitor * _calendarEventLifetimeMonitor;
    DNDSClientDetailsProvider * _clientDetailsProvider;
    DNDSContactMonitor * _contactMonitor;
    DNDSDrivingTriggerManager * _drivingTriggerManager;
    DNDSEventBehaviorResolver * _eventBehaviorResolver;
    DNDSXPCEventStream * _eventStream;
    DNDSXPCEventPublisher * _focusConfigurationEventPublisher;
    STFocusStatusDomainPublisher * _focusStatusDomainPublisher;
    DNDSGamingTriggerManager * _gamingTriggerManager;
    DNDSGlobalConfigurationManager * _globalConfigurationManager;
    DNDSGlobalConfigurationStore * _globalConfigurationStore;
    DNDSHearingTestTriggerManager * _hearingTestTriggerManager;
    IDSService * _idsCloudService;
    IDSService * _idsLocalService;
    DNDSIDSSyncEngine * _idsSyncEngine;
    DNDSIntelligentBehaviorResolver * _intelligentBehaviorResolver;
    <DNDSKeybagStateProviding> * _keybag;
    FBSDisplayLayoutMonitor * _layoutMonitor;
    <DNDSAssertionSyncManager> * _legacyAssertionSyncManager;
    NSArray * _lifetimeMonitors;
    DNDSLocationLifetimeMonitor * _locationLifetimeMonitor;
    unsigned long long  _lockState;
    unsigned long long  _lostModeState;
    DNDSMeDeviceService * _meDeviceService;
    DNDSMetricsManager * _metricsManager;
    DNDSMindfulnessTriggerManager * _mindfulnessTriggerManager;
    DNDSModeAssertionManager * _modeAssertionManager;
    DNDSModeConfigurationManager * _modeConfigurationManager;
    DNDSModeConfigurationsStore * _modeConfigurationsStore;
    DNDSPairedDeviceStateMonitor * _pairedDeviceStateMonitor;
    DNDSPlaceholderModeManager * _placeholderModeManager;
    NSObject<OS_dispatch_queue> * _queue;
    DNDSReachability * _reachability;
    DNDSScheduleLifetimeMonitor * _scheduleLifetimeMonitor;
    DNDSScheduleManager * _scheduleManager;
    DNDSRemoteServiceProvider * _serviceProvider;
    DNDSSettingsManager * _settingsManager;
    <DNDSSettingsSyncManager> * _settingsSyncManager;
    DNDSSleepingTriggerManager * _sleepingTriggerManager;
    DNDSSmartTriggerManager * _smartTriggerManager;
    DNDSStateProvider * _stateProvider;
    DNDSSyncEngine * _syncEngine;
    DNDSSystemFocusConfigurationCoordinator * _systemFocusConfigurationCoordinator;
    DNDSUserAvailabilityCoordinator * _userAvailabilityCoordinator;
    DNDSWorkoutTriggerManager * _workoutTriggerManager;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property unsigned long long lockState;
@property unsigned long long lostModeState;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_activeDateIntervalForModeAssertion:(id)arg1 currentlyActive:(bool)arg2;
- (id)_allModes;
- (id)_createDefaultModeForWorkoutTriggerIfNecessary;
- (void)_forceConfigurationSyncIfNeededWithUpdateResult:(id)arg1;
- (void)_handleSignificantTimeChange;
- (id)_invalidateModeAssertionForClientIdentifier:(id)arg1 reason:(unsigned long long)arg2 reasonOverride:(unsigned long long)arg3 details:(id)arg4 error:(id*)arg5;
- (void)_migrateBypassSettingsIfNeeded;
- (void)_migrateDefaultDoNotDisturbModeIfNeeded;
- (void)_migrateReduceInterruptionsIfNeeded;
- (void)_queue_handlePairedDeviceAndSyncSettingsChange;
- (void)_queue_resume;
- (void)_queue_updateScheduleManagerLifetimeMonitorsAndStateForReason:(unsigned long long)arg1 source:(long long)arg2;
- (void)_queue_updateScheduleManagerLifetimeMonitorsAndStateForReason:(unsigned long long)arg1 source:(long long)arg2 options:(long long)arg3;
- (void)_queue_validateIDSSyncEngine;
- (id)_scheduleSettingsForModeConfigurations;
- (id)_scheduleSettingsFromDefaultScheduleTrigger;
- (id)_scheduleSettingsMatchingTrigger:(id)arg1;
- (id)_scheduleTriggerMatchingSettings:(id)arg1;
- (bool)_setDefaultScheduleTriggerWithScheduleSettings:(id)arg1;
- (bool)_setDimsLockScreenSetting:(unsigned long long)arg1 forModeConfigurationWithIdentifier:(id)arg2;
- (bool)_setLostModeState:(unsigned long long)arg1 error:(id*)arg2;
- (bool)_setScheduleTrigger:(id)arg1 forModeConfigurationWithIdentifier:(id)arg2;
- (id)_stateSystemSnapshot;
- (id)_updateModeAssertionManagerAndRefreshLifetimesAndStateWithHandler:(id /* block */)arg1 error:(id*)arg2;
- (void)activeAssertionsDidChangeForLifetimeMonitor:(id)arg1;
- (void)appFocusConfigurationCoordinator:(id)arg1 didUpdateAppConfigurationContextForModeIdentifier:(id)arg2;
- (id)appForegroundTriggerConfigurationForAppForegroundTriggerManager:(id)arg1;
- (id)createWorkoutModeForWorkoutTriggerManager:(id)arg1;
- (id)currentStateForAppFocusConfigurationCoordinator:(id)arg1;
- (id)currentStateForEventBehaviorResolver:(id)arg1;
- (id)currentStateForLegacyAssertionSyncManager:(id)arg1;
- (id)currentStateForSystemFocusConfigurationCoordinator:(id)arg1;
- (unsigned long long)currentUILockStateForEventBehaviorResolver:(id)arg1;
- (id)currentlyActivePairedDeviceForSyncManager:(id)arg1;
- (id)drivingModeForDrivingTriggerManager:(id)arg1;
- (id)eventBehaviorResolver:(id)arg1 appPredicateForApplicationIdentifier:(id)arg2 modeIdentifier:(id)arg3;
- (id)eventBehaviorResolver:(id)arg1 bypassSettingsForClientIdentifier:(id)arg2;
- (id)eventBehaviorResolver:(id)arg1 configurationForModeIdentifier:(id)arg2;
- (bool)eventBehaviorResolver:(id)arg1 isAvailabilityActiveForBundleIdentifier:(id)arg2;
- (id)gamingModeForGamingTriggerManager:(id)arg1;
- (void)globalConfigurationManager:(id)arg1 didUpdateModesCanImpactAvailabilitySetting:(bool)arg2;
- (void)globalConfigurationManager:(id)arg1 didUpdatePhoneCallBypassSettings:(id)arg2;
- (void)globalConfigurationManager:(id)arg1 didUpdatePreventAutoReplySetting:(bool)arg2;
- (id)hearingTestModeForHearingTestTriggerManager:(id)arg1;
- (id)init;
- (bool)isCloudSyncDisabledForSyncManager:(id)arg1;
- (void)keybagDidUnlockForTheFirstTime:(id)arg1;
- (bool)layoutIsLocked:(id)arg1;
- (void)lifetimeMonitor:(id)arg1 lifetimeDidExpireForAssertionUUIDs:(id)arg2 expirationDate:(id)arg3;
- (id)lifetimeMonitor:(id)arg1 modeAssertionsWithLifetimeClass:(Class)arg2;
- (void)lifetimeMonitor:(id)arg1 registerTimerHandlerWithServiceIdentifier:(id)arg2 handler:(id /* block */)arg3;
- (void)lifetimeMonitor:(id)arg1 setTimer:(id)arg2;
- (id)lifetimeMonitor:(id)arg1 takeModeAssertionWithDetails:(id)arg2 clientIdentifier:(id)arg3 error:(id*)arg4;
- (id)locationTriggerConfigurationForLifetimeMonitor:(id)arg1;
- (unsigned long long)lockState;
- (unsigned long long)lostModeState;
- (void)meDeviceService:(id)arg1 didReceiveMeDeviceStateUpdate:(id)arg2;
- (id)mindfulnessModeForMindfulnessTriggerManager:(id)arg1;
- (void)modeConfigurationManager:(id)arg1 didModifyAvailableMode:(id)arg2;
- (void)modeConfigurationManager:(id)arg1 didModifyExceptionsForContacts:(id)arg2 forModeConfiguration:(id)arg3;
- (void)modeConfigurationManager:(id)arg1 didUpdateAvailableModes:(id)arg2;
- (id)modesSupportingSmartEntryForSmartTriggerManager:(id)arg1;
- (id)pairedCloudDevicesForSyncManager:(id)arg1;
- (void)pairedDeviceStateMonitor:(id)arg1 cloudPairingChangedFromDevices:(id)arg2 toDevices:(id)arg3;
- (void)pairedDeviceStateMonitor:(id)arg1 pairingChangedFromDevice:(id)arg2 toDevice:(id)arg3;
- (id)pairedDevicesForSyncManager:(id)arg1;
- (id)phoneCallBypassSettingsForSyncManager:(id)arg1;
- (void)reachabilityChangedTo:(bool)arg1;
- (id)remoteAppConfigurationServiceProvider:(id)arg1 getCurrentAppConfigurationForActionIdentifier:(id)arg2 bundleIdentifier:(id)arg3 withError:(out id*)arg4;
- (bool)remoteAppConfigurationServiceProvider:(id)arg1 invalidateAppContextForActionIdentifier:(id)arg2 bundleIdentifier:(id)arg3 withError:(out id*)arg4;
- (bool)remoteAvailabilityServiceProvider:(id)arg1 isLocalUserAvailableForApplicationIdentifier:(id)arg2 withError:(out id*)arg3;
- (id)remoteServiceProvider:(id)arg1 activeAssertionWithClientIdentifer:(id)arg2 error:(id*)arg3;
- (id)remoteServiceProvider:(id)arg1 allActiveModeAssertionsWithError:(id*)arg2;
- (id)remoteServiceProvider:(id)arg1 allModesReturningError:(id*)arg2;
- (id)remoteServiceProvider:(id)arg1 allowedModesForContactHandle:(id)arg2 withError:(id*)arg3;
- (id)remoteServiceProvider:(id)arg1 assertionWithClientIdentifer:(id)arg2 error:(id*)arg3;
- (id)remoteServiceProvider:(id)arg1 availableModesReturningError:(id*)arg2;
- (id)remoteServiceProvider:(id)arg1 behaviorSettingsWithError:(id*)arg2;
- (bool)remoteServiceProvider:(id)arg1 clearAppActionWithIdentifier:(id)arg2 forApplicationIdentifier:(id)arg3 modeIdentifier:(id)arg4 withError:(id*)arg5;
- (bool)remoteServiceProvider:(id)arg1 clearSystemActionWithIdentifier:(id)arg2 forModeIdentifier:(id)arg3 withError:(id*)arg4;
- (bool)remoteServiceProvider:(id)arg1 clearSystemConfigurationActionWithIdentifier:(id)arg2 modeIdentifier:(id)arg3 withError:(id*)arg4;
- (id)remoteServiceProvider:(id)arg1 currentMeDeviceStateWithError:(id*)arg2;
- (id)remoteServiceProvider:(id)arg1 currentStateWithError:(id*)arg2;
- (void)remoteServiceProvider:(id)arg1 didChangeFocusStatusSharingSettingForApplicationIdentifier:(id)arg2;
- (id)remoteServiceProvider:(id)arg1 getAccountFeatureSupportWithError:(id*)arg2;
- (id)remoteServiceProvider:(id)arg1 getAppActionsForModeIdentifier:(id)arg2 withError:(id*)arg3;
- (id)remoteServiceProvider:(id)arg1 getAppConfigurationPredicateForActionIdentifier:(id)arg2 forApplicationIdentifier:(id)arg3 modeIdentifier:(id)arg4 withError:(id*)arg5;
- (id)remoteServiceProvider:(id)arg1 getAppConfigurationTargetContentIdentifierPrefixesForModeIdentifier:(id)arg2 withError:(id*)arg3;
- (id)remoteServiceProvider:(id)arg1 getAppInfoForBundleIdentifier:(id)arg2 withError:(id*)arg3;
- (id)remoteServiceProvider:(id)arg1 getAppInfoForBundleIdentifiers:(id)arg2 withError:(id*)arg3;
- (unsigned long long)remoteServiceProvider:(id)arg1 getCloudSyncStateReturningError:(id*)arg2;
- (bool)remoteServiceProvider:(id)arg1 getModesCanImpactAvailabilityReturningError:(id*)arg2;
- (unsigned long long)remoteServiceProvider:(id)arg1 getPairSyncStateReturningError:(id*)arg2;
- (bool)remoteServiceProvider:(id)arg1 getPreventAutoReplyReturningError:(id*)arg2;
- (id)remoteServiceProvider:(id)arg1 getSystemActionsForModeIdentifier:(id)arg2 withError:(id*)arg3;
- (bool)remoteServiceProvider:(id)arg1 handleHearingTestEvent:(id)arg2 withError:(id*)arg3;
- (id)remoteServiceProvider:(id)arg1 invalidateAllModeAssertionsTakenBeforeDate:(id)arg2 forReason:(unsigned long long)arg3 clientIdentifier:(id)arg4 error:(id*)arg5;
- (id)remoteServiceProvider:(id)arg1 invalidateModeAssertionForClientIdentifier:(id)arg2 reason:(unsigned long long)arg3 reasonOverride:(unsigned long long)arg4 details:(id)arg5 error:(id*)arg6;
- (id)remoteServiceProvider:(id)arg1 invalidateModeAssertionWithUUID:(id)arg2 reason:(unsigned long long)arg3 reasonOverride:(unsigned long long)arg4 clientIdentifier:(id)arg5 error:(id*)arg6;
- (id)remoteServiceProvider:(id)arg1 latestInvalidationWithClientIdentifer:(id)arg2 error:(id*)arg3;
- (id)remoteServiceProvider:(id)arg1 modeConfigurationForModeIdentifier:(id)arg2 withError:(id*)arg3;
- (id)remoteServiceProvider:(id)arg1 modeConfigurationsWithError:(id*)arg2;
- (id)remoteServiceProvider:(id)arg1 publishStatusKitAvailabilityReturningError:(id*)arg2;
- (bool)remoteServiceProvider:(id)arg1 removeModeConfigurationWithModeIdentifier:(id)arg2 deletePlaceholder:(bool)arg3 withError:(id*)arg4;
- (id)remoteServiceProvider:(id)arg1 resolveBehaviorForEventDetails:(id)arg2 clientDetails:(id)arg3 date:(id)arg4 error:(id*)arg5;
- (id)remoteServiceProvider:(id)arg1 scheduleSettingsWithError:(id*)arg2;
- (bool)remoteServiceProvider:(id)arg1 setAppAction:(id)arg2 forApplicationIdentifier:(id)arg3 modeIdentifier:(id)arg4 withError:(id*)arg5;
- (bool)remoteServiceProvider:(id)arg1 setAppConfigurationPredicate:(id)arg2 forActionIdentifier:(id)arg3 forApplicationIdentifier:(id)arg4 modeIdentifier:(id)arg5 withError:(id*)arg6;
- (bool)remoteServiceProvider:(id)arg1 setAppConfigurationTargetContentIdentifierPrefix:(id)arg2 forActionIdentifier:(id)arg3 forApplicationIdentifier:(id)arg4 modeIdentifier:(id)arg5 withError:(id*)arg6;
- (bool)remoteServiceProvider:(id)arg1 setBehaviorSettings:(id)arg2 withError:(id*)arg3;
- (bool)remoteServiceProvider:(id)arg1 setCloudSyncPreferenceEnabled:(bool)arg2 withError:(id*)arg3;
- (bool)remoteServiceProvider:(id)arg1 setModeConfiguration:(id)arg2 withError:(id*)arg3;
- (bool)remoteServiceProvider:(id)arg1 setModesCanImpactAvailability:(bool)arg2 withError:(id*)arg3;
- (bool)remoteServiceProvider:(id)arg1 setPairSyncPreferenceEnabled:(bool)arg2 withError:(id*)arg3;
- (bool)remoteServiceProvider:(id)arg1 setPreventAutoReply:(bool)arg2 withError:(id*)arg3;
- (bool)remoteServiceProvider:(id)arg1 setScheduleSettings:(id)arg2 withError:(id*)arg3;
- (bool)remoteServiceProvider:(id)arg1 setScreenIsShared:(bool)arg2 screenIsMirrored:(bool)arg3 withError:(id*)arg4;
- (bool)remoteServiceProvider:(id)arg1 setSystemAction:(id)arg2 forModeIdentifier:(id)arg3 withError:(id*)arg4;
- (id)remoteServiceProvider:(id)arg1 silencedModesForContactHandle:(id)arg2 withError:(id*)arg3;
- (bool)remoteServiceProvider:(id)arg1 syncModeConfigurationsReturningError:(id*)arg2;
- (id)remoteServiceProvider:(id)arg1 takeModeAssertionWithDetails:(id)arg2 clientIdentifier:(id)arg3 error:(id*)arg4;
- (bool)remoteServiceProvider:(id)arg1 userAvailabilityInActiveModeForContactHandle:(id)arg2 withError:(id*)arg3;
- (void)resume;
- (id)scheduleSettingsByModeIdentifierForScheduleLifetimeMonitor:(id)arg1;
- (id)scheduleSettingsByModeIdentifierForScheduleManager:(id)arg1;
- (id)scheduleSettingsForSyncManager:(id)arg1;
- (void)setLockState:(unsigned long long)arg1;
- (void)setLostModeState:(unsigned long long)arg1;
- (bool)setUILockState:(unsigned long long)arg1 error:(id*)arg2;
- (void)setWorkoutTriggerEnabled:(bool)arg1 forWorkoutTriggerManager:(id)arg2;
- (void)settingsManager:(id)arg1 didReceiveUpdatedBehaviorSettings:(id)arg2;
- (void)settingsManager:(id)arg1 didReceiveUpdatedPhoneCallBypassSettings:(id)arg2;
- (void)settingsManager:(id)arg1 didReceiveUpdatedScheduleSettings:(id)arg2;
- (void)settingsManager:(id)arg1 didReceiveUpdatedSyncSettings:(id)arg2;
- (id)sleepingModeForSleepingTriggerManager:(id)arg1;
- (id)syncManager:(id)arg1 deviceForDeviceIdentifier:(id)arg2;
- (void)syncManager:(id)arg1 didReceiveUpdatedPhoneCallBypassSettings:(id)arg2;
- (void)syncManager:(id)arg1 didReceiveUpdatedScheduleSettings:(id)arg2;
- (void)syncManager:(id)arg1 performModeAssertionUpdatesWithHandler:(id /* block */)arg2;
- (void)syncManager:(id)arg1 prepareForSyncToDevices:(id)arg2;
- (id)syncManager:(id)arg1 scheduleSettingsForModeIdentifier:(id)arg2;
- (id)syncManager:(id)arg1 updateOutboundModeAssertion:(id)arg2;
- (id)triggerManager:(id)arg1 assertionsWithClientIdentifer:(id)arg2 error:(id*)arg3;
- (id)triggerManager:(id)arg1 invalidateModeAssertionWithUUID:(id)arg2 reason:(unsigned long long)arg3 reasonOverride:(unsigned long long)arg4 clientIdentifier:(id)arg5 error:(id*)arg6;
- (id)triggerManager:(id)arg1 latestInvalidationWithClientIdentifer:(id)arg2 error:(id*)arg3;
- (id)triggerManager:(id)arg1 performModeAssertionUpdatesWithHandler:(id /* block */)arg2;
- (id)triggerManager:(id)arg1 takeModeAssertionWithDetails:(id)arg2 clientIdentifier:(id)arg3 error:(id*)arg4;
- (id)workoutModeForWorkoutTriggerManager:(id)arg1;

@end
