/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIWarpKernel : CIKernel

@property (nonatomic) bool perservesAlpha;
@property (nonatomic) bool preservesRange;

+ (id)kernelWithString:(id)arg1;

- (id)_initWithReflection:(struct CIKernelReflection { int x1; int x2; char *x3; char *x4; char *x5; struct vector<CI::KernelArgumentType, std::allocator<CI::KernelArgumentType>> { int *x_6_1_1; int *x_6_1_2; struct __compressed_pair<CI::KernelArgumentType *, std::allocator<CI::KernelArgumentType>> { int *x_3_2_1; } x_6_1_3; } x6; struct vector<std::string, std::allocator<std::string>> { void *x_7_1_1; void *x_7_1_2; struct __compressed_pair<std::string *, std::allocator<std::string>> { void *x_3_2_1; } x_7_1_3; } x7; id x8; unsigned int x9; int x10; unsigned long long x11; unsigned long long x12; bool x13; bool x14; })arg1 constants:(id)arg2 constantTypes:(id)arg3;
- (id)applyWithExtent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 roiCallback:(id /* block */)arg2 arguments:(id)arg3;
- (id)applyWithExtent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 roiCallback:(id /* block */)arg2 arguments:(id)arg3 options:(id)arg4;
- (id)applyWithExtent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 roiCallback:(id /* block */)arg2 inputImage:(id)arg3 arguments:(id)arg4;
- (id)applyWithExtent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 roiCallback:(id /* block */)arg2 inputImage:(id)arg3 arguments:(id)arg4 options:(id)arg5;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })autogenerateROI:(void*)arg1 args:(struct SerialObjectPtrArray { int x1; int x2; int x3; struct Object {} **x4; struct Object {} *x5[10]; }*)arg2 arguments:(id)arg3 extent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (bool)canReduceOutputChannels;
- (id)generateGeneralKernelFromWarpKernel:(void*)arg1 args:(struct SerialObjectPtrArray { int x1; int x2; int x3; struct Object {} **x4; struct Object {} *x5[10]; }*)arg2;
- (id)generateMainFromWarpKernel:(void*)arg1 args:(struct SerialObjectPtrArray { int x1; int x2; int x3; struct Object {} **x4; struct Object {} *x5[10]; }*)arg2;
- (id)initWithString:(id)arg1;
- (id)makeGridImage:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 nx:(int)arg2 ny:(int)arg3;
- (bool)perservesAlpha;
- (bool)preservesRange;
- (void)setCanReduceOutputChannels:(bool)arg1;
- (void)setPerservesAlpha:(bool)arg1;
- (void)setPreservesRange:(bool)arg1;

@end