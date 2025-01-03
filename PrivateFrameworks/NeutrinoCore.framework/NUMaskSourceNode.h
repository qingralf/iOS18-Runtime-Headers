/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUMaskSourceNode : NUCISourceNode

@property (nonatomic, readonly) struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; } croppedExtent;
@property (nonatomic, readonly) struct { long long x1; long long x2; } scale;

- (id)_evaluateImage:(out id*)arg1;
- (id)_evaluateImageGeometryWithSourceOptions:(id)arg1 error:(out id*)arg2;
- (struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })croppedExtent;
- (id)initWithImage:(id)arg1 croppedExtent:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg2 scale:(struct { long long x1; long long x2; })arg3 identifier:(id)arg4 orientation:(long long)arg5;
- (id)resolvedNodeWithCachedInputs:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4;
- (struct { long long x1; long long x2; })scale;
- (id)sourceImage:(out id*)arg1;
- (bool)supportsPipelineState:(id)arg1 error:(out id*)arg2;

@end
