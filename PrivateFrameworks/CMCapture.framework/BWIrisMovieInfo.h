/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface BWIrisMovieInfo : NSObject <NSCopying> {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _audioOffset;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _beginTrimMasterPTS;
    long long  _enqueuedHostTime;
    BWStats * _fileCoordinatorToWriterMovingWindowLatencyStats;
    bool  _finalEnqueuedIrisRequest;
    bool  _finalReferenceMovie;
    NSNumber * _irisSequenceAdjusterRecipeIdentifier;
    bool  _isMomentCaptureMovieRecording;
    bool  _isOverlappingRequest;
    bool  _limitStillImageTransformDuringVitalityPlayback;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _masterMovieStartTime;
    NSURL * _masterMovieURL;
    int  _maxSystemPressureLevel;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _momentCaptureMovieRecordingMasterEndTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _movieEndTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _movieEndingVideoPTS;
    NSArray * _movieLevelMetadataForSDOFOriginalMovie;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _movieStartTime;
    bool  _movieStartTimeRequiresCutting;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _movieTrimEndTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _movieTrimStartTime;
    struct CGSize { 
        double width; 
        double height; 
    }  _nonDestructiveCropSize;
    unsigned long long  _numberOfFramesDropped;
    bool  _originalPhotoRecording;
    NSURL * _outputMovieURL;
    NSURL * _outputURLForSDOFOriginalMovie;
    double  _processingTimeInMilliseconds;
    unsigned int  _requestedSDOFVariants;
    FigCaptureSemanticStyle * _semanticStyle;
    FigCaptureMovieFileRecordingSettings * _settings;
    bool  _spatialOverCaptureExpected;
    NSURL * _spatialOverCaptureMasterMovieURL;
    NSURL * _spatialOverCaptureOutputMovieURL;
    NSURL * _spatialOverCaptureTemporaryMovieURL;
    BWStats * _stagingNodeOverallVideoFrameReceptionStats;
    BWStats * _stagingNodeValveActiveVideoFrameReceptionStats;
    double  _stillImageCaptureAbsoluteStartTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _stillImageCaptureHostTime;
    int  _stillImageCaptureLuxLevel;
    BWStillImageCaptureSettings * _stillImageCaptureSettings;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _stillImageCaptureTime;
    bool  _stillImageEncoderKeyFrameEmitted;
    FigCaptureIrisStillImageSettings * _stillImageRequestSettings;
    bool  _stillImageVISKeyFrameTagged;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _stillTimeOffsetToAudioPrerollStartInMilliseconds;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _stillTimeOffsetToAudioPrerollStartTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _stillTimeOffsetToAudioPrerollStopInMilliseconds;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _stillTimeOffsetToAudioPrerollStopTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _stillTimeOffsetToVideoPrerollStartInMilliseconds;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _stillTimeOffsetToVideoPrerollStartTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _stillTimeOffsetToVideoPrerollStopInMilliseconds;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _stillTimeOffsetToVideoPrerollStopTime;
    BWSubjectRelightingCalculatorResult * _subjectRelightingResult;
    float  _targetFrameRate;
    NSURL * _temporaryMovieURL;
    NSURL * _temporaryURLForSDOFOriginalMovie;
    NSDictionary * _transitionVitalityFeatures;
    float  _transitionVitalityScoreV1;
    bool  _transitionVitalityScoreValid;
    BWStats * _videoFrameDurationStats;
    float  _vitalityScore;
    bool  _vitalityScoreValid;
    unsigned int  _vitalityScoringVersion;
}

@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } audioOffset;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } beginTrimMasterPTS;
@property (nonatomic, readonly) bool containsTrims;
@property (nonatomic) long long enqueuedHostTime;
@property (nonatomic, copy) BWStats *fileCoordinatorToWriterMovingWindowLatencyStats;
@property (getter=isFinalEnqueuedIrisRequest, nonatomic) bool finalEnqueuedIrisRequest;
@property (getter=isFinalReferenceMovie, nonatomic) bool finalReferenceMovie;
@property (nonatomic, copy) NSNumber *irisSequenceAdjusterRecipeIdentifier;
@property (nonatomic) bool isOverlappingRequest;
@property (nonatomic) bool limitStillImageTransformDuringVitalityPlayback;
@property (nonatomic, readonly) NSString *livePhotoMetadataStillImageKeyFrameSettingsID;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } masterMovieStartTime;
@property (nonatomic, retain) NSURL *masterMovieURL;
@property (nonatomic) int maxSystemPressureLevel;
@property (getter=isMomentCaptureMovieRecording, nonatomic) bool momentCaptureMovieRecording;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } momentCaptureMovieRecordingMasterEndTime;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } movieEndTime;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } movieEndingVideoPTS;
@property (nonatomic, copy) NSArray *movieLevelMetadataForSDOFOriginalMovie;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } movieStartTime;
@property (nonatomic) bool movieStartTimeRequiresCutting;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } movieTrimEndTime;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } movieTrimStartTime;
@property (nonatomic) struct CGSize { double x1; double x2; } nonDestructiveCropSize;
@property (nonatomic) unsigned long long numberOfFramesDropped;
@property (nonatomic, readonly) int numberOfRequestedVariants;
@property (getter=isOriginalPhotoRecording, nonatomic) bool originalPhotoRecording;
@property (nonatomic, retain) NSURL *outputMovieURL;
@property (nonatomic, copy) NSURL *outputURLForSDOFOriginalMovie;
@property (nonatomic) double processingTimeInMilliseconds;
@property (nonatomic) unsigned int requestedSDOFVariants;
@property (nonatomic, readonly) bool requiresSubjectRelightingCalculation;
@property (nonatomic, readonly) FigCaptureSemanticStyle *semanticStyle;
@property (nonatomic, readonly) FigCaptureMovieFileRecordingSettings *settings;
@property (nonatomic) bool spatialOverCaptureExpected;
@property (nonatomic, retain) NSURL *spatialOverCaptureMasterMovieURL;
@property (nonatomic, retain) NSURL *spatialOverCaptureOutputMovieURL;
@property (nonatomic, retain) NSURL *spatialOverCaptureTemporaryMovieURL;
@property (nonatomic, copy) BWStats *stagingNodeOverallVideoFrameReceptionStats;
@property (nonatomic, copy) BWStats *stagingNodeValveActiveVideoFrameReceptionStats;
@property (nonatomic, readonly) double stillImageCaptureAbsoluteStartTime;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } stillImageCaptureHostTime;
@property (nonatomic) int stillImageCaptureLuxLevel;
@property (nonatomic, readonly) BWStillImageCaptureSettings *stillImageCaptureSettings;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } stillImageCaptureTime;
@property (nonatomic, readonly) int stillImageCaptureType;
@property (nonatomic) bool stillImageEncoderKeyFrameEmitted;
@property (nonatomic, readonly) FigCaptureIrisStillImageSettings *stillImageRequestSettings;
@property (nonatomic) bool stillImageVISKeyFrameTagged;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } stillTimeOffsetToAudioPrerollStartTime;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } stillTimeOffsetToAudioPrerollStopTime;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } stillTimeOffsetToVideoPrerollStartTime;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } stillTimeOffsetToVideoPrerollStopTime;
@property (nonatomic, retain) BWSubjectRelightingCalculatorResult *subjectRelightingResult;
@property (nonatomic) float targetFrameRate;
@property (nonatomic, retain) NSURL *temporaryMovieURL;
@property (nonatomic, copy) NSURL *temporaryURLForSDOFOriginalMovie;
@property (nonatomic, retain) NSDictionary *transitionVitalityFeatures;
@property (nonatomic) float transitionVitalityScoreV1;
@property (getter=isTransitionVitalityScoreValid, nonatomic) bool transitionVitalityScoreValid;
@property (nonatomic, copy) BWStats *videoFrameDurationStats;
@property (nonatomic) float vitalityScore;
@property (getter=isVitalityScoreValid, nonatomic) bool vitalityScoreValid;
@property (nonatomic) unsigned int vitalityScoringVersion;

+ (id)emptyIrisMovieInfoWithFigCaptureMovieFileRecordingSettings:(id)arg1;
+ (id)irisMovieInfoWithFigCaptureMovieFileRecordingSettings:(id)arg1 stillImageCaptureTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 stillImageCaptureHostTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 stillImageCaptureAbsoluteStartTime:(double)arg4 stillImageRequestSettings:(id)arg5 stillImageCaptureSettings:(id)arg6 originalPhotoRecording:(bool)arg7 semanticStyle:(id)arg8;
+ (id)livePhotoMetadataStillImageKeyFrameSettingsIDForSettingsID:(long long)arg1 isOriginalPhotoRecording:(bool)arg2;

- (struct { long long x1; int x2; unsigned int x3; long long x4; })audioOffset;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })beginTrimMasterPTS;
- (bool)containsTrims;
- (id)copyMovieInfosForRequestedSDOFVariants;
- (id)copySpatialOverCaptureVariant;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (long long)enqueuedHostTime;
- (id)fileCoordinatorToWriterMovingWindowLatencyStats;
- (id)irisSequenceAdjusterRecipeIdentifier;
- (bool)isFinalEnqueuedIrisRequest;
- (bool)isFinalReferenceMovie;
- (bool)isMomentCaptureMovieRecording;
- (bool)isOriginalPhotoRecording;
- (bool)isOverlappingRequest;
- (bool)isTransitionVitalityScoreValid;
- (bool)isVitalityScoreValid;
- (bool)limitStillImageTransformDuringVitalityPlayback;
- (id)livePhotoMetadataStillImageKeyFrameSettingsID;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })masterMovieStartTime;
- (id)masterMovieURL;
- (int)maxSystemPressureLevel;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })momentCaptureMovieRecordingMasterEndTime;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })movieEndTime;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })movieEndingVideoPTS;
- (id)movieLevelMetadataForSDOFOriginalMovie;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })movieStartTime;
- (bool)movieStartTimeRequiresCutting;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })movieTrimEndTime;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })movieTrimStartTime;
- (struct CGSize { double x1; double x2; })nonDestructiveCropSize;
- (unsigned long long)numberOfFramesDropped;
- (int)numberOfRequestedVariants;
- (id)outputMovieURL;
- (id)outputURLForSDOFOriginalMovie;
- (double)processingTimeInMilliseconds;
- (unsigned int)requestedSDOFVariants;
- (bool)requiresSubjectRelightingCalculation;
- (id)semanticStyle;
- (void)setAudioOffset:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setBeginTrimMasterPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setEnqueuedHostTime:(long long)arg1;
- (void)setFileCoordinatorToWriterMovingWindowLatencyStats:(id)arg1;
- (void)setFinalEnqueuedIrisRequest:(bool)arg1;
- (void)setFinalReferenceMovie:(bool)arg1;
- (void)setIrisSequenceAdjusterRecipeIdentifier:(id)arg1;
- (void)setIsOverlappingRequest:(bool)arg1;
- (void)setLimitStillImageTransformDuringVitalityPlayback:(bool)arg1;
- (void)setMasterMovieStartTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMasterMovieURL:(id)arg1;
- (void)setMaxSystemPressureLevel:(int)arg1;
- (void)setMomentCaptureMovieRecording:(bool)arg1;
- (void)setMomentCaptureMovieRecordingMasterEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMomentCaptureRecordingStillImageCaptureHostTimeOverride:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 stillImageCaptureTimeOverride:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)setMovieEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMovieEndingVideoPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMovieLevelMetadataForSDOFOriginalMovie:(id)arg1;
- (void)setMovieStartTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMovieStartTimeRequiresCutting:(bool)arg1;
- (void)setMovieTrimEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMovieTrimStartTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setNonDestructiveCropSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setNumberOfFramesDropped:(unsigned long long)arg1;
- (void)setOriginalPhotoRecording:(bool)arg1;
- (void)setOutputMovieURL:(id)arg1;
- (void)setOutputURLForSDOFOriginalMovie:(id)arg1;
- (void)setProcessingTimeInMilliseconds:(double)arg1;
- (void)setRequestedSDOFVariants:(unsigned int)arg1;
- (void)setSpatialOverCaptureExpected:(bool)arg1;
- (void)setSpatialOverCaptureMasterMovieURL:(id)arg1;
- (void)setSpatialOverCaptureOutputMovieURL:(id)arg1;
- (void)setSpatialOverCaptureTemporaryMovieURL:(id)arg1;
- (void)setStagingNodeOverallVideoFrameReceptionStats:(id)arg1;
- (void)setStagingNodeValveActiveVideoFrameReceptionStats:(id)arg1;
- (void)setStillImageCaptureLuxLevel:(int)arg1;
- (void)setStillImageCaptureTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setStillImageEncoderKeyFrameEmitted:(bool)arg1;
- (void)setStillImageVISKeyFrameTagged:(bool)arg1;
- (void)setStillTimeOffsetToAudioPrerollStartTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setStillTimeOffsetToAudioPrerollStopTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setStillTimeOffsetToVideoPrerollStartTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setStillTimeOffsetToVideoPrerollStopTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setSubjectRelightingResult:(id)arg1;
- (void)setTargetFrameRate:(float)arg1;
- (void)setTemporaryMovieURL:(id)arg1;
- (void)setTemporaryURLForSDOFOriginalMovie:(id)arg1;
- (void)setTransitionVitalityFeatures:(id)arg1;
- (void)setTransitionVitalityScoreV1:(float)arg1;
- (void)setTransitionVitalityScoreValid:(bool)arg1;
- (void)setVideoFrameDurationStats:(id)arg1;
- (void)setVitalityScore:(float)arg1;
- (void)setVitalityScoreValid:(bool)arg1;
- (void)setVitalityScoringVersion:(unsigned int)arg1;
- (id)settings;
- (bool)spatialOverCaptureExpected;
- (id)spatialOverCaptureMasterMovieURL;
- (id)spatialOverCaptureOutputMovieURL;
- (id)spatialOverCaptureTemporaryMovieURL;
- (id)stagingNodeOverallVideoFrameReceptionStats;
- (id)stagingNodeValveActiveVideoFrameReceptionStats;
- (double)stillImageCaptureAbsoluteStartTime;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })stillImageCaptureHostTime;
- (int)stillImageCaptureLuxLevel;
- (id)stillImageCaptureSettings;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })stillImageCaptureTime;
- (int)stillImageCaptureType;
- (bool)stillImageEncoderKeyFrameEmitted;
- (id)stillImageRequestSettings;
- (bool)stillImageVISKeyFrameTagged;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })stillTimeOffsetToAudioPrerollStartTime;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })stillTimeOffsetToAudioPrerollStopTime;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })stillTimeOffsetToVideoPrerollStartTime;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })stillTimeOffsetToVideoPrerollStopTime;
- (id)subjectRelightingResult;
- (float)targetFrameRate;
- (id)temporaryMovieURL;
- (id)temporaryURLForSDOFOriginalMovie;
- (id)transitionVitalityFeatures;
- (float)transitionVitalityScoreV1;
- (id)videoFrameDurationStats;
- (float)vitalityScore;
- (unsigned int)vitalityScoringVersion;

@end