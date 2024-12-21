/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

@interface PICompositionExportResult : NSObject {
    NSString * _digest;
    NSURL * _exportedFileURL;
    NUImageGeometry * _geometry;
    struct { 
        long long width; 
        long long height; 
    }  _inputSize;
    NSURL * _sidecarDataURL;
}

@property (copy) NSString *digest;
@property (retain) NSURL *exportedFileURL;
@property (retain) NUImageGeometry *geometry;
@property struct { long long x1; long long x2; } inputSize;
@property (retain) NSURL *sidecarDataURL;

- (void).cxx_destruct;
- (id)digest;
- (id)exportedFileURL;
- (id)geometry;
- (struct { long long x1; long long x2; })inputSize;
- (void)setDigest:(id)arg1;
- (void)setExportedFileURL:(id)arg1;
- (void)setGeometry:(id)arg1;
- (void)setInputSize:(struct { long long x1; long long x2; })arg1;
- (void)setSidecarDataURL:(id)arg1;
- (id)sidecarDataURL;

@end