/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarAccessoryFramework.framework/CarAccessoryFramework
 */

@interface CAFImageColorCharacteristic : CAFUInt8Characteristic

@property (nonatomic) unsigned char imageColorValue;

+ (void)load;
+ (id)primaryCharacteristicFormat;
+ (id)secondaryCharacteristicFormats;

- (id)formattedValue;
- (unsigned char)imageColorValue;
- (void)setImageColorValue:(unsigned char)arg1;

@end