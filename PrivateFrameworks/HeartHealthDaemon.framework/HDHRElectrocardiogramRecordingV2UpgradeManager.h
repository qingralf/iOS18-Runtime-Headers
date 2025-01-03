/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HeartHealthDaemon.framework/HeartHealthDaemon
 */

@interface HDHRElectrocardiogramRecordingV2UpgradeManager : NSObject <HDPairedDeviceCapabilityProvidingObserver, HDProtectedDataOperationDelegate> {
    HKAnalyticsEventSubmissionManager * _analyticsSubmissionManager;
    HDProfile * _profile;
    HDProtectedDataOperation * _protectedDataOperation;
    <HDFeatureAvailabilityExtension> * _v1FeatureAvailabilityManager;
    <HDFeatureAvailabilityExtension> * _v2FeatureAvailabilityManager;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithProfile:(id)arg1 v1FeatureAvailabilityManager:(id)arg2 v2FeatureAvailabilityManager:(id)arg3 analyticsSubmissionManager:(id)arg4;
- (id)initWithProfile:(id)arg1 v1FeatureAvailabilityManager:(id)arg2 v2FeatureAvailabilityManager:(id)arg3 analyticsSubmissionManager:(id)arg4 protectedDataOperation:(id)arg5;
- (void)pairedDeviceCapabilitiesDidUpdate:(id)arg1;
- (void)performWorkForOperation:(id)arg1 profile:(id)arg2 databaseAccessibilityAssertion:(id)arg3 completion:(id /* block */)arg4;

@end
