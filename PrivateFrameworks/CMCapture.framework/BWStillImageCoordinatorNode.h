/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface BWStillImageCoordinatorNode : BWNode <BWFigVideoCaptureStreamStillImageCaptureDelegate, BWStillImageProcessingStatusDelegate> {
    bool  _active;
    int  _allocatedShotBufferCapacity;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _bufferTrackingLock;
    BWFigVideoCaptureDevice * _captureDevice;
    int  _captureRequestCount;
    bool  _cinematicFramingWarpingRequired;
    int  _clientExpectedImagesOrErrorsForRequest;
    int  _clientReceivedImagesOrErrorsForRequest;
    <BWCompressedShotBuffer> * _compressedShotBuffer;
    FigCaptureStillImageSettings * _currentRequestedStillImageCaptureSettings;
    BWStillImageCaptureSettings * _currentResolvedStillImageCaptureSettings;
    BWStillImageProcessingSettings * _currentResolvedStillImageProcessingSettings;
    int  _defaultShotBufferCapacity;
    BWDeviceOrientationMonitor * _deviceOrientationMonitor;
    bool  _dynamicShotQualityEnabled;
    int  _extraUncompressedShotBufferCapacityForThermalSystemPressureLevelCritical;
    int  _extraUncompressedShotBufferCapacityForThermalSystemPressureLevelSerious;
    bool  _fastCapturePrioritizationEnabled;
    unsigned int  _firedDelegateCallbackFlags;
    NSArray * _highResStillImageDimensions;
    int  _inUseBufferCount;
    int  _inUseUltraHighResBufferCount;
    int  _inUseZoomBasedBufferCount;
    bool  _isMomentCaptureCapturingBeforeCommitted;
    bool  _isMomentCaptureProcessingBeforeCommitted;
    long long  _lastStillImageCaptureCompleteTime;
    long long  _lastStillImageCaptureStartTime;
    unsigned int  _maxNumberOfBurstCapturesAllowedInFlight;
    int  _minFullQualityShots;
    NSMutableArray * _momentCaptureBuffersByInputIndex;
    long long  _momentCaptureLastCancelledSettingsID;
    long long  _momentCaptureLastComittedSettingsID;
    int  _momentCaptureUncommittedStillImageCaptureError;
    NSMutableArray * _momentCaptureUnfiredCallbacks;
    long long  _momentCaptureUnfiredWillBeginCaptureBeforeResolvingSettingsCallbackSettingsID;
    int  _normalResolutionOverlapCapacityForSoQ;
    int  _numCapturesInShotSequence;
    unsigned int  _numberOfBurstCapturesInFlight;
    int  _numberOfUltraHighResBufferIncludedInShotBuffer;
    int  _numberOfZoomBasedBufferIncludedInShotBuffer;
    NSDictionary * _portTypeToInput;
    NSDictionary * _portTypeToOutput;
    NSDictionary * _portTypeToSensorRawInput;
    NSDictionary * _portTypeToSensorRawOutput;
    int  _prepareRequestCount;
    NSMutableDictionary * _receivedImagesOrErrorsForRequestByPortType;
    bool  _receivedQuadraHighResError;
    NSMutableDictionary * _receivedUltraHighResImagesOrErrorsForRequestByPortType;
    NSMutableArray * _requestQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _requestQueueLock;
    bool  _responsiveShutterEnabled;
    bool  _responsiveShutterEnabledViaAPI;
    bool  _shotBufferEnabled;
    int  _shotBufferWaitFreeBufferCount;
    NSObject<OS_dispatch_group> * _shotBufferWaitGroup;
    bool  _shotPacerEnabled;
    float  _shotPacerMaxFPS;
    FigStateMachine * _stateMachine;
    int  _stillImageCapturePipeliningMode;
    <BWStillImageCaptureStatusDelegate> * _stillImageCaptureStatusDelegate;
    NSObject<OS_dispatch_group> * _stillImageDispatchGroup;
    NSObject<OS_dispatch_queue> * _stillImageDispatchQueue;
    NSObject<OS_dispatch_group> * _stillImageGraphStopDispatchGroup;
    <BWStillImageProcessingSupportProvider> * _stillImageProcessingSupportProvider;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _streamingDisruptionEndPTS;
    float  _timeSinceLastCaptureEnterThreshold;
    float  _timeSinceLastCaptureExitThreshold;
    int  _ultraHighResFrameCountExpansionFactor;
}

@property (nonatomic) bool cinematicFramingWarpingRequired;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <BWStillImageCaptureStatusDelegate> *stillImageCaptureStatusDelegate;
@property (nonatomic) <BWStillImageProcessingSupportProvider> *stillImageProcessingSupportProvider;
@property (readonly) Class superclass;

+ (int)currentAllocatedShotBufferCapacity;
+ (void)initialize;
+ (int)maxShotBufferCapacity;
+ (int)numberOfUltraHighResBufferIncludedInShotBuffer;
+ (int)numberOfZoomBasedBufferIncludedInShotBuffer;
+ (void)setCurrentAllocatedShotBufferCapacity:(int)arg1;
+ (void)setMaxShotBufferCapacity:(int)arg1;
+ (void)setNumberOfUltraHighResBufferIncludedInShotBuffer:(int)arg1;
+ (void)setNumberOfZoomBasedBufferIncludedInShotBuffer:(int)arg1;
+ (struct { int x1; int x2; int x3; int x4; int x5; })worstCaseMaxBracketedCaptureBufferCountForPreparedSettings:(id)arg1 stillImageCaptureSettings:(id)arg2 captureDevice:(id)arg3;

- (void)_configureCurrentCaptureRequestStateForFigCaptureStillImageSettings;
- (int)_enqueueRequestWithSettings:(id)arg1 serviceRequestsIfNecessary:(bool)arg2;
- (id)_initWithCaptureDevice:(id)arg1 inputPortTypes:(id)arg2 sensorRawInputPortTypes:(id)arg3 highResStillImageDimensions:(id)arg4 allStateTransitionsHandler:(id /* block */)arg5;
- (id)_stateMachine;
- (id)_stillImageDispatchQueue;
- (void)_unpackNextRequest;
- (int)beginStillImageMomentCaptureWithSettings:(id)arg1;
- (int)cancelStillImageMomentCaptureWithSettingsID:(long long)arg1;
- (int)captureStillImageNowWithSettings:(id)arg1;
- (void)captureStream:(id)arg1 didCapturePreBracketedEV0ImageWithPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)captureStream:(id)arg1 didCaptureReferenceFrameWithPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 referenceFrameBracketedCaptureSequenceNumber:(id)arg3;
- (void)captureStream:(id)arg1 stillImageCaptureError:(int)arg2;
- (void)captureStreamDidCompleteStillImageCapture:(id)arg1;
- (void)captureStreamWillBeginStillImageCapture:(id)arg1;
- (void)captureStreamWillWaitForTimeMachineToFill:(id)arg1;
- (bool)cinematicFramingWarpingRequired;
- (void)clientReceivedPayloadForSettings:(id)arg1 status:(int)arg2 clientIsMidStillImageGraph:(bool)arg3;
- (int)commitStillImageMomentCaptureWithSettings:(id)arg1;
- (id)compressedShotBuffer;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (bool)fastCapturePrioritizationEnabled;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (id)initWithCaptureDevice:(id)arg1 inputPortTypes:(id)arg2 sensorRawInputPortTypes:(id)arg3 highResStillImageDimensions:(id)arg4;
- (int)initiateStillImageCaptureNowWithSettings:(id)arg1;
- (id)inputForPortType:(id)arg1;
- (unsigned int)maxNumberOfBurstCapturesAllowedInFlight;
- (void)node:(id)arg1 didSelectNewReferenceFrameWithPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 transform:(id)arg3 forSettings:(id)arg4;
- (id)nodeSubType;
- (id)nodeType;
- (id)outputForPortType:(id)arg1;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (int)prepareStillImageCaptureNowWithSettings:(id)arg1;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (bool)responsiveShutterEnabled;
- (id)sensorRawInputForPortType:(id)arg1;
- (id)sensorRawOutputForPortType:(id)arg1;
- (void)setCinematicFramingWarpingRequired:(bool)arg1;
- (void)setCompressedShotBuffer:(id)arg1;
- (void)setFastCapturePrioritizationEnabled:(bool)arg1;
- (void)setMaxNumberOfBurstCapturesAllowedInFlight:(unsigned int)arg1;
- (void)setResponsiveShutterEnabled:(bool)arg1;
- (void)setResponsiveShutterEnabledViaAPI:(bool)arg1;
- (void)setStillImageCapturePipeliningMode:(int)arg1;
- (void)setStillImageCaptureStatusDelegate:(id)arg1;
- (void)setStillImageProcessingSupportProvider:(id)arg1;
- (int)stillImageCapturePipeliningMode;
- (id)stillImageCaptureStatusDelegate;
- (id)stillImageProcessingSupportProvider;
- (void)willStopGraph:(bool)arg1;

@end
