/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarAccessoryFramework.framework/CarAccessoryFramework
 */

@interface CAFFuelLevel : CAFService

@property (nonatomic, readonly) unsigned char fillLevelLabel;
@property (nonatomic, readonly) CAFFillLevelLabelCharacteristic *fillLevelLabelCharacteristic;
@property (nonatomic, readonly) NSMeasurement *fuelLevel;
@property (nonatomic, readonly) CAFMeasurementCharacteristic *fuelLevelCharacteristic;
@property (nonatomic, readonly) bool fuelLevelInvalid;
@property (nonatomic, readonly) NSMeasurement *fuelLevelMarkerLow;
@property (nonatomic, readonly) CAFMeasurementCharacteristic *fuelLevelMarkerLowCharacteristic;
@property (nonatomic, readonly) CAFUInt8Range *fuelLevelMarkerLowRange;
@property (nonatomic, readonly) CAFUInt8Range *fuelLevelRange;
@property (nonatomic, readonly) unsigned char fuelLevelState;
@property (nonatomic, readonly) CAFFuelLevelStateCharacteristic *fuelLevelStateCharacteristic;
@property (nonatomic, readonly) bool hasFuelLevelMarkerLow;
@property (nonatomic, readonly) unsigned char portSideIndicator;
@property (nonatomic, readonly) CAFPortSideIndicatorCharacteristic *portSideIndicatorCharacteristic;

+ (void)load;
+ (id)observerProtocol;
+ (id)serviceIdentifier;

- (void)_characteristicDidUpdate:(id)arg1 fromGroupUpdate:(bool)arg2;
- (void)addObserver:(id)arg1;
- (unsigned char)fillLevelLabel;
- (id)fillLevelLabelCharacteristic;
- (id)fuelLevel;
- (id)fuelLevelCharacteristic;
- (bool)fuelLevelInvalid;
- (id)fuelLevelMarkerLow;
- (id)fuelLevelMarkerLowCharacteristic;
- (id)fuelLevelMarkerLowRange;
- (id)fuelLevelRange;
- (unsigned char)fuelLevelState;
- (id)fuelLevelStateCharacteristic;
- (bool)hasFuelLevelMarkerLow;
- (id)name;
- (unsigned char)portSideIndicator;
- (id)portSideIndicatorCharacteristic;
- (void)registerObserver:(id)arg1;
- (bool)registeredForFillLevelLabel;
- (bool)registeredForFuelLevel;
- (bool)registeredForFuelLevelMarkerLow;
- (bool)registeredForFuelLevelState;
- (bool)registeredForPortSideIndicator;
- (void)removeObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1;

@end