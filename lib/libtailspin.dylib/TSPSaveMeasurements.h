/* Generated by RuntimeBrowser
   Image: /usr/lib/libtailspin.dylib
 */

@interface TSPSaveMeasurements : NSObject {
    long long  _fileSizeBytes;
    double  _lostTimePeriodAtStartSecs;
    double  _ratioTimePeriodCovered;
    double  _requestProcessingLatencySecs;
    unsigned long long  _request_id;
    unsigned long long  _saveStandardChunksStartTimestampMCT;
    double  _tailspinDurationSecs;
    NSMutableDictionary * _timeSpentByPhases;
}

@property (nonatomic) long long fileSizeBytes;
@property (nonatomic, readonly) double lostTimePeriodAtStartSecs;
@property (nonatomic, readonly) double ratioTimePeriodCovered;
@property (nonatomic, readonly) double requestProcessingLatencySecs;
@property (nonatomic, readonly) unsigned long long request_id;
@property (nonatomic, readonly) double tailspinDurationSecs;
@property (nonatomic, readonly) NSMutableDictionary *timeSpentByPhases;

- (void).cxx_destruct;
- (unsigned long long)_startRecordingTimeForPhase:(const char *)arg1;
- (void)_stopRecordingTimeForPhase:(const char *)arg1;
- (long long)fileSizeBytes;
- (id)init;
- (double)lostTimePeriodAtStartSecs;
- (double)ratioTimePeriodCovered;
- (void)recordLostTimePeriodAtStart:(unsigned long long)arg1;
- (void)recordRatioTimePeriodCovered:(double)arg1;
- (void)recordRequestProcessingLatencySecsWithStartMCT:(unsigned long long)arg1 endMCT:(unsigned long long)arg2;
- (void)recordTailspinDurationWithStartMCT:(unsigned long long)arg1 endMCT:(unsigned long long)arg2;
- (void)recordTimeForSaveStandardChunksWithoutPostProcessing:(unsigned long long)arg1;
- (double)requestProcessingLatencySecs;
- (unsigned long long)request_id;
- (void)setFileSizeBytes:(long long)arg1;
- (void)startRecordingTimeForAugmentLoggingPhase:(bool)arg1 collectOSLog:(bool)arg2 scrubData:(bool)arg3;
- (void)startRecordingTimeForAugmentPhase:(const char *)arg1 pid:(int)arg2 originalFd:(int)arg3 dupFd:(int)arg4;
- (void)startRecordingTimeForAugmentSymbolicatePhase;
- (void)startRecordingTimeForDumpRequestPhase:(const char *)arg1 pid:(int)arg2;
- (void)startRecordingTimeForSaveStandardChunksPhase:(const char *)arg1 pid:(int)arg2;
- (void)stopRecordingTimeForAugmentLoggingPhase:(bool)arg1;
- (void)stopRecordingTimeForAugmentPhase:(bool)arg1 finalSizeBytes:(long long)arg2;
- (void)stopRecordingTimeForAugmentSymbolicatePhase;
- (void)stopRecordingTimeForDumpRequestPhase:(id)arg1;
- (void)stopRecordingTimeForSaveStandardChunksPhase:(bool)arg1;
- (double)tailspinDurationSecs;
- (id)timeSpentByPhases;

@end
