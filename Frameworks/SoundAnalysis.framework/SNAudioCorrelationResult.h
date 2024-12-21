/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
 */

@interface SNAudioCorrelationResult : NSObject <NSCopying, NSSecureCoding, SNResult, SNTimeRangeProviding> {
    void impl;
}

@property (nonatomic) long long channelIndex;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } peakTime;
@property (nonatomic) double peakValue;
@property (nonatomic) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } timeRange;

+ (bool)supportsSecureCoding;

- (long long)channelIndex;
- (id)copyWithZone:(void*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })peakTime;
- (double)peakValue;
- (void)setChannelIndex:(long long)arg1;
- (void)setPeakTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setPeakValue:(double)arg1;
- (void)setTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;

@end