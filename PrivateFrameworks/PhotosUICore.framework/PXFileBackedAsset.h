/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXFileBackedAsset : NSObject <PUDisplayAsset, PXDisplayAsset, PXLayoutItemInput, PXMetadataAsset> {
    PXFileBackedAssetDescription * _description;
    NSString * _fileBackedUUID;
    PFMetadata * _metadata;
    UIImage * _previewImage;
    NSString * _uniformTypeIdentifier;
    NSURL * _url;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } acceptableCropRect;
@property (nonatomic, readonly) double aspectRatio;
@property (nonatomic, readonly) double aspectRatio; /* unknown property attribute: ? */
@property (nonatomic, readonly) float audioScore;
@property (nonatomic, readonly) unsigned long long burstSelectionTypes; /* unknown property attribute: ? */
@property (nonatomic, readonly) bool canPlayLoopingVideo;
@property (nonatomic, readonly) bool canPlayPhotoIris;
@property (nonatomic, readonly) bool cloudIsDeletable; /* unknown property attribute: ? */
@property (nonatomic, readonly) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, readonly) Class defaultImageProviderClass;
@property (nonatomic, readonly) unsigned short deferredProcessingNeeded; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) double duration; /* unknown property attribute: ? */
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } faceAreaRect;
@property (getter=isFavorite, nonatomic, readonly) bool favorite;
@property (nonatomic, readonly) NSData *fetchColorNormalizationData; /* unknown property attribute: ? */
@property (nonatomic, readonly) bool hasPeopleSceneMidOrGreaterConfidence;
@property (nonatomic, readonly) bool hasPhotoColorAdjustments;
@property (nonatomic, readonly) bool hasSyndicationInformation; /* unknown property attribute: ? */
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNumber *hdrGain; /* unknown property attribute: ? */
@property (getter=isHidden, nonatomic, readonly) bool hidden;
@property (nonatomic, readonly) NSDate *importDate; /* unknown property attribute: ? */
@property (nonatomic, readonly) bool isAnimatedImage;
@property (nonatomic, readonly) bool isAutoPlaybackEligibilityEstimated; /* unknown property attribute: ? */
@property (nonatomic, readonly) bool isEligibleForAutoPlayback;
@property (nonatomic, readonly) bool isGuestAsset; /* unknown property attribute: ? */
@property (nonatomic, readonly) bool isInCloud;
@property (nonatomic, readonly) bool isInSharedLibrary;
@property (nonatomic, readonly) bool isPhotoIrisPlaceholder;
@property (nonatomic, readonly) bool isSpatialMedia; /* unknown property attribute: ? */
@property (nonatomic, readonly) bool isSpatialPresentation; /* unknown property attribute: ? */
@property (nonatomic, readonly) bool isTemporaryPlaceholder;
@property (getter=isLivePhoto, nonatomic, readonly) bool livePhoto;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } livePhotoStillDisplayTime; /* unknown property attribute: ? */
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } livePhotoVideoDuration; /* unknown property attribute: ? */
@property (nonatomic, readonly) NSDate *localCreationDate;
@property (nonatomic, readonly) NSString *localizedGeoDescription;
@property (nonatomic, readonly) NSString *localizedGeoDescription; /* unknown property attribute: ? */
@property (nonatomic, readonly) CLLocation *location;
@property (nonatomic, readonly) unsigned long long mediaSubtypes;
@property (nonatomic, readonly) unsigned long long mediaType;
@property (nonatomic, readonly) long long mediaType;
@property (nonatomic, readonly) NSDate *modificationDate;
@property (nonatomic, readonly) bool needsDeferredProcessing; /* unknown property attribute: ? */
@property (nonatomic, readonly) long long originalFileSize; /* unknown property attribute: ? */
@property (nonatomic, readonly) unsigned long long originalFilesize;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } photoIrisStillDisplayTime;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } photoIrisVideoDuration;
@property (nonatomic, readonly) unsigned long long pixelHeight;
@property (nonatomic, readonly) unsigned long long pixelWidth;
@property (nonatomic, readonly) long long playbackStyle;
@property (nonatomic, readonly) long long playbackStyle; /* unknown property attribute: ? */
@property (nonatomic, readonly) unsigned short playbackVariation;
@property (nonatomic, readonly) unsigned short playbackVariation; /* unknown property attribute: ? */
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } positionOffset;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } preferredCropRect;
@property (nonatomic, readonly) UIImage *previewImage;
@property (nonatomic, readonly) bool representsBurst;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long thumbnailIndex;
@property (nonatomic, readonly) unsigned long long thumbnailVersion; /* unknown property attribute: ? */
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } transform;
@property (nonatomic, readonly) NSString *uniformTypeIdentifier;
@property (nonatomic, readonly, copy) NSURL *url;
@property (nonatomic, readonly) NSString *uuid;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } videoKeyFrameSourceTime; /* unknown property attribute: ? */
@property (nonatomic, readonly) double weight;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

- (void).cxx_destruct;
- (void)_loadFileMetadataIfNeeded;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })acceptableCropRect;
- (double)aspectRatio;
- (float)audioScore;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bestCropRectForAspectRatio:(double)arg1;
- (bool)canPlayLoopingVideo;
- (bool)canPlayPhotoIris;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (Class)defaultImageProviderClass;
- (id)description;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })faceAreaRect;
- (bool)hasPeopleSceneMidOrGreaterConfidence;
- (id)init;
- (id)initWithDescription:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 previewImage:(id)arg2;
- (bool)isAnimatedImage;
- (long long)isContentEqualTo:(id)arg1;
- (bool)isEligibleForAutoPlayback;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToFileBackedAsset:(id)arg1;
- (bool)isFavorite;
- (bool)isInCloud;
- (bool)isInSharedLibrary;
- (bool)isPartOfStack;
- (id)localCreationDate;
- (id)location;
- (unsigned long long)mediaSubtypes;
- (long long)mediaType;
- (unsigned long long)pixelHeight;
- (unsigned long long)pixelWidth;
- (long long)playbackStyle;
- (unsigned short)playbackVariation;
- (struct CGPoint { double x1; double x2; })positionOffset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })preferredCropRect;
- (id)previewImage;
- (bool)representsBurst;
- (struct CGSize { double x1; double x2; })size;
- (unsigned long long)thumbnailIndex;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transform;
- (id)uniformTypeIdentifier;
- (id)url;
- (id)uuid;
- (double)weight;
- (double)weightUsingCriterion:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/PhotosUIPrivate.framework/PhotosUIPrivate

- (double)duration;
- (bool)hasPhotoColorAdjustments;
- (bool)isGuestAsset;
- (bool)isHidden;
- (bool)isLivePhoto;
- (bool)isPhotoIrisPlaceholder;
- (bool)isTemporaryPlaceholder;
- (id)localizedGeoDescription;
- (id)modificationDate;
- (unsigned long long)originalFilesize;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })photoIrisStillDisplayTime;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })photoIrisVideoDuration;
- (unsigned long long)pixelHeight;
- (unsigned long long)pixelWidth;

@end
