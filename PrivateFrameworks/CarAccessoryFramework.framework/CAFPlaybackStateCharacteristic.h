/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarAccessoryFramework.framework/CarAccessoryFramework
 */

@interface CAFPlaybackStateCharacteristic : CAFUInt8Characteristic

@property (nonatomic) unsigned char playbackStateValue;

+ (void)load;
+ (id)primaryCharacteristicFormat;
+ (id)secondaryCharacteristicFormats;

- (id)formattedValue;
- (unsigned char)playbackStateValue;
- (void)setPlaybackStateValue:(unsigned char)arg1;

@end
