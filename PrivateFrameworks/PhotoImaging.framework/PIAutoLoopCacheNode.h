/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

@interface PIAutoLoopCacheNode : NUVideoCacheNode

@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } frameDuration;

+ (id)nodeWithInput:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4;

- (id)descriptionSubClassHook;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })frameDuration;
- (id)initWithInput:(id)arg1 frameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (id)newRenderRequestWithOriginalRequest:(id)arg1 error:(out id*)arg2;
- (id)outputSettings:(out id*)arg1;
- (id)persistentLongExposureURL;
- (id)persistentMaskURL;
- (id)persistentURL;
- (id)resolvedNodeWithCachedInputs:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4;
- (long long)subsampleFactorForScale:(struct { long long x1; long long x2; })arg1;

@end