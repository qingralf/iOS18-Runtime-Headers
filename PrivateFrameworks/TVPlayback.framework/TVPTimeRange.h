/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
 */

@interface TVPTimeRange : NSObject {
    double  _duration;
    double  _startTime;
}

@property (nonatomic) double duration;
@property (nonatomic, readonly) double endTime;
@property (nonatomic) double startTime;

+ (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })forwardmostCMTimeRangeInCMTimeRanges:(id)arg1;

- (bool)containsTime:(double)arg1;
- (id)description;
- (double)duration;
- (double)endTime;
- (id)initWithCMTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (id)initWithStartTime:(double)arg1 duration:(double)arg2;
- (id)initWithStartTime:(double)arg1 endTime:(double)arg2;
- (id)intersectTimeRange:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setStartTime:(double)arg1;
- (double)startTime;

@end
