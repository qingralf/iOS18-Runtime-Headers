/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _ATXGlobals : NSObject {
    NSDictionary * _parameters;
}

+ (id)abHelperWithMobileAssetsGivenAssetClass:(Class)arg1;
+ (id)abHelperWithTrialAssetsGivenAssetClass:(Class)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)abGroupIdentifier;
- (double)actionCoarseGeoHashDecayHalflife;
- (int)actionExperienceHighConfidenceAppActionCountThreshold;
- (double)actionExperienceHighConfidenceThreshold;
- (int)actionExperienceMediumConfidenceAppActionCountThreshold;
- (double)actionExperienceMediumConfidenceThreshold;
- (id)actionFallbacksBlendingModelVersion;
- (id)actionPredictionBlendingModelVersion;
- (int)actionPredictionFirstStageBeamWidth;
- (double)actionPredictionInternalBuildSessionLogSamplingRate;
- (double)actionPredictionInternalBuildShadowLogSamplingRate;
- (double)actionPredictionSessionLogSamplingRate;
- (int)actionPredictionSessionLoggingBottomBlockMaxItemsToLog;
- (double)actionPredictionSessionLoggingDurationResolutionSec;
- (double)actionPredictionShadowLogSamplingRate;
- (double)actionSpecificGeoHashDecayHalflife;
- (int)actionSpotlightCaptureRateActionAppLaunchThresholdSeconds;
- (int)actionSpotlightCaptureRateForwardQueryThresholdSeconds;
- (int)actionSpotlightCaptureRateSecondsAfterSessionEnd;
- (double)airplaneModeLaunchDecayHalflife;
- (bool)allowBehavioralPredictionsOnLockscreen;
- (double)appActionAirplaneModeLaunchDecayHalflife;
- (double)appActionCoreMotionLaunchDecayHalflife;
- (double)appActionDayOfWeekLaunchDecayHalflife;
- (double)appActionLaunchDecayHalflife;
- (double)appActionLaunchSequenceDecayHalflife;
- (double)appActionTrendingLaunchDecayHalflife;
- (double)appActionUnlockTimeDecayHalflife;
- (double)appActionWifiSSIDLaunchDecayHalflife;
- (double)appAndActionCoarseTimePowLocationDecayHalflife;
- (double)appAndActionSpecificTimePowLocationDecayHalflife;
- (double)appCoarseGeoHashDecayHalflife;
- (double)appConfirmsCoarseGeoHashDecayHalflife;
- (double)appConfirmsDayOfWeekDecayHalflife;
- (double)appConfirmsSpecificGeoHashDecayHalflife;
- (double)appConfirmsTwoHourTimeIntervalDecayHalflife;
- (int)appConnectionMinAverageLaunches;
- (int)appConnectionMinTotalLaunches;
- (double)appDirectoryConfirmsCoarseGeohashDecayHalflife;
- (double)appDirectoryConfirmsCoarseTimePOWLocationDecayHalflife;
- (double)appDirectoryConfirmsDayOfWeekDecayHalflife;
- (double)appDirectoryConfirmsSpecificGeohashDecayHalflife;
- (double)appDirectoryConfirmsSpecificTimeDOWLocationDecayHalflife;
- (double)appDirectoryConfirmsTwoHourTimeIntervalDecayHalflife;
- (double)appDirectoryExplicitRejectsCoarseTimePOWLocationDecayHalflife;
- (double)appDirectoryLaunchDecayHalflife;
- (double)appDirectoryRejectsCoarseGeohashDecayHalflife;
- (double)appDirectoryRejectsCoarseTimePOWLocationDecayHalflife;
- (double)appDirectoryRejectsDayOfWeekDecayHalflife;
- (double)appDirectoryRejectsSpecificGeohashDecayHalflife;
- (double)appDirectoryRejectsSpecificTimeDOWLocationDecayHalflife;
- (double)appDirectoryRejectsTwoHourTimeIntervalDecayHalflife;
- (double)appExplicitRejectsCoarseTimePOWLocationDecayHalflife;
- (double)appLaunchDecayHalflife;
- (double)appLaunchesTwoHourTimeIntervalDecayHalflife;
- (double)appPredictionBlendedScoreNormalizationConstant;
- (id)appPredictionBlendingModelVersion;
- (double)appPredictionGlobalScoreMultiplierPerApp;
- (double)appPredictionSessionDataHarvestSamplingRate;
- (unsigned long long)appPredictionSessionDataHarvestingMaxItems;
- (double)appRejectsCoarseGeoHashDecayHalflife;
- (double)appRejectsDayOfWeekDecayHalflife;
- (double)appRejectsSpecificGeoHashDecayHalflife;
- (double)appRejectsTwoHourTimeIntervalDecayHalflife;
- (double)appSpecificGeoHashDecayHalflife;
- (double)appZoom7GeoHashDecayHalflife;
- (id)approvedSiriKitIntents;
- (double)behavioralHomeScreenActionMinimumConfidenceThreshold;
- (double)behavioralModeRelevanceDelay;
- (double)behavioralModeRelevanceDuration;
- (id)blacklistedAppActions;
- (id)blacklistedAppActionsForPredictions;
- (id)blacklistedAppActionsForPrimaryShortcuts;
- (id)blacklistedAppActionsForShortcuts;
- (id)blacklistedAppActionsHelper:(id)arg1;
- (id)blacklistedAppsForAppPredictions;
- (id)blacklistedAppsForLockscreenPredictions;
- (double)cacheRefreshIntervalForDisabledActionConsumerSubType;
- (double)cacheRefreshIntervalForDisabledAppConsumerSubType;
- (bool)cdnDownloaderIsEnabled;
- (double)clippingThresholdForGaussianDist;
- (double)coreMotionLaunchDecayHalflife;
- (double)dayOfWeekLaunchDecayHalflife;
- (double)defaultPeriodicLoggerEnrollmentPeriodSeconds;
- (double)defaultPeriodicLoggerEnrollmentRate;
- (double)defaultPeriodicLoggerUploadIntervalSeconds;
- (double)defaultPredictionRefreshRate;
- (bool)disableLocationQualityChecksForHeroApp;
- (int)donationWeighingScheme;
- (double)donationWeighingStrength;
- (id)enabledFallbackActions;
- (int)extraAppsToLog;
- (int)extraIntentsToLog;
- (int)extraSASAppsToLog;
- (int)fallbackActionsEngagementPriorAlpha;
- (int)fallbackActionsEngagementPriorBeta;
- (double)heuristicActionExperienceHighConfidenceThreshold;
- (double)heuristicActionExperienceMediumConfidenceThreshold;
- (id)heuristicPredictionBlendingModelVersion;
- (double)heuristicsBaseScore;
- (int)heuristicsEngagementPriorAlpha;
- (int)heuristicsEngagementPriorBeta;
- (double)homeScreenAppConfirmsCoarseGeohashDecayHalflife;
- (double)homeScreenAppConfirmsCoarseTimePOWLocationDecayHalflife;
- (double)homeScreenAppConfirmsDayOfWeekDecayHalflife;
- (double)homeScreenAppConfirmsSpecificGeohashDecayHalflife;
- (double)homeScreenAppConfirmsSpecificTimeDOWLocationDecayHalflife;
- (double)homeScreenAppConfirmsTwoHourTimeIntervalDecayHalflife;
- (double)homeScreenAppExplicitRejectsCoarseTimePOWLocationDecayHalflife;
- (double)homeScreenAppRejectsCoarseGeohashDecayHalflife;
- (double)homeScreenAppRejectsCoarseTimePOWLocationDecayHalflife;
- (double)homeScreenAppRejectsDayOfWeekDecayHalflife;
- (double)homeScreenAppRejectsSpecificGeohashDecayHalflife;
- (double)homeScreenAppRejectsSpecificTimeDOWLocationDecayHalflife;
- (double)homeScreenAppRejectsTwoHourTimeIntervalDecayHalflife;
- (int)homeScreenMaxValidCacheAge;
- (double)homescreenLaunchDecayHalflife;
- (id)init;
- (id)initForTestingWithMobileAssetAssetsOnly;
- (id)initForTestingWithTrialAssetsOnly;
- (id)initWithAssetClass:(Class)arg1;
- (id)initWithEmptyAssetClass;
- (id)launchAndLocationHarvesterAppBlacklist;
- (id)launchAndLocationHarvesterGenreIdBlacklist;
- (double)launchAndLocationHarvesterSamplingRate;
- (double)launchSequenceDecayHalflife;
- (int)locationOfInterestSearchRadius;
- (int)lockscreenMaxValidCacheAge;
- (id)magicalMomentsEnabledPredictionExperts;
- (int)maxDistanceToDropOffLocationInMetersForRequestRideIntent;
- (unsigned long long)maxElementsToPerisistPerEntityForModeBackup;
- (int)maxHeuristicAppActionCount;
- (int)maxMagicalMomentsPredictions;
- (int)maxNumberOfActionDataMetricsToLogViaAWD;
- (int)maxNumberOfActionTypesPerApp;
- (int)maxSettingsZKWSuggestionsToBlend;
- (int)maxValidATXActionResponseCacheAgeSec;
- (double)maximumActionFeedbackMeanCalculationEntryAge;
- (int)maximumParameterCombinations;
- (double)maximumSlotFeedbackDatabaseEntryAge;
- (double)maximumSlotResolutionDatabaseEntryAge;
- (int)maximumSpotlightPredictions;
- (id)messageContentBlacklist;
- (int)messageContentTimeElapsed;
- (int)minDistanceToDropOffLocationInMetersForRequestRideIntent;
- (int)minimumTimespanForOnceOffActions;
- (double)notificationsCustomerSamplingRate;
- (double)notificationsHistoryDecayHalflife;
- (double)notificationsInternalSamplingRate;
- (double)notificationsSeedSamplingRate;
- (double)nsuaDonationWeight;
- (int)numberOfActionsToKeepForLogging;
- (int)numberOfRandomAppActionTypesToKeepForLogging;
- (int)numberOfRandomSlotsToKeepForLogging;
- (int)numberOfTopSASAppsToLog;
- (bool)onlyAcceptBecomeCurrentNSUAs;
- (bool)onlyUseEligibleForPrediction;
- (id)penalizedFallbackActions;
- (double)penaltyForMultipleActionsPerApp;
- (id)personalizationBlacklistedBundleIds;
- (unsigned long long)personalizationRequiredActionHistorySeconds;
- (unsigned long long)personalizationRequiredCountForRelevance;
- (double)poiCategoryDecayHalfLife;
- (double)predictedRouteAcceptThreshold;
- (double)predictionsForMultiStageLoggingLimit;
- (double)predictionsPerAppActionLimit;
- (int)previousAppActionCompareCount;
- (double)recentAppsHeuristicLookBackSeconds;
- (unsigned long long)recentAppsHeuristicMaxRecents;
- (double)scoreThresholdForBehavioralModeRelevance;
- (double)scoreThresholdForSavingAppsToModeFiles;
- (double)scoreThresholdForSavingContactsToModeFiles;
- (int)sessionLoggingAppSequenceLength;
- (bool)sessionLoggingCurrentLOITypeEnable;
- (double)sessionLoggingDistanceAccuracy;
- (bool)sessionLoggingGymDistanceEnable;
- (bool)sessionLoggingHomeDistanceEnable;
- (bool)sessionLoggingSchoolDistanceEnable;
- (int)sessionLoggingUniqueAppActionSequenceLength;
- (bool)sessionLoggingWorkDistanceEnable;
- (double)sessionObjectLogSamplingRate;
- (double)shadowLogSamplingRate;
- (double)shouldIgnoreUpcomingMediaExpirationDateForTV;
- (double)slotResolutionDayOfWeekLaunchDecayHalflife;
- (double)slotResolutionLaunchDecayHalflife;
- (double)slotResolutionLocationLaunchDecayHalflife;
- (double)slotResolutionMotionTypeLaunchDecayHalflife;
- (double)slotResolutionPartOfWeekLaunchDecayHalflife;
- (double)slotResolutionPreviousLocationLaunchDecayHalflife;
- (double)slotResolutionRatioSmoothingThreshold;
- (double)slotResolutionTimeOfDayLaunchDecayHalflife;
- (double)smoothedBudgetForTimeOfDayStd;
- (double)smoothedCountForCoarseTimeOfDayStd;
- (double)smoothedCountForTimeOfDayStd;
- (double)spotlightLaunchDecayHalflife;
- (int)spotlightMaxValidCacheAge;
- (double)timeAndDayAppLaunchesDecayHalflife;
- (unsigned long long)transitionLookaheadMaxSeconds;
- (unsigned long long)transitionLookaheadMinSeconds;
- (double)trendingLaunchDecayHalflife;
- (id)triggerPresetMinutes;
- (double)unlockTimeDecayHalflife;
- (bool)useOriginalScreenLockStateStream;
- (id)whitelistedActionKeysForHomeScreen;
- (id)whitelistedActionTypesForAnchorModelLogging;
- (id)whitelistedActionTypesForHomeScreen;
- (id)whitelistedAnchorsForMagicalMomentsOnHomeScreen;
- (id)whitelistedBundlesForAnchorModelLogging;
- (id)whitelistedDonationDaemonBundleIds;
- (double)wifiSSIDLaunchDecayHalflife;

@end