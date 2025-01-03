/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthMobilityDaemon.framework/HealthMobilityDaemon
 */

@interface HDMobilityProfileExtension : NSObject <HDFeatureAvailabilityExtensionProvider, HDMobilityWalkingSteadinessOnboardingAcknowledgementMigrationManagerDelegate, HDSettingsMigrationManagerDelegate> {
    HDMobilityNotificationManager * _notificationManager;
    HDProfile * _profile;
    HDSettingsMigrationManager * _settingsMigrationManager;
    HDFeatureAvailabilityManager * _walkingSteadinessClassificationsAvailabilityManager;
    HDBackgroundFeatureDeliveryManager * _walkingSteadinessClassificationsBackgroundFeatureDeliveryManager;
    HDAnalyticsDailyEventManager * _walkingSteadinessDailyAnalyticsEventManager;
    HDMobilityWalkingSteadinessFeatureAvailabilityManager * _walkingSteadinessNotificationsAvailabilityManager;
    HDMobilityWalkingSteadinessOnboardingAcknowledgementMigrationManager * _walkingSteadinessOnboardingAcknowledgementMigrationManager;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_triggerImmediateSyncWithReason:(id)arg1;
- (id)featureAvailabilityExtensionForFeatureIdentifier:(id)arg1;
- (id)initWithProfile:(id)arg1;
- (void)onboardingAcknowledgementMigrationManager:(id)arg1 didCompleteMigrationWithDidUpdate:(bool)arg2;
- (void)settingsMigrationManagerDidCompleteMigration:(id)arg1 didRunMigrationSteps:(bool)arg2;

@end
