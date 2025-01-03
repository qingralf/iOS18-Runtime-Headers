/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
 */

@interface ATXTrialAssets : NSObject {
    _PASLock * _lock;
    NSString * _trialDeploymentId;
    NSString * _trialExperimentId;
    NSString * _trialTreatmentId;
}

@property (nonatomic, readonly) NSString *trialDeploymentId;
@property (nonatomic, readonly) NSString *trialExperimentId;
@property (nonatomic, readonly) NSString *trialTreatmentId;

- (void).cxx_destruct;
- (void)addUpdateHandlerWithBlock:(id /* block */)arg1;
- (id)client;
- (id)dictionaryForClass:(Class)arg1;
- (id)dictionaryForClassName:(id)arg1;
- (id)dictionaryForResource:(id)arg1;
- (id)directoryPathForTrialResource:(id)arg1;
- (void)fetchTrialExperimentIdentifiers;
- (id)filePathForClass:(Class)arg1;
- (id)filePathForClassName:(id)arg1;
- (id)filePathForResource:(id)arg1;
- (id)init;
- (id)trialDeploymentId;
- (id)trialExperimentId;
- (id)trialFactorName:(id)arg1;
- (id)trialTreatmentId;

@end
