/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarAccessoryFramework.framework/CarAccessoryFramework
 */

@interface CAFUnitTypeCharacteristic : CAFUInt16Characteristic

@property (nonatomic) unsigned short unitTypeValue;
@property (nonatomic, retain) NSUnit *unitValue;

+ (void)load;
+ (id)primaryCharacteristicFormat;
+ (id)secondaryCharacteristicFormats;

- (id)formattedValue;
- (void)setUnitTypeValue:(unsigned short)arg1;
- (void)setUnitValue:(id)arg1;
- (unsigned short)unitTypeValue;
- (id)unitValue;

@end