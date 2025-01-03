/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VFX.framework/VFX
 */

@interface VFXMovieExportOperation : _VFXExportOperation {
    AVAssetWriter * _assetWriter;
    AVAssetWriterInput * _assetWriterInput;
    AVAssetWriterInputPixelBufferAdaptor * _avAdaptor;
    bool  _mirrored;
    float  _rate;
    float  _supersampling;
}

- (struct CGImage { }*)_copySnapshot:(struct CGSize { double x1; double x2; })arg1;
- (void)_finishedExport;
- (void)_setupMovieToWritableFile:(id)arg1;
- (void)appendImage:(struct CGImage { }*)arg1 withPresentationTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 usingAdaptor:(id)arg3;
- (void)dealloc;
- (id)initWithRenderer:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 attributes:(id)arg3 outputURL:(id)arg4;
- (void)main;
- (void)renderAndAppendWithPresentationTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 usingAdaptor:(id)arg2 metalTextureCache:(struct __CVMetalTextureCache { }*)arg3 cvQueue:(id)arg4 completionBlock:(id /* block */)arg5;

@end
