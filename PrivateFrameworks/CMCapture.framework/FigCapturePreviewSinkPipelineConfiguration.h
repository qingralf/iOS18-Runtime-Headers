/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface FigCapturePreviewSinkPipelineConfiguration : NSObject {
    bool  _cinematicVideoEnabled;
    NSString * _clientApplicationID;
    struct { 
        unsigned int val[8]; 
    }  _clientAuditToken;
    bool  _clientIsCameraOrDerivative;
    bool  _coreMediaFaceTrackingEnabled;
    bool  _deferredPrepareEnabled;
    FigDepthDataCaptureConnectionConfiguration * _depthDataConnectionConfiguration;
    bool  _depthFromMonocularNetworkEnabled;
    bool  _focusBlurMapForDepthFiltersEnabled;
    bool  _generatesHistogram;
    bool  _ispFastSwitchEnabled;
    int  _maxLossyCompressionLevel;
    FigMetadataObjectCaptureConnectionConfiguration * _metadataObjectConnectionConfiguration;
    bool  _overCaptureEnabled;
    bool  _parallelGraphRebuildEnabled;
    bool  _pocketDetectionEnabled;
    bool  _preallocatePreviewStitcherOutputBufferPool;
    FigVideoCaptureConnectionConfiguration * _previewSmartStyleCoefficientsTimeMachineConnectionConfiguration;
    bool  _previewStabilizationEnabled;
    FigVideoCaptureConnectionConfiguration * _previewTimeMachineConnectionConfiguration;
    bool  _primaryCaptureRectModificationEnabled;
    bool  _rebuildingGraphForTrueVideoTransition;
    bool  _remoteVideoPreview;
    FigVideoCaptureConnectionConfiguration * _sceneClassifierConnectionConfiguration;
    struct { 
        unsigned short major; 
        unsigned short minor; 
        unsigned short patch; 
    }  _sceneClassifierPipelineVersion;
    bool  _smartCameraMotionDetectionEnabled;
    bool  _smartStyleRenderingEnabled;
    int  _smartStyleRenderingMethod;
    int  _sourceColorSpaceProperties;
    bool  _sourceIsBravoDevice;
    bool  _sourcePixelFormatIsFullRange;
    FigVideoCaptureConnectionConfiguration * _stillImageConnectionConfiguration;
    double  _trueVideoCaptureAdditionalZoomFactor;
    bool  _trueVideoCaptureEnabled;
    bool  _videoHDRImageStatisticsEnabled;
    FigVideoCaptureConnectionConfiguration * _videoPreviewSinkConnectionConfiguration;
    double  _videoStabilizationOverscan;
    FigVideoCaptureConnectionConfiguration * _videoThumbnailConnectionConfiguration;
    bool  _vitalityScoringEnabled;
    float  _zoomPIPMinimumUIZoomFactor;
    bool  _zoomPIPSingleStreamModeEnabled;
    float  _zoomPIPSlaveStreamingFrameRate;
}

- (void)dealloc;

@end
