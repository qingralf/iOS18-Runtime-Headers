/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaAnalysisServices.framework/MediaAnalysisServices
 */

@interface MADMultiModalInputImageSegment : MADMultiModalInputSegment {
    NSNumber * _seed;
    IOSurface * _surface;
}

@property (nonatomic, readonly) NSNumber *seed;
@property (nonatomic, readonly) IOSurface *surface;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSurface:(id)arg1 seed:(id)arg2;
- (id)seed;
- (id)surface;
- (long long)type;

@end