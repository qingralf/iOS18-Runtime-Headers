/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles
 */

@interface HKMCPregnancyModelProvider : NSObject <HKMCPregnancyModelProviding> {
    HKHealthStore * _healthStore;
    NSError * _lastError;
    HKMCPregnancyModel * _lastPregnancyModel;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableArray * _nextPregnancyModelQueryResultBlocks;
    HKObserverSet * _observers;
    HKMCPregnancyStateQuery * _pregnancyModelQuery;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handlePregnancyModelQueryResult:(id)arg1 error:(id)arg2;
- (void)dealloc;
- (id)description;
- (id)getCurrentPregnancyModel;
- (id)healthStore;
- (id)initWithHealthStore:(id)arg1;
- (id)initWithHealthStore:(id)arg1 startQueryImmediately:(bool)arg2;
- (void)registerObserver:(id)arg1 isUserInitiated:(bool)arg2;
- (void)startQuery;
- (void)unregisterObserver:(id)arg1;

@end
