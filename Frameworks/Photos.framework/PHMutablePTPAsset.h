/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHMutablePTPAsset : PHPTPAsset

@property (getter=isBurstFavorite, nonatomic) bool burstFavorite;
@property (getter=isBurstFirstPicked, nonatomic) bool burstFirstPicked;
@property (getter=isBurstPicked, nonatomic) bool burstPicked;
@property (nonatomic, copy) NSString *burstUUID;
@property (nonatomic, copy) NSString *captureDateString;
@property (nonatomic, copy) NSString *capturedFilename;
@property (nonatomic, retain) UTType *contentType;
@property (nonatomic) long long conversionGroup;
@property (nonatomic, copy) NSString *dcfFilename;
@property (getter=isDeleted, nonatomic) bool deleted;
@property (nonatomic) long long desiredOrientation;
@property (nonatomic, copy) NSString *durationString;
@property (nonatomic, copy) NSString *fileSystemFilename;
@property (nonatomic, copy) NSString *fingerprint;
@property (nonatomic, copy) NSString *fullDirectoryPath;
@property (nonatomic, copy) NSString *groupUUID;
@property (getter=isHighFrameRateVideo, nonatomic) bool highFrameRateVideo;
@property (nonatomic) struct CGSize { double x1; double x2; } imagePixSize;
@property (nonatomic) bool isHDR;
@property (nonatomic, copy) NSString *locationString;
@property (nonatomic, copy) NSString *modificationDateString;
@property (nonatomic, retain) NSNumber *objectCompressedSize;
@property (nonatomic, copy) NSString *originatingAssetID;
@property (nonatomic, retain) NSURL *overflowURL;
@property (nonatomic, retain) PHPTPAssetHandle *resourceHandle;
@property (nonatomic, retain) NSNumber *thumbCompressedSize;
@property (nonatomic, retain) NSNumber *thumbOffset;
@property (nonatomic) struct CGSize { double x1; double x2; } thumbPixSize;
@property (getter=isTimeLapseVideo, nonatomic) bool timeLapseVideo;
@property (nonatomic, retain) NSURL *url;
@property (nonatomic) unsigned int videoCodec;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setBurstFavorite:(bool)arg1;
- (void)setBurstFirstPicked:(bool)arg1;
- (void)setBurstPicked:(bool)arg1;
- (void)setBurstUUID:(id)arg1;
- (void)setCaptureDateString:(id)arg1;
- (void)setCapturedFilename:(id)arg1;
- (void)setContentType:(id)arg1;
- (void)setConversionGroup:(long long)arg1;
- (void)setDcfFilename:(id)arg1;
- (void)setDeleted:(bool)arg1;
- (void)setDesiredOrientation:(long long)arg1;
- (void)setDurationString:(id)arg1;
- (void)setFileSystemFilename:(id)arg1;
- (void)setFingerprint:(id)arg1;
- (void)setFullDirectoryPath:(id)arg1;
- (void)setGroupUUID:(id)arg1;
- (void)setHighFrameRateVideo:(bool)arg1;
- (void)setImagePixSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setIsHDR:(bool)arg1;
- (void)setLocationString:(id)arg1;
- (void)setModificationDateString:(id)arg1;
- (void)setObjectCompressedSize:(id)arg1;
- (void)setOriginatingAssetID:(id)arg1;
- (void)setOverflowURL:(id)arg1;
- (void)setResourceHandle:(id)arg1;
- (void)setThumbCompressedSize:(id)arg1;
- (void)setThumbOffset:(id)arg1;
- (void)setThumbPixSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTimeLapseVideo:(bool)arg1;
- (void)setURL:(id)arg1;
- (void)setVideoCodec:(unsigned int)arg1;
- (id)updateForTranscodeChoiceWithConversionResult:(id)arg1;
- (void)updateWithConversionResult:(id)arg1;

@end
