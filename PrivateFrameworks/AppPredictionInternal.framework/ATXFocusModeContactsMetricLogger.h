/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXFocusModeContactsMetricLogger : NSObject {
    NSMutableDictionary * _cachedContactScores;
    NSMutableDictionary * _cachedContactScoresForDenyList;
    CNContactStore * _contactStore;
    ATXModeAffinityModelsConstants * _modeAffinityModelsConstants;
    ATXDNDModeConfigurationClient * _modeConfigClient;
    ATXModeEntityTrialClientWrapper * _modeEntityTrialClientWrapper;
    ATXStableContactRepresentationDatastore * _stableContactRepresentationDatastore;
}

- (void).cxx_destruct;
- (id)_contactScoresForDenyListForMode:(unsigned long long)arg1;
- (id)_contactScoresForMode:(unsigned long long)arg1;
- (void)addContactEntitySpecificFeatures:(id)arg1 toMetric:(id)arg2;
- (id)fetchRelevantContactIdsWithModeConfigurationUIFlowLoggingEvent:(id)arg1 suggestedEntities:(id)arg2 candidateEntities:(id)arg3 currentEntities:(id)arg4;
- (id)init;
- (id)initWithContactStore:(id)arg1;
- (void)logFocusModeContactSignalsWithModeConfigurationUIFlowLoggingEvent:(id)arg1 xpcActivity:(id)arg2;
- (id)metricFieldsToFeatureNames;
- (void)populateContactModeAffinitySignalsForMode:(unsigned long long)arg1 contactId:(id)arg2 metric:(id)arg3;
- (void)populateContactModeDenyListSignalsForMode:(unsigned long long)arg1 contactId:(id)arg2 metric:(id)arg3;

@end