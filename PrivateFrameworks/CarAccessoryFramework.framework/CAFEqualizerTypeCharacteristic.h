/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarAccessoryFramework.framework/CarAccessoryFramework
 */

@interface CAFEqualizerTypeCharacteristic : CAFUInt8Characteristic

@property (nonatomic) unsigned char equalizerTypeValue;

+ (void)load;
+ (id)primaryCharacteristicFormat;
+ (id)secondaryCharacteristicFormats;

- (unsigned char)equalizerTypeValue;
- (id)formattedValue;
- (void)setEqualizerTypeValue:(unsigned char)arg1;

@end
