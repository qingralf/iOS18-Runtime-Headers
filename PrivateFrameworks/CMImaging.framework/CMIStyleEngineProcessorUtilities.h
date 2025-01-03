/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMImaging.framework/CMImaging
 */

@interface CMIStyleEngineProcessorUtilities : NSObject

+ (unsigned long long)getMTLPixelFormatForCVPixelBuffer:(struct __CVBuffer { }*)arg1 plane:(unsigned int)arg2;
+ (struct { unsigned long long x1; unsigned long long x2; })getMTLPixelFormatsForDualPlaneYUV420CVPixelBuffer:(struct __CVBuffer { }*)arg1;
+ (bool)isPixelBufferYUV420:(struct __CVBuffer { }*)arg1;
+ (unsigned int)numberOfPixelBufferPlanesThatNeedToBeBoundToMTLTextures:(struct __CVBuffer { }*)arg1;
+ (bool)textureIsLinearSRGB:(id)arg1;

@end
