/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarAccessoryFramework.framework/CarAccessoryFramework
 */

@interface CAFMediaCategoryCharacteristic : CAFUInt8Characteristic

@property (nonatomic) unsigned char mediaCategoryValue;

+ (void)load;
+ (id)primaryCharacteristicFormat;
+ (id)secondaryCharacteristicFormats;

- (id)formattedValue;
- (unsigned char)mediaCategoryValue;
- (void)setMediaCategoryValue:(unsigned char)arg1;

@end