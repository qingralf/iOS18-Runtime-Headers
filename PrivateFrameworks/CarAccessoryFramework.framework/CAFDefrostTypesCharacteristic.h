/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarAccessoryFramework.framework/CarAccessoryFramework
 */

@interface CAFDefrostTypesCharacteristic : CAFUInt64Characteristic

@property (nonatomic) unsigned long long defrostTypesValue;
@property (nonatomic) bool hasBlownAir;
@property (nonatomic) bool hasFilament;

+ (void)load;
+ (id)primaryCharacteristicFormat;
+ (id)secondaryCharacteristicFormats;

- (unsigned long long)defrostTypesValue;
- (id)formattedValue;
- (bool)hasBlownAir;
- (bool)hasFilament;
- (void)setDefrostTypesValue:(unsigned long long)arg1;
- (void)setHasBlownAir:(bool)arg1;
- (void)setHasFilament:(bool)arg1;

@end
