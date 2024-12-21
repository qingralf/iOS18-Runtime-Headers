/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXContextHeuristicsLifetimeEngagementMetric : _ATXCoreAnalyticsMetric {
    NSString * _actionId;
    NSString * _atxTrialDeploymentId;
    NSString * _atxTrialExperimentId;
    NSString * _atxTrialTreatmentId;
    NSString * _contextType;
    unsigned long long  _numEngaged;
    unsigned long long  _numShown;
    NSString * _trialDeploymentId;
    NSString * _trialExperimentId;
    NSString * _trialTreatmentId;
}

@property (nonatomic, copy) NSString *actionId;
@property (nonatomic, copy) NSString *atxTrialDeploymentId;
@property (nonatomic, copy) NSString *atxTrialExperimentId;
@property (nonatomic, copy) NSString *atxTrialTreatmentId;
@property (nonatomic, copy) NSString *contextType;
@property (nonatomic) unsigned long long numEngaged;
@property (nonatomic) unsigned long long numShown;
@property (nonatomic, copy) NSString *trialDeploymentId;
@property (nonatomic, copy) NSString *trialExperimentId;
@property (nonatomic, copy) NSString *trialTreatmentId;

- (void).cxx_destruct;
- (id)actionId;
- (id)atxTrialDeploymentId;
- (id)atxTrialExperimentId;
- (id)atxTrialTreatmentId;
- (id)contextType;
- (id)coreAnalyticsDictionary;
- (id)metricName;
- (unsigned long long)numEngaged;
- (unsigned long long)numShown;
- (void)setActionId:(id)arg1;
- (void)setAtxTrialDeploymentId:(id)arg1;
- (void)setAtxTrialExperimentId:(id)arg1;
- (void)setAtxTrialTreatmentId:(id)arg1;
- (void)setContextType:(id)arg1;
- (void)setNumEngaged:(unsigned long long)arg1;
- (void)setNumShown:(unsigned long long)arg1;
- (void)setTrialDeploymentId:(id)arg1;
- (void)setTrialExperimentId:(id)arg1;
- (void)setTrialTreatmentId:(id)arg1;
- (id)trialDeploymentId;
- (id)trialExperimentId;
- (id)trialTreatmentId;

@end