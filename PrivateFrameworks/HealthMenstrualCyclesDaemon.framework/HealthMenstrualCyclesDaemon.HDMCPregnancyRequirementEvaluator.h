/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthMenstrualCyclesDaemon.framework/HealthMenstrualCyclesDaemon
 */

@interface HealthMenstrualCyclesDaemon.HDMCPregnancyRequirementEvaluator : NSObject <HDFeatureAvailabilityHealthDataRequirementEvaluator, HKMCPregnancyModelObserver> {
    void observers;
    void pregnancyManager;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithPregnancyManager:(id)arg1;
- (id)isRequirementSatisfied:(id)arg1 error:(id*)arg2;
- (void)pregnancyModelDidUpdate:(id)arg1;
- (void)registerObserver:(id)arg1 forRequirement:(id)arg2 queue:(id)arg3;
- (void)unregisterObserver:(id)arg1 forRequirement:(id)arg2;

@end