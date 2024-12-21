/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDWorkoutEffortRelationshipQueryServer : HDBatchedQueryServer <HDAssociationObserver> {
    long long  _anchor;
    _HKWorkoutEffortRelationshipQueryServerConfiguration * _ratingOfExertionAssociationQueryServerConfiguration;
}

@property (nonatomic) long long anchor;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) _HKWorkoutEffortRelationshipQueryServerConfiguration *ratingOfExertionAssociationQueryServerConfiguration;
@property (readonly) Class superclass;

+ (Class)queryClass;
+ (id)requiredEntitlements;

- (void).cxx_destruct;
- (long long)_batchObjectsWithError:(id*)arg1 batchHandler:(id /* block */)arg2;
- (id)_fetchSamplesForWorkoutPID:(long long)arg1 activity:(id)arg2 options:(long long)arg3 limit:(unsigned long long)arg4 sortDescending:(bool)arg5 error:(id*)arg6;
- (id)_filteredRelationships:(id)arg1 anchor:(id)arg2;
- (void)_handleBatchedQueryResult:(long long)arg1 error:(id)arg2;
- (void)_queue_fetchAssociatedEffortSamplesWithHandler:(id /* block */)arg1;
- (void)_queue_start;
- (void)_queue_stop;
- (id)_relationshipForWorkout:(id)arg1 activity:(id)arg2 samples:(id)arg3;
- (long long)anchor;
- (void)associationsUpdatedForObject:(id)arg1 subObject:(id)arg2 type:(unsigned long long)arg3 objects:(id)arg4 anchor:(id)arg5;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (id)queryClient;
- (id)ratingOfExertionAssociationQueryServerConfiguration;
- (void)setAnchor:(long long)arg1;

@end