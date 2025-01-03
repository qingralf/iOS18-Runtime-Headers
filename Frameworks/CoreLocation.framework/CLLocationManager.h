/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface CLLocationManager : NSObject <HMDCLLocationManager> {
    id  _internal;
}

@property (nonatomic, readonly) int _authorizationStatus;
@property (getter=_isFusionInfoEnabled, setter=_setFusionInfoEnabled:, nonatomic) bool _fusionInfoEnabled;
@property (getter=_isGroundAltitudeEnabled, setter=_setGroundAltitudeEnabled:, nonatomic) bool _groundAltitudeEnabled;
@property (nonatomic, readonly) bool _limitsPrecision;
@property (nonatomic, readonly) long long accuracyAuthorization;
@property (nonatomic) long long activityType;
@property (nonatomic) bool allowsAlteredAccessoryLocations;
@property (nonatomic) bool allowsBackgroundLocationUpdates;
@property (nonatomic, readonly) int authorizationStatus;
@property (getter=isAuthorizedForPreciseLocation, nonatomic, readonly) bool authorizedForPreciseLocation;
@property (getter=isAuthorizedForWidgetUpdates, nonatomic, readonly) bool authorizedForWidgetUpdates;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <HMDCLLocationManagerDelegate> *delegate;
@property (nonatomic) <CLLocationManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) double desiredAccuracy;
@property (nonatomic) double distanceFilter;
@property (getter=isDynamicAccuracyReductionEnabled, nonatomic) bool dynamicAccuracyReductionEnabled;
@property (nonatomic, readonly) double expectedGpsUpdateInterval;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) CLHeading *heading;
@property (nonatomic, readonly) bool headingAvailable;
@property (nonatomic) double headingFilter;
@property (nonatomic) int headingOrientation;
@property (nonatomic, readonly) struct __CLClient { }*internalClient;
@property (nonatomic, readonly, copy) CLLocation *location;
@property (nonatomic, readonly) bool locationServicesApproved;
@property (nonatomic, readonly) bool locationServicesAvailable;
@property (nonatomic, readonly) bool locationServicesEnabled;
@property (getter=isLocationServicesPreferencesDialogEnabled, nonatomic) bool locationServicesPreferencesDialogEnabled;
@property (getter=isMatchInfoEnabled, nonatomic) bool matchInfoEnabled;
@property (nonatomic, readonly) double maximumRegionMonitoringDistance;
@property (nonatomic, readonly, copy) NSSet *monitoredRegions;
@property (nonatomic) bool pausesLocationUpdatesAutomatically;
@property (nonatomic) bool privateMode;
@property (readonly) NSString *processName;
@property (nonatomic, copy) NSString *purpose;
@property (nonatomic, readonly, copy) NSSet *rangedBeaconConstraints;
@property (nonatomic, readonly, copy) NSSet *rangedRegions;
@property (nonatomic) bool showsBackgroundLocationIndicator;
@property (readonly) Class superclass;
@property (nonatomic) bool supportInfo;
@property (getter=isTrackRunInfoEnabled, setter=setTrackRunInfoEnabled:, nonatomic) bool trackRunInfoEnabled;

// Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation

+ (id)_applyArchivedAuthorizationDecisions:(id)arg1;
+ (id)_archivedAuthorizationDecisionsWithError:(id*)arg1;
+ (int)_authorizationStatus;
+ (int)_authorizationStatusForBundleIdentifier:(id)arg1 bundlePath:(id)arg2;
+ (bool)_checkAndExerciseAuthorizationForBundle:(id)arg1 error:(id*)arg2;
+ (bool)_checkAndExerciseAuthorizationForBundleID:(id)arg1 error:(id*)arg2;
+ (id)_getClientTransientAuthorizationInfoForBundleId:(id)arg1 error:(id*)arg2;
+ (id)_getClientTransientAuthorizationInfoForBundlePath:(id)arg1 error:(id*)arg2;
+ (id)_setClientTransientAuthorizationInfoForBundleId:(id)arg1 data:(id)arg2;
+ (id)_setClientTransientAuthorizationInfoForBundlePath:(id)arg1 data:(id)arg2;
+ (id)activeLocationClientsWithInfo;
+ (unsigned long long)activeLocationServiceTypesForLocationDictionary:(id)arg1;
+ (bool)advertiseAsBeacon:(id)arg1 withPower:(id)arg2;
+ (unsigned long long)allowableAuthorizationForLocationDictionary:(id)arg1;
+ (bool)authorizationPromptMapDisplayEnabled;
+ (int)authorizationStatus;
+ (int)authorizationStatusForBundle:(id)arg1;
+ (int)authorizationStatusForBundleIdentifier:(id)arg1;
+ (int)authorizationStatusForBundlePath:(id)arg1;
+ (bool)backgroundIndicatorEnabledForLocationDictionary:(id)arg1;
+ (bool)bundleSupported:(id)arg1;
+ (void)collectMetricForFunction:(unsigned long long)arg1;
+ (bool)correctiveCompensationStatusForLocationDictionary:(id)arg1;
+ (id)dateLocationLastUsedForLocationDictionary:(id)arg1;
+ (bool)deferredLocationUpdatesAvailable;
+ (void)deleteInterestZoneWithId:(id)arg1 registeredForBundle:(id)arg2 error:(id*)arg3;
+ (void)deleteInterestZoneWithId:(id)arg1 registeredForBundleIdentifier:(id)arg2 error:(id*)arg3;
+ (void)dumpDiagnosticFilesWithHandler:(id /* block */)arg1;
+ (bool)dumpLogsWithMessage:(id)arg1;
+ (unsigned long long)entityAuthorizationForLocationDictionary:(id)arg1;
+ (unsigned long long)entityClassesForLocationDictionary:(id)arg1;
+ (void)getIncidentalUseMode:(int*)arg1 forBundle:(id)arg2;
+ (void)getIncidentalUseMode:(int*)arg1 forBundleIdentifier:(id)arg2;
+ (void)grantTemporaryAuthorizationUsingLocationButtonToClientWithAuditToken:(struct { unsigned int x1[8]; })arg1 voiceInteractionEnabled:(bool)arg2;
+ (bool)hasUsedBackgroundLocationServices:(id)arg1;
+ (bool)headingAvailable;
+ (unsigned long long)incidentalUseModeForLocationDictionary:(id)arg1;
+ (id)interestZoneDictionaryIdentifiedById:(id)arg1 forLocationDictionary:(id)arg2;
+ (id)interestZonesIdentifierListForLocationDictionary:(id)arg1;
+ (bool)isEntityAuthorizedForLocationDictionary:(id)arg1;
+ (bool)isInterestZoneReleventForLocationDictionary:(id)arg1;
+ (bool)isLocationActiveForLocationDictionary:(id)arg1;
+ (bool)isMonitoringAvailableForClass:(Class)arg1;
+ (bool)isPeerRangingAvailable;
+ (bool)isRangingAvailable;
+ (bool)isStatusBarIconEnabledForLocationEntityClass:(unsigned long long)arg1;
+ (bool)locationServicesEnabled;
+ (bool)locationServicesEnabled:(bool)arg1;
+ (bool)mapCorrectionAvailable;
+ (id)metadataForHomekitAccessoryControlEventWithUUID:(id)arg1 stateString:(id)arg2 serviceUUID:(id)arg3 serviceType:(id)arg4 characteristicType:(id)arg5 serviceGroupUUID:(id)arg6 source:(id)arg7 roomUUID:(id)arg8;
+ (id)metadataForHomekitActionSetEventWithUUID:(id)arg1 name:(id)arg2 type:(id)arg3 clientName:(id)arg4 source:(id)arg5 homeName:(id)arg6;
+ (id)metadataForMicroLocationTruthTagEventWithTagUUID:(id)arg1;
+ (unsigned long long)primaryEntityClassForLocationDictionary:(id)arg1;
+ (bool)regionMonitoringAvailable;
+ (bool)regionMonitoringEnabled;
+ (void)registerCircularInterestZoneWithId:(id)arg1 latitue:(double)arg2 longitude:(double)arg3 radius:(double)arg4 serviceMaskOperator:(int)arg5 provenanceType:(int)arg6 forBundle:(id)arg7 error:(id*)arg8;
+ (void)registerCircularInterestZoneWithId:(id)arg1 latitue:(double)arg2 longitude:(double)arg3 radius:(double)arg4 serviceMaskOperator:(int)arg5 provenanceType:(int)arg6 forBundleIdentifier:(id)arg7 error:(id*)arg8;
+ (void)registerPhenolicInterestZoneWithId:(id)arg1 phenolicLocation:(int)arg2 serviceMaskOperator:(int)arg3 provenanceType:(int)arg4 forBundle:(id)arg5 error:(id*)arg6;
+ (void)registerPhenolicInterestZoneWithId:(id)arg1 phenolicLocation:(int)arg2 serviceMaskOperator:(int)arg3 provenanceType:(int)arg4 forBundleIdentifier:(id)arg5 error:(id*)arg6;
+ (bool)reportLocationUtilityEvent:(int)arg1 atDate:(id)arg2;
+ (void)resetLocationAuthorizationForBundleId:(id)arg1 orBundlePath:(id)arg2;
+ (id)setAuthorizationPromptMapDisplayEnabled:(bool)arg1;
+ (void)setAuthorizationStatus:(bool)arg1 forBundle:(id)arg2;
+ (void)setAuthorizationStatus:(bool)arg1 forBundleIdentifier:(id)arg2;
+ (void)setAuthorizationStatus:(bool)arg1 forBundlePath:(id)arg2;
+ (void)setAuthorizationStatus:(int)arg1 withCorrectiveCompensation:(int)arg2 forInterestZoneWithId:(id)arg3 registeredForBundle:(id)arg4;
+ (void)setAuthorizationStatus:(int)arg1 withCorrectiveCompensation:(int)arg2 forInterestZoneWithId:(id)arg3 registeredForBundleIdentifier:(id)arg4;
+ (void)setAuthorizationStatusByType:(int)arg1 forBundle:(id)arg2;
+ (void)setAuthorizationStatusByType:(int)arg1 forBundleIdentifier:(id)arg2;
+ (void)setAuthorizationStatusByType:(int)arg1 forBundlePath:(id)arg2;
+ (void)setAuthorizationStatusByType:(int)arg1 withCorrectiveCompensation:(int)arg2 forBundle:(id)arg3;
+ (void)setAuthorizationStatusByType:(int)arg1 withCorrectiveCompensation:(int)arg2 forBundleIdentifier:(id)arg3;
+ (void)setBackgroundIndicatorEnabled:(bool)arg1 forBundle:(id)arg2;
+ (void)setBackgroundIndicatorEnabled:(bool)arg1 forBundleIdentifier:(id)arg2;
+ (void)setBackgroundIndicatorEnabled:(bool)arg1 forLocationDictionary:(id)arg2;
+ (void)setDefaultEffectiveBundle:(id)arg1;
+ (void)setDefaultEffectiveBundleIdentifier:(id)arg1;
+ (void)setEntityAuthorization:(unsigned long long)arg1 forLocationDictionary:(id)arg2;
+ (void)setEntityAuthorization:(unsigned long long)arg1 withCorrectiveCompensation:(bool)arg2 forLocationDictionary:(id)arg3;
+ (void)setEntityAuthorization:(unsigned long long)arg1 withCorrectiveCompensationType:(int)arg2 forLocationDictionary:(id)arg3;
+ (void)setEntityAuthorized:(bool)arg1 forLocationDictionary:(id)arg2;
+ (void)setIncidentalUseMode:(int)arg1 forBundle:(id)arg2;
+ (void)setIncidentalUseMode:(int)arg1 forBundleIdentifier:(id)arg2;
+ (void)setLocationButtonUseMode:(int)arg1 forBundle:(id)arg2;
+ (void)setLocationButtonUseMode:(int)arg1 forBundleIdentifier:(id)arg2;
+ (void)setLocationServicesEnabled:(bool)arg1;
+ (void)setRelevance:(bool)arg1 forInterestZoneWithId:(id)arg2 registeredForBundle:(id)arg3 error:(id*)arg4;
+ (void)setRelevance:(bool)arg1 forInterestZoneWithId:(id)arg2 registeredForBundleIdentifier:(id)arg3 error:(id*)arg4;
+ (void)setStatusBarIconEnabled:(bool)arg1 forLocationEntityClass:(unsigned long long)arg2;
+ (void)setTemporaryAuthorizationGranted:(bool)arg1 forBundle:(id)arg2;
+ (void)setTemporaryAuthorizationGranted:(bool)arg1 forBundleIdentifier:(id)arg2;
+ (void)setTemporaryFullAccuracyAuthorizationGranted:(bool)arg1 forBundleIdentifier:(id)arg2;
+ (void)setTemporaryFullAccuracyAuthorizationGranted:(bool)arg1 forBundlePath:(id)arg2;
+ (id)sharedManager;
+ (id)sharedQueue;
+ (bool)shutdownDaemon;
+ (bool)significantLocationChangeMonitoringAvailable;
+ (void)tearDownLocationAuthorizationPromptForBundleId:(id)arg1;
+ (void)tearDownLocationAuthorizationPromptForBundlePath:(id)arg1;
+ (void)updatePillButtonChoiceForOutstandingPrompt:(int)arg1;
+ (void)updatePromptedLatitude:(double)arg1 longitude:(double)arg2;
+ (id)userLocationClientsWithInfo;
+ (id)weakSharedInstance;

- (int)_authorizationStatus;
- (void)_fetchContinuousPlaceInferencesWithFidelityPolicy:(unsigned long long)arg1 handler:(id /* block */)arg2;
- (void)_fetchEstimatedLocationAtDate:(id)arg1 handler:(id /* block */)arg2;
- (void)_fetchPlaceInferencesWithFidelityPolicy:(unsigned long long)arg1 handler:(id /* block */)arg2;
- (id)_groundAltitudeAtLocation:(id)arg1;
- (id)_historicalUpdaterWithCenter:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 radius:(double)arg2 dateInterval:(id)arg3 sampleCount:(int)arg4 queue:(id)arg5 handler:(id /* block */)arg6;
- (id)_historicalUpdaterWithDateInterval:(id)arg1 sampleCount:(int)arg2 queue:(id)arg3 handler:(id /* block */)arg4;
- (id)_initWithDelegate:(id)arg1 onQueue:(id)arg2;
- (bool)_isFusionInfoEnabled;
- (bool)_isGroundAltitudeEnabled;
- (bool)_limitsPrecision;
- (id)_liveUpdaterWithConfiguration:(long long)arg1 queue:(id)arg2 handler:(id /* block */)arg3;
- (id)_liveUpdaterWithQueue:(id)arg1 handler:(id /* block */)arg2;
- (void)_requestTemporaryFullAccuracyWithUsageDescription:(id)arg1;
- (void)_requestTemporaryFullAccuracyWithUsageDescription:(id)arg1 completion:(id /* block */)arg2;
- (void)_requestVisitState;
- (void)_setFusionInfoEnabled:(bool)arg1;
- (void)_setGroundAltitudeEnabled:(bool)arg1;
- (void)_startLeechingVisits;
- (void)_startMonitoringSignificantLocationChangesOfDistance:(double)arg1 withPowerBudget:(int)arg2;
- (id)_startPlaceInferencesCommonLogic:(unsigned long long)arg1 handler:(id /* block */)arg2;
- (void)_stopFetchingContinuousPlaceInferences;
- (void)_updateARSessionState:(unsigned long long)arg1;
- (void)_updateVIOEstimation:(id)arg1;
- (void)_updateVLLocalizationResult:(id)arg1;
- (id)_zAxisStatistics;
- (long long)accuracyAuthorization;
- (long long)activityType;
- (void)addIdentifiableClient:(id)arg1;
- (void)allowDeferredLocationUpdatesUntilTraveled:(double)arg1 timeout:(double)arg2;
- (bool)allowsAlteredAccessoryLocations;
- (bool)allowsBackgroundLocationUpdates;
- (id)appLocationInfo;
- (id)appsUsingLocation;
- (id)appsUsingLocationWithDetails;
- (int)authorizationStatus;
- (id)backgroundActivitySession;
- (void)callPlaceInferenceHandlerWithResult:(id)arg1 error:(id)arg2;
- (void)changeFencesStateMatchingHandoffTags:(id)arg1 forDeviceID:(id)arg2 completion:(id /* block */)arg3;
- (void)collectMetricForFunction:(unsigned long long)arg1;
- (void)dealloc;
- (id)delegate;
- (double)desiredAccuracy;
- (void)disallowDeferredLocationUpdates;
- (void)dismissHeadingCalibrationDisplay;
- (double)distanceFilter;
- (void)donateMicroLocationTruthTagWithTagUUID:(id)arg1 correspondingToTriggerUUID:(id)arg2 handler:(id /* block */)arg3;
- (void)donateMicroLocationTruthTagWithTagUUID:(id)arg1 forRecordingEventsBetweenDate:(id)arg2 andDate:(id)arg3 handler:(id /* block */)arg4;
- (void)endTranscriptSessionWithCompletion:(id /* block */)arg1;
- (double)expectedGpsUpdateInterval;
- (void)exportMicroLocationDataForMigrationWithCompletion:(id /* block */)arg1;
- (void)exportMicroLocationDatabaseTablesWithCompletion:(id /* block */)arg1;
- (void)fetchTranscriptLocationsWithRadius:(double)arg1 sampleCount:(int)arg2 center:(struct CLLocationCoordinate2D { double x1; double x2; })arg3 completionHandler:(id /* block */)arg4;
- (id)getMicroLocationInternalVersion;
- (id)getRecordingTriggerUUIDAndRequestMicroLocationRecordingScanWithAdditionalInformation:(id)arg1 shouldForceRecording:(bool)arg2 handler:(id /* block */)arg3;
- (id)heading;
- (bool)headingAvailable;
- (double)headingFilter;
- (int)headingOrientation;
- (id)historicalUpdaterWithCenter:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 radius:(double)arg2 dateInterval:(id)arg3 sampleCount:(int)arg4 queue:(id)arg5 handler:(id /* block */)arg6;
- (id)historicalUpdaterWithDateInterval:(id)arg1 sampleCount:(int)arg2 queue:(id)arg3 handler:(id /* block */)arg4;
- (id)init;
- (id)initOnQueue:(id)arg1;
- (id)initWithEffectiveBundle:(id)arg1;
- (id)initWithEffectiveBundle:(id)arg1 delegate:(id)arg2 onQueue:(id)arg3;
- (id)initWithEffectiveBundle:(id)arg1 limitingBundleIdentifier:(id)arg2 delegate:(id)arg3 onQueue:(id)arg4;
- (id)initWithEffectiveBundleIdentifier:(id)arg1;
- (id)initWithEffectiveBundleIdentifier:(id)arg1 bundlePath:(id)arg2 websiteIdentifier:(id)arg3 delegate:(id)arg4 silo:(id)arg5;
- (id)initWithEffectiveBundleIdentifier:(id)arg1 delegate:(id)arg2 onQueue:(id)arg3;
- (id)initWithEffectiveBundleIdentifier:(id)arg1 websiteIdentifier:(id)arg2;
- (id)initWithEffectiveBundlePath:(id)arg1;
- (id)initWithEffectiveBundlePath:(id)arg1 delegate:(id)arg2 onQueue:(id)arg3;
- (id)initWithEffectiveBundlePath:(id)arg1 limitingBundleIdentifier:(id)arg2 delegate:(id)arg3 onQueue:(id)arg4;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithWebsiteIdentifier:(id)arg1;
- (id)initWithWebsiteIdentifier:(id)arg1 delegate:(id)arg2 onQueue:(id)arg3;
- (struct __CLClient { }*)internalClient;
- (bool)isAuthorizedForPreciseLocation;
- (bool)isAuthorizedForWidgetUpdates;
- (void)isConsideredInRemoteAreaWithCompletion:(id /* block */)arg1;
- (bool)isDynamicAccuracyReductionEnabled;
- (bool)isLocationServicesPreferencesDialogEnabled;
- (bool)isMasquerading;
- (bool)isMatchInfoEnabled;
- (bool)isTrackRunInfoEnabled;
- (id)liveUpdaterWithConfiguration:(long long)arg1 queue:(id)arg2 handler:(id /* block */)arg3;
- (id)liveUpdaterWithQueue:(id)arg1 handler:(id /* block */)arg2;
- (id)location;
- (bool)locationServicesApproved;
- (bool)locationServicesAvailable;
- (bool)locationServicesEnabled;
- (void)markAsHavingReceivedLocation;
- (double)maximumRegionMonitoringDistance;
- (id)monitoredRegions;
- (void)onClientEvent:(int)arg1 supportInfo:(id)arg2;
- (void)onClientEventAuthStatus:(id)arg1;
- (void)onClientEventAutopauseStatus:(id)arg1;
- (void)onClientEventBatch:(id)arg1;
- (void)onClientEventError:(id)arg1;
- (void)onClientEventHeading:(id)arg1;
- (void)onClientEventHeadingCalibration:(id)arg1;
- (void)onClientEventInterrupted:(id)arg1;
- (void)onClientEventLocation:(id)arg1 forceMapMatching:(bool)arg2 type:(id)arg3;
- (void)onClientEventLocationUnavailable:(id)arg1;
- (void)onClientEventNoLocationWatchdog:(id)arg1;
- (void)onClientEventPlaceInferenceError:(id)arg1;
- (void)onClientEventPlaceInferenceResult:(id)arg1;
- (void)onClientEventRanging:(id)arg1;
- (void)onClientEventRangingError:(id)arg1;
- (void)onClientEventRegion:(id)arg1;
- (void)onClientEventRegionError:(id)arg1;
- (void)onClientEventRegionResponseDelayed:(id)arg1;
- (void)onClientEventRegionSetupCompleted:(id)arg1;
- (void)onClientEventRegionState:(id)arg1;
- (void)onClientEventRegistration:(id)arg1;
- (void)onClientEventSignificantLocationVisit:(id)arg1;
- (void)onClientEventSignificantLocationVisitStateRequest:(id)arg1;
- (void)onClientEventVehicleHeading:(id)arg1;
- (void)onClientEventVehicleSpeed:(id)arg1;
- (void)onDidBecomeActive:(id)arg1;
- (void)onDidEnterBackground:(id)arg1;
- (void)onLocationRequestTimeout;
- (void)onWillEnterForeground:(id)arg1;
- (void)pauseLocationUpdates:(bool)arg1;
- (bool)pausesLocationUpdatesAutomatically;
- (bool)privateMode;
- (id)privilegedServiceSession;
- (id)processName;
- (void)purgeMicroLocationData;
- (void)purgeMicroLocationSemiSupervisedData;
- (id)purpose;
- (id)rangedBeaconConstraints;
- (id)rangedRegions;
- (void)registerAsLocationClient;
- (void)removeIdentifiableClient:(id)arg1;
- (void)requestAlwaysAuthorization;
- (void)requestCurrentMicroLocationWithAdditionalInformation:(id)arg1;
- (void)requestCurrentMicroLocationWithAdditionalInformation:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)requestHistoricalLocationsWithPurposeKey:(id)arg1 sampleCount:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)requestLocation;
- (void)requestMicroLocationLearningWithCompletion:(id /* block */)arg1;
- (void)requestMicroLocationRecordingScanWithAdditionalInformation:(id)arg1;
- (void)requestMicroLocationRecordingScanWithAdditionalInformation:(id)arg1 shouldForceRecording:(bool)arg2;
- (void)requestMicroLocationStaticSourcesStatisticsWithCompletion:(id /* block */)arg1;
- (void)requestMonitorWithConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (void)requestStateForRegion:(id)arg1;
- (void)requestTemporaryFullAccuracyAuthorizationWithPurposeKey:(id)arg1;
- (void)requestTemporaryFullAccuracyAuthorizationWithPurposeKey:(id)arg1 completion:(id /* block */)arg2;
- (void)requestTemporaryPreciseLocationAuthorizationWithPurposeKey:(id)arg1;
- (void)requestTemporaryPreciseLocationAuthorizationWithPurposeKey:(id)arg1 completion:(id /* block */)arg2;
- (void)requestWhenInUseAuthorization;
- (void)requestWhenInUseAuthorizationWithPrompt;
- (void)requestWhenInUseAuthorizationWithPurposeKey:(id)arg1;
- (void)resetApps;
- (void)resumeLocationUpdates;
- (id)serviceSession;
- (void)setActivityType:(long long)arg1;
- (void)setAllowsAlteredAccessoryLocations:(bool)arg1;
- (void)setAllowsBackgroundLocationUpdates:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDesiredAccuracy:(double)arg1;
- (void)setDistanceFilter:(double)arg1;
- (void)setDynamicAccuracyReductionEnabled:(bool)arg1;
- (void)setHeadingFilter:(double)arg1;
- (void)setHeadingOrientation:(int)arg1;
- (void)setIsActuallyAWatchKitExtension:(bool)arg1;
- (void)setLocationServicesPreferencesDialogEnabled:(bool)arg1;
- (void)setMatchInfoEnabled:(bool)arg1;
- (void)setPausesLocationUpdatesAutomatically:(bool)arg1;
- (void)setPrivateMode:(bool)arg1;
- (void)setPurpose:(id)arg1;
- (void)setShowsBackgroundLocationIndicator:(bool)arg1;
- (void)setSupportInfo:(bool)arg1;
- (void)setTrackRunInfoEnabled:(bool)arg1;
- (bool)showsBackgroundLocationIndicator;
- (void)startAppStatusUpdates;
- (void)startMonitoringForRegion:(id)arg1;
- (void)startMonitoringForRegion:(id)arg1 desiredAccuracy:(double)arg2;
- (void)startMonitoringLocationPushesWithCompletion:(id /* block */)arg1;
- (void)startMonitoringSignificantLocationChanges;
- (void)startMonitoringVisits;
- (void)startRangingBeaconsInRegion:(id)arg1;
- (void)startRangingBeaconsSatisfyingConstraint:(id)arg1;
- (void)startTechStatusUpdates;
- (void)startTranscriptSessionInstantlyWithCompletion:(id /* block */)arg1;
- (void)startTranscriptSessionWithCompletion:(id /* block */)arg1;
- (void)startUpdatingHeading;
- (void)startUpdatingLocation;
- (void)startUpdatingLocationWithPrompt;
- (void)startUpdatingVehicleHeading;
- (void)startUpdatingVehicleSpeed;
- (void)stopAppStatusUpdates;
- (void)stopMonitoringForRegion:(id)arg1;
- (void)stopMonitoringLocationPushes;
- (void)stopMonitoringSignificantLocationChanges;
- (void)stopMonitoringVisits;
- (void)stopRangingBeaconsInRegion:(id)arg1;
- (void)stopRangingBeaconsSatisfyingConstraint:(id)arg1;
- (void)stopTechStatusUpdates;
- (void)stopUpdatingHeading;
- (void)stopUpdatingLocation;
- (void)stopUpdatingVehicleHeading;
- (void)stopUpdatingVehicleSpeed;
- (bool)supportInfo;
- (id)technologiesInUse;
- (void)willPromptForTranscriptSessionWithCompletion:(id /* block */)arg1;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (long long)hm_hmdLocationAuthorizationFromCLAuthorizationStatus:(int)arg1;
+ (long long)hm_hmdRegionStateFromCLRegionState:(long long)arg1;
+ (bool)hm_isLocationAllowedForAuthorizationStatus:(int)arg1;

// Image: /System/Library/PrivateFrameworks/WeatherCore.framework/WeatherCore

+ (int)wc_authorizationStatus;

@end
