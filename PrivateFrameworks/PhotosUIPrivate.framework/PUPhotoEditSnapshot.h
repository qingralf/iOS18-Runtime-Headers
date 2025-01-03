/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUIPrivate.framework/PhotosUIPrivate
 */

@interface PUPhotoEditSnapshot : NSObject {
    PHAdjustmentData * _adjustmentData;
    NSData * _baseImageData;
    AVURLAsset * _baseVideoComplement;
    NSData * _imageData;
    NSString * _imageUTI;
    AVURLAsset * _videoComplement;
    long long  _workImageVersion;
}

@property (setter=_setAdjustmentData:, nonatomic, retain) PHAdjustmentData *adjustmentData;
@property (setter=_setBaseImageData:, nonatomic, retain) NSData *baseImageData;
@property (setter=_setBaseVideoComplement:, nonatomic, retain) AVURLAsset *baseVideoComplement;
@property (setter=_setImageData:, nonatomic, retain) NSData *imageData;
@property (setter=_setImageUTI:, nonatomic, copy) NSString *imageUTI;
@property (setter=_setVideoComplement:, nonatomic, retain) AVURLAsset *videoComplement;
@property (setter=_setWorkImageVersion:, nonatomic) long long workImageVersion;

+ (void)captureSnapshotForAsset:(id)arg1 mediaProvider:(id)arg2 completion:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)_copyAsset:(id)arg1;
- (id)_copyData:(id)arg1;
- (id)_copyDataAtURL:(id)arg1;
- (void)_copySourceData:(id)arg1 destinationData:(out id*)arg2 destinationURL:(out id*)arg3;
- (void)_setAdjustmentData:(id)arg1;
- (void)_setBaseImageData:(id)arg1;
- (void)_setBaseVideoComplement:(id)arg1;
- (void)_setImageData:(id)arg1;
- (void)_setImageUTI:(id)arg1;
- (void)_setVideoComplement:(id)arg1;
- (void)_setWorkImageVersion:(long long)arg1;
- (id)adjustmentData;
- (id)baseImageData;
- (id)baseVideoComplement;
- (id)imageData;
- (id)imageUTI;
- (id)init;
- (id)videoComplement;
- (long long)workImageVersion;

@end
