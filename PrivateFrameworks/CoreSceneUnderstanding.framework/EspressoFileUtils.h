/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSceneUnderstanding.framework/CoreSceneUnderstanding
 */

@interface EspressoFileUtils : NSObject

+ (struct EspressoTensor { int (**x1)(); int x2; struct TensorShape { struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *x_1_2_1; unsigned long long *x_1_2_2; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *x_3_3_1; } x_1_2_3; } x_3_1_1; } x3; struct shared_ptr<ik::TensorStorage> { struct TensorStorage {} *x_4_1_1; struct __shared_weak_count {} *x_4_1_2; } x4; })createEspressoTensorFromTextFile:(id)arg1 channels:(unsigned long long)arg2 height:(unsigned long long)arg3 width:(unsigned long long)arg4;
+ (void)writeEspressoBufferToBinFile:(id)arg1 FromBuffer:(id)arg2;
+ (void)writeEspressoBufferToTextFile:(id)arg1 FromBuffer:(id)arg2;
+ (void)writeIKFloatTensorBuffer:(const void*)arg1 ToBinFile:(id)arg2;

@end