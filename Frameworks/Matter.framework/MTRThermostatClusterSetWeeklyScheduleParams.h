/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Matter.framework/Matter
 */

@interface MTRThermostatClusterSetWeeklyScheduleParams : NSObject <NSCopying> {
    NSNumber * _dayOfWeekForSequence;
    NSNumber * _modeForSequence;
    NSNumber * _numberOfTransitionsForSequence;
    NSNumber * _serverSideProcessingTimeout;
    NSNumber * _timedInvokeTimeoutMs;
    NSArray * _transitions;
}

@property (nonatomic, copy) NSNumber *dayOfWeekForSequence;
@property (nonatomic, copy) NSNumber *modeForSequence;
@property (nonatomic, copy) NSNumber *numberOfTransitionsForSequence;
@property (nonatomic, copy) NSNumber *serverSideProcessingTimeout;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;
@property (nonatomic, copy) NSArray *transitions;

- (void).cxx_destruct;
- (id)_encodeAsDataValue:(id*)arg1;
- (struct ChipError { unsigned int x1; char *x2; unsigned int x3; })_encodeToTLVReader:(struct PacketBufferTLVReader { unsigned int x1; void *x2; struct Tag { unsigned long long x_3_1_1; } x3; unsigned long long x4; struct TLVBackingStore {} *x5; char *x6; char *x7; unsigned int x8; unsigned int x9; int x10; unsigned short x11; bool x12; struct PacketBufferHandle { struct PacketBuffer {} *x_13_1_1; } x13; }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dayOfWeekForSequence;
- (id)description;
- (id)init;
- (id)modeForSequence;
- (id)numberOfTransitionsForSequence;
- (id)serverSideProcessingTimeout;
- (void)setDayOfWeekForSequence:(id)arg1;
- (void)setModeForSequence:(id)arg1;
- (void)setNumberOfTransitionsForSequence:(id)arg1;
- (void)setServerSideProcessingTimeout:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (void)setTransitions:(id)arg1;
- (id)timedInvokeTimeoutMs;
- (id)transitions;

@end