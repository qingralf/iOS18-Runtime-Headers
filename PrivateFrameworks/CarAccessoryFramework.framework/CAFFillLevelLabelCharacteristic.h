/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarAccessoryFramework.framework/CarAccessoryFramework
 */

@interface CAFFillLevelLabelCharacteristic : CAFUInt8Characteristic

@property (nonatomic) unsigned char fillLevelLabelValue;

+ (void)load;
+ (id)primaryCharacteristicFormat;
+ (id)secondaryCharacteristicFormats;

- (unsigned char)fillLevelLabelValue;
- (id)formattedValue;
- (void)setFillLevelLabelValue:(unsigned char)arg1;

@end