/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SeparationAlerts.framework/SeparationAlerts
 */

@interface SAMonitoringSessionManager : NSObject <SAMonitoringSessionManagerServiceProtocol, SAScenarioClassifierClientProtocol, SATimeClientProtocol, SATravelTypeClassifierClientProtocol, SAWithYouDetectorClientProtocol> {
    <SAAnalyticsServiceProtocol> * _analytics;
    SAAudioAccessory * _audioAccessoryManager;
    long long  _caBroughtOutOnTravel;
    unsigned long long  _caCurrentVehicularState;
    bool  _caIsVehicularBTHintOn;
    NSMutableDictionary * _caLastAlertDate;
    NSHashTable * _clients;
    <SATimeServiceProtocol> * _clock;
    <TAEventProtocol> * _currentVisitOrLOIEvent;
    SADeviceRecord * _deviceRecord;
    NSMutableDictionary * _deviceUUIDtoAlertContext;
    NSMutableDictionary * _deviceUUIDtoMonitoringSession;
    NSMutableDictionary * _deviceUUIDtoSafeLocationUUIDs;
    NSMutableDictionary * _devices;
    NSMutableSet * _devicesWithPendingTransition;
    NSMutableSet * _devicesWithToBePopulatedTrackedTravelingStartLocation;
    unsigned long long  _disabledReasons;
    bool  _enabled;
    <SAFenceManagerServiceProtocol><SAFenceManagerRequestProtocol> * _fenceManager;
    <SAGeoFenceRequestProtocol> * _fenceRequestServicer;
    bool  _isCompanionConnected;
    bool  _isInAirplaneMode;
    TALocationLite * _lastLocation;
    NSUUID * _nextScheduledAlarmForPersistenceWrite;
    SAPersistenceManager * _persistenceManager;
    <TAEventProtocol> * _previousVisitOrLOIEvent;
    bool  _requestedPeriodicScan;
    NSMutableDictionary * _safeLocations;
    NSUUID * _scheduledAlarmForForceUpdateWithYouStatus;
    bool  _standby;
    NSDate * _timeOfAttemptToLoadFromPersistence;
    <SATravelTypeClassifierServiceProtocol> * _travelTypeClassifier;
    <SAWithYouDetectorServiceProtocol> * _withYouDetector;
}

@property (nonatomic, retain) <SAAnalyticsServiceProtocol> *analytics;
@property (nonatomic, retain) SAAudioAccessory *audioAccessoryManager;
@property (nonatomic) long long caBroughtOutOnTravel;
@property (nonatomic) unsigned long long caCurrentVehicularState;
@property (nonatomic) bool caIsVehicularBTHintOn;
@property (nonatomic, retain) NSMutableDictionary *caLastAlertDate;
@property (nonatomic, retain) NSHashTable *clients;
@property (nonatomic, retain) <SATimeServiceProtocol> *clock;
@property (nonatomic, retain) <TAEventProtocol> *currentVisitOrLOIEvent;
@property (nonatomic, retain) SADeviceRecord *deviceRecord;
@property (nonatomic, retain) NSMutableDictionary *deviceUUIDtoAlertContext;
@property (nonatomic, retain) NSMutableDictionary *deviceUUIDtoMonitoringSession;
@property (nonatomic, retain) NSMutableDictionary *deviceUUIDtoSafeLocationUUIDs;
@property (nonatomic, retain) NSMutableDictionary *devices;
@property (nonatomic, retain) NSMutableSet *devicesWithPendingTransition;
@property (nonatomic, retain) NSMutableSet *devicesWithToBePopulatedTrackedTravelingStartLocation;
@property (nonatomic) unsigned long long disabledReasons;
@property (nonatomic) bool enabled;
@property (nonatomic, retain) <SAFenceManagerServiceProtocol><SAFenceManagerRequestProtocol> *fenceManager;
@property (nonatomic, retain) <SAGeoFenceRequestProtocol> *fenceRequestServicer;
@property (nonatomic) bool isCompanionConnected;
@property (nonatomic) bool isInAirplaneMode;
@property (nonatomic, retain) TALocationLite *lastLocation;
@property (nonatomic, retain) NSUUID *nextScheduledAlarmForPersistenceWrite;
@property (nonatomic, retain) SAPersistenceManager *persistenceManager;
@property (nonatomic, retain) <TAEventProtocol> *previousVisitOrLOIEvent;
@property (nonatomic) bool requestedPeriodicScan;
@property (nonatomic, retain) NSMutableDictionary *safeLocations;
@property (nonatomic, retain) NSUUID *scheduledAlarmForForceUpdateWithYouStatus;
@property (nonatomic) bool standby;
@property (nonatomic, retain) NSDate *timeOfAttemptToLoadFromPersistence;
@property (nonatomic, retain) <SATravelTypeClassifierServiceProtocol> *travelTypeClassifier;
@property (nonatomic, retain) <SAWithYouDetectorServiceProtocol> *withYouDetector;

+ (id)convertSAMonitoringSessionStateToString:(unsigned long long)arg1;

- (void).cxx_destruct;
- (bool)_isOnlyMonitoringCompanionDevice;
- (bool)_isOnlyMonitoringDisconnectedCompanionDevice;
- (void)addClient:(id)arg1;
- (void)addDevice:(id)arg1 isLastDeviceEvent:(bool)arg2;
- (void)addDevicesIfNeededPerEvent:(id)arg1;
- (void)addDisableReason:(unsigned long long)arg1;
- (void)addSafeLocation:(id)arg1 forDeviceUUID:(id)arg2;
- (void)addSafeLocationsIfNeededPerNewSet:(id)arg1 forDevice:(id)arg2;
- (bool)addTravelFenceForDevice:(id)arg1;
- (void)alarmFiredForUUID:(id)arg1;
- (bool)allDevicesInSafeLocation;
- (id)analytics;
- (bool)anyDeviceInUnsafeLocation;
- (void)attemptToPopulateTrackedTravelingStartLocationForDevice:(id)arg1;
- (id)audioAccessoryManager;
- (void)bootstrapMonitoringSessionRecord:(id)arg1;
- (long long)caBroughtOutOnTravel;
- (unsigned long long)caCurrentVehicularState;
- (bool)caIsVehicularBTHintOn;
- (id)caLastAlertDate;
- (void)cancelMonitoringDevice:(id)arg1;
- (void)changeMonitoringSessionState:(id)arg1 toState:(unsigned long long)arg2;
- (void)checkForDevicesNeedingTransition;
- (bool)checkIfAlertWasTriggeredAtHome:(id)arg1 isEarlyVehicularTrigger:(bool)arg2;
- (bool)checkIfCloseToAnySafeLocations:(id)arg1 leftBehindLocation:(id)arg2;
- (long long)checkInEarStatus:(id)arg1;
- (void)checkReunion:(unsigned long long)arg1 to:(unsigned long long)arg2 forDeviceWithUUID:(id)arg3;
- (id)clients;
- (id)clock;
- (id)computeRemovedSafeLocations:(id)arg1;
- (void)configureBackgroundScanning;
- (id)createLocationFromCircularRegion:(id)arg1 forDevice:(id)arg2 withContext:(unsigned long long)arg3;
- (void)createMonitoringDevice:(id)arg1;
- (id)currentVisitOrLOIEvent;
- (long long)determineTrackedTravelingCount;
- (id)deviceRecord;
- (bool)deviceShouldTransitionWithLastScenarioChangeDate:(id)arg1 lastWithYouDate:(id)arg2;
- (id)deviceUUIDtoAlertContext;
- (id)deviceUUIDtoMonitoringSession;
- (id)deviceUUIDtoSafeLocationUUIDs;
- (id)devices;
- (id)devicesWithPendingTransition;
- (id)devicesWithToBePopulatedTrackedTravelingStartLocation;
- (void)didChangeScenarioClassFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 forDevice:(id)arg3;
- (void)didChangeTravelTypeFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 hints:(unsigned long long)arg3;
- (void)didForceUpdateWithYouStatus;
- (unsigned long long)disabledReasons;
- (long long)earlyVehicularTriggerForDeviceUUID:(id)arg1;
- (bool)enabled;
- (bool)enoughTimeHasPassedBeforeSurfacingAlert:(id)arg1 forAlertForDevice:(id)arg2 alertType:(unsigned long long)arg3;
- (id)fenceManager;
- (id)fenceRequestServicer;
- (void)forceStandbyMode:(id)arg1;
- (id)getLastScenarioChangeDateAmongAllDevices;
- (unsigned long long)getMoreSpecificSADeviceType:(id)arg1;
- (void)handleGeofenceEvent:(id)arg1;
- (void)handleGeofenceExitedForDeviceUUID:(id)arg1;
- (void)handleModifiedSafeLocation:(id)arg1;
- (void)handleModifiedSafeLocation:(id)arg1 forDeviceUUID:(id)arg2;
- (void)handleNewSafeLocation:(id)arg1;
- (void)handleRemovedSafeLocation:(id)arg1;
- (void)handleSeparationForDeviceUUID:(id)arg1 withSafeLocationRecommendation:(id)arg2 context:(id)arg3;
- (void)handleSystemStateChanged:(id)arg1;
- (void)ingestTAEvent:(id)arg1;
- (id)initWithWithYouDetector:(id)arg1 fenceRequestServicer:(id)arg2 fenceManager:(id)arg3 travelTypeClassifier:(id)arg4 clock:(id)arg5 deviceRecord:(id)arg6 analytics:(id)arg7 persistenceManager:(id)arg8 audioAccessoryManager:(id)arg9;
- (bool)isAnyInTrackedInUnsafeLocation;
- (bool)isAnyTrackedWhileTraveling;
- (bool)isCompanionConnected;
- (bool)isInAirplaneMode;
- (bool)isWithinCurrentVisitOrLOI:(id)arg1;
- (id)lastLocation;
- (double)minimumTimeSinceScenarioTransitionForAlertForDeviceUUID:(id)arg1 alertType:(unsigned long long)arg2;
- (void)modifyDevice:(id)arg1;
- (bool)monitoringSessionState:(unsigned long long)arg1 matchesWithScenarioClass:(unsigned long long)arg2;
- (bool)needPeriodicScan;
- (id)nextScheduledAlarmForPersistenceWrite;
- (void)notifyEarlyLeftBehind:(id)arg1;
- (void)notifyLeftBehind:(id)arg1 withRegion:(id)arg2 isEarlyVehicularTrigger:(bool)arg3;
- (void)notifyWhenLeftBehind:(id)arg1;
- (void)notifyWhileTraveling:(id)arg1 isBookendingTravel:(bool)arg2;
- (id)persistenceManager;
- (id)previousVisitOrLOIEvent;
- (void)removeAndStopSafeLocationsForDeviceUUID:(id)arg1;
- (void)removeClient:(id)arg1;
- (void)removeDeviceWithUUID:(id)arg1 isLastDeviceEvent:(bool)arg2;
- (void)removeDevicesIfNeededPerEvent:(id)arg1;
- (void)removeDisableReason:(unsigned long long)arg1;
- (void)removeSafeLocation:(id)arg1 forDeviceUUID:(id)arg2;
- (void)removeSafeLocationsIfNeededPerNewSet:(id)arg1 forDevice:(id)arg2;
- (void)removeTravelFenceForDevice:(id)arg1;
- (void)requestToFetchLastVisit;
- (void)requestToStartBackgroundScanning;
- (void)requestToStopBackgroundScanning;
- (bool)requestedPeriodicScan;
- (id)safeLocations;
- (unsigned long long)scenarioClassForDeviceUUID:(id)arg1;
- (void)scheduleNextForceUpdateWithYouStatusFromReferenceDate:(id)arg1 forAlertForDevice:(id)arg2 alertType:(unsigned long long)arg3;
- (void)scheduleNextPersistenceWrite;
- (id)scheduledAlarmForForceUpdateWithYouStatus;
- (void)setAnalytics:(id)arg1;
- (void)setAudioAccessoryManager:(id)arg1;
- (void)setCaBroughtOutOnTravel:(long long)arg1;
- (void)setCaCurrentVehicularState:(unsigned long long)arg1;
- (void)setCaIsVehicularBTHintOn:(bool)arg1;
- (void)setCaLastAlertDate:(id)arg1;
- (void)setClients:(id)arg1;
- (void)setClock:(id)arg1;
- (void)setCurrentVisitOrLOIEvent:(id)arg1;
- (void)setDeviceRecord:(id)arg1;
- (void)setDeviceUUIDtoAlertContext:(id)arg1;
- (void)setDeviceUUIDtoMonitoringSession:(id)arg1;
- (void)setDeviceUUIDtoSafeLocationUUIDs:(id)arg1;
- (void)setDevices:(id)arg1;
- (void)setDevicesWithPendingTransition:(id)arg1;
- (void)setDevicesWithToBePopulatedTrackedTravelingStartLocation:(id)arg1;
- (void)setDisabledReasons:(unsigned long long)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setFenceManager:(id)arg1;
- (void)setFenceRequestServicer:(id)arg1;
- (void)setIsCompanionConnected:(bool)arg1;
- (void)setIsInAirplaneMode:(bool)arg1;
- (void)setLastLocation:(id)arg1;
- (void)setNextScheduledAlarmForPersistenceWrite:(id)arg1;
- (void)setPersistenceManager:(id)arg1;
- (void)setPreviousVisitOrLOIEvent:(id)arg1;
- (void)setRequestedPeriodicScan:(bool)arg1;
- (void)setSafeLocations:(id)arg1;
- (void)setSafeLocations:(id)arg1 forDeviceUUID:(id)arg2;
- (void)setScheduledAlarmForForceUpdateWithYouStatus:(id)arg1;
- (void)setStandby:(bool)arg1;
- (void)setTimeOfAttemptToLoadFromPersistence:(id)arg1;
- (void)setTravelTypeClassifier:(id)arg1;
- (void)setUpTravelingGeofencesOnAirplaneModeToggleOffIfNeeded;
- (void)setWithYouDetector:(id)arg1;
- (bool)shouldIssueBookendedNotificationBasedOnLocationForDevice:(id)arg1;
- (bool)shouldIssueBookendedNotificationBasedOnTimeForDevice:(id)arg1;
- (bool)shouldIssueBookendedNotificationForDevice:(id)arg1;
- (bool)shouldSuppressDueToRepeatedAlertsInOneTravelingSession:(id)arg1 context:(id)arg2;
- (bool)standby;
- (void)startPeriodicScans;
- (void)startPeriodicScansIfNeeded;
- (void)startSafeLocation:(id)arg1 forDevice:(id)arg2;
- (unsigned long long)stateForDeviceUUID:(id)arg1;
- (void)stopPeriodicScans;
- (void)stopPeriodicScansIfNotNeeded;
- (void)stopSafeLocation:(id)arg1 forDevice:(id)arg2;
- (void)storeSeparationLocation:(id)arg1;
- (double)timeDelayForRetryScanForAlertForDeviceUUID:(id)arg1 alertType:(unsigned long long)arg2;
- (id)timeOfAttemptToLoadFromPersistence;
- (id)travelTypeClassifier;
- (void)updateDevicesWithSafeLocations:(id)arg1;
- (void)updateLocation:(id)arg1;
- (void)updateSafeLocations:(id)arg1;
- (void)updatedWithYouStatusFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 forDeviceWithUUID:(id)arg3;
- (id)withYouDetector;

@end
