/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
 */

@interface AVPlayerVideoOutputConfiguration : NSObject {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _activationTime;
    NSArray * _dataChannelDescriptions;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _preferredTransform;
    AVPlayerItem * _sourcePlayerItem;
}

@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } activationTime;
@property (nonatomic, copy) NSArray *dataChannelDescriptions;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } preferredTransform;
@property (nonatomic) AVPlayerItem *sourcePlayerItem;

- (void).cxx_destruct;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })activationTime;
- (id)copy;
- (id)dataChannelDescriptions;
- (void)dealloc;
- (id)initWithSourcePlayerItem:(id)arg1 dataChannelDescriptions:(id)arg2 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 activationTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })preferredTransform;
- (void)setActivationTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setDataChannelDescriptions:(id)arg1;
- (void)setSourcePlayerItem:(id)arg1;
- (id)sourcePlayerItem;

@end