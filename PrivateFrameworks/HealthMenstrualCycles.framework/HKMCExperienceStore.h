/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles
 */

@interface HKMCExperienceStore : NSObject <HKMCExperienceStoreProviding, HKMCExperienceStoreStoreClient, _HKXPCExportable> {
    HKObserverSet * _observers;
    HKTaskServerProxyProvider * _proxyProvider;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)taskIdentifier;

- (void).cxx_destruct;
- (void)client_experienceModelDidUpdate:(id)arg1;
- (void)connectionInvalidated;
- (void)deleteAllPregnancySetupRecordsWithCompletion:(id /* block */)arg1;
- (void)deleteSetupRecord:(id)arg1 completion:(id /* block */)arg2;
- (id)exportedInterface;
- (void)fetchExperienceModelWithCompletion:(id /* block */)arg1;
- (id)getCachedPregnancyModelWithError:(id*)arg1;
- (id)initWithHealthStore:(id)arg1;
- (void)persistSetupRecord:(id)arg1 completion:(id /* block */)arg2;
- (void)persistSetupRecord:(id)arg1 mergeWith:(id)arg2 completion:(id /* block */)arg3;
- (void)registerObserver:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)remoteInterface;
- (void)unregisterObserver:(id)arg1;

@end
