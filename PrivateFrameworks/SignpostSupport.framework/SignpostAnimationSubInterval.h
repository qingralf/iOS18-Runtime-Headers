/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
 */

@interface SignpostAnimationSubInterval : NSObject <SignpostSupportTimeInterval> {
    unsigned long long  _endMachContinuousTime;
    unsigned long long  _startMachContinuousTime;
    double  _timebaseRatio;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long endMachContinuousTime;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long startMachContinuousTime;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double timebaseRatio;

- (unsigned long long)durationMachContinuousTime;
- (double)durationMs;
- (unsigned long long)durationNanoseconds;
- (float)durationSeconds;
- (unsigned long long)endMachContinuousTime;
- (double)endMs;
- (unsigned long long)endNanoseconds;
- (double)endSeconds;
- (unsigned long long)hash;
- (id)initWithInterval:(id)arg1;
- (id)initWithStartMCT:(unsigned long long)arg1 endMCT:(unsigned long long)arg2 timebaseRatio:(double)arg3;
- (bool)isEqual:(id)arg1;
- (unsigned long long)startMachContinuousTime;
- (double)startMs;
- (unsigned long long)startNanoseconds;
- (double)startSeconds;
- (double)timebaseRatio;

@end
