/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarAccessoryFramework.framework/CarAccessoryFramework
 */

@interface CAFFuelConsumption : CAFService

@property (nonatomic, readonly) NSMeasurement *fuelEfficiency;
@property (nonatomic, readonly) CAFMeasurementCharacteristic *fuelEfficiencyCharacteristic;
@property (nonatomic, readonly) bool fuelEfficiencyInvalid;
@property (nonatomic, readonly) CAFUInt32Range *fuelEfficiencyRange;

+ (void)load;
+ (id)observerProtocol;
+ (id)serviceIdentifier;

- (void)_characteristicDidUpdate:(id)arg1 fromGroupUpdate:(bool)arg2;
- (void)addObserver:(id)arg1;
- (id)fuelEfficiency;
- (id)fuelEfficiencyCharacteristic;
- (bool)fuelEfficiencyInvalid;
- (id)fuelEfficiencyRange;
- (id)name;
- (void)registerObserver:(id)arg1;
- (bool)registeredForFuelEfficiency;
- (void)removeObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1;

@end
