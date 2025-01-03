/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
 */

@interface SNDirectionOfArrivalResult : NSObject <NSCopying, NSSecureCoding, SNResult, SNTimeRangeProviding> {
    void impl;
}

@property (nonatomic) float azimuth;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic) float elevation;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, copy) NSArray *spatialSpectrum;
@property (nonatomic) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } timeRange;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (float)azimuth;
- (id)copyWithZone:(void*)arg1;
- (id)description;
- (float)elevation;
- (void)encodeWithCoder:(id)arg1;
- (long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setAzimuth:(float)arg1;
- (void)setElevation:(float)arg1;
- (void)setSpatialSpectrum:(id)arg1;
- (void)setTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (id)spatialSpectrum;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;

@end
