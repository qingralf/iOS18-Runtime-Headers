/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCWaveformGenerator : NSObject {
    AVAsset * _activeAsset;
    AVAudioFile * _activeAudioFile;
    bool  _canceled;
    NSObject<OS_dispatch_semaphore> * _digestPausedSemaphore;
    unsigned long long  _framesConsumedSinceLastFlush;
    long long  _framesNeededForNextDB;
    long long  _framesNeededForNextFlush;
    NSMutableArray * _internalFinishedLoadingBlockUUIDs;
    NSMutableArray * _internalFinishedLoadingBlocks;
    bool  _isSampleRateKnown;
    NSError * _loadingError;
    long long  _overviewUnitsPerSecond;
    unsigned long long  _pauseCount;
    struct vector<float, std::allocator<float> > { 
        float *__begin_; 
        float *__end_; 
        struct __compressed_pair<float *, std::allocator<float> > { 
            float *__value_; 
        } __end_cap_; 
    }  _powerLevelBuffer;
    float  _powerLevelBufferLastPushedValue;
    unsigned long long  _powerLevelsConsumedSinceLastFlush;
    NSObject<OS_dispatch_queue> * _queue;
    struct PowerMeter { 
        double mSampleRate; 
        double mPeakDecay1; 
        double mPeakDecay; 
        double mDecay1; 
        double mDecay; 
        int mPrevBlockSize; 
        int mPeakHoldCount; 
        double mMaxPeak; 
        struct AudioUnitMeterClipping { 
            float peakValueSinceLastCall; 
            unsigned char sawInfinity; 
            unsigned char sawNotANumber; 
        } mClipping; 
    }  _samplePowerMeter;
    double  _segmentFlushInterval;
    long long  _state;
    double  _totalDigestedTime;
    double  _totalFlushedTime;
    unsigned long long  _trackIndex;
    NSHashTable * _weakObservers;
}

@property (nonatomic) bool canceled;
@property (nonatomic, readonly) bool finished;
@property (nonatomic, readonly) bool idle;
@property (nonatomic, readonly) bool loadable;
@property (nonatomic) long long overviewUnitsPerSecond;
@property (nonatomic) bool paused;
@property (nonatomic, readonly) double segmentFlushInterval;
@property (nonatomic, readonly) long long state;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_appendAveragePowerLevel:(float)arg1;
- (void)_appendAveragePowerLevelsByDigestingTimeRange:(struct { double x1; double x2; })arg1 inAudioFile:(id)arg2;
- (bool)_appendAveragePowerLevelsByDigestingWaveformSegments:(id)arg1;
- (void)_appendPowerMeterValuesFromAudioPCMBuffer:(id)arg1;
- (bool)_appendPowerMeterValuesFromDataInAudioFile:(id)arg1 progressBlock:(id /* block */)arg2;
- (void)_appendPowerMeterValuesFromSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_onQueue_appendAveragePowerLevelsByDigestingTimeRange:(struct { double x1; double x2; })arg1 inAudioFile:(id)arg2;
- (void)_onQueue_appendPowerMeterValuesFromRawAudioData:(void*)arg1 frameCount:(long long)arg2 format:(const struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg3 isPredigest:(bool)arg4;
- (void)_onQueue_appendSegment:(id)arg1;
- (void)_onQueue_digestAveragePowerLevel:(float)arg1;
- (void)_onQueue_flushRemainingData;
- (void)_onQueue_flushWaveformSegment:(id)arg1;
- (void)_onQueue_flushWithNextSegmentWithEndTime:(double)arg1 isPredigest:(bool)arg2;
- (void)_onQueue_performInternalFinishedLoadingBlocksAndFinishObservers;
- (void)_onQueue_performLoadingFinishedBlock:(id /* block */)arg1 internalBlockUUID:(id)arg2 isTimeout:(bool)arg3;
- (void)_onQueue_performObserversBlock:(id /* block */)arg1;
- (void)_onQueue_pushAveragePowerLevel:(float)arg1;
- (void)addSegmentOutputObserver:(id)arg1;
- (bool)appendAveragePowerLevel:(float)arg1;
- (bool)appendAveragePowerLevelsByDigestingAudioPCMBuffer:(id)arg1;
- (bool)appendAveragePowerLevelsByDigestingContentsOfAudioFileURL:(id)arg1 progressBlock:(id /* block */)arg2;
- (bool)appendAveragePowerLevelsByDigestingSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (bool)appendAveragePowerLevelsByDigestingWaveform:(id)arg1;
- (bool)appendAveragePowerLevelsByDigestingWaveformSegments:(id)arg1;
- (void)async_finishLoadingByTerminating:(bool)arg1 loadingFinishedBlockTimeout:(unsigned long long)arg2 loadingFinishedBlock:(id /* block */)arg3;
- (void)beginLoading;
- (bool)canceled;
- (void)finishLoadingWithCompletionTimeout:(unsigned long long)arg1 completionBlock:(id /* block */)arg2;
- (bool)finished;
- (void)flushPendingCapturedSampleBuffers;
- (bool)idle;
- (id)init;
- (id)initWithSamplingParametersFromGenerator:(id)arg1 trackIndex:(unsigned long long)arg2;
- (id)initWithSegmentFlushInterval:(double)arg1 trackIndex:(unsigned long long)arg2;
- (bool)loadable;
- (long long)overviewUnitsPerSecond;
- (bool)paused;
- (void)removeSegmentOutputObserver:(id)arg1;
- (double)segmentFlushInterval;
- (void)setCanceled:(bool)arg1;
- (void)setOverviewUnitsPerSecond:(long long)arg1;
- (void)setPaused:(bool)arg1;
- (long long)state;
- (id)synchronouslyApproximateWaveformForAVContentURL:(id)arg1 byReadingCurrentFileAheadTimeRange:(struct { double x1; double x2; })arg2;
- (void)terminateLoadingImmediately;

@end
