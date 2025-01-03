/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXComplicationAppBundleIdsScorer : NSObject {
    BMStream * _appLaunchStream;
    ATXHomeScreenConfigCache * _hsCache;
    ATXComplicationSuggestionParameters * _parameters;
    ATXWatchFaceConfigurationCollector * _watchFaceConfiguration;
}

- (void).cxx_destruct;
- (id)_scoredComplicationBundleIdsForModularSet:(id)arg1 bundleIdToAppLaunchData:(id)arg2 bundleIdToCompanionBundleId:(id)arg3 bundleIdToPriors:(id)arg4 widgetAppBundleIdsOnHomeScreen:(id)arg5 complicationBundleIdCountsOnWatch:(id)arg6;
- (id)_widgetAppBundleIdsOnHomeScreen;
- (id)init;
- (id)inputDescriptionForSignal:(id)arg1 complicationAppBundleIds:(id)arg2;
- (id)rankedComplicationAppBundleIdsGivenComplicationAppBundleIds:(id)arg1 bundleIdToAppLaunchData:(id)arg2 bundleIdToCompanionBundleId:(id)arg3 bundleIdToPriors:(id)arg4 widgetAppBundleIdsOnHomeScreen:(id)arg5;
- (id)scoredComplicationBundleIdsForModularSet:(id)arg1 aggregatedAppLaunchData:(id)arg2 bundleIdToCompanionBundleId:(id)arg3;

@end
