/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarAccessoryFramework.framework/CarAccessoryFramework
 */

@interface CAFSettingProminenceLevelCharacteristic : CAFUInt64Characteristic

@property (nonatomic) bool hasAppHomeTile;
@property (nonatomic) unsigned long long settingProminenceLevelValue;

+ (void)load;
+ (id)primaryCharacteristicFormat;
+ (id)secondaryCharacteristicFormats;

- (id)formattedValue;
- (bool)hasAppHomeTile;
- (void)setHasAppHomeTile:(bool)arg1;
- (void)setSettingProminenceLevelValue:(unsigned long long)arg1;
- (unsigned long long)settingProminenceLevelValue;

@end
