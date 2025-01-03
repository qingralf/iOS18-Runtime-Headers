/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKHealthStore : NSObject <HKAnalyticsHealthDataSource, HKFeatureAvailabilityHealthDataSource, HKHealthStoreClientInterface, HKProxyProviderSource, HKQueryDelegate, _HKXPCExportable> {
    id  __hkui_authorizationViewControllerPresenter;
    unsigned long long  _applicationSDKVersionToken;
    id /* block */  _authorizationDelegateTransactionErrorHandler;
    <_HKAuthorizationPresentationController> * _authorizationPresentationController;
    bool  _canConnectToSystemMachService;
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSString * _clinicalReadAuthorizationUsageDescriptionOverride;
    NSObject<OS_dispatch_queue> * _connectionQueue;
    NSString * _daemonLaunchDarwinNotificationName;
    HKDatabaseAccessibilityAssertionStoreKeeper * _databaseAccessibilityAssertionStoreKeeper;
    long long  _databaseAccessibilityAssertionStoreKeeperDispatchOnceToken;
    NSString * _debugIdentifier;
    HKHealthServicesManager * _healthServicesManager;
    _HKXPCConnection * _healthdConnection;
    HKHealthStoreIdentifier * _identifier;
    bool  _isUsingSystemEndpoint;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    id /* block */  _mirroredSessionHandler;
    <_HKObjectPickerPresentationController> * _objectPickerPresentationController;
    HKProfileIdentifier * _profileIdentifier;
    NSMutableSet * _queries;
    NSString * _readAuthorizationUsageDescriptionOverride;
    <_HKRecalibrateEstimatesPresentationController> * _recalibrateEstimatesPresentationController;
    NSString * _researchStudyUsageDescriptionOverride;
    bool  _resumeRequired;
    bool  _resumed;
    <HKHealthStoreServerInterface> * _serverProxy;
    NSBundle * _sourceBundle;
    NSString * _sourceBundleIdentifier;
    id /* block */  _unitTest_handleExecuteQuery;
    NSString * _writeAuthorizationUsageDescriptionOverride;
}

@property (nonatomic) id _hkui_authorizationViewControllerPresenter;
@property (nonatomic, readonly) unsigned long long applicationSDKVersionToken;
@property (nonatomic) UIViewController *authorizationViewControllerPresenter;
@property bool canConnectToSystemMachService;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, copy) NSString *clinicalReadAuthorizationUsageDescriptionOverride;
@property (nonatomic, copy) NSString *daemonLaunchDarwinNotificationName;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (copy) NSString *debugIdentifier;
@property (readonly, copy) NSString *description;
@property (readonly) HKDisplayTypeController *displayTypeController;
@property (nonatomic, readonly, copy) NSString *firstName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HKHealthServicesManager *healthServicesManager;
@property (readonly, copy) HKHealthStoreIdentifier *identifier;
@property (nonatomic, readonly) HKProfileIdentifier *profileIdentifier;
@property (copy) HKProfileIdentifier *profileIdentifier;
@property (getter=_queries, readonly, copy) NSSet *queries;
@property (nonatomic, copy) NSString *readAuthorizationUsageDescriptionOverride;
@property (nonatomic, readonly) bool requiresWeakRetention;
@property (nonatomic, copy) NSString *researchStudyUsageDescriptionOverride;
@property (retain) NSBundle *sourceBundle;
@property (copy) NSString *sourceBundleIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ unitTest_handleExecuteQuery;
@property (readonly) HBXViewControllerFactory *viewControllerFactory;
@property (nonatomic, copy) NSString *writeAuthorizationUsageDescriptionOverride;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)_applicationHasRunningWorkout;
+ (void)disallowHKHealthStoreCreation;
+ (bool)isHealthDataAvailable;
+ (bool)requireExplicitSystemMachServiceEnablement;
+ (void)setRequireExplicitSystemMachServiceEnablement:(bool)arg1;

- (void).cxx_destruct;
- (id /* block */)_actionCompletionOnClientQueue:(id /* block */)arg1;
- (void)_activeWorkoutApplicationIdentifierWithCompletion:(id /* block */)arg1;
- (void)_activityMoveModeObjectWithCompletion:(id /* block */)arg1;
- (id)_activityMoveModeWithError:(id*)arg1;
- (void)_addQuery:(id)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_biologicalSexWithCompletion:(id /* block */)arg1;
- (void)_bloodTypeWithCompletion:(id /* block */)arg1;
- (id)_bodyMassCharacteristicQuantityWithError:(id*)arg1;
- (id)_cardioFitnessMedicationsUseWithError:(id*)arg1;
- (id)_characteristicForDataType:(id)arg1 error:(id*)arg2;
- (void)_characteristicForDataType:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)_clientClinicalReadAuthorizationUsageDescription;
- (void)_clientQueue_invokeAuthorizationDelegateTransactionErrorHandlerWithError:(id)arg1;
- (id)_clientReadAuthorizationUsageDescription;
- (id)_clientWriteAuthorizationUsageDescription;
- (id)_clinicalAuthorizationPresentationRequestForRecord:(id)arg1;
- (void)_closeTransactionWithTypes:(id)arg1 anchor:(id)arg2 ackTime:(id)arg3;
- (void)_connectionQueue_setUpWithEndpoint:(id)arg1;
- (void)_currentWorkoutSnapshotWithCompletion:(id /* block */)arg1;
- (void)_dateOfBirthWithCompletion:(id /* block */)arg1;
- (void)_deleteObjects:(id)arg1 options:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)_discardServerProxiesForServer:(id)arg1;
- (void)_faultIfInnappropriateHost;
- (void)_fetchBoolDaemonPreferenceForKey:(id)arg1 completion:(id /* block */)arg2;
- (void)_fetchDaemonPreferenceForKey:(id)arg1 completion:(id /* block */)arg2;
- (void)_firstPartyWorkoutSnapshotWithCompletion:(id /* block */)arg1;
- (void)_fitzpatrickSkinTypeWithCompletion:(id /* block */)arg1;
- (id)_getDatabaseAccessibilityAssertionStoreKeeper;
- (id)_healthDataAuthorizationPresentationRequestForRecord:(id)arg1;
- (id)_heightCharacteristicQuantityWithError:(id*)arg1;
- (id)_hkui_authorizationViewControllerPresenter;
- (id)_initWithIdentifier:(id)arg1;
- (id)_leanBodyMassCharacteristicQuantityWithError:(id*)arg1;
- (id)_lock_connectionWithError:(id*)arg1;
- (id)_modificationDateForCharacteristicWithType:(id)arg1 error:(id*)arg2;
- (id /* block */)_multiActionCompletionOnClientQueue:(id /* block */)arg1;
- (id /* block */)_objectCompletionOnClientQueue:(id /* block */)arg1;
- (bool)_prepareObjectsForSaving:(id)arg1 errorOut:(id*)arg2;
- (id)_queries;
- (void)_ratingOfExertionSamplesForWorkout:(id)arg1 workoutActivity:(id)arg2 completion:(id /* block */)arg3;
- (void)_relateReplaceRatingOfExertionSample:(id)arg1 toWorkout:(id)arg2 forActivity:(id)arg3 completion:(id /* block */)arg4;
- (void)_removePreferredUnitForType:(id)arg1 completion:(id /* block */)arg2;
- (void)_removeQuery:(id)arg1;
- (void)_replaceWorkout:(id)arg1 withWorkout:(id)arg2 completion:(id /* block */)arg3;
- (id)_researchStudyUsageDescription;
- (void)_safeFetchDaemonPreferenceForKey:(id)arg1 expectedReturnClass:(Class)arg2 completion:(id /* block */)arg3;
- (void)_saveObjects:(id)arg1 atomically:(bool)arg2 skipInsertionFilter:(bool)arg3 completion:(id /* block */)arg4;
- (void)_sendNextObjectBatch:(id)arg1 skipInsertionFilter:(bool)arg2 lastRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 server:(id)arg4 transaction:(id)arg5 completion:(id /* block */)arg6;
- (void)_serverProxyWithHandler:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (bool)_setActivityMoveMode:(long long)arg1 error:(id*)arg2;
- (void)_setBackgroundDeliveryFrequencyDataType:(id)arg1 frequency:(long long)arg2 withCompletion:(id /* block */)arg3;
- (bool)_setBiologicalSex:(long long)arg1 error:(id*)arg2;
- (bool)_setBloodType:(long long)arg1 error:(id*)arg2;
- (bool)_setBodyMassCharacteristicQuantity:(id)arg1 error:(id*)arg2;
- (bool)_setCardioFitnessMedicationsUse:(unsigned long long)arg1 error:(id*)arg2;
- (bool)_setCharacteristic:(id)arg1 forDataType:(id)arg2 error:(id*)arg3;
- (void)_setConfigurationPropertyUsingBlock:(id /* block */)arg1 resumeRequired:(bool)arg2;
- (void)_setDaemonPreferenceValue:(id)arg1 forKey:(id)arg2 completion:(id /* block */)arg3;
- (bool)_setDateOfBirthComponents:(id)arg1 error:(id*)arg2;
- (bool)_setFitzpatrickSkinType:(long long)arg1 error:(id*)arg2;
- (bool)_setHeightCharacteristicQuantity:(id)arg1 error:(id*)arg2;
- (bool)_setLeanBodyMassCharacteristicQuantity:(id)arg1 error:(id*)arg2;
- (void)_setMirroredWorkoutSessionObserverStateToEnabled:(bool)arg1 handler:(id /* block */)arg2;
- (void)_setPreferredUnit:(id)arg1 forType:(id)arg2 completion:(id /* block */)arg3;
- (bool)_setUserEnteredMenstrualCycleLengthCharacteristicQuantity:(id)arg1 error:(id*)arg2;
- (bool)_setUserEnteredMenstrualPeriodLengthCharacteristicQuantity:(id)arg1 error:(id*)arg2;
- (bool)_setWheelchairUse:(long long)arg1 error:(id*)arg2;
- (void)_shouldGenerateDemoDataPreferenceIsSet:(id /* block */)arg1;
- (id)_sourceBundleOrDefaultBundle;
- (void)_startWatchAppWithWorkoutPlanData:(id)arg1 processIdentifier:(int)arg2 completion:(id /* block */)arg3;
- (bool)_supportsFeature:(unsigned long long)arg1;
- (id)_synchronousServerProxyWithErrorHandler:(id /* block */)arg1;
- (void)_throwIfAuthorizationDisallowedForSharing:(bool)arg1 types:(id)arg2;
- (void)_throwIfClinicalTypesRequestedToShare:(id)arg1;
- (void)_throwIfParentTypeNotRequestedForSharing:(bool)arg1 types:(id)arg2;
- (void)_throwIfPerObjectReadAuthorizationNotSupportedForType:(id)arg1;
- (void)_throwIfUsingIncorrectAuthorizationRequestType:(id)arg1;
- (id)_userEnteredMenstrualCycleLengthCharacteristicQuantityWithError:(id*)arg1;
- (id)_userEnteredMenstrualPeriodLengthCharacteristicQuantityWithError:(id*)arg1;
- (void)_validateAuthorizationRequestWithShareTypes:(id)arg1 readTypes:(id)arg2;
- (void)_validateAuthorizationRequiredTypes;
- (void)_validateClinicalHealthRecordsPurposeStringsForSharingTypes:(id)arg1 readingTypes:(id)arg2;
- (void)_validateHealthDataPurposeStringsForSharingTypes:(id)arg1 readingTypes:(id)arg2 isResearchStudy:(bool)arg3;
- (void)_validatePurposeStringsForSharingTypes:(id)arg1 readingTypes:(id)arg2;
- (void)_wheelchairUseWithCompletion:(id /* block */)arg1;
- (id /* block */)_wrappedErrorHandler:(id /* block */)arg1 proxy:(id)arg2;
- (id)activityMoveModeWithError:(id*)arg1;
- (void)addHealthServicePairing:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)addSamples:(id)arg1 toWorkout:(id)arg2 completion:(id /* block */)arg3;
- (id)ageWithCurrentDate:(id)arg1 error:(id*)arg2;
- (unsigned long long)applicationSDKVersionToken;
- (void)associateSampleUUIDs:(id)arg1 withSampleUUID:(id)arg2 completion:(id /* block */)arg3;
- (long long)authorizationStatusForType:(id)arg1;
- (void)beginAuthorizationDelegateTransactionWithSessionIdentifier:(id)arg1 sourceHandler:(id /* block */)arg2 errorHandler:(id /* block */)arg3;
- (id)biologicalSexWithError:(id*)arg1;
- (id)bloodTypeWithError:(id*)arg1;
- (bool)canConnectToSystemMachService;
- (id)clientQueue;
- (void)clientRemote_conceptIndexManagerDidBecomeQuiescentWithSamplesProcessedCount:(long long)arg1;
- (void)clientRemote_didCreateRemoteSessionWithConfiguration:(id)arg1;
- (void)clientRemote_presentAuthorizationWithRequestRecord:(id)arg1 completion:(id /* block */)arg2;
- (void)clientRemote_presentAuthorizationWithSession:(id)arg1 completion:(id /* block */)arg2;
- (void)clientRemote_presentRecalibrateEstimatesRequestWithRecord:(id)arg1 completion:(id /* block */)arg2;
- (void)clientRemote_unitPreferencesDidUpdate;
- (id)clinicalReadAuthorizationUsageDescriptionOverride;
- (void)closeTransactionForTypes:(id)arg1 anchor:(id)arg2 ackTime:(id)arg3 query:(id)arg4;
- (void)connectionConfigured;
- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (id)daemonLaunchDarwinNotificationName;
- (id)dateOfBirthComponentsWithError:(id*)arg1;
- (id)dateOfBirthWithError:(id*)arg1;
- (void)dealloc;
- (id)debugIdentifier;
- (void)deleteAllSamplesWithTypes:(id)arg1 sourceBundleIdentifier:(id)arg2 options:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)deleteClientSourceWithCompletion:(id /* block */)arg1;
- (void)deleteMedicalIDData;
- (void)deleteMedicalIDDataWithCompletion:(id /* block */)arg1;
- (void)deleteObject:(id)arg1 options:(unsigned long long)arg2 withCompletion:(id /* block */)arg3;
- (void)deleteObject:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)deleteObjects:(id)arg1 options:(unsigned long long)arg2 withCompletion:(id /* block */)arg3;
- (void)deleteObjects:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)deleteObjectsOfType:(id)arg1 predicate:(id)arg2 options:(unsigned long long)arg3 withCompletion:(id /* block */)arg4;
- (void)deleteObjectsOfType:(id)arg1 predicate:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)deleteObjectsWithUUIDs:(id)arg1 options:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)disableAllBackgroundDeliveryWithCompletion:(id /* block */)arg1;
- (void)disableBackgroundDeliveryForType:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)disableCloudSyncAndDeleteAllCloudDataWithCompletion:(id /* block */)arg1;
- (void)dropEntitlement:(id)arg1;
- (id)earliestPermittedSampleDate;
- (void)enableBackgroundDeliveryForType:(id)arg1 frequency:(long long)arg2 withCompletion:(id /* block */)arg3;
- (void)endAuthorizationDelegateTransactionWithSessionIdentifier:(id)arg1 error:(id)arg2;
- (void)endHealthServiceDiscovery:(id)arg1;
- (void)endHealthServiceSession:(id)arg1;
- (void)endWorkoutSession:(id)arg1;
- (void)executeQuery:(id)arg1;
- (void)executeQuery:(id)arg1 activationHandler:(id /* block */)arg2;
- (id)exportedInterface;
- (id)featureAvailabilityProviderForIdentifier:(id)arg1;
- (id)featureAvailabilityProvidingForFeatureIdentifier:(id)arg1;
- (id)featureStatusProviderForIdentifier:(id)arg1;
- (void)fetchCloudSyncRequiredWithCompletion:(id /* block */)arg1;
- (void)fetchMedicalIDDataCreateIfNecessary:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)fetchMedicalIDDataWithCompletion:(id /* block */)arg1;
- (void)fetchMedicalIDEmergencyContactsWithCompletion:(id /* block */)arg1;
- (void)fetchPluginServiceEndpointForIdentifier:(id)arg1 endpointHandler:(id /* block */)arg2 errorHandler:(id /* block */)arg3;
- (void)fetchServerURLForAssetType:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchTaskServerEndpointForIdentifier:(id)arg1 pluginURL:(id)arg2 taskUUID:(id)arg3 instanceUUID:(id)arg4 configuration:(id)arg5 endpointHandler:(id /* block */)arg6 errorHandler:(id /* block */)arg7;
- (id)firstName;
- (id)fitzpatrickSkinTypeWithError:(id*)arg1;
- (void)forceCloudSyncDataUploadForProfileWithCompletion:(id /* block */)arg1;
- (void)forceCloudSyncWithOptions:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)forceCloudSyncWithOptions:(unsigned long long)arg1 reason:(long long)arg2 completion:(id /* block */)arg3;
- (void)generateFakeDataForActivityType:(long long)arg1 minutes:(double)arg2 completion:(id /* block */)arg3;
- (void)getAllHealthDataAccessForSiriWithCompletion:(id /* block */)arg1;
- (void)getEnabledStatusForPeripheral:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)getHealthLiteValueForKey:(id)arg1 completion:(id /* block */)arg2;
- (void)getRequestStatusForAuthorizationToShareTypes:(id)arg1 readTypes:(id)arg2 completion:(id /* block */)arg3;
- (void)handleAuthorizationForExtensionWithCompletion:(id /* block */)arg1;
- (id)healthDataRequirementEvaluationProvider;
- (void)healthPeripheralsWithCustomProperties:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)healthPeripheralsWithFilter:(unsigned long long)arg1 handler:(id /* block */)arg2;
- (void)healthServicePairingsWithHandler:(id /* block */)arg1;
- (id)healthServicesManager;
- (id)healthStoreConfiguration;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithListenerEndpoint:(id)arg1;
- (id)initWithListenerEndpoint:(id)arg1 debugIdentifier:(id)arg2;
- (void)invalidateAllDatabaseAccessibilityAssertions;
- (void)invalidateDatabaseAccessibilityAssertion:(id)arg1;
- (void)isImproveHealthRecordsAnalyticsSubmissionAllowedWithCompletion:(id /* block */)arg1;
- (void)isProtectedDataAvailableWithCompletion:(id /* block */)arg1;
- (void)pauseWorkoutSession:(id)arg1;
- (id)pluginServiceEndpointForIdentifier:(id)arg1 error:(id*)arg2;
- (void)preferredUnitsForQuantityTypes:(id)arg1 completion:(id /* block */)arg2;
- (void)preferredUnitsForQuantityTypes:(id)arg1 version:(long long)arg2 completion:(id /* block */)arg3;
- (id)profileIdentifier;
- (void)profileIdentifierForNRDeviceUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)queryDidFinishExecuting:(id)arg1;
- (id)readAuthorizationUsageDescriptionOverride;
- (void)recalibrateEstimatesForSampleType:(id)arg1 atDate:(id)arg2 completion:(id /* block */)arg3;
- (void)recoverActiveWorkoutSessionWithCompletion:(id /* block */)arg1;
- (void)registerPeripheralIdentifier:(id)arg1 name:(id)arg2 services:(id)arg3 withCompletion:(id /* block */)arg4;
- (void)relateWorkoutEffortSample:(id)arg1 withWorkout:(id)arg2 activity:(id)arg3 completion:(id /* block */)arg4;
- (id)remoteInterface;
- (void)removeHealthServicePairing:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)requestAuthorizationToShareTypes:(id)arg1 readTypes:(id)arg2 completion:(id /* block */)arg3;
- (void)requestAuthorizationToShareTypes:(id)arg1 readTypes:(id)arg2 shouldPrompt:(bool)arg3 completion:(id /* block */)arg4;
- (void)requestDatabaseAccessibilityAssertion:(id)arg1 timeout:(double)arg2 completion:(id /* block */)arg3;
- (void)requestPerObjectReadAuthorizationForType:(id)arg1 predicate:(id)arg2 completion:(id /* block */)arg3;
- (id)requirementSatisfactionOverridesDataSource;
- (bool)requiresWeakRetention;
- (id)researchStudyUsageDescriptionOverride;
- (void)restoreEntitlement:(id)arg1;
- (void)resume;
- (void)resumeWorkoutSession:(id)arg1;
- (void)saveObject:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)saveObjects:(id)arg1 associations:(id)arg2 completion:(id /* block */)arg3;
- (void)saveObjects:(id)arg1 deleteObjects:(id)arg2 associations:(id)arg3 completion:(id /* block */)arg4;
- (void)saveObjects:(id)arg1 skipInsertionFilter:(bool)arg2 completion:(id /* block */)arg3;
- (void)saveObjects:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)setAllHealthDataAccessForSiri:(long long)arg1 completion:(id /* block */)arg2;
- (void)setCanConnectToSystemMachService:(bool)arg1;
- (void)setClinicalReadAuthorizationUsageDescriptionOverride:(id)arg1;
- (void)setDaemonLaunchDarwinNotificationName:(id)arg1;
- (void)setDebugIdentifier:(id)arg1;
- (void)setHealthLiteValue:(id)arg1 forKey:(id)arg2 completion:(id /* block */)arg3;
- (void)setProfileIdentifier:(id)arg1;
- (void)setReadAuthorizationUsageDescriptionOverride:(id)arg1;
- (void)setResearchStudyUsageDescriptionOverride:(id)arg1;
- (void)setServerURL:(id)arg1 forAssetType:(id)arg2 completion:(id /* block */)arg3;
- (void)setSourceBundle:(id)arg1;
- (void)setSourceBundleIdentifier:(id)arg1;
- (void)setUnitTest_handleExecuteQuery:(id /* block */)arg1;
- (void)setWorkoutSessionMirroringStartHandler:(id /* block */)arg1;
- (void)setWriteAuthorizationUsageDescriptionOverride:(id)arg1;
- (void)set_hkui_authorizationViewControllerPresenter:(id)arg1;
- (id)sharedRequirementEvaluationDataSource;
- (id)sourceBundle;
- (id)sourceBundleIdentifier;
- (void)splitTotalEnergy:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 resultsHandler:(id /* block */)arg4;
- (void)startHealthServiceDiscovery:(id)arg1 withHandler:(id /* block */)arg2;
- (void)startHealthServiceSession:(id)arg1 withHandler:(id /* block */)arg2;
- (void)startWatchAppWithWorkoutConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (void)startWorkoutSession:(id)arg1;
- (void)stopQuery:(id)arg1;
- (bool)supportsHealthRecords;
- (id)taskServerEndpointForIdentifier:(id)arg1 pluginURL:(id)arg2 taskUUID:(id)arg3 instanceUUID:(id)arg4 configuration:(id)arg5 error:(id*)arg6;
- (id /* block */)unitTest_handleExecuteQuery;
- (id)unitTest_replaceListenerEndpoint:(id)arg1;
- (void)unitTest_setApplicationSDKVersionToken:(unsigned long long)arg1;
- (void)unregisterPeripheralIdentifier:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)unrelateWorkoutEffortSample:(id)arg1 fromWorkout:(id)arg2 activity:(id)arg3 completion:(id /* block */)arg4;
- (void)updateMedicalIDData:(id)arg1;
- (void)updateMedicalIDData:(id)arg1 completion:(id /* block */)arg2;
- (id)userCharacteristicForDataType:(id)arg1 error:(id*)arg2;
- (id)watchLowPowerModeDataSource;
- (id)wheelchairUseWithError:(id*)arg1;
- (id)wristDetectionSettingManager;
- (id)writeAuthorizationUsageDescriptionOverride;

// Image: /System/Library/Frameworks/HealthKitUI.framework/HealthKitUI

- (id)authorizationViewControllerPresenter;
- (void)setAuthorizationViewControllerPresenter:(id)arg1;

// Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI

+ (id)fiui_localizationStringSuffixForWheelchairUser:(bool)arg1;
+ (id)fiui_sharedHealthStoreForCarousel;

// Image: /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI

- (void)averageQuantityForType:(id)arg1 unit:(id)arg2 predicate:(id)arg3 completion:(id /* block */)arg4;
- (void)calculateBMIWithCompletion:(id /* block */)arg1;
- (void)mostRecentCategorySampleOfType:(id)arg1 predicate:(id)arg2 completion:(id /* block */)arg3;
- (void)mostRecentQuantitySampleOfType:(id)arg1 predicate:(id)arg2 completion:(id /* block */)arg3;
- (void)mostRecentSampleOfType:(id)arg1 predicate:(id)arg2 completion:(id /* block */)arg3;

// Image: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI

- (void)fetchRecordsForConceptId:(id)arg1 keyPath:(id)arg2 completion:(id /* block */)arg3;

// Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox

- (id)viewControllerFactory;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

+ (bool)_assignMostRecentQuantity:(id*)arg1 dateInterval:(id*)arg2 forQuantitySample:(id)arg3;
+ (bool)_isAudioExposureQuantityType:(id)arg1;
+ (id)_mostRecentEndDateSortDescriptorForQuantityType:(id)arg1;
+ (void)_processQuantitySample:(id)arg1 error:(id)arg2 completion:(id /* block */)arg3;
+ (void)_processStatisticsCollection:(id)arg1 error:(id)arg2 completion:(id /* block */)arg3;
+ (void)_queryForMostRecentAudioExposureQuantityOfType:(id)arg1 sample:(id)arg2 healthStore:(id)arg3 attenuated:(bool)arg4 completion:(id /* block */)arg5;
+ (id)_queryForMostRecentSampleOfType:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 completion:(id /* block */)arg4;
+ (id)localizationStringAdditionForWheelchairUser;
+ (id)localizationStringSuffixForWheelchairUser:(bool)arg1;
+ (id)queryForMostRecentAttenuatedEAEQuantityWithHealthStore:(id)arg1 completion:(id /* block */)arg2;
+ (id)queryForMostRecentQuantityOfType:(id)arg1 healthStore:(id)arg2 predicate:(id)arg3 completion:(id /* block */)arg4;
+ (id)queryForMostRecentQuantityOfType:(id)arg1 predicate:(id)arg2 completion:(id /* block */)arg3;
+ (id)queryForMostRecentSampleOfType:(id)arg1 predicate:(id)arg2 completion:(id /* block */)arg3;

- (void)_fetchFirstAndLastNamesForInfoWrapper:(id)arg1 meContact:(id)arg2 completion:(id /* block */)arg3;
- (void)_nonPrimaryProfileFetchFirstAndLastNamesForInfoWrapper:(id)arg1 completion:(id /* block */)arg2;
- (void)_populateDemographicsWrapper:(id)arg1 withFirstName:(id)arg2 lastName:(id)arg3 meContact:(id)arg4;
- (void)_primaryProfileFetchFirstAndLastNamesForInfoWrapper:(id)arg1 meContact:(id)arg2 completion:(id /* block */)arg3;
- (id)createMedicalIDData;
- (id)displayTypeController;
- (void)hk_fetchExistingDemographicInformationWithCompletion:(id /* block */)arg1;
- (void)hk_fetchExistingDemographicInformationWithOptions:(long long)arg1 completion:(id /* block */)arg2;

@end
