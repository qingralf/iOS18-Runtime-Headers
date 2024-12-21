/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StreamingZip.framework/StreamingZip
 */

@interface StreamingFileWriterQueueReservation : NSObject {
    long long  _reservedSize;
    bool  _valid;
}

@property (nonatomic, readonly) long long reservedSize;
@property (getter=isValid, nonatomic) bool valid;

- (id)initWithReservationSize:(long long)arg1;
- (bool)isValid;
- (long long)reservedSize;
- (void)setValid:(bool)arg1;

@end