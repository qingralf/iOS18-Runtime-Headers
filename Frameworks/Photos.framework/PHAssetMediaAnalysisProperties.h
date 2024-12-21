/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHAssetMediaAnalysisProperties : PHAssetPropertySet {
    float  _activityScore;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    }  _animatedStickerTimeRange;
    short  _audioClassification;
    float  _audioScore;
    float  _autoplaySuggestionScore;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _bestKeyFrameTime;
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
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    }  _bestVideoTimeRange;
    float  _blurrinessScore;
    short  _cloudAnalysisMajorVersion;
    short  _cloudAnalysisStage;
    NSData * _colorNormalizationData;
    float  _exposureScore;
    unsigned long long  _faceCount;
    short  _imageCaptionVersion;
    short  _imageEmbeddingVersion;
    short  _localAnalysisMajorVersion;
    short  _localAnalysisStage;
    short  _mediaAnalysisImageVersion;
    NSDate * _mediaAnalysisTimeStamp;
    unsigned long long  _mediaAnalysisVersion;
    NSDate * _privateEncryptedComputeAnalysisTimestamp;
    short  _privateEncryptedComputeAnalysisVersion;
    short  _privateEncryptedComputeLocationAnalysisVersion;
    short  _probableRotationDirection;
    float  _probableRotationDirectionConfidence;
    short  _screenTimeDeviceImageSensitivity;
    float  _settlingEffectScore;
    unsigned short  _syndicationProcessingValue;
    unsigned long long  _syndicationProcessingVersion;
    short  _videoCaptionVersion;
    short  _videoEmbeddingVersion;
    float  _videoScore;
    float  _videoStickerSuggestionScore;
    float  _wallpaperScore;
}

@property (nonatomic, readonly) float activityScore;
@property (nonatomic, readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } animatedStickerTimeRange;
@property (nonatomic, readonly) short assetAnalysisStage;
@property (nonatomic, readonly) short audioClassification;
@property (nonatomic, readonly) float audioScore;
@property (nonatomic, readonly) float autoplaySuggestionScore;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } bestKeyFrameTime;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bestPlaybackRect;
@property (nonatomic, readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } bestVideoTimeRange;
@property (nonatomic, readonly) float blurrinessScore;
@property (nonatomic, readonly) short cloudAnalysisMajorVersion;
@property (nonatomic, readonly) short cloudAnalysisStage;
@property (nonatomic, readonly) NSData *colorNormalizationData;
@property (nonatomic, readonly) float exposureScore;
@property (nonatomic, readonly) unsigned long long faceCount;
@property (nonatomic, readonly) short imageCaptionVersion;
@property (nonatomic, readonly) short imageEmbeddingVersion;
@property (nonatomic, readonly) short localAnalysisMajorVersion;
@property (nonatomic, readonly) short localAnalysisStage;
@property (nonatomic, readonly) short mediaAnalysisImageVersion;
@property (nonatomic, readonly) NSDate *mediaAnalysisTimeStamp;
@property (nonatomic, readonly) unsigned long long mediaAnalysisVersion;
@property (nonatomic, readonly) NSDate *privateEncryptedComputeAnalysisTimestamp;
@property (nonatomic, readonly) short privateEncryptedComputeAnalysisVersion;
@property (nonatomic, readonly) short privateEncryptedComputeLocationAnalysisVersion;
@property (nonatomic, readonly) short probableRotationDirection;
@property (nonatomic, readonly) float probableRotationDirectionConfidence;
@property (nonatomic, readonly) short screenTimeDeviceImageSensitivity;
@property (nonatomic, readonly) float settlingEffectScore;
@property (nonatomic, readonly) unsigned short syndicationProcessingValue;
@property (nonatomic, readonly) unsigned long long syndicationProcessingVersion;
@property (nonatomic, readonly) short videoCaptionVersion;
@property (nonatomic, readonly) short videoEmbeddingVersion;
@property (nonatomic, readonly) float videoScore;
@property (nonatomic, readonly) float videoStickerSuggestionScore;
@property (nonatomic, readonly) float wallpaperScore;

+ (id)additionalPropertiesToFetchOnPrimaryObject;
+ (float)defaultAudioScore;
+ (id)entityName;
+ (id)keyPathFromPrimaryObject;
+ (id)keyPathToPrimaryObject;
+ (id)propertiesToFetch;
+ (id)propertySetName;

- (void).cxx_destruct;
- (float)activityScore;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })animatedStickerTimeRange;
- (short)assetAnalysisStage;
- (short)audioClassification;
- (float)audioScore;
- (float)autoplaySuggestionScore;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })bestKeyFrameTime;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bestPlaybackRect;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })bestVideoTimeRange;
- (float)blurrinessScore;
- (short)cloudAnalysisMajorVersion;
- (short)cloudAnalysisStage;
- (id)colorNormalizationData;
- (float)exposureScore;
- (unsigned long long)faceCount;
- (short)imageCaptionVersion;
- (short)imageEmbeddingVersion;
- (void)initWithDefaultValues;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(bool)arg3;
- (short)localAnalysisMajorVersion;
- (short)localAnalysisStage;
- (short)mediaAnalysisImageVersion;
- (id)mediaAnalysisTimeStamp;
- (unsigned long long)mediaAnalysisVersion;
- (id)privateEncryptedComputeAnalysisTimestamp;
- (short)privateEncryptedComputeAnalysisVersion;
- (short)privateEncryptedComputeLocationAnalysisVersion;
- (short)probableRotationDirection;
- (float)probableRotationDirectionConfidence;
- (short)screenTimeDeviceImageSensitivity;
- (float)settlingEffectScore;
- (unsigned short)syndicationProcessingValue;
- (unsigned long long)syndicationProcessingVersion;
- (short)videoCaptionVersion;
- (short)videoEmbeddingVersion;
- (float)videoScore;
- (float)videoStickerSuggestionScore;
- (float)wallpaperScore;

@end