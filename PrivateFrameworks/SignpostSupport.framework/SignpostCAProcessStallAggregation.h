/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
 */

@interface SignpostCAProcessStallAggregation : NSObject <NSCopying> {
    SignpostCAIntervalAggregationStats * _firstFrameGlitchStats;
    SignpostCAIntervalAggregationStats * _glitchStats;
    bool  _isSystemAggregation;
    SignpostCAIntervalAggregationStats * _longCommitStats;
    SignpostCAIntervalAggregationStats * _longFrameLatencyStats;
    SignpostCAIntervalAggregationStats * _longFrameLifetimeStats;
    SignpostCAIntervalAggregationStats * _longHIDLatencyStats;
    SignpostCAIntervalAggregationStats * _longRenderForTimeStats;
    SignpostCAIntervalAggregationStats * _longResponsibleFrameLifetimeStats;
    SignpostCAIntervalAggregationStats * _longTransactionLifetimeStats;
    NSMutableSet * _pids;
    NSString * _processExecutablePath;
    NSString * _processName;
    SignpostCAIntervalAggregationStats * _responsibleFirstFrameGlitchStats;
    SignpostCAIntervalAggregationStats * _responsibleGlitchStats;
    SignpostCAIntervalAggregationStats * _responsibleNonFirstFrameNonSkipGlitchStats;
    SignpostCAIntervalAggregationStats * _responsibleNonFirstFrameNonSkipPerceivedGlitchStats;
}

@property (nonatomic, readonly) SignpostCAIntervalAggregationStats *firstFrameGlitchStats;
@property (nonatomic, readonly) SignpostCAIntervalAggregationStats *glitchStats;
@property (nonatomic, readonly) bool isSystemAggregation;
@property (nonatomic, readonly) SignpostCAIntervalAggregationStats *longCommitStats;
@property (nonatomic, readonly) SignpostCAIntervalAggregationStats *longFrameLatencyStats;
@property (nonatomic, readonly) SignpostCAIntervalAggregationStats *longFrameLifetimeStats;
@property (nonatomic, readonly) SignpostCAIntervalAggregationStats *longHIDLatencyStats;
@property (nonatomic, readonly) SignpostCAIntervalAggregationStats *longRenderForTimeStats;
@property (nonatomic, readonly) SignpostCAIntervalAggregationStats *longResponsibleFrameLifetimeStats;
@property (nonatomic, readonly) SignpostCAIntervalAggregationStats *longTransactionLifetimeStats;
@property (nonatomic, readonly) NSMutableSet *pids;
@property (nonatomic, readonly) NSString *processExecutablePath;
@property (nonatomic, readonly) NSString *processName;
@property (nonatomic, readonly) SignpostCAIntervalAggregationStats *responsibleFirstFrameGlitchStats;
@property (nonatomic, readonly) SignpostCAIntervalAggregationStats *responsibleGlitchStats;
@property (nonatomic, readonly) SignpostCAIntervalAggregationStats *responsibleNonFirstFrameNonSkipGlitchStats;
@property (nonatomic, readonly) SignpostCAIntervalAggregationStats *responsibleNonFirstFrameNonSkipPerceivedGlitchStats;

- (void).cxx_destruct;
- (void)_addDuration:(unsigned long long)arg1 ofType:(unsigned char)arg2;
- (void)_addOtherProcessStallAggregation:(id)arg1;
- (id)_initAsSystemAggregation;
- (id)_initWithProcessExecutablePath:(id)arg1 pid:(int)arg2;
- (void)_iterateTypeStatsWithBlock:(id /* block */)arg1;
- (id)_statsForType:(unsigned char)arg1 initIfMissing:(bool)arg2;
- (unsigned long long)_totalStallDurationNs;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)firstFrameGlitchStats;
- (id)glitchStats;
- (bool)isSystemAggregation;
- (id)longCommitStats;
- (id)longFrameLatencyStats;
- (id)longFrameLifetimeStats;
- (id)longHIDLatencyStats;
- (id)longRenderForTimeStats;
- (id)longResponsibleFrameLifetimeStats;
- (id)longTransactionLifetimeStats;
- (id)pids;
- (id)processExecutablePath;
- (id)processName;
- (id)responsibleFirstFrameGlitchStats;
- (id)responsibleGlitchStats;
- (id)responsibleNonFirstFrameNonSkipGlitchStats;
- (id)responsibleNonFirstFrameNonSkipPerceivedGlitchStats;

@end