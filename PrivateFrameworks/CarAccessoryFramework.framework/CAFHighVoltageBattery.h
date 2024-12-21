/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarAccessoryFramework.framework/CarAccessoryFramework
 */

@interface CAFHighVoltageBattery : CAFAccessory

@property (nonatomic, readonly) CAFBatteryLevel *batteryLevel;
@property (nonatomic, readonly) CAFBatteryLevel *batteryLevelService;
@property (nonatomic, readonly) CAFBatteryTemperature *batteryTemperature;
@property (nonatomic, readonly) CAFBatteryTemperature *batteryTemperatureService;

+ (id)accessoryIdentifier;
+ (void)load;
+ (id)observerProtocol;

- (void)addObserver:(id)arg1;
- (id)batteryLevel;
- (id)batteryLevelService;
- (id)batteryTemperature;
- (id)batteryTemperatureService;
- (void)registerObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1;

@end