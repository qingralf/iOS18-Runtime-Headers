/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
 */

@interface AVPlayerItemIntegratedTimelineSnapshot : NSObject {
    NSDate * _currentDate;
    AVPlayerItemSegment * _currentSegment;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _currentTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _duration;
    NSArray * _segments;
}

@property (readonly) NSDate *currentDate;
@property (readonly) AVPlayerItemSegment *currentSegment;
@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } currentTime;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } duration;
@property (readonly) NSArray *segments;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentDate;
- (id)currentSegment;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })currentTime;
- (void)dealloc;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (id)initWithSegments:(id)arg1 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 currentTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 currentDate:(id)arg4 currentSegment:(id)arg5;
- (void)mapTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 toSegment:(id*)arg2 atSegmentOffset:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg3;
- (id)segments;

@end
