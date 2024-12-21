/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface BWVISNode : BWNode <BWNodeBackPressureSource, BWVISProcessorDelegate> {
    NSData * _backgroundColorCube;
    NSNumber * _cachedLivePhotoKeyFrame;
    NSString * _cachedStillImageKeyFrameSettingsID;
    NSData * _cameraExtrinsicMatrix;
    int  _cinematicLookAheadFrameCount;
    NSObject<OS_dispatch_semaphore> * _emitSampleBufferSemaphore;
    bool  _fillExtendedRowsOfOutputBuffer;
    bool  _firstFrameProcessed;
    bool  _flipHorizontalExcludingIris;
    bool  _flushingProcessor;
    NSData * _foregroundColorCube;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _frameMotionTensorsRingBuffeLock;
    struct BWVISMotionTensors { 
        NSDictionary *entries; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } framePTS; 
    }  _frameMotionTensorsRingBuffer;
    unsigned int  _frameMotionTensorsRingBufferWriteIndex;
    bool  _frameRateConversionEnabled;
    bool  _generatesDroppedSampleMarkerBuffers;
    int  _gpuPriority;
    NSMutableDictionary * _intermediatePixelBufferPools;
    BWStats * _ioSurfaceCompressionRatioStats;
    BWIrisStillImageMovieMetadataCache * _irisStillImageMovieMetadataCache;
    BWFigCaptureISPProcessingSession * _ispProcessingSession;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastEmittedPTS;
    bool  _lightSourceMaskAndKeypointDescriptorDataEnabled;
    BWLimitedGMErrorLogger * _limitedGMErrorLogger;
    bool  _liveFlipHorizontal;
    bool  _lowLightGreenGhostMitigationEnabled;
    bool  _lowResImageUsedByVideoEncoderEnabled;
    struct opaqueCMFormatDescription { } * _lowResImageUsedByVideoEncoderFormatDescription;
    double  _maxFrameRate;
    int  _maxLossyCompressionLevel;
    int  _numberOfBuffersEmitted;
    NSDictionary * _offlineCameraInfoByPortType;
    bool  _onlyGeneratingTransforms;
    int  _outputColorSpaceProperties;
    struct { 
        int width; 
        int height; 
    }  _outputDepthDimensions;
    struct { 
        int width; 
        int height; 
    }  _outputDimensions;
    bool  _overrideFinalCropRect;
    bool  _personSegmentationRenderingEnabled;
    int  _pipelineTraceID;
    int  _pixelBufferCompressionType;
    NSObject<OS_dispatch_semaphore> * _processingSemaphore;
    BWVISProcessorController * _processorController;
    BWVISProcessorControllerConfiguration * _processorControllerConfiguration;
    bool  _smartStyleRenderingEnabled;
    bool  _smartStyleReversibilityEnabled;
    bool  _smartStyleReversibilityUses4x3Spotlights;
    bool  _sphereVideoEnabled;
    int  _stabilizationMethod;
    int  _stabilizationType;
    bool  _stabilizeDepthAttachments;
    bool  _stabilizeForLongPressVideo;
    bool  _stabilizeForSmartStyleReversibility;
    bool  _stabilizeMetadata;
    int  _stereoMode;
    NSArray * _supportedInputPixelFormats;
    NSArray * _supportedOutputPixelFormats;
    unsigned long long  _totalCompressedDataSize;
    unsigned long long  _totalUncompressedDataSize;
    bool  _usingExtendedCVISLivePhotoStabilization;
    bool  _videoGreenGhostMitigationEnabled;
    bool  _videoSTFEnabled;
    float  _videoStabilizationOverscanOverride;
    int  _visExecutionMode;
    BWVideoFormatRequirements * _visOutputFormatRequirements;
    bool  _zoomSmoothingEnabled;
}

@property (readonly) int cinematicLookAheadFrameCount;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *emitSampleBufferSemaphore;
@property bool firstFrameProcessed;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) BWFigCaptureISPProcessingSession *ispProcessingSession;
@property (readonly) Class superclass;

+ (void)initialize;

- (id)cameraExtrinsicMatrix;
- (int)cinematicLookAheadFrameCount;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;
- (void)didCompleteProcessingOfBuffer:(struct opaqueCMSampleBuffer { }*)arg1 withStatus:(int)arg2;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3;
- (id)emitSampleBufferSemaphore;
- (bool)firstFrameProcessed;
- (bool)flipHorizontalExcludingIris;
- (void)flush;
- (bool)frameRateConversionEnabled;
- (bool)generatesDroppedSampleMarkerBuffers;
- (void)handleDroppedSample:(id)arg1 forInput:(id)arg2;
- (id)initWithSensorIDDict:(id)arg1 stabilizationMethod:(int)arg2 stabilizationType:(int)arg3 ispProcessingSession:(id)arg4 maxSupportedFrameRate:(float)arg5 activeMaxFrameRate:(float)arg6 gpuPriority:(int)arg7 metalSubmissionAndCompletionQueuePriority:(unsigned int)arg8 motionAttachmentsSource:(int)arg9 fillExtendedRowsOfOutputBuffer:(bool)arg10 overCaptureEnabled:(bool)arg11 stereoMode:(int)arg12 videoStabilizationOverscanOverride:(float)arg13 videoStabilizationStrength:(int)arg14 zoomSmoothingEnabled:(bool)arg15 applyFrameCropOffset:(bool)arg16 motionMetadataPreloadingEnabled:(bool)arg17 visExecutionMode:(int)arg18 livePhotoCleanOutputRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg19 cameraInfoByPortType:(id)arg20 cvisExtendedLookAheadDuration:(float)arg21 distortionCorrectionEnabledPortTypes:(id)arg22 distortionCompensationEnabledPortTypes:(id)arg23 minDistanceForBravoParallaxShift:(float)arg24 lightSourceMaskAndKeypointDescriptorDataEnabled:(bool)arg25 attachStabilizedOutputCameraTrajectory:(bool)arg26;
- (id)irisStillImageMovieMetadataCache;
- (id)ispProcessingSession;
- (bool)lowResImageUsedByVideoEncoderEnabled;
- (int)maxLossyCompressionLevel;
- (id)nodeSubType;
- (id)nodeType;
- (int)outputColorSpaceProperties;
- (struct { int x1; int x2; })outputDepthDimensions;
- (struct { int x1; int x2; })outputDimensions;
- (bool)personSegmentationRenderingEnabled;
- (int)pipelineTraceID;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (id)processingSemaphore;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)setCameraExtrinsicMatrix:(id)arg1;
- (void)setEmitSampleBufferSemaphore:(id)arg1;
- (void)setFirstFrameProcessed:(bool)arg1;
- (void)setFlipHorizontalExcludingIris:(bool)arg1;
- (void)setFrameRateConversionEnabled:(bool)arg1;
- (void)setGeneratesDroppedSampleMarkerBuffers:(bool)arg1;
- (void)setIrisStillImageMovieMetadataCache:(id)arg1;
- (void)setLowResImageUsedByVideoEncoderEnabled:(bool)arg1;
- (void)setMaxLossyCompressionLevel:(int)arg1;
- (void)setOutputColorSpaceProperties:(int)arg1;
- (void)setOutputDepthDimensions:(struct { int x1; int x2; })arg1;
- (void)setOutputDimensions:(struct { int x1; int x2; })arg1;
- (void)setPersonSegmentationRenderingEnabled:(bool)arg1;
- (void)setPipelineTraceID:(int)arg1;
- (void)setProcessingSemaphore:(id)arg1;
- (void)setSmartStyleRenderingEnabled:(bool)arg1;
- (void)setSmartStyleReversibilityEnabled:(bool)arg1;
- (void)setSphereVideoEnabled:(bool)arg1;
- (void)setStabilizeDepthAttachments:(bool)arg1;
- (void)setVideoGreenGhostMitigationEnabled:(bool)arg1;
- (void)setVideoSTFEnabled:(bool)arg1;
- (bool)smartStyleRenderingEnabled;
- (bool)smartStyleReversibilityEnabled;
- (bool)sphereVideoEnabled;
- (bool)stabilizeDepthAttachments;
- (bool)videoGreenGhostMitigationEnabled;
- (bool)videoSTFEnabled;
- (void)willStartProcessingBuffer:(struct opaqueCMSampleBuffer { }*)arg1 withStatus:(int)arg2;

@end