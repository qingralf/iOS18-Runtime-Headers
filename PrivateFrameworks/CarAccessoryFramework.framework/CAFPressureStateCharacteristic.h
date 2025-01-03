/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarAccessoryFramework.framework/CarAccessoryFramework
 */

@interface CAFPressureStateCharacteristic : CAFUInt8Characteristic

@property (nonatomic) unsigned char pressureStateValue;

+ (void)load;
+ (id)primaryCharacteristicFormat;
+ (id)secondaryCharacteristicFormats;

- (id)formattedValue;
- (unsigned char)pressureStateValue;
- (void)setPressureStateValue:(unsigned char)arg1;

@end
