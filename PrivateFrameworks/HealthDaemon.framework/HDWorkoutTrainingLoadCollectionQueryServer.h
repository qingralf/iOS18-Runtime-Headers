/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDWorkoutTrainingLoadCollectionQueryServer : HDQueryServer {
    _HKWorkoutTrainingLoadCollectionQueryServerConfiguration * _trainingLoadCollectionQueryServerConfiguration;
}

@property (nonatomic, readonly, copy) _HKWorkoutTrainingLoadCollectionQueryServerConfiguration *trainingLoadCollectionQueryServerConfiguration;

+ (Class)queryClass;
+ (id)requiredEntitlements;

- (void).cxx_destruct;
- (id)_queue_fetchTrainingLoadCollectionWithError:(id*)arg1;
- (void)_queue_start;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (id)trainingLoadCollectionQueryServerConfiguration;

@end