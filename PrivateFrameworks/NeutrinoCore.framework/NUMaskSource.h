/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUMaskSource : NUSource

@property (nonatomic, readonly) struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; } extent;
@property (nonatomic, readonly) NSString *maskIdentifier;
@property (nonatomic, readonly) struct { long long x1; long long x2; } scale;

- (id)_initWithDefinition:(id)arg1 identifier:(id)arg2 extent:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg3 scale:(struct { long long x1; long long x2; })arg4;
- (struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })extent;
- (id)initWithContentsOfURL:(id)arg1 identifier:(id)arg2 extent:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg3 scale:(struct { long long x1; long long x2; })arg4;
- (id)initWithImage:(id)arg1 identifier:(id)arg2 extent:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg3 scale:(struct { long long x1; long long x2; })arg4;
- (id)initWithImageBuffer:(id)arg1 identifier:(id)arg2 extent:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg3 scale:(struct { long long x1; long long x2; })arg4;
- (id)maskIdentifier;
- (id)newSourceNode:(out id*)arg1;
- (struct { long long x1; long long x2; })scale;
- (id)sourceImage:(out id*)arg1;

@end
