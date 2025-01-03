/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarAccessoryFramework.framework/CarAccessoryFramework
 */

@interface CAFBatteryLevelStateCharacteristic : CAFUInt8Characteristic

@property (nonatomic) unsigned char batteryLevelStateValue;

+ (void)load;
+ (id)primaryCharacteristicFormat;
+ (id)secondaryCharacteristicFormats;

- (unsigned char)batteryLevelStateValue;
- (id)formattedValue;
- (void)setBatteryLevelStateValue:(unsigned char)arg1;

@end
