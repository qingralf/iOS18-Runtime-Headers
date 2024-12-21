/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarAccessoryFramework.framework/CarAccessoryFramework
 */

@interface CAFUISceneStateCharacteristic : CAFUInt8Characteristic

@property (nonatomic) unsigned char uiSceneStateValue;

+ (void)load;
+ (id)primaryCharacteristicFormat;
+ (id)secondaryCharacteristicFormats;

- (id)formattedValue;
- (void)setUiSceneStateValue:(unsigned char)arg1;
- (unsigned char)uiSceneStateValue;

@end