/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarAccessoryFramework.framework/CarAccessoryFramework
 */

@interface CAFCableStateCharacteristic : CAFUInt8Characteristic

@property (nonatomic) unsigned char cableStateValue;

+ (void)load;
+ (id)primaryCharacteristicFormat;
+ (id)secondaryCharacteristicFormats;

- (unsigned char)cableStateValue;
- (id)formattedValue;
- (void)setCableStateValue:(unsigned char)arg1;

@end
