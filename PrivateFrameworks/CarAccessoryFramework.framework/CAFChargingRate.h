/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarAccessoryFramework.framework/CarAccessoryFramework
 */

@interface CAFChargingRate : CAFService

@property (nonatomic, readonly) NSMeasurement *chargingSpeed;
@property (nonatomic, readonly) CAFMeasurementCharacteristic *chargingSpeedCharacteristic;
@property (nonatomic, readonly) bool chargingSpeedInvalid;
@property (nonatomic, readonly) CAFInt32Range *chargingSpeedRange;
@property (nonatomic, readonly) bool hasChargingSpeed;
@property (nonatomic, readonly) NSMeasurement *power;
@property (nonatomic, readonly) CAFMeasurementCharacteristic *powerCharacteristic;
@property (nonatomic, readonly) bool powerInvalid;
@property (nonatomic, readonly) CAFInt32Range *powerRange;

+ (void)load;
+ (id)observerProtocol;
+ (id)serviceIdentifier;

- (void)_characteristicDidUpdate:(id)arg1 fromGroupUpdate:(bool)arg2;
- (void)addObserver:(id)arg1;
- (id)chargingSpeed;
- (id)chargingSpeedCharacteristic;
- (bool)chargingSpeedInvalid;
- (id)chargingSpeedRange;
- (bool)hasChargingSpeed;
- (id)name;
- (id)power;
- (id)powerCharacteristic;
- (bool)powerInvalid;
- (id)powerRange;
- (void)registerObserver:(id)arg1;
- (bool)registeredForChargingSpeed;
- (bool)registeredForPower;
- (void)removeObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1;

@end