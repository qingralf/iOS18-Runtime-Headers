/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHPTPAsset : NSObject <NSMutableCopying> {
    bool  _burstFavorite;
    bool  _burstFirstPicked;
    bool  _burstPicked;
    NSString * _burstUUID;
    NSString * _captureDateString;
    NSString * _capturedFilename;
    UTType * _contentType;
    long long  _conversionGroup;
    NSString * _dcfFilename;
    bool  _deleted;
    long long  _desiredOrientation;
    NSString * _durationString;
    NSString * _fileSystemFilename;
    NSString * _fingerprint;
    NSString * _fullDirectoryPath;
    NSString * _groupUUID;
    bool  _highFrameRateVideo;
    struct CGSize { 
        double width; 
        double height; 
    }  _imagePixSize;
    bool  _isHDR;
    bool  _isPartOfLivePhoto;
    NSString * _locationString;
    NSString * _modificationDateString;
    NSNumber * _objectCompressedSize;
    NSString * _originatingAssetID;
    NSURL * _overflowURL;
    NSString * _relatedUUID;
    PHPTPAssetHandle * _resourceHandle;
    NSString * _spatialOverCaptureGroupIdentifier;
    NSNumber * _thumbCompressedSize;
    NSNumber * _thumbOffset;
    struct CGSize { 
        double width; 
        double height; 
    }  _thumbPixSize;
    bool  _timeLapseVideo;
    NSURL * _url;
    unsigned int  _videoCodec;
}

@property (nonatomic, readonly) PHPTPAssetHandle *assetHandle;
@property (getter=isBurstFavorite, nonatomic, readonly) bool burstFavorite;
@property (getter=isBurstFirstPicked, nonatomic, readonly) bool burstFirstPicked;
@property (getter=isBurstPicked, nonatomic, readonly) bool burstPicked;
@property (nonatomic, readonly) NSString *burstUUID;
@property (nonatomic, readonly) NSString *captureDateString;
@property (nonatomic, readonly) NSString *capturedFilename;
@property (nonatomic, readonly) UTType *contentType;
@property (nonatomic, readonly) long long conversionGroup;
@property (nonatomic, readonly) NSString *createdFilename;
@property (nonatomic, readonly) NSString *dcfFilename;
@property (getter=isDeleted, nonatomic, readonly) bool deleted;
@property (nonatomic, readonly) long long desiredOrientation;
@property (nonatomic, readonly) NSString *durationString;
@property (nonatomic, readonly) NSString *fileSystemFilename;
@property (nonatomic, readonly) NSString *filename;
@property (nonatomic, readonly) NSString *fingerprint;
@property (nonatomic, readonly) NSString *fullDirectoryPath;
@property (nonatomic, readonly) NSString *groupUUID;
@property (getter=isHighFrameRateVideo, nonatomic, readonly) bool highFrameRateVideo;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } imagePixSize;
@property (nonatomic, readonly) bool isHDR;
@property (nonatomic, readonly) bool isMovie;
@property (nonatomic, readonly) bool isPartOfLivePhoto;
@property (nonatomic, readonly) bool isPhoto;
@property (nonatomic, readonly) bool isPrimary;
@property (nonatomic, readonly) bool isRender;
@property (nonatomic, readonly) NSString *locationString;
@property (nonatomic, readonly) NSString *modificationDateString;
@property (nonatomic, readonly) NSNumber *objectCompressedSize;
@property (nonatomic, readonly) NSString *originalFilename;
@property (nonatomic, readonly) NSString *originatingAssetID;
@property (nonatomic, readonly) NSURL *overflowURL;
@property (nonatomic, readonly) NSString *relatedUUID;
@property (nonatomic, readonly) PHPTPAssetHandle *resourceHandle;
@property (nonatomic, readonly) NSString *spatialOverCaptureGroupIdentifier;
@property (nonatomic, readonly) NSNumber *thumbCompressedSize;
@property (nonatomic, readonly) NSNumber *thumbOffset;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } thumbPixSize;
@property (getter=isTimeLapseVideo, nonatomic, readonly) bool timeLapseVideo;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) unsigned int videoCodec;

+ (bool)isMovieType:(long long)arg1;
+ (bool)isPhotoType:(long long)arg1;
+ (bool)isSupportedResourceType:(long long)arg1;
+ (long long)ptpTrashedStateForResourceType:(long long)arg1;

- (void).cxx_destruct;
- (id)_prettyDescriptionWithIndent:(long long)arg1;
- (id)_resourceFilenameForFilename:(id)arg1 assetResource:(id)arg2;
- (id)assetHandle;
- (id)burstUUID;
- (id)captureDateString;
- (id)capturedFilename;
- (id)contentType;
- (long long)conversionGroup;
- (id)createdFilename;
- (id)dcfFilename;
- (id)description;
- (long long)desiredOrientation;
- (id)durationString;
- (id)fileSystemFilename;
- (id)filename;
- (id)fingerprint;
- (id)fullDirectoryPath;
- (id)groupUUID;
- (struct CGSize { double x1; double x2; })imagePixSize;
- (id)initWithPTPAsset:(id)arg1;
- (id)initWithPhotosAsset:(id)arg1 photosResource:(id)arg2;
- (id)initWithPhotosAsset:(id)arg1 url:(id)arg2 resourceType:(long long)arg3 orientation:(unsigned int)arg4;
- (bool)isBurstFavorite;
- (bool)isBurstFirstPicked;
- (bool)isBurstPicked;
- (bool)isDeleted;
- (bool)isHDR;
- (bool)isHighFrameRateVideo;
- (bool)isMovie;
- (bool)isPartOfLivePhoto;
- (bool)isPhoto;
- (bool)isPrimary;
- (bool)isRender;
- (bool)isTimeLapseVideo;
- (id)locationString;
- (id)modificationDateString;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectCompressedSize;
- (id)originalFilename;
- (id)originatingAssetID;
- (id)overflowURL;
- (id)relatedUUID;
- (id)resourceHandle;
- (id)spatialOverCaptureGroupIdentifier;
- (id)thumbCompressedSize;
- (id)thumbOffset;
- (struct CGSize { double x1; double x2; })thumbPixSize;
- (id)url;
- (unsigned int)videoCodec;

@end
