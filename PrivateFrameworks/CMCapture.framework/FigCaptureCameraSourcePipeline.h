/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface FigCaptureCameraSourcePipeline : FigCaptureSourcePipeline <BWVISOverscanPredictionDelegate> {
    NSMutableDictionary * _backgroundBlurNodesBySourceDeviceType;
    BWFigVideoCaptureDevice * _captureDevice;
    struct OpaqueFigCaptureSource { } * _captureSource;
    FigCaptureSourceDepthDataFormat * _captureSourceDepthDataFormat;
    FigCaptureSourceVideoFormat * _captureSourceVideoFormat;
    <BWCinematicFramingStatesProvider> * _cinematicFramingCameraStatesProvider;
    NSMutableDictionary * _cinematicFramingNodesBySourceDeviceType;
    BWNodeOutput * _depthOutput;
    int  _depthType;
    BWDeskCamNode * _deskCamNode;
    NSDictionary * _detectedObjectsOutputsBySourceDeviceType;
    int  _devicePosition;
    int  _deviceType;
    BWDockKitNode * _dockKitNode;
    bool  _enableSlaveFrameSynchronizerForZoomPIPOnly;
    NSDictionary * _eyeReliefStatusOutputsBySourceDeviceType;
    bool  _hardwareDepthFilteringEnabled;
    BWMultiStreamCameraSourceNode * _infraredSourceNode;
    int  _maxFrameRateClientOverride;
    BWMemoryPool * _memoryPool;
    unsigned int  _nextPointCloudOutputIndex;
    unsigned int  _nextPreviewOutputIndexBySourceDeviceType;
    unsigned int  _nextVideoCaptureOutputIndexBySourceDeviceType;
    NSDictionary * _numberOfFaceTrackingConnectionConfigurationsBySourceDeviceType;
    bool  _overCapturePercentage;
    NSArray * _pointCloudOutputs;
    bool  _postColorProcessingThumbnailEnabled;
    bool  _powerOptimizedVISOverscanEnabled;
    bool  _preLTMThumbnailEnabled;
    NSArray * _previewFilters;
    NSDictionary * _previewOutputsArrayBySourceDeviceType;
    NSDictionary * _secureDetectedObjectsOutputsBySourceDeviceType;
    NSDictionary * _semanticMasksOutputsBySourceDeviceType;
    BWSlaveFrameSynchronizerNode * _slaveFrameSynchronizerNode;
    NSMutableDictionary * _smartStyleLearningNodesBySourceDeviceType;
    NSMutableDictionary * _smartStyleMetadataSynchronizerNodesBySourceDeviceType;
    NSMutableArray * _sourceDeviceTypesWithLightSourceMaskAndKeypointDescriptorDataEnabledOnVideoCaptureOutputs;
    BWNodeOutput * _sourceFormatReferenceOutput;
    BWMultiStreamCameraSourceNode * _sourceNode;
    NSMutableArray * _sourceNodes;
    bool  _stillImageOutputDerivesFromVideoCaptureOutput;
    int  _stillImageOutputRetainedBufferCountOverride;
    NSDictionary * _stillImageOutputsByPortType;
    NSDictionary * _stillImageSensorRawOutputsByPortType;
    BWMultiStreamCameraSourceNode * _superWideSourceNode;
    NSMutableArray * _synchronizerNodes;
    BWMultiStreamCameraSourceNode * _telephotoSourceNode;
    NSDictionary * _trackedFacesOutputsBySourceDeviceType;
    bool  _trueVideoCaptureEnabled;
    bool  _useCaptureOutputForPreview;
    NSDictionary * _videoCaptureOutputsArrayBySourceDeviceType;
    BWFanOutNode * _videoCaptureSplitterNode;
    bool  _videoHDRImageStatisticsEnabled;
    NSDictionary * _visionDataOutputsBySourceDeviceType;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (void)dealloc;
- (id)description;
- (void)visOverscanPredictor:(id)arg1 allowsReducedOverscan:(bool)arg2;

@end
