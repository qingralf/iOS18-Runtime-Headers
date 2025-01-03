/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCVideoStreamOWRDLossEventRateControl : NSObject <VCVideoStreamRateControlProtocol> {
    unsigned int  _averageReceivedBitrate;
    unsigned short  _currentTierIndex;
    double  _firstReceiveTime;
    unsigned int  _firstSendTimestamp;
    double  _lastLossEventTime;
    double  _longAverageLag;
    bool  _lossEventBuffer;
    int  _lossEventBufferIndex;
    unsigned short  _maxTierIndex;
    unsigned short  _minTierIndex;
    double  _owrd;
    double  _packetLossRate;
    double  _packetLossRateVideo;
    unsigned int  _previousSendTimestamp;
    unsigned int  _previousTimestampDiff;
    double  _rampDownLossEventBitrateThreshold;
    double  _rampDownLossEventCountThreshold;
    double  _rampDownLossRateThreshold;
    double  _rampDownOWRDThreshold;
    double  _rampUpFrozenDuration;
    double  _rampUpFrozenTime;
    double  _rampUpNoLossEventDurationRatio;
    long long  _rampUpStatus;
    double  _rampUpStatusRateLimitedThreshold;
    double  _rateControlInterval;
    double  _rateControlTime;
    double  _roundTripTime;
    int  _sendTimestampWrappedAround;
    double  _shortAverageLag;
    int  _state;
    unsigned int  _targetBitrate;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double nowrd;
@property (nonatomic, readonly) double nowrdAcc;
@property (nonatomic, readonly) double nowrdShort;
@property (nonatomic, readonly) double owrd;
@property (nonatomic) double rateControlInterval;
@property (nonatomic, readonly) int state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned int targetBitrate;

- (void)calculateOWRDWithTimestamp:(unsigned int)arg1 sampleRate:(unsigned int)arg2 time:(double)arg3;
- (id)className;
- (id)description;
- (void)doRateControlWithTime:(double)arg1 roundTripTime:(double)arg2 packetLossRate:(double)arg3 operatingTierIndex:(unsigned short)arg4 averageReceivedBitrate:(unsigned int)arg5;
- (id)init;
- (int)lossEventCount;
- (int)lossEventCountThresholdForBitrate:(unsigned int)arg1;
- (double)nowrd;
- (double)nowrdAcc;
- (double)nowrdShort;
- (double)owrd;
- (void)printRateControlFullInfoWithLogDump:(void*)arg1 time:(double)arg2 videoStall:(bool)arg3 videoFrozenDuration:(double)arg4 averageTargetBitrate:(unsigned int)arg5;
- (unsigned short)rampDownTier;
- (unsigned short)rampUpTier;
- (double)rateControlInterval;
- (void)resetLossEventBuffer;
- (void)setMaxTierIndex:(unsigned short)arg1 minTierIndex:(unsigned short)arg2;
- (void)setRateControlInterval:(double)arg1;
- (bool)shouldRampDown;
- (bool)shouldRampUp;
- (int)state;
- (void)stateChange:(int)arg1;
- (void)stateEnter;
- (void)stateExit;
- (unsigned int)targetBitrate;
- (void)updatePacketLossRate:(double)arg1 time:(double)arg2;
- (void)updateRTPReceiveWithTimestamp:(unsigned int)arg1 sampleRate:(unsigned int)arg2 time:(double)arg3;

@end
