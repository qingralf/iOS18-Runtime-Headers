/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _ATXDuetHelper : NSObject {
    _PASLock * _deletionHandlerLock;
    _PASLock * _rootOfAppDataLock;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_computeRootOfAppDataWithLockWitness:(id)arg1;
- (unsigned long long)_countDuetStream:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 otherPredicates:(id)arg4 limit:(unsigned long long)arg5;
- (void)_enumerateBatchesInDuetStream:(id)arg1 creationDateStart:(id)arg2 creationDateEnd:(id)arg3 otherPredicates:(id)arg4 limit:(unsigned long long)arg5 ascending:(bool)arg6 block:(id /* block */)arg7;
- (void)_enumerateBatchesInDuetStream:(id)arg1 creationDateStart:(id)arg2 creationDateEnd:(id)arg3 otherPredicates:(id)arg4 limit:(unsigned long long)arg5 batchSize:(unsigned long long)arg6 ascending:(bool)arg7 block:(id /* block */)arg8;
- (void)_enumerateBatchesInDuetStream:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 otherPredicates:(id)arg4 limit:(unsigned long long)arg5 ascending:(bool)arg6 block:(id /* block */)arg7;
- (void)_enumerateBatchesInDuetStream:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 otherPredicates:(id)arg4 limit:(unsigned long long)arg5 batchSize:(unsigned long long)arg6 ascending:(bool)arg7 block:(id /* block */)arg8;
- (void)_handleTombstoneCreationWithNotification:(id)arg1;
- (id)_queryDuetStream:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 otherPredicates:(id)arg4 limit:(unsigned long long)arg5;
- (id)_queryDuetStreamUnbatched:(id)arg1 creationDateStart:(id)arg2 creationDateEnd:(id)arg3 ascending:(bool)arg4 otherPredicates:(id)arg5 limit:(unsigned long long)arg6 offset:(unsigned long long)arg7;
- (id)_queryDuetStreamUnbatched:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ascending:(bool)arg4 otherPredicates:(id)arg5 limit:(unsigned long long)arg6 offset:(unsigned long long)arg7;
- (void)dealloc;
- (void)deregisterDeletionHandlerWithToken:(unsigned long long)arg1;
- (void)enumerateBatchedEligibleActivityDeletionUUIDsAndDatesBetweenStartDate:(id)arg1 endDate:(id)arg2 batchSize:(unsigned long long)arg3 block:(id /* block */)arg4;
- (void)enumerateBatchedIntentDeletionUUIDsAndDatesBetweenStartdate:(id)arg1 endDate:(id)arg2 batchSize:(unsigned long long)arg3 block:(id /* block */)arg4;
- (void)enumerateRelevantShortcutsAndBundleIdsBetweenStartDate:(id)arg1 endDate:(id)arg2 limit:(unsigned long long)arg3 block:(id /* block */)arg4;
- (id)getAppLaunchesBetweenStartDate:(id)arg1 endDate:(id)arg2;
- (id)getAppLaunchesBetweenStartDate:(id)arg1 endDate:(id)arg2 batchSize:(unsigned long long)arg3;
- (id)getAppLaunchesBetweenStartDate:(id)arg1 endDate:(id)arg2 bundleIdFilter:(id)arg3 limit:(unsigned long long)arg4;
- (id)getAppLaunchesBetweenStartDate:(id)arg1 endDate:(id)arg2 bundleIdFilter:(id)arg3 limit:(unsigned long long)arg4 batchSize:(unsigned long long)arg5;
- (id)getAppLaunchesFromUsageBetweenStartDate:(id)arg1 endDate:(id)arg2 limit:(unsigned long long)arg3;
- (unsigned long long)getDocFreqFor:(id)arg1 contentKey:(id)arg2;
- (id)getFirstAppLaunchBetweenStartDate:(id)arg1 endDate:(id)arg2 bundleIdFilter:(id)arg3;
- (id)getLastAppLaunchBetweenStartDate:(id)arg1 endDate:(id)arg2 bundleIdFilter:(id)arg3;
- (id)getMicroLocationsFromLastMonth;
- (id)getMostRecentMicroLocation;
- (id)getScreenTransitionsBetweenStartDate:(id)arg1 endDate:(id)arg2;
- (id)init;
- (unsigned long long)registerDeletionHandler:(id /* block */)arg1 queue:(id)arg2;

@end