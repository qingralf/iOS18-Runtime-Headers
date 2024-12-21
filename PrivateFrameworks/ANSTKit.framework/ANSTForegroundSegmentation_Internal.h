/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ANSTKit.framework/ANSTKit
 */

@interface ANSTForegroundSegmentation_Internal : ANSTForegroundSegmentation {
    ANSTForegroundSegmentationConfiguration * _config;
    unsigned long long  _frameCount;
    struct __CVPixelBufferPool { } * _outputBufferPool;
    struct OpaqueVTPixelTransferSession { } * _pixelTransferSession;
    bool  _readyForInference;
    struct __CVBuffer { } * _resizedInputBuffer;
    ANSTVMTrackerEspresso * _vmtrackerNetworkEspresso;
}

+ (bool)supportsVersion:(unsigned long long)arg1;

- (void).cxx_destruct;
- (struct __CVBuffer { }*)_createCVPixelBuffer_Float32_fromEspressoBufferFloat32:(struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; }*)arg1;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1;
- (unsigned long long)networkInputBufferHeight;
- (unsigned int)networkInputBufferPixelFormat;
- (unsigned long long)networkInputBufferWidth;
- (unsigned long long)outputBufferHeight;
- (unsigned int)outputBufferPixelFormat;
- (unsigned long long)outputBufferWidth;
- (bool)prepareWithError:(id*)arg1;
- (id)resultForPixelBuffer:(struct __CVBuffer { }*)arg1 error:(id*)arg2;
- (void)undoPrepareSideEffects;
- (unsigned long long)version;

@end