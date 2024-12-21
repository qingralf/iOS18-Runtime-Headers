/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
 */

@interface AVPlayerTaggedBufferOutput : NSObject {
    AVPlayerVideoOutput * _realOutput;
}

+ (id)taggedBufferOutputWithVideoOutput:(id)arg1;

- (bool)_attachToPlayer:(id)arg1;
- (void)_detachFromPlayer:(id)arg1;
- (void)_setResourceLifeCycleHandler:(id /* block */)arg1;
- (struct OpaqueCMTaggedBufferGroup { }*)copyTaggedBufferGroupForHostTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 presentationTimeStamp:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg2;
- (void)dealloc;
- (bool)hasNewTaggedBufferGroupForHostTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)init;
- (id)initWithSpecification:(id)arg1;
- (id)initWithVideoOutput:(id)arg1;
- (id)realOutput;

@end