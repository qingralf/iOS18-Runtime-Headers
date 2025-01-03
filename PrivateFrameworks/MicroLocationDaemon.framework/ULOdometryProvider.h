/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MicroLocationDaemon.framework/MicroLocationDaemon
 */

@interface ULOdometryProvider : NSObject {
    <ULOdometryProviderDelegate> * _delegate;
    NSNumber * _deltaPositionX;
    NSNumber * _deltaPositionY;
    NSNumber * _deltaPositionZ;
    ULOdometryBridge * _odometryBridge;
    NSDate * _previousStatusUpdateDate;
    NSObject<OS_dispatch_queue> * _queue;
    NSUUID * _trajectoryUUID;
}

@property (nonatomic) <ULOdometryProviderDelegate> *delegate;
@property (nonatomic, retain) NSNumber *deltaPositionX;
@property (nonatomic, retain) NSNumber *deltaPositionY;
@property (nonatomic, retain) NSNumber *deltaPositionZ;
@property (nonatomic, retain) ULOdometryBridge *odometryBridge;
@property (nonatomic, retain) NSDate *previousStatusUpdateDate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSUUID *trajectoryUUID;

- (void).cxx_destruct;
- (bool)_checkIfExitedBubble;
- (id)_getDateFromTimestamp:(double)arg1;
- (void)_resetPosition;
- (void)_resetTrajectory;
- (void)_updatePosition:(id)arg1;
- (id)delegate;
- (id)deltaPositionX;
- (id)deltaPositionY;
- (id)deltaPositionZ;
- (void)didReceiveOdometryUpdate:(id)arg1 withError:(id)arg2;
- (id)initWithQueue:(id)arg1 delegate:(id)arg2;
- (id)odometryBridge;
- (id)previousStatusUpdateDate;
- (id)queue;
- (void)setDelegate:(id)arg1;
- (void)setDeltaPositionX:(id)arg1;
- (void)setDeltaPositionY:(id)arg1;
- (void)setDeltaPositionZ:(id)arg1;
- (void)setOdometryBridge:(id)arg1;
- (void)setPreviousStatusUpdateDate:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setTrajectoryUUID:(id)arg1;
- (void)startBackgroundUpdates;
- (void)stopBackgroundUpdates;
- (id)trajectoryUUID;

@end
