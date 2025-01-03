/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface BWVISProcessorControllerConfiguration : NSObject {
    bool  _applyFrameCropOffset;
    bool  _attachEstimatedMotionVector;
    bool  _attachStabilizedOutputCameraTrajectory;
    bool  _attachStabilizedTrajectoryHomography;
    bool  _blurBorderPixels;
    NSData * _cameraExtrinsicMatrix;
    NSDictionary * _cameraInfoByPortType;
    unsigned int  _cinematicLookAheadFrameCount;
    float  _cinematicLookAheadTime;
    bool  _disableTransformLimitsForPredeterminedTrajectory;
    NSArray * _distortionCompensationEnabledPortTypes;
    NSArray * _distortionCorrectionEnabledPortTypes;
    NSObject<OS_dispatch_semaphore> * _emitSampleBufferSemaphore;
    bool  _enableRollingShutterCorrectionOnly;
    unsigned int  _extendedOutputRowsToFill;
    bool  _frameRateConversionEnabled;
    int  _gpuPriority;
    NSDictionary * _inputPixelBufferAttributes;
    BWFigCaptureISPProcessingSession * _ispProcessingSession;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _livePhotoCleanOutputRect;
    bool  _lowResImageUsedByVideoEncoderEnabled;
    unsigned int  _metalSubmissionAndCompletionQueuePriority;
    float  _minDistanceForBravoParallaxShift;
    int  _motionBlurShimmerMitigationMethod;
    bool  _onlyGenerateTransformsParameters;
    NSDictionary * _outputAttachmentsPixelBufferPools;
    BWPixelBufferPool * _outputDepthPixelBufferPool;
    NSDictionary * _outputPixelBufferAttributes;
    BWPixelBufferPool * _outputPixelBufferPool;
    bool  _p3ToBT2020ConversionEnabled;
    NSDictionary * _sensorIDDict;
    unsigned long long  _smartStyleMemoryPoolId;
    bool  _smartStyleRenderingEnabled;
    bool  _smartStyleReversibilityEnabled;
    int  _smoothingMethod;
    bool  _sphereCorrectionEnabled;
    bool  _sphereVideoEnabled;
    int  _transformPlatform;
    bool  _useCameraGeometry;
    bool  _useISPMotionData;
    NSDictionary * _videoGreenGhostMitigationParameters;
    NSDictionary * _videoSTFParameters;
    bool  _videoStabilizationDisabled;
    int  _videoStabilizationStrength;
    bool  _zoomSmoothingEnabled;
}

@property (nonatomic) bool applyFrameCropOffset;
@property (nonatomic) bool attachEstimatedMotionVector;
@property (nonatomic) bool attachStabilizedOutputCameraTrajectory;
@property (nonatomic) bool attachStabilizedTrajectoryHomography;
@property (nonatomic) bool blurBorderPixels;
@property (nonatomic, retain) NSData *cameraExtrinsicMatrix;
@property (nonatomic, retain) NSDictionary *cameraInfoByPortType;
@property (nonatomic) unsigned int cinematicLookAheadFrameCount;
@property (nonatomic) float cinematicLookAheadTime;
@property (nonatomic) bool disableTransformLimitsForPredeterminedTrajectory;
@property (nonatomic, retain) NSArray *distortionCompensationEnabledPortTypes;
@property (nonatomic, retain) NSArray *distortionCorrectionEnabledPortTypes;
@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *emitSampleBufferSemaphore;
@property (nonatomic) bool enableRollingShutterCorrectionOnly;
@property (nonatomic) unsigned int extendedOutputRowsToFill;
@property (nonatomic) bool frameRateConversionEnabled;
@property (nonatomic) int gpuPriority;
@property (nonatomic, retain) NSDictionary *inputPixelBufferAttributes;
@property (nonatomic, retain) BWFigCaptureISPProcessingSession *ispProcessingSession;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } livePhotoCleanOutputRect;
@property (nonatomic) bool lowResImageUsedByVideoEncoderEnabled;
@property (nonatomic) unsigned int metalSubmissionAndCompletionQueuePriority;
@property (nonatomic) float minDistanceForBravoParallaxShift;
@property (nonatomic) int motionBlurShimmerMitigationMethod;
@property (nonatomic) bool onlyGenerateTransformsParameters;
@property (nonatomic, retain) NSDictionary *outputAttachmentsPixelBufferPools;
@property (nonatomic, retain) BWPixelBufferPool *outputDepthPixelBufferPool;
@property (nonatomic, retain) NSDictionary *outputPixelBufferAttributes;
@property (nonatomic, retain) BWPixelBufferPool *outputPixelBufferPool;
@property (nonatomic) bool p3ToBT2020ConversionEnabled;
@property (nonatomic, retain) NSDictionary *sensorIDDict;
@property (nonatomic) unsigned long long smartStyleMemoryPoolId;
@property (nonatomic) bool smartStyleRenderingEnabled;
@property (nonatomic) bool smartStyleReversibilityEnabled;
@property (nonatomic) int smoothingMethod;
@property (nonatomic) bool sphereCorrectionEnabled;
@property (nonatomic) bool sphereVideoEnabled;
@property (nonatomic) int transformPlatform;
@property (nonatomic) bool useCameraGeometry;
@property (nonatomic) bool useISPMotionData;
@property (nonatomic, retain) NSDictionary *videoGreenGhostMitigationParameters;
@property (nonatomic, retain) NSDictionary *videoSTFParameters;
@property (nonatomic) bool videoStabilizationDisabled;
@property (nonatomic) int videoStabilizationStrength;
@property (nonatomic) bool zoomSmoothingEnabled;

- (bool)applyFrameCropOffset;
- (bool)attachEstimatedMotionVector;
- (bool)attachStabilizedOutputCameraTrajectory;
- (bool)attachStabilizedTrajectoryHomography;
- (bool)blurBorderPixels;
- (id)cameraExtrinsicMatrix;
- (id)cameraInfoByPortType;
- (unsigned int)cinematicLookAheadFrameCount;
- (float)cinematicLookAheadTime;
- (void)dealloc;
- (bool)disableTransformLimitsForPredeterminedTrajectory;
- (id)distortionCompensationEnabledPortTypes;
- (id)distortionCorrectionEnabledPortTypes;
- (id)emitSampleBufferSemaphore;
- (bool)enableRollingShutterCorrectionOnly;
- (unsigned int)extendedOutputRowsToFill;
- (bool)frameRateConversionEnabled;
- (int)gpuPriority;
- (id)inputPixelBufferAttributes;
- (id)ispProcessingSession;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })livePhotoCleanOutputRect;
- (bool)lowResImageUsedByVideoEncoderEnabled;
- (unsigned int)metalSubmissionAndCompletionQueuePriority;
- (float)minDistanceForBravoParallaxShift;
- (int)motionBlurShimmerMitigationMethod;
- (bool)onlyGenerateTransformsParameters;
- (id)outputAttachmentsPixelBufferPools;
- (id)outputDepthPixelBufferPool;
- (id)outputPixelBufferAttributes;
- (id)outputPixelBufferPool;
- (bool)p3ToBT2020ConversionEnabled;
- (id)sensorIDDict;
- (void)setApplyFrameCropOffset:(bool)arg1;
- (void)setAttachEstimatedMotionVector:(bool)arg1;
- (void)setAttachStabilizedOutputCameraTrajectory:(bool)arg1;
- (void)setAttachStabilizedTrajectoryHomography:(bool)arg1;
- (void)setBlurBorderPixels:(bool)arg1;
- (void)setCameraExtrinsicMatrix:(id)arg1;
- (void)setCameraInfoByPortType:(id)arg1;
- (void)setCinematicLookAheadFrameCount:(unsigned int)arg1;
- (void)setCinematicLookAheadTime:(float)arg1;
- (void)setDisableTransformLimitsForPredeterminedTrajectory:(bool)arg1;
- (void)setDistortionCompensationEnabledPortTypes:(id)arg1;
- (void)setDistortionCorrectionEnabledPortTypes:(id)arg1;
- (void)setEmitSampleBufferSemaphore:(id)arg1;
- (void)setEnableRollingShutterCorrectionOnly:(bool)arg1;
- (void)setExtendedOutputRowsToFill:(unsigned int)arg1;
- (void)setFrameRateConversionEnabled:(bool)arg1;
- (void)setGpuPriority:(int)arg1;
- (void)setInputPixelBufferAttributes:(id)arg1;
- (void)setIspProcessingSession:(id)arg1;
- (void)setLivePhotoCleanOutputRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLowResImageUsedByVideoEncoderEnabled:(bool)arg1;
- (void)setMetalSubmissionAndCompletionQueuePriority:(unsigned int)arg1;
- (void)setMinDistanceForBravoParallaxShift:(float)arg1;
- (void)setMotionBlurShimmerMitigationMethod:(int)arg1;
- (void)setOnlyGenerateTransformsParameters:(bool)arg1;
- (void)setOutputAttachmentsPixelBufferPools:(id)arg1;
- (void)setOutputDepthPixelBufferPool:(id)arg1;
- (void)setOutputPixelBufferAttributes:(id)arg1;
- (void)setOutputPixelBufferPool:(id)arg1;
- (void)setP3ToBT2020ConversionEnabled:(bool)arg1;
- (void)setSensorIDDict:(id)arg1;
- (void)setSmartStyleMemoryPoolId:(unsigned long long)arg1;
- (void)setSmartStyleRenderingEnabled:(bool)arg1;
- (void)setSmartStyleReversibilityEnabled:(bool)arg1;
- (void)setSmoothingMethod:(int)arg1;
- (void)setSphereCorrectionEnabled:(bool)arg1;
- (void)setSphereVideoEnabled:(bool)arg1;
- (void)setTransformPlatform:(int)arg1;
- (void)setUseCameraGeometry:(bool)arg1;
- (void)setUseISPMotionData:(bool)arg1;
- (void)setVideoGreenGhostMitigationParameters:(id)arg1;
- (void)setVideoSTFParameters:(id)arg1;
- (void)setVideoStabilizationDisabled:(bool)arg1;
- (void)setVideoStabilizationStrength:(int)arg1;
- (void)setZoomSmoothingEnabled:(bool)arg1;
- (unsigned long long)smartStyleMemoryPoolId;
- (bool)smartStyleRenderingEnabled;
- (bool)smartStyleReversibilityEnabled;
- (int)smoothingMethod;
- (bool)sphereCorrectionEnabled;
- (bool)sphereVideoEnabled;
- (int)transformPlatform;
- (bool)useCameraGeometry;
- (bool)useISPMotionData;
- (id)videoGreenGhostMitigationParameters;
- (id)videoSTFParameters;
- (bool)videoStabilizationDisabled;
- (int)videoStabilizationStrength;
- (bool)zoomSmoothingEnabled;

@end
