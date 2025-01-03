/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKFeatureAvailabilityHealthDataRequirementStore : NSObject <HKFeatureAvailabilityHealthDataRequirementEvaluationProviding, HKFeatureAvailabilityHealthDataRequirementStoreClient, _HKXPCExportable> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMapTable * _lock_requirementsByObserver;
    HKObserverSet * _observers;
    HKTaskServerProxyProvider * _proxyProvider;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)taskIdentifier;

- (void).cxx_destruct;
- (id)_allObservedRequirements;
- (void)_handleAutomaticProxyReconnection;
- (void)_notifyObservers:(id /* block */)arg1;
- (void)_reevaluateAllObservedRequirementsAndNotifyObservers;
- (void)_startObservingRequirements:(id)arg1 activationHandler:(id /* block */)arg2;
- (bool)_synchronouslyStartObservingWithError:(id*)arg1;
- (void)client_featureAvailabilityRequirement:(id)arg1 didUpdateSatisfaction:(bool)arg2;
- (void)connectionInvalidated;
- (id)evaluationOfRequirements:(id)arg1 error:(id*)arg2;
- (id)exportedInterface;
- (id)initWithHealthStore:(id)arg1;
- (void)registerObserver:(id)arg1 forRequirements:(id)arg2 queue:(id)arg3;
- (void)registerObserver:(id)arg1 forRequirements:(id)arg2 queue:(id)arg3 activationHandler:(id /* block */)arg4;
- (id)remoteInterface;
- (void)unregisterObserver:(id)arg1;

@end
