/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarAccessoryFramework.framework/CarAccessoryFramework
 */

@interface CAFDistanceDisplay : CAFService

@property (nonatomic, readonly) NSMeasurement *distanceKM;
@property (nonatomic, readonly) CAFMeasurementCharacteristic *distanceKMCharacteristic;
@property (nonatomic, readonly) bool distanceKMInvalid;
@property (nonatomic, readonly) CAFUInt64Range *distanceKMRange;
@property (nonatomic, readonly) NSMeasurement *distanceMiles;
@property (nonatomic, readonly) CAFMeasurementCharacteristic *distanceMilesCharacteristic;
@property (nonatomic, readonly) bool distanceMilesInvalid;
@property (nonatomic, readonly) CAFUInt64Range *distanceMilesRange;

+ (void)load;

- (void)_characteristicDidUpdate:(id)arg1 fromGroupUpdate:(bool)arg2;
- (void)addObserver:(id)arg1;
- (id)distanceKM;
- (id)distanceKMCharacteristic;
- (bool)distanceKMInvalid;
- (id)distanceKMRange;
- (id)distanceMiles;
- (id)distanceMilesCharacteristic;
- (bool)distanceMilesInvalid;
- (id)distanceMilesRange;
- (id)name;
- (void)registerObserver:(id)arg1;
- (bool)registeredForDistanceKM;
- (bool)registeredForDistanceMiles;
- (void)removeObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1;

@end
