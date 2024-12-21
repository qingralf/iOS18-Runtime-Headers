/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RespiratoryHealthDaemon.framework/RespiratoryHealthDaemon
 */

@interface HDRespiratoryProfileExtension : NSObject <HDDiagnosticObject, HDFeatureAvailabilityExtensionObserver, HDFeatureAvailabilityExtensionProvider, HDProfileExtension, HDProfileReadyObserver> {
    NSUserDefaults * _ageGatingDefaults;
    HDRPRespiratoryDailyAnalytics * _dailyAnalytics;
    <HDFeatureAvailabilityExtension> * _featureAvailabilityManager;
    HDBackgroundFeatureDeliveryManager * _featureDeliveryManager;
    HKRPOxygenSaturationOnboardingCacher * _onboardingCacher;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    HKRPOxygenSaturationSettings * _settings;
    id /* block */  _unitTesting_healthLiteSessionWithDelegateHandler;
}

@property (nonatomic, readonly) HDRPRespiratoryDailyAnalytics *dailyAnalytics;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <HDFeatureAvailabilityExtension> *featureAvailabilityManager;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HDProfile *profile;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ unitTesting_healthLiteSessionWithDelegateHandler;

- (void).cxx_destruct;
- (void)_setupOrResetSettingsIfNeededWithFeatureAvailabilityManager:(id)arg1;
- (void)_setupSettingsWithProfile:(id)arg1;
- (void)_updateBackgroundRecordingSettings;
- (id)dailyAnalytics;
- (void)dealloc;
- (id)diagnosticDescription;
- (void)featureAvailabilityExtensionDidUpdateRegionAvailability:(id)arg1;
- (id)featureAvailabilityExtensionForFeatureIdentifier:(id)arg1;
- (void)featureAvailabilityExtensionOnboardingCompletionDataDidBecomeAvailable:(id)arg1;
- (id)featureAvailabilityManager;
- (void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)arg1;
- (void)featureAvailabilityProvidingDidUpdatePairedDeviceCapability:(id)arg1;
- (id)initWithProfile:(id)arg1;
- (id)initWithProfile:(id)arg1 featureAvailabilityManager:(id)arg2 ageGatingDefaults:(id)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)oxygenSaturationSessionWithDelegate:(id)arg1 queue:(id)arg2;
- (id)profile;
- (void)profileDidBecomeReady:(id)arg1;
- (void)setFeatureAvailabilityManager:(id)arg1;
- (void)setUnitTesting_healthLiteSessionWithDelegateHandler:(id /* block */)arg1;
- (void)startObservingAgeGatingDefaults;
- (id /* block */)unitTesting_healthLiteSessionWithDelegateHandler;

@end