/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaAnalysis.framework/MediaAnalysis
 */

@interface VCPVideoCNNAnalyzer : VCPVideoAnalyzer {
    VCPAdaptiveSegmentAnalyzer * _adaptiveSegmentAnalyzer;
    VCPVideoCNNAutoplay * _autoplay;
    VCPVideoCNNBackbone * _backbone;
    VCPVideoCNNCameraMotion * _cameraMotion;
    VCPEmbeddingSummarizationAnalyzer * _embeddingSummarizationAnalyzer;
    bool  _enoughFrames;
    bool  _enoughFramesSettling;
    bool  _enoughFramesTransformer;
    VCPVideoCNNHighlight * _highlight;
    float * _inputData;
    VCPEspressoV2Data * _inputDataBackup;
    VCPEspressoV2Data * _inputDataForTransformer;
    float * _inputDataSettling;
    int  _inputHeight;
    int  _inputHeightMUBB;
    int  _inputWidth;
    int  _inputWidthMUBB;
    float  _minProcessingInterval;
    int  _mubbSampleScale;
    VCPVideoPersonDetector * _personDetector;
    float  _photoOffset;
    bool  _postInference;
    NSMutableArray * _postTasks;
    NSMutableArray * _privateTasks;
    VCPVideoCNNQuality * _quality;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _regionCrop;
    NSString * _resConfig;
    NSMutableArray * _tasks;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _timeEnd;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _timeLastDetection;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _timeLastProcess;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _timeStart;
    VCPTransforms * _transformImage;
    VCPTransforms * _transformImageMUBB;
    int  _validFrames;
    int  _validFramesSettling;
    VCPVideoCaptionAnalyzer * _videoCaptionAnalyzer;
    VCPVideoEmbeddings * _videoEmbeddings;
    VCPVideoEmbeddings * _videoEmbeddingsX3D;
    VCPVideoTransformerBackbone * _videoTransformerBackbone;
}

@property (nonatomic, readonly) bool highlightEnabled;
@property (nonatomic, readonly) float minProcessingInterval;
@property (nonatomic, readonly) bool postInference;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } timeStart;

+ (bool)forcePersonDetection;
+ (bool)isAdaptiveSegmentEnabled;
+ (bool)isMLHighlightEnabled;
+ (bool)isMLSettlingEffectPregatingEnabled;
+ (bool)isMUBackboneEnabled;
+ (bool)isVideoSegmentCaptionEnabled;

- (void).cxx_destruct;
- (int)analyzeFrame:(struct __CVBuffer { }*)arg1 withTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 andDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 flags:(unsigned long long*)arg4;
- (int)configForAspectRatio:(float)arg1;
- (void)copyFrames;
- (int)copyImage:(struct __CVBuffer { }*)arg1 withChannels:(int)arg2 settling:(bool)arg3;
- (int)copyMUBBImage:(struct __CVBuffer { }*)arg1 withChannels:(int)arg2;
- (void)dealloc;
- (int)finishAnalysisPass:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (bool)highlightEnabled;
- (id)initWithTimeOfInteret:(id)arg1 frameRate:(float)arg2 isLivePhoto:(bool)arg3 phFaces:(id)arg4 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg5 withEmbeddings:(id)arg6 requestedAnalyses:(unsigned long long)arg7 photoOffset:(float)arg8;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })isAnalysisResultNeeded:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (int)loadAnalysisResults:(id)arg1 audioResults:(id)arg2;
- (int)loadAnalysisResultsFrom:(id)arg1 actionAnalyzer:(id)arg2 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (int)loadFullAnalysisResults:(id)arg1 actionAnalysisResults:(id)arg2 predictedTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg3 timestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4;
- (float)minProcessingInterval;
- (bool)postInference;
- (id)privateResults;
- (id)results;
- (int)runTasks:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 persons:(id)arg3 regionCrop:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })timeStart;

@end
