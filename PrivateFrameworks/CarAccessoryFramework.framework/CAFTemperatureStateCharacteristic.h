/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarAccessoryFramework.framework/CarAccessoryFramework
 */

@interface CAFTemperatureStateCharacteristic : CAFUInt8Characteristic

@property (nonatomic) unsigned char temperatureStateValue;

+ (void)load;
+ (id)primaryCharacteristicFormat;
+ (id)secondaryCharacteristicFormats;

- (id)formattedValue;
- (void)setTemperatureStateValue:(unsigned char)arg1;
- (unsigned char)temperatureStateValue;

@end
