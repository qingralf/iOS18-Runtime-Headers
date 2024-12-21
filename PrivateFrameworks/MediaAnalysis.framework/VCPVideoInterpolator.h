/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaAnalysis.framework/MediaAnalysis
 */

@interface VCPVideoInterpolator : VCPVideoAnalyzer {
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
    }  _adjustedTimeRange;
    unsigned long long  _anchorIndex;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _anchorPTS;
    AVAssetReader * _assetReader;
    VCPMovieAssetWriter * _assetWriter;
    AVAssetReader * _auxAssetReader;
    NSMapTable * _auxInputToOutputMap;
    bool  _cancelled;
    NSString * _combinedFilePath;
    struct CF<__CVPixelBufferPool *> { 
        struct __CVPixelBufferPool {} *value_; 
    }  _deltaMapPixelBufferPool;
    AVAssetTrack * _deltaTrack;
    VCPVideoTrackDecoder * _deltaTrackDecoder;
    bool  _enableStyle;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _endAdjustedPTS;
    NSString * _filePath;
    NSArray * _frameInsertionLists;
    FRCFrameInterpolator * _frameInterpolator;
    bool  _hasStyleApplied;
    NSMutableArray * _intraFrameList;
    AVAssetReaderTrackOutput * _livePhotoInfoOutput;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _nextAuxSamplePTS;
    AVAssetTrack * _originalTrack;
    struct opaqueCMSampleBuffer { } * _previousDeltaSample;
    FRCFrame * _previousFrame;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _previousFrameOrigianlPTS;
    struct opaqueCMSampleBuffer { } * _previousMetadata;
    NSDictionary * _previousSmartStyleMetadata;
    FRCFrame * _previousUnstyledFrame;
    bool  _processAborted;
    NSArray * _smartStyleMetadata;
    CMISmartStyleUtilitiesV1 * _smartStyleUtilities;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _startAdjustedPTS;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _stillPTS;
    struct CF<__CVPixelBufferPool *> { 
        struct __CVPixelBufferPool {} *value_; 
    }  _unstyledImagePixelBufferPool;
}

@property (readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } adjustedTimeRange;
@property (nonatomic) bool cancelled;
@property (readonly) bool enableStyle;
@property (readonly) bool hasStyleApplied;
@property (readonly) bool processAborted;

+ (bool)allowDetectSingleDrop;
+ (bool)allowMultipleFormats;
+ (long long)getFRCQualityMode;
+ (bool)isEnabled;
+ (void)sendPreGatedAnalytics;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)addInputMediaType:(id)arg1 toWriter:(id)arg2 forTrack:(id)arg3;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })adjustedTimeRange;
- (int)analyzeFrame:(struct __CVBuffer { }*)arg1 withTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 andDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 flags:(unsigned long long*)arg4;
- (int)appendOutput:(id)arg1 toTrack:(id)arg2 startTimeStamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 endTimeStamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 offset:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg5 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg6;
- (int)appendOutput:(id)arg1 toWriterInput:(id)arg2;
- (int)appendOutput:(id)arg1 toWriterInput:(id)arg2 startTimeStamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 endTimeStamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 offset:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg5 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg6;
- (struct __CVBuffer { }*)calculateDeltaforUnstyledFrame:(struct __CVBuffer { }*)arg1 styledFrame:(struct __CVBuffer { }*)arg2 withCoefficients:(id)arg3;
- (bool)cancelled;
- (int)checkFirstDisplayTimeForTrack:(id)arg1;
- (int)combineVideoSegments;
- (int)combineVideoSegmentsWithAssetWriter;
- (id)createDeltaTrackDecoder:(id)arg1 timerange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg2;
- (id)createStyleInforMetadata:(id)arg1 timerange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg2;
- (void)dealloc;
- (id)deserializeMetadata:(struct opaqueCMSampleBuffer { }*)arg1;
- (bool)enableStyle;
- (id)findDeltaTrack:(id)arg1;
- (int)findIntraFrameList:(id)arg1;
- (id)findLearnedTrack:(id)arg1;
- (id)findLivePhotoInfoOutput:(id)arg1;
- (id)findStyleInfoTrack:(id)arg1;
- (int)finishAnalysisPass:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })getFramePTSAfter:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 forAsset:(id)arg2;
- (struct CGSize { double x1; double x2; })getFrameSize:(id)arg1;
- (bool)hasStyleApplied;
- (id)initWithTimestamps:(id)arg1 andIdentifier:(id)arg2 andTrack:(id)arg3;
- (bool)isIntraFrame:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (bool)processAborted;
- (id)results;
- (struct __CVBuffer { }*)revertStyle:(struct __CVBuffer { }*)arg1 withMetadata:(id)arg2 withDeltaMap:(struct __CVBuffer { }*)arg3;
- (void)setCancelled:(bool)arg1;
- (int)setupAdditionalAuxTrack;
- (int)setupLivePhotoInfoOutput:(id)arg1;
- (int)updateLivePhotoInfoSample:(struct opaqueCMSampleBuffer { }*)arg1 withTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 withMetadata:(id)arg3 isInterpolated:(bool)arg4 updatedSample:(struct opaqueCMSampleBuffer {}**)arg5;

@end