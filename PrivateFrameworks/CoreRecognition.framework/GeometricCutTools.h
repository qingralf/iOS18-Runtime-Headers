/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
 */

@interface GeometricCutTools : NSObject

+ (id)boxInNormalizedSpace:(id)arg1 toImageSpaceWithSize:(struct CGSize { double x1; double x2; })arg2 plusPadding:(struct CGPoint { double x1; double x2; })arg3 destSize:(struct CGSize { double x1; double x2; }*)arg4 networkInputSize:(struct CGSize { double x1; double x2; })arg5;
+ (id)cleanTextDetectorOutput:(id)arg1;
+ (bool)derotateContentsOf:(id)arg1 inImage:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg2 andOutputTo:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)arg3 withPadding:(struct CGPoint { double x1; double x2; })arg4 networkInputSize:(struct CGSize { double x1; double x2; })arg5;
+ (id)findCorrectedBoundingBoxOfTextFeature:(id)arg1 inImageWithSize:(struct CGSize { double x1; double x2; })arg2;
+ (id)geometricRecognitionOf:(id)arg1 inDerotatedRegion:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg2 withPadding:(struct CGPoint { double x1; double x2; })arg3 fromCorrectedBoundingBox:(id)arg4 inImageWithSize:(struct CGSize { double x1; double x2; })arg5 withCodeMap:(const int*)arg6 activations:(struct vector<std::vector<std::vector<float>>, std::allocator<std::vector<std::vector<float>>>> { void *x1; void *x2; struct __compressed_pair<std::vector<std::vector<float>> *, std::allocator<std::vector<std::vector<float>>>> { void *x_3_1_1; } x3; })arg7 invert:(bool)arg8 networkInputSize:(struct CGSize { double x1; double x2; })arg9;
+ (id)geometricRecognitionOf:(id)arg1 inDerotatedRegion:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg2 withPadding:(struct CGPoint { double x1; double x2; })arg3 fromCorrectedBoundingBox:(id)arg4 inImageWithSize:(struct CGSize { double x1; double x2; })arg5 withCodeMap:(const int*)arg6 activations:(struct vector<std::vector<std::vector<float>>, std::allocator<std::vector<std::vector<float>>>> { void *x1; void *x2; struct __compressed_pair<std::vector<std::vector<float>> *, std::allocator<std::vector<std::vector<float>>>> { void *x_3_1_1; } x3; })arg7 invert:(bool)arg8 networkInputSize:(struct CGSize { double x1; double x2; })arg9 garbageSymbol:(unsigned short)arg10;
+ (id)geometricRecognitionOf:(id)arg1 inDerotatedRegion:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg2 withPadding:(struct CGPoint { double x1; double x2; })arg3 fromCorrectedBoundingBox:(id)arg4 inImageWithSize:(struct CGSize { double x1; double x2; })arg5 withNetwork:(void*)arg6 activations:(struct vector<std::vector<std::vector<float>>, std::allocator<std::vector<std::vector<float>>>> { void *x1; void *x2; struct __compressed_pair<std::vector<std::vector<float>> *, std::allocator<std::vector<std::vector<float>>>> { void *x_3_1_1; } x3; })arg7 invert:(bool)arg8;
+ (id)geometricRecognitionOf:(id)arg1 inDerotatedRegion:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg2 withPadding:(struct CGPoint { double x1; double x2; })arg3 fromCorrectedBoundingBox:(id)arg4 inImageWithSize:(struct CGSize { double x1; double x2; })arg5 withNetwork:(void*)arg6 activations:(struct vector<std::vector<std::vector<float>>, std::allocator<std::vector<std::vector<float>>>> { void *x1; void *x2; struct __compressed_pair<std::vector<std::vector<float>> *, std::allocator<std::vector<std::vector<float>>>> { void *x_3_1_1; } x3; })arg7 invert:(bool)arg8 garbageSymbol:(unsigned short)arg9;
+ (id)stringByInjectingSpaces:(id)arg1 textFeatures:(id)arg2 improved:(bool)arg3;

@end