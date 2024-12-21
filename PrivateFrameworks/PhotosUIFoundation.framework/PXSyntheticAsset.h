/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUIFoundation.framework/PhotosUIFoundation
 */

@interface PXSyntheticAsset : NSObject <NSSecureCoding, PXDisplayAsset, PXLayoutItemInput, PXMutableSyntheticAsset, PXStoryDisplayAssetResource> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _acceptableCropRect;
    float  _audioScore;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bestPlaybackRect;
    NSDate * _creationDate;
    double  _curationScore;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _faceAreaRect;
    long long  _faceCount;
    bool  _hasPeopleSceneMidOrGreaterConfidence;
    unsigned long long  _hash;
    NSString * _label;
    NSDate * _localCreationDate;
    NSString * _localizedGeoDescription;
    unsigned long long  _mediaSubtypes;
    long long  _mediaType;
    long long  _playbackStyle;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _preferredCropRect;
    NSSet * _sceneClassifications;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    UIColor * _tintColor;
    NSString * _uuid;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } acceptableCropAssetRect;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } acceptableCropRect;
@property (nonatomic, readonly) double aspectRatio; /* unknown property attribute: ? */
@property (nonatomic) float audioScore;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bestPlaybackAssetRect;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bestPlaybackRect;
@property (nonatomic, readonly) unsigned long long burstSelectionTypes; /* unknown property attribute: ? */
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) double curationScore;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, readonly) Class defaultImageProviderClass;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration; /* unknown property attribute: ? */
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } faceAreaAssetRect;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } faceAreaRect;
@property (nonatomic, readonly) long long faceCount;
@property (getter=isFavorite, nonatomic, readonly) bool favorite;
@property (nonatomic, readonly) NSData *fetchColorNormalizationData; /* unknown property attribute: ? */
@property (nonatomic, readonly) bool hasPeopleSceneMidOrGreaterConfidence;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNumber *hdrGain; /* unknown property attribute: ? */
@property (nonatomic, readonly) NSDate *importDate; /* unknown property attribute: ? */
@property (nonatomic, readonly) bool isAutoPlaybackEligibilityEstimated; /* unknown property attribute: ? */
@property (nonatomic, readonly) bool isEligibleForAutoPlayback;
@property (nonatomic, readonly) bool isInCloud;
@property (nonatomic, readonly) bool isInSharedLibrary;
@property (nonatomic, readonly) bool isSpatialMedia; /* unknown property attribute: ? */
@property (nonatomic, readonly) bool isSpatialPresentation; /* unknown property attribute: ? */
@property (nonatomic, readonly, copy) NSString *label;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } livePhotoStillDisplayTime; /* unknown property attribute: ? */
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } livePhotoVideoDuration; /* unknown property attribute: ? */
@property (nonatomic, copy) NSDate *localCreationDate;
@property (nonatomic, copy) NSString *localizedGeoDescription;
@property (nonatomic, readonly) unsigned long long mediaSubtypes;
@property (nonatomic) long long mediaType;
@property (nonatomic, readonly) long long originalFileSize; /* unknown property attribute: ? */
@property (nonatomic, readonly) unsigned long long pixelHeight;
@property (nonatomic, readonly) unsigned long long pixelWidth;
@property (nonatomic, readonly) long long playbackStyle;
@property (nonatomic, readonly) unsigned short playbackVariation; /* unknown property attribute: ? */
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } positionOffset;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } preferredCropAssetRect;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } preferredCropRect;
@property (nonatomic, readonly) <PXDisplayAsset> *px_storyResourceDisplayAsset;
@property (nonatomic, readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } px_storyResourceFetchBestPlaybackRange;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } px_storyResourceFetchBestPlaybackRect;
@property (nonatomic, readonly) double px_storyResourceFetchCurationScore;
@property (nonatomic, readonly) long long px_storyResourceFetchFaceCount;
@property (nonatomic, readonly) NSData *px_storyResourceFetchNormalizationData;
@property (nonatomic, readonly) NSSet *px_storyResourceFetchSceneClassifications;
@property (nonatomic, readonly) PFVideoAdjustments *px_storyResourceFetchVideoAdjustments;
@property (nonatomic, readonly) NSString *px_storyResourceIdentifier;
@property (nonatomic, readonly) long long px_storyResourceKind;
@property (nonatomic, readonly) bool representsBurst;
@property (nonatomic, readonly, copy) NSSet *sceneClassifications;
@property (nonatomic, readonly) NSString *serializableDescription;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long thumbnailIndex;
@property (nonatomic, readonly) unsigned long long thumbnailVersion; /* unknown property attribute: ? */
@property (nonatomic, readonly, copy) UIColor *tintColor;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } transform;
@property (nonatomic, copy) NSString *uuid;
@property (nonatomic, readonly) double weight;

// Image: /System/Library/PrivateFrameworks/PhotosUIFoundation.framework/PhotosUIFoundation

+ (bool)supportsSecureCoding;
+ (id)syntheticAssetWithSerializableDescription:(id)arg1;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_cropAssetRectFromCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_cropRectFromCropAssetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })acceptableCropAssetRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })acceptableCropRect;
- (double)aspectRatio;
- (float)audioScore;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bestCropRectForAspectRatio:(double)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bestCropRectForAspectRatio:(double)arg1 verticalContentMode:(long long)arg2 cropMode:(long long)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bestCropRectForAspectRatioV2:(double)arg1 verticalContentMode:(long long)arg2 cropMode:(long long)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bestPlaybackAssetRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bestPlaybackRect;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (double)curationScore;
- (Class)defaultImageProviderClass;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })faceAreaAssetRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })faceAreaRect;
- (long long)faceCount;
- (bool)hasAdjustments;
- (bool)hasPeopleSceneMidOrGreaterConfidence;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id /* block */)arg1;
- (long long)isContentEqualTo:(id)arg1;
- (bool)isEligibleForAutoPlayback;
- (bool)isEqual:(id)arg1;
- (bool)isFavorite;
- (bool)isInCloud;
- (bool)isInSharedLibrary;
- (id)label;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })livePhotoVideoDuration;
- (id)localCreationDate;
- (id)localIdentifier;
- (id)localizedGeoDescription;
- (unsigned long long)mediaSubtypes;
- (long long)mediaType;
- (id)photoLibrary;
- (unsigned long long)pixelHeight;
- (unsigned long long)pixelWidth;
- (long long)playbackStyle;
- (struct CGPoint { double x1; double x2; })positionOffset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })preferredCropAssetRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })preferredCropRect;
- (bool)representsBurst;
- (id)sceneClassifications;
- (id)serializableDescription;
- (void)setAcceptableCropAssetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAcceptableCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAudioScore:(float)arg1;
- (void)setBestPlaybackAssetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setBestPlaybackRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCurationScore:(double)arg1;
- (void)setFaceAreaAssetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFaceAreaRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFaceCount:(long long)arg1;
- (void)setLabel:(id)arg1;
- (void)setLocalCreationDate:(id)arg1;
- (void)setLocalizedGeoDescription:(id)arg1;
- (void)setMediaSubtypes:(unsigned long long)arg1;
- (void)setMediaType:(long long)arg1;
- (void)setPlaybackStyle:(long long)arg1;
- (void)setPreferredCropAssetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPreferredCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSceneClassifications:(id)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTintColor:(id)arg1;
- (void)setUuid:(id)arg1;
- (struct CGSize { double x1; double x2; })size;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })suggestedCropForTargetSize:(struct CGSize { double x1; double x2; })arg1 withFocusRegion:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })suggestedCropForTargetSize:(struct CGSize { double x1; double x2; })arg1 withOcclusionRegion:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 andOutputCropScore:(double*)arg3;
- (unsigned long long)thumbnailIndex;
- (id)tintColor;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transform;
- (id)uuid;
- (id)vcp_fingerprint:(id)arg1;
- (double)weight;
- (double)weightUsingCriterion:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

- (id)px_storyResourceDisplayAsset;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })px_storyResourceFetchBestPlaybackRange;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })px_storyResourceFetchBestPlaybackRect;
- (double)px_storyResourceFetchCurationScore;
- (long long)px_storyResourceFetchFaceCount;
- (id)px_storyResourceFetchNormalizationData;
- (id)px_storyResourceFetchSceneClassifications;
- (id)px_storyResourceFetchVideoAdjustments;
- (id)px_storyResourceIdentifier;
- (long long)px_storyResourceKind;

@end