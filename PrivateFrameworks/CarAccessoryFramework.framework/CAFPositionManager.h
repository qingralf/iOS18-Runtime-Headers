/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarAccessoryFramework.framework/CarAccessoryFramework
 */

@interface CAFPositionManager : NSObject <CAFCarObserverPrivate, CAFServiceObserver> {
    CAFCar * _car;
    CARObserverHashTable * _observers;
    NSSet * _positionedAccessories;
    NSArray * _positionedServices;
    NSDictionary * _servicesForVehicleLayoutKey;
    unsigned long long  _state;
    NSDictionary * _vehicleLayoutKeysForServiceType;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) CAFCar *car;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CARObserverHashTable *observers;
@property (nonatomic, retain) NSSet *positionedAccessories;
@property (nonatomic, retain) NSArray *positionedServices;
@property (nonatomic, retain) NSDictionary *servicesForVehicleLayoutKey;
@property (nonatomic) unsigned long long state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *vehicleLayoutKeys;
@property (nonatomic, retain) NSDictionary *vehicleLayoutKeysForServiceType;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (bool)_isVehicleLayoutKeyCharacteristic:(id)arg1;
- (id)_positionedServices;
- (void)_queue_buildTrackingCache;
- (unsigned long long)_queue_currentState;
- (unsigned long long)_queue_positionServicesState;
- (void)_rebuildCacheIfNeededforReason:(id)arg1;
- (unsigned long long)_stateForPositionedServices:(id)arg1;
- (bool)accessoryIsTracked:(id)arg1;
- (id)car;
- (void)carDidUpdate:(id)arg1 accessory:(id)arg2 service:(id)arg3 characteristic:(id)arg4;
- (void)carDidUpdate:(id)arg1 receivedAllValues:(bool)arg2;
- (void)carDidUpdateAccessories:(id)arg1;
- (void)carIsConfigured:(id)arg1;
- (id)initWithCar:(id)arg1;
- (id)observers;
- (id)positionedAccessories;
- (id)positionedServices;
- (void)registerObserver:(id)arg1;
- (void)serviceDidUpdate:(id)arg1 characteristic:(id)arg2 fromGroupUpdate:(bool)arg3;
- (id)servicesFor:(Class)arg1 row:(unsigned long long)arg2 column:(unsigned long long)arg3;
- (id)servicesForVehicleLayoutKey;
- (id)servicesForVehicleLayoutKey:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setPositionedAccessories:(id)arg1;
- (void)setPositionedServices:(id)arg1;
- (void)setServicesForVehicleLayoutKey:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setVehicleLayoutKeysForServiceType:(id)arg1;
- (unsigned long long)state;
- (void)unregisterObserver:(id)arg1;
- (id)vehicleLayoutKeys;
- (id)vehicleLayoutKeysFor:(Class)arg1;
- (id)vehicleLayoutKeysForServiceType;
- (id)workQueue;

@end