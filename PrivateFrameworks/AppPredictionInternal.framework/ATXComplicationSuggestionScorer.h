/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXComplicationSuggestionScorer : NSObject {
    ATXComplicationAppBundleIdsScorer * _bundleIdsScorer;
    ATXComplicationSuggestionHeuristics * _heuristics;
}

- (void).cxx_destruct;
- (id)_appBundleIdsForComplicationDescriptors:(id)arg1;
- (id)_decaySubsequentScoresFromSameBundleId:(id)arg1 decayFactor:(double)arg2;
- (bool)_isNewlyInstalledWidget:(id)arg1 additionalData:(id)arg2;
- (bool)_modularSetIsSuggestibleGivenAppScoreDictionary:(id)arg1;
- (id)_scoredComplicationsForInlineSetGivenDescriptors:(id)arg1;
- (id)_scoredComplicationsForModularSetGivenDescriptors:(id)arg1 appBundleIdScores:(id)arg2 heuristicScores:(id)arg3 widgetDescriptorsAdditionalData:(id)arg4;
- (id)complicationDescriptorsForInlineSetGivenComplicationDescriptors:(id)arg1;
- (id)complicationDescriptorsForModularSetGivenComplicationDescriptors:(id)arg1 widgetDescriptorsAdditionalData:(id)arg2 aggregatedAppLaunchData:(id)arg3 bundleIdToCompanionBundleId:(id)arg4;
- (id)init;
- (id)inputDescriptionForSignal:(id)arg1 complicationDescriptors:(id)arg2;
- (id)modelDescription;
- (id)scoredComplicationDescriptorsForInlineSetGivenComplicationDescriptors:(id)arg1;
- (id)scoredComplicationDescriptorsForModularSetGivenComplicationDescriptors:(id)arg1 widgetDescriptorsAdditionalData:(id)arg2 aggregatedAppLaunchData:(id)arg3 bundleIdToCompanionBundleId:(id)arg4 checkEligibility:(bool)arg5;

@end
