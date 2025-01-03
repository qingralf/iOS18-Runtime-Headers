/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MicroLocationDaemon.framework/MicroLocationDaemon
 */

@interface ULOdometryStatus : NSObject {
    NSNumber * _deltaPositionX;
    NSNumber * _deltaPositionY;
    NSNumber * _deltaPositionZ;
    NSDate * _statusDate;
}

@property (nonatomic, retain) NSNumber *deltaPositionX;
@property (nonatomic, retain) NSNumber *deltaPositionY;
@property (nonatomic, retain) NSNumber *deltaPositionZ;
@property (nonatomic, retain) NSDate *statusDate;

- (void).cxx_destruct;
- (id)deltaPositionX;
- (id)deltaPositionY;
- (id)deltaPositionZ;
- (id)initWithDate:(id)arg1 deltaPositionX:(id)arg2 deltaPositionY:(id)arg3 deltaPositionZ:(id)arg4;
- (void)setDeltaPositionX:(id)arg1;
- (void)setDeltaPositionY:(id)arg1;
- (void)setDeltaPositionZ:(id)arg1;
- (void)setStatusDate:(id)arg1;
- (id)statusDate;

@end
