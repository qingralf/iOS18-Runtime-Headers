/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarAccessoryFramework.framework/CarAccessoryFramework
 */

@interface CAFSeatOccupancyCharacteristic : CAFUInt8Characteristic

@property (nonatomic) unsigned char seatOccupancyValue;

+ (void)load;
+ (id)primaryCharacteristicFormat;
+ (id)secondaryCharacteristicFormats;

- (id)formattedValue;
- (unsigned char)seatOccupancyValue;
- (void)setSeatOccupancyValue:(unsigned char)arg1;

@end
