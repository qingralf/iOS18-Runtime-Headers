/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaAnalysis.framework/MediaAnalysis
 */

@interface VCPProtoAssetAnalysis : PBCodable <NSCopying> {
    NSMutableArray * _animatedStickerResults;
    NSString * _assetAdjustedFingerprint;
    NSString * _assetCloudIdentifier;
    NSString * _assetIdentifier;
    NSString * _assetMasterFingerprint;
    double  _assetModificationDate;
    NSMutableArray * _audioFusedVideoEmbeddingResults;
    double  _date;
    NSMutableArray * _filesystemMovieApplauseResults;
    NSMutableArray * _filesystemMovieBabbleResults;
    NSMutableArray * _filesystemMovieCheeringResults;
    NSMutableArray * _filesystemMovieClassificationResults;
    NSMutableArray * _filesystemMovieHumanActionClassificationResults;
    NSMutableArray * _filesystemMovieLaughterResults;
    NSMutableArray * _filesystemMovieMusicResults;
    NSMutableArray * _filesystemMovieVoiceResults;
    unsigned int  _flags;
    struct { 
        unsigned int quality : 1; 
        unsigned int statsFlags : 1; 
        unsigned int typesWide : 1; 
    }  _has;
    NSMutableArray * _imageBlurResults;
    NSMutableArray * _imageCaptionResults;
    NSMutableArray * _imageCompositionResults;
    NSMutableArray * _imageEmbeddingResults;
    NSMutableArray * _imageExposureResults;
    NSMutableArray * _imageFaceResults;
    NSMutableArray * _imageFeatureResults;
    NSMutableArray * _imageHumanPoseResults;
    NSMutableArray * _imageJunkResults;
    NSMutableArray * _imagePetsFaceResults;
    NSMutableArray * _imagePetsResults;
    NSMutableArray * _imageSaliencyResults;
    NSMutableArray * _imageSceneprintResults;
    NSMutableArray * _imageShotTypeResults;
    NSMutableArray * _livePhotoEffectsResults;
    NSMutableArray * _livePhotoHumanActionClassificationResults;
    NSMutableArray * _livePhotoKeyFrameResults;
    NSMutableArray * _livePhotoKeyFrameStillResults;
    NSMutableArray * _livePhotoRecommendationResults;
    NSMutableArray * _livePhotoSettlingEffectGatingResults;
    NSMutableArray * _livePhotoSharpnessResults;
    NSMutableArray * _movieActivityLevelResults;
    NSMutableArray * _movieApplauseResults;
    NSMutableArray * _movieAudioQualityResults;
    NSMutableArray * _movieBabbleResults;
    NSMutableArray * _movieCameraMotionResults;
    NSMutableArray * _movieCheeringResults;
    NSMutableArray * _movieClassificationResults;
    NSMutableArray * _movieFaceResults;
    NSMutableArray * _movieFaceprintResults;
    NSMutableArray * _movieFeatureResults;
    NSMutableArray * _movieFineSubjectMotionResults;
    NSMutableArray * _movieHighlightResults;
    NSMutableArray * _movieHighlightScoreResults;
    NSMutableArray * _movieHumanActionClassificationResults;
    NSMutableArray * _movieHumanActionResults;
    NSMutableArray * _movieHumanPoseResults;
    NSMutableArray * _movieInterestingnessResults;
    NSMutableArray * _movieLaughterResults;
    NSMutableArray * _movieLoudnessResults;
    NSMutableArray * _movieMovingObjectResults;
    NSMutableArray * _movieMusicResults;
    NSMutableArray * _movieObstructionResults;
    NSMutableArray * _movieOrientationResults;
    NSMutableArray * _moviePetsFaceResults;
    NSMutableArray * _moviePetsResults;
    NSMutableArray * _moviePreEncodeResults;
    NSMutableArray * _movieQualityResults;
    NSMutableArray * _movieSafetyResults;
    NSMutableArray * _movieSaliencyResults;
    NSMutableArray * _movieSceneResults;
    NSMutableArray * _movieSceneprintResults;
    NSMutableArray * _movieStabilizationResults;
    NSMutableArray * _movieSubjectMotionResults;
    NSMutableArray * _movieSubtleMotionResults;
    NSMutableArray * _movieSummaryResults;
    NSMutableArray * _movieTorsoResults;
    NSMutableArray * _movieUtteranceResults;
    NSMutableArray * _movieVoiceResults;
    double  _quality;
    unsigned long long  _statsFlags;
    NSMutableArray * _summarizedEmbeddingResults;
    unsigned int  _types;
    unsigned long long  _typesWide;
    unsigned int  _version;
    NSMutableArray * _videoCaptionPreferenceResults;
    NSMutableArray * _videoCaptionResults;
    NSMutableArray * _videoEmbeddingResults;
    NSMutableArray * _videoSegmentCaptionResults;
}

@property (nonatomic, retain) NSMutableArray *animatedStickerResults;
@property (nonatomic, retain) NSString *assetAdjustedFingerprint;
@property (nonatomic, retain) NSString *assetCloudIdentifier;
@property (nonatomic, retain) NSString *assetIdentifier;
@property (nonatomic, retain) NSString *assetMasterFingerprint;
@property (nonatomic) double assetModificationDate;
@property (nonatomic, retain) NSMutableArray *audioFusedVideoEmbeddingResults;
@property (nonatomic) double date;
@property (nonatomic, retain) NSMutableArray *filesystemMovieApplauseResults;
@property (nonatomic, retain) NSMutableArray *filesystemMovieBabbleResults;
@property (nonatomic, retain) NSMutableArray *filesystemMovieCheeringResults;
@property (nonatomic, retain) NSMutableArray *filesystemMovieClassificationResults;
@property (nonatomic, retain) NSMutableArray *filesystemMovieHumanActionClassificationResults;
@property (nonatomic, retain) NSMutableArray *filesystemMovieLaughterResults;
@property (nonatomic, retain) NSMutableArray *filesystemMovieMusicResults;
@property (nonatomic, retain) NSMutableArray *filesystemMovieVoiceResults;
@property (nonatomic) unsigned int flags;
@property (nonatomic, readonly) bool hasAssetAdjustedFingerprint;
@property (nonatomic, readonly) bool hasAssetCloudIdentifier;
@property (nonatomic, readonly) bool hasAssetMasterFingerprint;
@property (nonatomic) bool hasQuality;
@property (nonatomic) bool hasStatsFlags;
@property (nonatomic) bool hasTypesWide;
@property (nonatomic, retain) NSMutableArray *imageBlurResults;
@property (nonatomic, retain) NSMutableArray *imageCaptionResults;
@property (nonatomic, retain) NSMutableArray *imageCompositionResults;
@property (nonatomic, retain) NSMutableArray *imageEmbeddingResults;
@property (nonatomic, retain) NSMutableArray *imageExposureResults;
@property (nonatomic, retain) NSMutableArray *imageFaceResults;
@property (nonatomic, retain) NSMutableArray *imageFeatureResults;
@property (nonatomic, retain) NSMutableArray *imageHumanPoseResults;
@property (nonatomic, retain) NSMutableArray *imageJunkResults;
@property (nonatomic, retain) NSMutableArray *imagePetsFaceResults;
@property (nonatomic, retain) NSMutableArray *imagePetsResults;
@property (nonatomic, retain) NSMutableArray *imageSaliencyResults;
@property (nonatomic, retain) NSMutableArray *imageSceneprintResults;
@property (nonatomic, retain) NSMutableArray *imageShotTypeResults;
@property (nonatomic, retain) NSMutableArray *livePhotoEffectsResults;
@property (nonatomic, retain) NSMutableArray *livePhotoHumanActionClassificationResults;
@property (nonatomic, retain) NSMutableArray *livePhotoKeyFrameResults;
@property (nonatomic, retain) NSMutableArray *livePhotoKeyFrameStillResults;
@property (nonatomic, retain) NSMutableArray *livePhotoRecommendationResults;
@property (nonatomic, retain) NSMutableArray *livePhotoSettlingEffectGatingResults;
@property (nonatomic, retain) NSMutableArray *livePhotoSharpnessResults;
@property (nonatomic, retain) NSMutableArray *movieActivityLevelResults;
@property (nonatomic, retain) NSMutableArray *movieApplauseResults;
@property (nonatomic, retain) NSMutableArray *movieAudioQualityResults;
@property (nonatomic, retain) NSMutableArray *movieBabbleResults;
@property (nonatomic, retain) NSMutableArray *movieCameraMotionResults;
@property (nonatomic, retain) NSMutableArray *movieCheeringResults;
@property (nonatomic, retain) NSMutableArray *movieClassificationResults;
@property (nonatomic, retain) NSMutableArray *movieFaceResults;
@property (nonatomic, retain) NSMutableArray *movieFaceprintResults;
@property (nonatomic, retain) NSMutableArray *movieFeatureResults;
@property (nonatomic, retain) NSMutableArray *movieFineSubjectMotionResults;
@property (nonatomic, retain) NSMutableArray *movieHighlightResults;
@property (nonatomic, retain) NSMutableArray *movieHighlightScoreResults;
@property (nonatomic, retain) NSMutableArray *movieHumanActionClassificationResults;
@property (nonatomic, retain) NSMutableArray *movieHumanActionResults;
@property (nonatomic, retain) NSMutableArray *movieHumanPoseResults;
@property (nonatomic, retain) NSMutableArray *movieInterestingnessResults;
@property (nonatomic, retain) NSMutableArray *movieLaughterResults;
@property (nonatomic, retain) NSMutableArray *movieLoudnessResults;
@property (nonatomic, retain) NSMutableArray *movieMovingObjectResults;
@property (nonatomic, retain) NSMutableArray *movieMusicResults;
@property (nonatomic, retain) NSMutableArray *movieObstructionResults;
@property (nonatomic, retain) NSMutableArray *movieOrientationResults;
@property (nonatomic, retain) NSMutableArray *moviePetsFaceResults;
@property (nonatomic, retain) NSMutableArray *moviePetsResults;
@property (nonatomic, retain) NSMutableArray *moviePreEncodeResults;
@property (nonatomic, retain) NSMutableArray *movieQualityResults;
@property (nonatomic, retain) NSMutableArray *movieSafetyResults;
@property (nonatomic, retain) NSMutableArray *movieSaliencyResults;
@property (nonatomic, retain) NSMutableArray *movieSceneResults;
@property (nonatomic, retain) NSMutableArray *movieSceneprintResults;
@property (nonatomic, retain) NSMutableArray *movieStabilizationResults;
@property (nonatomic, retain) NSMutableArray *movieSubjectMotionResults;
@property (nonatomic, retain) NSMutableArray *movieSubtleMotionResults;
@property (nonatomic, retain) NSMutableArray *movieSummaryResults;
@property (nonatomic, retain) NSMutableArray *movieTorsoResults;
@property (nonatomic, retain) NSMutableArray *movieUtteranceResults;
@property (nonatomic, retain) NSMutableArray *movieVoiceResults;
@property (nonatomic) double quality;
@property (nonatomic) unsigned long long statsFlags;
@property (nonatomic, retain) NSMutableArray *summarizedEmbeddingResults;
@property (nonatomic) unsigned int types;
@property (nonatomic) unsigned long long typesWide;
@property (nonatomic) unsigned int version;
@property (nonatomic, retain) NSMutableArray *videoCaptionPreferenceResults;
@property (nonatomic, retain) NSMutableArray *videoCaptionResults;
@property (nonatomic, retain) NSMutableArray *videoEmbeddingResults;
@property (nonatomic, retain) NSMutableArray *videoSegmentCaptionResults;

+ (Class)animatedStickerResultsType;
+ (Class)audioFusedVideoEmbeddingResultsType;
+ (id)faceResultKeys;
+ (id)filesystemMovieAnalysisFromLegacyDictionary:(id)arg1;
+ (Class)filesystemMovieApplauseResultsType;
+ (Class)filesystemMovieBabbleResultsType;
+ (Class)filesystemMovieCheeringResultsType;
+ (Class)filesystemMovieClassificationResultsType;
+ (Class)filesystemMovieHumanActionClassificationResultsType;
+ (Class)filesystemMovieLaughterResultsType;
+ (Class)filesystemMovieMusicResultsType;
+ (Class)filesystemMovieVoiceResultsType;
+ (id)imageAnalysisComputeSyncPayloadFromLegacyDictionary:(id)arg1;
+ (id)imageAnalysisFromLegacyDictionary:(id)arg1 assetCloudIdentifier:(id)arg2;
+ (Class)imageBlurResultsType;
+ (Class)imageCaptionResultsType;
+ (Class)imageCompositionResultsType;
+ (Class)imageEmbeddingResultsType;
+ (Class)imageExposureResultsType;
+ (Class)imageFaceResultsType;
+ (Class)imageFeatureResultsType;
+ (Class)imageHumanPoseResultsType;
+ (Class)imageJunkResultsType;
+ (Class)imagePetsFaceResultsType;
+ (Class)imagePetsResultsType;
+ (Class)imageSaliencyResultsType;
+ (Class)imageSceneprintResultsType;
+ (Class)imageShotTypeResultsType;
+ (Class)livePhotoEffectsResultsType;
+ (Class)livePhotoHumanActionClassificationResultsType;
+ (Class)livePhotoKeyFrameResultsType;
+ (Class)livePhotoKeyFrameStillResultsType;
+ (Class)livePhotoRecommendationResultsType;
+ (Class)livePhotoSettlingEffectGatingResultsType;
+ (Class)livePhotoSharpnessResultsType;
+ (Class)movieActivityLevelResultsType;
+ (id)movieAnalysisComputeSyncPayloadFromLegacyDictionary:(id)arg1;
+ (id)movieAnalysisFromLegacyDictionary:(id)arg1 assetCloudIdentifier:(id)arg2;
+ (Class)movieApplauseResultsType;
+ (Class)movieAudioQualityResultsType;
+ (Class)movieBabbleResultsType;
+ (Class)movieCameraMotionResultsType;
+ (Class)movieCheeringResultsType;
+ (Class)movieClassificationResultsType;
+ (Class)movieFaceResultsType;
+ (Class)movieFaceprintResultsType;
+ (Class)movieFeatureResultsType;
+ (Class)movieFineSubjectMotionResultsType;
+ (Class)movieHighlightResultsType;
+ (Class)movieHighlightScoreResultsType;
+ (Class)movieHumanActionClassificationResultsType;
+ (Class)movieHumanActionResultsType;
+ (Class)movieHumanPoseResultsType;
+ (Class)movieInterestingnessResultsType;
+ (Class)movieLaughterResultsType;
+ (Class)movieLoudnessResultsType;
+ (Class)movieMovingObjectResultsType;
+ (Class)movieMusicResultsType;
+ (Class)movieObstructionResultsType;
+ (Class)movieOrientationResultsType;
+ (Class)moviePetsFaceResultsType;
+ (Class)moviePetsResultsType;
+ (Class)moviePreEncodeResultsType;
+ (Class)movieQualityResultsType;
+ (Class)movieSafetyResultsType;
+ (Class)movieSaliencyResultsType;
+ (Class)movieSceneResultsType;
+ (Class)movieSceneprintResultsType;
+ (Class)movieStabilizationResultsType;
+ (Class)movieSubjectMotionResultsType;
+ (Class)movieSubtleMotionResultsType;
+ (Class)movieSummaryResultsType;
+ (Class)movieTorsoResultsType;
+ (Class)movieUtteranceResultsType;
+ (Class)movieVoiceResultsType;
+ (Class)summarizedEmbeddingResultsType;
+ (Class)videoCaptionPreferenceResultsType;
+ (Class)videoCaptionResultsType;
+ (Class)videoEmbeddingResultsType;
+ (Class)videoSegmentCaptionResultsType;

- (void).cxx_destruct;
- (void)addAnimatedStickerResults:(id)arg1;
- (void)addAudioFusedVideoEmbeddingResults:(id)arg1;
- (void)addFilesystemMovieApplauseResults:(id)arg1;
- (void)addFilesystemMovieBabbleResults:(id)arg1;
- (void)addFilesystemMovieCheeringResults:(id)arg1;
- (void)addFilesystemMovieClassificationResults:(id)arg1;
- (void)addFilesystemMovieHumanActionClassificationResults:(id)arg1;
- (void)addFilesystemMovieLaughterResults:(id)arg1;
- (void)addFilesystemMovieMusicResults:(id)arg1;
- (void)addFilesystemMovieVoiceResults:(id)arg1;
- (void)addImageBlurResults:(id)arg1;
- (void)addImageCaptionResults:(id)arg1;
- (void)addImageCompositionResults:(id)arg1;
- (void)addImageEmbeddingResults:(id)arg1;
- (void)addImageExposureResults:(id)arg1;
- (void)addImageFaceResults:(id)arg1;
- (void)addImageFeatureResults:(id)arg1;
- (void)addImageHumanPoseResults:(id)arg1;
- (void)addImageJunkResults:(id)arg1;
- (void)addImagePetsFaceResults:(id)arg1;
- (void)addImagePetsResults:(id)arg1;
- (void)addImageSaliencyResults:(id)arg1;
- (void)addImageSceneprintResults:(id)arg1;
- (void)addImageShotTypeResults:(id)arg1;
- (void)addLivePhotoEffectsResults:(id)arg1;
- (void)addLivePhotoHumanActionClassificationResults:(id)arg1;
- (void)addLivePhotoKeyFrameResults:(id)arg1;
- (void)addLivePhotoKeyFrameStillResults:(id)arg1;
- (void)addLivePhotoRecommendationResults:(id)arg1;
- (void)addLivePhotoSettlingEffectGatingResults:(id)arg1;
- (void)addLivePhotoSharpnessResults:(id)arg1;
- (void)addMovieActivityLevelResults:(id)arg1;
- (void)addMovieApplauseResults:(id)arg1;
- (void)addMovieAudioQualityResults:(id)arg1;
- (void)addMovieBabbleResults:(id)arg1;
- (void)addMovieCameraMotionResults:(id)arg1;
- (void)addMovieCheeringResults:(id)arg1;
- (void)addMovieClassificationResults:(id)arg1;
- (void)addMovieFaceResults:(id)arg1;
- (void)addMovieFaceprintResults:(id)arg1;
- (void)addMovieFeatureResults:(id)arg1;
- (void)addMovieFineSubjectMotionResults:(id)arg1;
- (void)addMovieHighlightResults:(id)arg1;
- (void)addMovieHighlightScoreResults:(id)arg1;
- (void)addMovieHumanActionClassificationResults:(id)arg1;
- (void)addMovieHumanActionResults:(id)arg1;
- (void)addMovieHumanPoseResults:(id)arg1;
- (void)addMovieInterestingnessResults:(id)arg1;
- (void)addMovieLaughterResults:(id)arg1;
- (void)addMovieLoudnessResults:(id)arg1;
- (void)addMovieMovingObjectResults:(id)arg1;
- (void)addMovieMusicResults:(id)arg1;
- (void)addMovieObstructionResults:(id)arg1;
- (void)addMovieOrientationResults:(id)arg1;
- (void)addMoviePetsFaceResults:(id)arg1;
- (void)addMoviePetsResults:(id)arg1;
- (void)addMoviePreEncodeResults:(id)arg1;
- (void)addMovieQualityResults:(id)arg1;
- (void)addMovieSafetyResults:(id)arg1;
- (void)addMovieSaliencyResults:(id)arg1;
- (void)addMovieSceneResults:(id)arg1;
- (void)addMovieSceneprintResults:(id)arg1;
- (void)addMovieStabilizationResults:(id)arg1;
- (void)addMovieSubjectMotionResults:(id)arg1;
- (void)addMovieSubtleMotionResults:(id)arg1;
- (void)addMovieSummaryResults:(id)arg1;
- (void)addMovieTorsoResults:(id)arg1;
- (void)addMovieUtteranceResults:(id)arg1;
- (void)addMovieVoiceResults:(id)arg1;
- (void)addSummarizedEmbeddingResults:(id)arg1;
- (void)addVideoCaptionPreferenceResults:(id)arg1;
- (void)addVideoCaptionResults:(id)arg1;
- (void)addVideoEmbeddingResults:(id)arg1;
- (void)addVideoSegmentCaptionResults:(id)arg1;
- (id)animatedStickerResults;
- (id)animatedStickerResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)animatedStickerResultsCount;
- (id)assetAdjustedFingerprint;
- (id)assetCloudIdentifier;
- (id)assetIdentifier;
- (id)assetMasterFingerprint;
- (double)assetModificationDate;
- (id)audioFusedVideoEmbeddingResults;
- (id)audioFusedVideoEmbeddingResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)audioFusedVideoEmbeddingResultsCount;
- (void)clearAnimatedStickerResults;
- (void)clearAudioFusedVideoEmbeddingResults;
- (void)clearFilesystemMovieApplauseResults;
- (void)clearFilesystemMovieBabbleResults;
- (void)clearFilesystemMovieCheeringResults;
- (void)clearFilesystemMovieClassificationResults;
- (void)clearFilesystemMovieHumanActionClassificationResults;
- (void)clearFilesystemMovieLaughterResults;
- (void)clearFilesystemMovieMusicResults;
- (void)clearFilesystemMovieVoiceResults;
- (void)clearImageBlurResults;
- (void)clearImageCaptionResults;
- (void)clearImageCompositionResults;
- (void)clearImageEmbeddingResults;
- (void)clearImageExposureResults;
- (void)clearImageFaceResults;
- (void)clearImageFeatureResults;
- (void)clearImageHumanPoseResults;
- (void)clearImageJunkResults;
- (void)clearImagePetsFaceResults;
- (void)clearImagePetsResults;
- (void)clearImageSaliencyResults;
- (void)clearImageSceneprintResults;
- (void)clearImageShotTypeResults;
- (void)clearLivePhotoEffectsResults;
- (void)clearLivePhotoHumanActionClassificationResults;
- (void)clearLivePhotoKeyFrameResults;
- (void)clearLivePhotoKeyFrameStillResults;
- (void)clearLivePhotoRecommendationResults;
- (void)clearLivePhotoSettlingEffectGatingResults;
- (void)clearLivePhotoSharpnessResults;
- (void)clearMovieActivityLevelResults;
- (void)clearMovieApplauseResults;
- (void)clearMovieAudioQualityResults;
- (void)clearMovieBabbleResults;
- (void)clearMovieCameraMotionResults;
- (void)clearMovieCheeringResults;
- (void)clearMovieClassificationResults;
- (void)clearMovieFaceResults;
- (void)clearMovieFaceprintResults;
- (void)clearMovieFeatureResults;
- (void)clearMovieFineSubjectMotionResults;
- (void)clearMovieHighlightResults;
- (void)clearMovieHighlightScoreResults;
- (void)clearMovieHumanActionClassificationResults;
- (void)clearMovieHumanActionResults;
- (void)clearMovieHumanPoseResults;
- (void)clearMovieInterestingnessResults;
- (void)clearMovieLaughterResults;
- (void)clearMovieLoudnessResults;
- (void)clearMovieMovingObjectResults;
- (void)clearMovieMusicResults;
- (void)clearMovieObstructionResults;
- (void)clearMovieOrientationResults;
- (void)clearMoviePetsFaceResults;
- (void)clearMoviePetsResults;
- (void)clearMoviePreEncodeResults;
- (void)clearMovieQualityResults;
- (void)clearMovieSafetyResults;
- (void)clearMovieSaliencyResults;
- (void)clearMovieSceneResults;
- (void)clearMovieSceneprintResults;
- (void)clearMovieStabilizationResults;
- (void)clearMovieSubjectMotionResults;
- (void)clearMovieSubtleMotionResults;
- (void)clearMovieSummaryResults;
- (void)clearMovieTorsoResults;
- (void)clearMovieUtteranceResults;
- (void)clearMovieVoiceResults;
- (void)clearSummarizedEmbeddingResults;
- (void)clearVideoCaptionPreferenceResults;
- (void)clearVideoCaptionResults;
- (void)clearVideoEmbeddingResults;
- (void)clearVideoSegmentCaptionResults;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)date;
- (id)description;
- (id)dictionaryRepresentation;
- (id)exportFilesystemAnalysisToLegacyDictionary;
- (bool)exportResultsWithPropertyKey:(id)arg1 toLegacyDictionary:(id)arg2 withKey:(id)arg3;
- (id)exportToLegacyDictionary;
- (id)filesystemMovieApplauseResults;
- (id)filesystemMovieApplauseResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)filesystemMovieApplauseResultsCount;
- (id)filesystemMovieBabbleResults;
- (id)filesystemMovieBabbleResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)filesystemMovieBabbleResultsCount;
- (id)filesystemMovieCheeringResults;
- (id)filesystemMovieCheeringResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)filesystemMovieCheeringResultsCount;
- (id)filesystemMovieClassificationResults;
- (id)filesystemMovieClassificationResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)filesystemMovieClassificationResultsCount;
- (id)filesystemMovieHumanActionClassificationResults;
- (id)filesystemMovieHumanActionClassificationResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)filesystemMovieHumanActionClassificationResultsCount;
- (id)filesystemMovieLaughterResults;
- (id)filesystemMovieLaughterResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)filesystemMovieLaughterResultsCount;
- (id)filesystemMovieMusicResults;
- (id)filesystemMovieMusicResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)filesystemMovieMusicResultsCount;
- (id)filesystemMovieVoiceResults;
- (id)filesystemMovieVoiceResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)filesystemMovieVoiceResultsCount;
- (unsigned int)flags;
- (bool)hasAssetAdjustedFingerprint;
- (bool)hasAssetCloudIdentifier;
- (bool)hasAssetMasterFingerprint;
- (bool)hasQuality;
- (bool)hasStatsFlags;
- (bool)hasTypesWide;
- (unsigned long long)hash;
- (id)imageBlurResults;
- (id)imageBlurResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)imageBlurResultsCount;
- (id)imageCaptionResults;
- (id)imageCaptionResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)imageCaptionResultsCount;
- (id)imageCompositionResults;
- (id)imageCompositionResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)imageCompositionResultsCount;
- (id)imageEmbeddingResults;
- (id)imageEmbeddingResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)imageEmbeddingResultsCount;
- (id)imageExposureResults;
- (id)imageExposureResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)imageExposureResultsCount;
- (id)imageFaceResults;
- (id)imageFaceResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)imageFaceResultsCount;
- (id)imageFeatureResults;
- (id)imageFeatureResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)imageFeatureResultsCount;
- (id)imageHumanPoseResults;
- (id)imageHumanPoseResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)imageHumanPoseResultsCount;
- (id)imageJunkResults;
- (id)imageJunkResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)imageJunkResultsCount;
- (id)imagePetsFaceResults;
- (id)imagePetsFaceResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)imagePetsFaceResultsCount;
- (id)imagePetsResults;
- (id)imagePetsResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)imagePetsResultsCount;
- (id)imageSaliencyResults;
- (id)imageSaliencyResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)imageSaliencyResultsCount;
- (id)imageSceneprintResults;
- (id)imageSceneprintResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)imageSceneprintResultsCount;
- (id)imageShotTypeResults;
- (id)imageShotTypeResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)imageShotTypeResultsCount;
- (bool)isEqual:(id)arg1;
- (id)livePhotoEffectsResults;
- (id)livePhotoEffectsResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)livePhotoEffectsResultsCount;
- (id)livePhotoHumanActionClassificationResults;
- (id)livePhotoHumanActionClassificationResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)livePhotoHumanActionClassificationResultsCount;
- (id)livePhotoKeyFrameResults;
- (id)livePhotoKeyFrameResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)livePhotoKeyFrameResultsCount;
- (id)livePhotoKeyFrameStillResults;
- (id)livePhotoKeyFrameStillResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)livePhotoKeyFrameStillResultsCount;
- (id)livePhotoRecommendationResults;
- (id)livePhotoRecommendationResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)livePhotoRecommendationResultsCount;
- (id)livePhotoSettlingEffectGatingResults;
- (id)livePhotoSettlingEffectGatingResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)livePhotoSettlingEffectGatingResultsCount;
- (id)livePhotoSharpnessResults;
- (id)livePhotoSharpnessResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)livePhotoSharpnessResultsCount;
- (void)mergeFrom:(id)arg1;
- (id)movieActivityLevelResults;
- (id)movieActivityLevelResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieActivityLevelResultsCount;
- (id)movieApplauseResults;
- (id)movieApplauseResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieApplauseResultsCount;
- (id)movieAudioQualityResults;
- (id)movieAudioQualityResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieAudioQualityResultsCount;
- (id)movieBabbleResults;
- (id)movieBabbleResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieBabbleResultsCount;
- (id)movieCameraMotionResults;
- (id)movieCameraMotionResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieCameraMotionResultsCount;
- (id)movieCheeringResults;
- (id)movieCheeringResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieCheeringResultsCount;
- (id)movieClassificationResults;
- (id)movieClassificationResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieClassificationResultsCount;
- (id)movieFaceResults;
- (id)movieFaceResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieFaceResultsCount;
- (id)movieFaceprintResults;
- (id)movieFaceprintResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieFaceprintResultsCount;
- (id)movieFeatureResults;
- (id)movieFeatureResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieFeatureResultsCount;
- (id)movieFineSubjectMotionResults;
- (id)movieFineSubjectMotionResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieFineSubjectMotionResultsCount;
- (id)movieHighlightResults;
- (id)movieHighlightResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieHighlightResultsCount;
- (id)movieHighlightScoreResults;
- (id)movieHighlightScoreResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieHighlightScoreResultsCount;
- (id)movieHumanActionClassificationResults;
- (id)movieHumanActionClassificationResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieHumanActionClassificationResultsCount;
- (id)movieHumanActionResults;
- (id)movieHumanActionResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieHumanActionResultsCount;
- (id)movieHumanPoseResults;
- (id)movieHumanPoseResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieHumanPoseResultsCount;
- (id)movieInterestingnessResults;
- (id)movieInterestingnessResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieInterestingnessResultsCount;
- (id)movieLaughterResults;
- (id)movieLaughterResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieLaughterResultsCount;
- (id)movieLoudnessResults;
- (id)movieLoudnessResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieLoudnessResultsCount;
- (id)movieMovingObjectResults;
- (id)movieMovingObjectResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieMovingObjectResultsCount;
- (id)movieMusicResults;
- (id)movieMusicResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieMusicResultsCount;
- (id)movieObstructionResults;
- (id)movieObstructionResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieObstructionResultsCount;
- (id)movieOrientationResults;
- (id)movieOrientationResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieOrientationResultsCount;
- (id)moviePetsFaceResults;
- (id)moviePetsFaceResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)moviePetsFaceResultsCount;
- (id)moviePetsResults;
- (id)moviePetsResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)moviePetsResultsCount;
- (id)moviePreEncodeResults;
- (id)moviePreEncodeResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)moviePreEncodeResultsCount;
- (id)movieQualityResults;
- (id)movieQualityResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieQualityResultsCount;
- (id)movieSafetyResults;
- (id)movieSafetyResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieSafetyResultsCount;
- (id)movieSaliencyResults;
- (id)movieSaliencyResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieSaliencyResultsCount;
- (id)movieSceneResults;
- (id)movieSceneResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieSceneResultsCount;
- (id)movieSceneprintResults;
- (id)movieSceneprintResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieSceneprintResultsCount;
- (id)movieStabilizationResults;
- (id)movieStabilizationResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieStabilizationResultsCount;
- (id)movieSubjectMotionResults;
- (id)movieSubjectMotionResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieSubjectMotionResultsCount;
- (id)movieSubtleMotionResults;
- (id)movieSubtleMotionResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieSubtleMotionResultsCount;
- (id)movieSummaryResults;
- (id)movieSummaryResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieSummaryResultsCount;
- (id)movieTorsoResults;
- (id)movieTorsoResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieTorsoResultsCount;
- (id)movieUtteranceResults;
- (id)movieUtteranceResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieUtteranceResultsCount;
- (id)movieVoiceResults;
- (id)movieVoiceResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieVoiceResultsCount;
- (double)quality;
- (bool)readFrom:(id)arg1;
- (void)setAnimatedStickerResults:(id)arg1;
- (void)setAssetAdjustedFingerprint:(id)arg1;
- (void)setAssetCloudIdentifier:(id)arg1;
- (void)setAssetIdentifier:(id)arg1;
- (void)setAssetMasterFingerprint:(id)arg1;
- (void)setAssetModificationDate:(double)arg1;
- (bool)setAttributesFromLegacyDictionary:(id)arg1;
- (void)setAudioFusedVideoEmbeddingResults:(id)arg1;
- (void)setDate:(double)arg1;
- (void)setFilesystemMovieApplauseResults:(id)arg1;
- (void)setFilesystemMovieBabbleResults:(id)arg1;
- (void)setFilesystemMovieCheeringResults:(id)arg1;
- (void)setFilesystemMovieClassificationResults:(id)arg1;
- (void)setFilesystemMovieHumanActionClassificationResults:(id)arg1;
- (void)setFilesystemMovieLaughterResults:(id)arg1;
- (void)setFilesystemMovieMusicResults:(id)arg1;
- (void)setFilesystemMovieVoiceResults:(id)arg1;
- (void)setFlags:(unsigned int)arg1;
- (void)setHasQuality:(bool)arg1;
- (void)setHasStatsFlags:(bool)arg1;
- (void)setHasTypesWide:(bool)arg1;
- (bool)setImageAnalysisFromLegacyDictionary:(id)arg1;
- (void)setImageBlurResults:(id)arg1;
- (void)setImageCaptionResults:(id)arg1;
- (void)setImageCompositionResults:(id)arg1;
- (void)setImageEmbeddingResults:(id)arg1;
- (void)setImageExposureResults:(id)arg1;
- (void)setImageFaceResults:(id)arg1;
- (void)setImageFeatureResults:(id)arg1;
- (void)setImageHumanPoseResults:(id)arg1;
- (void)setImageJunkResults:(id)arg1;
- (void)setImagePetsFaceResults:(id)arg1;
- (void)setImagePetsResults:(id)arg1;
- (void)setImageSaliencyResults:(id)arg1;
- (void)setImageSceneprintResults:(id)arg1;
- (void)setImageShotTypeResults:(id)arg1;
- (void)setLivePhotoEffectsResults:(id)arg1;
- (void)setLivePhotoHumanActionClassificationResults:(id)arg1;
- (void)setLivePhotoKeyFrameResults:(id)arg1;
- (void)setLivePhotoKeyFrameStillResults:(id)arg1;
- (void)setLivePhotoRecommendationResults:(id)arg1;
- (void)setLivePhotoSettlingEffectGatingResults:(id)arg1;
- (void)setLivePhotoSharpnessResults:(id)arg1;
- (void)setMovieActivityLevelResults:(id)arg1;
- (bool)setMovieAnalysisFromLegacyDictionary:(id)arg1;
- (void)setMovieApplauseResults:(id)arg1;
- (void)setMovieAudioQualityResults:(id)arg1;
- (void)setMovieBabbleResults:(id)arg1;
- (void)setMovieCameraMotionResults:(id)arg1;
- (void)setMovieCheeringResults:(id)arg1;
- (void)setMovieClassificationResults:(id)arg1;
- (void)setMovieFaceResults:(id)arg1;
- (void)setMovieFaceprintResults:(id)arg1;
- (void)setMovieFeatureResults:(id)arg1;
- (void)setMovieFineSubjectMotionResults:(id)arg1;
- (void)setMovieHighlightResults:(id)arg1;
- (void)setMovieHighlightScoreResults:(id)arg1;
- (void)setMovieHumanActionClassificationResults:(id)arg1;
- (void)setMovieHumanActionResults:(id)arg1;
- (void)setMovieHumanPoseResults:(id)arg1;
- (void)setMovieInterestingnessResults:(id)arg1;
- (void)setMovieLaughterResults:(id)arg1;
- (void)setMovieLoudnessResults:(id)arg1;
- (void)setMovieMovingObjectResults:(id)arg1;
- (void)setMovieMusicResults:(id)arg1;
- (void)setMovieObstructionResults:(id)arg1;
- (void)setMovieOrientationResults:(id)arg1;
- (void)setMoviePetsFaceResults:(id)arg1;
- (void)setMoviePetsResults:(id)arg1;
- (void)setMoviePreEncodeResults:(id)arg1;
- (void)setMovieQualityResults:(id)arg1;
- (void)setMovieSafetyResults:(id)arg1;
- (void)setMovieSaliencyResults:(id)arg1;
- (void)setMovieSceneResults:(id)arg1;
- (void)setMovieSceneprintResults:(id)arg1;
- (void)setMovieStabilizationResults:(id)arg1;
- (void)setMovieSubjectMotionResults:(id)arg1;
- (void)setMovieSubtleMotionResults:(id)arg1;
- (void)setMovieSummaryResults:(id)arg1;
- (void)setMovieTorsoResults:(id)arg1;
- (void)setMovieUtteranceResults:(id)arg1;
- (void)setMovieVoiceResults:(id)arg1;
- (void)setQuality:(double)arg1;
- (bool)setResults:(id)arg1 withClass:(Class)arg2 forPropertyKey:(id)arg3;
- (void)setStatsFlags:(unsigned long long)arg1;
- (void)setSummarizedEmbeddingResults:(id)arg1;
- (void)setTypes:(unsigned int)arg1;
- (void)setTypesWide:(unsigned long long)arg1;
- (void)setVersion:(unsigned int)arg1;
- (void)setVideoCaptionPreferenceResults:(id)arg1;
- (void)setVideoCaptionResults:(id)arg1;
- (void)setVideoEmbeddingResults:(id)arg1;
- (void)setVideoSegmentCaptionResults:(id)arg1;
- (unsigned long long)statsFlags;
- (id)summarizedEmbeddingResults;
- (id)summarizedEmbeddingResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)summarizedEmbeddingResultsCount;
- (unsigned int)types;
- (unsigned long long)typesWide;
- (unsigned int)version;
- (id)videoCaptionPreferenceResults;
- (id)videoCaptionPreferenceResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)videoCaptionPreferenceResultsCount;
- (id)videoCaptionResults;
- (id)videoCaptionResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)videoCaptionResultsCount;
- (id)videoEmbeddingResults;
- (id)videoEmbeddingResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)videoEmbeddingResultsCount;
- (id)videoSegmentCaptionResults;
- (id)videoSegmentCaptionResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)videoSegmentCaptionResultsCount;
- (void)writeTo:(id)arg1;

@end
