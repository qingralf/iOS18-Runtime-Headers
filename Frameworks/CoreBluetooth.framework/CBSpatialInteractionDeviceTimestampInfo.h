/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@interface CBSpatialInteractionDeviceTimestampInfo : NSObject {
    unsigned char  _duplicateCount;
    unsigned char  _reason;
    double  _timestamp;
}

@property (nonatomic) unsigned char duplicateCount;
@property (nonatomic) unsigned char reason;
@property (nonatomic) double timestamp;

- (id)description;
- (id)descriptionWithLevel:(int)arg1;
- (unsigned char)duplicateCount;
- (unsigned char)reason;
- (void)setDuplicateCount:(unsigned char)arg1;
- (void)setReason:(unsigned char)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;

@end
