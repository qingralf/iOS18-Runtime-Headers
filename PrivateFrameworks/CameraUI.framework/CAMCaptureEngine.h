/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMCaptureEngine : NSObject <AVCaptureSessionControlsDelegatePrivate, AVCaptureVideoThumbnailContentsDelegate, CAMCaptureEngineDeviceSystemAction, CAMPanoramaProcessorDelegate> {
    NSString * __accidentalLaunchPrewarmReason;
    double  __accidentalLaunchPrewarmTime;
    double  __accidentalLaunchTimeout;
    bool  __cameraTransitionInProcess;
    CUCaptureController * __captureController;
    CAMMemoizationCache * __captureEngineDeviceCache;
    NSObject<OS_dispatch_queue> * __captureResultsQueue;
    NSObject<OS_dispatch_queue> * __captureServicesQueue;
    AVCaptureSession * __captureSession;
    NSObject<OS_dispatch_queue> * __captureSessionQueue;
    NSMutableSet * __didEmitCaptureIntervalStartedSignpostsForUniqueID;
    NSHashTable * __effectsPreviewSampleBufferDelegates;
    NSObject<OS_dispatch_queue> * __effectsPreviewSampleBufferQueue;
    CIContext * __effectsPreviewSurfaceFilteringContext;
    NSObject<OS_dispatch_queue> * __effectsPreviewSurfaceFilteringQueue;
    long long  __engineOptions;
    NSDate * __lastTapToRadarTime;
    FBSDisplayLayoutMonitor * __layoutMonitor;
    NSObject<OS_dispatch_queue> * __metadataObjectsQueue;
    unsigned long long  __numberOfRecoveryAttempts;
    AVSpatialOverCaptureVideoPreviewLayer * __overCaptureVideoPreviewLayer;
    unsigned int  __panoramaAssertionIdentifier;
    NSObject<OS_dispatch_semaphore> * __panoramaFirstImageQueueUpdateSemaphore;
    NSObject<OS_dispatch_queue> * __panoramaFirstImageQueueUpdateSemaphoreQueue;
    struct _CAImageQueue { } * __panoramaImageQueue;
    CAMPanoramaProcessor * __panoramaProcessor;
    NSObject<OS_dispatch_queue> * __panoramaSampleBufferQueue;
    NSObject<OS_dispatch_queue> * __panoramaSubgraphQueue;
    bool  __performingRecovery;
    CAMPowerController * __powerController;
    NSObject<OS_dispatch_queue> * __recoveryMutexQueue;
    NSURL * __resultsQueueLastCompletedVideoURL;
    double  __resultsQueueLastCompletedVideoZoomFactor;
    NSMutableDictionary * __resultsQueueRegisteredStillImageRequests;
    NSMutableSet * __resultsQueueRegisteredStillImageRequestsDispatchedToFilteringQueue;
    NSMutableDictionary * __resultsQueueRequestsBeingRecorded;
    NSMutableArray * __servicesQueueCaptureServices;
    NSMutableDictionary * __sessionQueueCachedPhotoInitiationSettings;
    NSObject<OS_dispatch_queue> * __signpostMutexQueue;
    AVCaptureVideoPreviewLayer * __videoPreviewLayer;
    NSHashTable * __videoThumbnailContentsDelegates;
    AVCaptureSlider * _apertureSlider;
    NSArray * _apertureSliderValues;
    AVCaptureDevice * _audioCameraDevice;
    AVCaptureDeviceInput * _audioCaptureDeviceInput;
    AVCaptureSmartStyle * _cachedSystemStyleForCreativeStylePicker;
    AVCaptureSystemStyleSlider * _colorBiasSlider;
    AVCaptureSystemStylePicker * _creativeStylePicker;
    AVCaptureDevice * _currentCameraDevice;
    AVCapturePhotoOutput * _currentStillImageOutput;
    AVCaptureVideoDataOutput * _effectsPreviewVideoDataOutput;
    AVCaptureSlider * _emulatedZoomSlider;
    AVCaptureSystemStyleSlider * _intensitySlider;
    bool  _interrupted;
    bool  _managedDevicesLockedForConfiguration;
    AVCaptureMetadataOutput * _metadataOutput;
    CAMCaptureMovieFileOutput * _movieFileOutput;
    CAMPanoramaOutput * _panoramaVideoDataOutput;
    AVCapturePhotoOutput * _stillImageOutput;
    AVCaptureSystemStylePicker * _systemStylePicker;
    AVCaptureSystemStyleSlider * _toneBiasSlider;
    AVCaptureVideoThumbnailOutput * _videoThumbnailOutput;
}

@property (setter=_setAccidentalLaunchPrewarmReason:, nonatomic, retain) NSString *_accidentalLaunchPrewarmReason;
@property (setter=_setAccidentalLaunchPrewarmTime:, nonatomic) double _accidentalLaunchPrewarmTime;
@property (setter=_setAccidentalLaunchTimeout:, nonatomic) double _accidentalLaunchTimeout;
@property (nonatomic) bool _cameraTransitionInProcess;
@property (nonatomic, readonly) CUCaptureController *_captureController;
@property (nonatomic, readonly) CAMMemoizationCache *_captureEngineDeviceCache;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_captureResultsQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_captureServicesQueue;
@property (nonatomic, readonly) AVCaptureSession *_captureSession;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_captureSessionQueue;
@property (nonatomic, readonly) NSMutableSet *_didEmitCaptureIntervalStartedSignpostsForUniqueID;
@property (nonatomic, readonly) NSHashTable *_effectsPreviewSampleBufferDelegates;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_effectsPreviewSampleBufferQueue;
@property (nonatomic, readonly) CIContext *_effectsPreviewSurfaceFilteringContext;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_effectsPreviewSurfaceFilteringQueue;
@property (nonatomic, readonly) long long _engineOptions;
@property (nonatomic, retain) NSDate *_lastTapToRadarTime;
@property (nonatomic, retain) FBSDisplayLayoutMonitor *_layoutMonitor;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_metadataObjectsQueue;
@property (setter=_setNumberOfRecoveryAttempts:, nonatomic) unsigned long long _numberOfRecoveryAttempts;
@property (nonatomic, readonly) AVSpatialOverCaptureVideoPreviewLayer *_overCaptureVideoPreviewLayer;
@property (setter=_setPanoramaAssertionIdentifier:, nonatomic) unsigned int _panoramaAssertionIdentifier;
@property (setter=_setPanoramaFirstImageQueueUpdateSemaphore:, nonatomic, retain) NSObject<OS_dispatch_semaphore> *_panoramaFirstImageQueueUpdateSemaphore;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_panoramaFirstImageQueueUpdateSemaphoreQueue;
@property (setter=_setPanoramaImageQueue:, nonatomic) struct _CAImageQueue { }*_panoramaImageQueue;
@property (setter=_setPanoramaProcessor:, nonatomic, retain) CAMPanoramaProcessor *_panoramaProcessor;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_panoramaSampleBufferQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_panoramaSubgraphQueue;
@property (getter=_isPerformingRecovery, setter=_setPerformingRecovery:, nonatomic) bool _performingRecovery;
@property (nonatomic, readonly) CAMPowerController *_powerController;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_recoveryMutexQueue;
@property (setter=_setResultsQueueLastCompletedVideoURL:, nonatomic, retain) NSURL *_resultsQueueLastCompletedVideoURL;
@property (setter=_setResultsQueueLastCompletedVideoZoomFactor:, nonatomic) double _resultsQueueLastCompletedVideoZoomFactor;
@property (nonatomic, readonly) NSMutableDictionary *_resultsQueueRegisteredStillImageRequests;
@property (nonatomic, readonly) NSMutableSet *_resultsQueueRegisteredStillImageRequestsDispatchedToFilteringQueue;
@property (nonatomic, readonly) NSMutableDictionary *_resultsQueueRequestsBeingRecorded;
@property (nonatomic, readonly) NSMutableArray *_servicesQueueCaptureServices;
@property (nonatomic, readonly) NSMutableDictionary *_sessionQueueCachedPhotoInitiationSettings;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_signpostMutexQueue;
@property (nonatomic, readonly) AVCaptureVideoPreviewLayer *_videoPreviewLayer;
@property (nonatomic, readonly) NSHashTable *_videoThumbnailContentsDelegates;
@property (nonatomic, retain) AVCaptureDevice *currentCameraDevice;
@property (nonatomic, retain) AVCapturePhotoOutput *currentStillImageOutput;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isInterrupted, setter=_setInterrupted:, nonatomic) bool interrupted;
@property (getter=areManagedDevicesLockedForConfiguration, nonatomic) bool managedDevicesLockedForConfiguration;
@property (readonly) Class superclass;
@property (nonatomic, readonly) AVCaptureVideoPreviewLayer *videoPreviewLayer;

+ (id)_cacheKeyForDeviceType:(id)arg1 position:(long long)arg2;
+ (void)preheatCaptureResources;

- (void).cxx_destruct;
- (id)_TTRKeywordIDsFromCaptureRequest:(id)arg1;
- (id)_accidentalLaunchPrewarmReason;
- (double)_accidentalLaunchPrewarmTime;
- (double)_accidentalLaunchTimeout;
- (id)_accumulatedUserInfoFromCommand:(id)arg1;
- (void)_beginSessionConfigurationIfRequiredByCommand:(id)arg1 withContext:(id)arg2 logReason:(out id*)arg3 minimumExecutionTime:(out double*)arg4;
- (bool)_cameraTransitionInProcess;
- (void)_cancelDelayedSessionNonstartRecovery;
- (id)_captureController;
- (id)_captureEngineDeviceCache;
- (id)_captureEngineDeviceForDeviceType:(id)arg1 position:(long long)arg2;
- (void)_captureOutput:(id)arg1 didFinishRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 forVideoCaptureRequest:(id)arg4 videoZoomFactor:(double)arg5 error:(id)arg6;
- (id)_captureResultsQueue;
- (id)_captureServicesQueue;
- (id)_captureSession;
- (id)_captureSessionQueue;
- (void)_checkCallbacksForUniqueID:(long long)arg1 afterDelay:(double)arg2 startTime:(double)arg3;
- (void)_commitSessionConfigurationIfNecessaryWithLogReason:(id)arg1;
- (id)_coordinationInfoForCTMVideoRequest:(id)arg1 videoOutputURL:(id)arg2 resolvedMomentCaptureMovieSettings:(id)arg3;
- (id)_coordinationInfoForRequest:(id)arg1 photo:(id)arg2;
- (id)_coordinationInfoForRequest:(id)arg1 resolvedSettings:(id)arg2 videoComplementURL:(id)arg3 isFiltered:(bool)arg4;
- (struct __CVBuffer { }*)_createOutputPixelBufferWithSize:(struct CGSize { double x1; double x2; })arg1 matchingInputPixelBuffer:(struct __CVBuffer { }*)arg2;
- (id)_currentNotificationCenter;
- (double)_delayForRecoveryAttempt:(unsigned long long)arg1;
- (id)_didEmitCaptureIntervalStartedSignpostsForUniqueID;
- (void)_didFinishStillImageCaptureForUniqueID:(long long)arg1 error:(id)arg2;
- (id)_effectsPreviewSampleBufferDelegates;
- (id)_effectsPreviewSampleBufferQueue;
- (id)_effectsPreviewSurfaceFilteringContext;
- (id)_effectsPreviewSurfaceFilteringQueue;
- (long long)_engineOptions;
- (void)_ensureApertureSliderForGraphConfiguration:(id)arg1;
- (void)_ensureEmulatedZoomSliderForGraphConfiguration:(id)arg1;
- (void)_enumerateCaptureServicesUsingBlock:(id /* block */)arg1;
- (void)_enumerateCaptureServicesUsingBlock:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)_executeCommand:(id)arg1 withContext:(id)arg2;
- (id)_expectedResultSpecifiersForResolvedMomentCaptureMovieSettings:(id)arg1;
- (id)_expectedResultSpecifiersForResolvedPhotoSettings:(id)arg1;
- (void)_handleApplicationDidEnterBackground:(id)arg1;
- (void)_handleApplicationWillEnterForeground:(id)arg1;
- (void)_handleCaptureOutputDidFinishCapturingPhoto:(id)arg1 deferredPhotoProxy:(id)arg2 error:(id)arg3;
- (void)_handleFailedSessionRecoveryAttemptAfterDelay:(bool)arg1;
- (void)_handleSessionDidStartRunning:(id)arg1;
- (void)_handleSessionDidStopRunning:(id)arg1;
- (void)_handleSessionInterruption:(id)arg1;
- (void)_handleSessionInterruptionEnded:(id)arg1;
- (void)_handleSessionRuntimeError:(id)arg1;
- (void)_handleSessionWasPrewarmed:(id)arg1;
- (bool)_isPerformingRecovery;
- (bool)_isSessionModificationRequiredByCommand:(id)arg1 logReason:(out id*)arg2 minimumExecutionTime:(out double*)arg3;
- (id)_lastTapToRadarTime;
- (id)_layoutMonitor;
- (bool)_lockAllEngineManagedDevices;
- (bool)_lockManagedCapturedDevice:(id)arg1;
- (id)_metadataObjectsQueue;
- (struct __CVBuffer { }*)_newFilteredPixelBufferFromPixelBuffer:(struct __CVBuffer { }*)arg1 metadata:(id)arg2 filters:(id)arg3;
- (long long)_notificationForError:(struct __CFString { }*)arg1;
- (void)_notifyServicesOfPanoramaConfigurationChangeWithImageQueue:(struct _CAImageQueue { }*)arg1 direction:(long long)arg2;
- (unsigned long long)_numberOfRecoveryAttempts;
- (id)_overCaptureVideoPreviewLayer;
- (unsigned int)_panoramaAssertionIdentifier;
- (id)_panoramaFirstImageQueueUpdateSemaphore;
- (id)_panoramaFirstImageQueueUpdateSemaphoreQueue;
- (struct _CAImageQueue { }*)_panoramaImageQueue;
- (id)_panoramaProcessor;
- (id)_panoramaSampleBufferQueue;
- (void)_panoramaSampleBufferQueue_stopPanoramaCaptureIfNecessaryInterrupted:(bool)arg1;
- (id)_panoramaSubgraphQueue;
- (void)_performSessionNonstartRecoveryIfNeeded;
- (void)_performSessionRuntimeRecovery:(id)arg1;
- (id)_photoOutputFromSession:(id)arg1;
- (id)_powerController;
- (struct { long long x1; long long x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; long long x4; })_previewFilterSetForRequest:(id)arg1 photo:(id)arg2;
- (struct { long long x1; long long x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; long long x4; })_previewFilterSetForRequest:(id)arg1 previewSize:(struct CGSize { double x1; double x2; })arg2;
- (id)_previewFiltersForFilterSet:(struct { long long x1; long long x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; long long x4; })arg1;
- (void)_recoverFromSessionRuntimeError;
- (id)_recoveryMutexQueue;
- (void)_resetPerformingRecoveryState;
- (id)_resultsQueueLastCompletedVideoURL;
- (double)_resultsQueueLastCompletedVideoZoomFactor;
- (id)_resultsQueueRegisteredStillImageRequests;
- (id)_resultsQueueRegisteredStillImageRequestsDispatchedToFilteringQueue;
- (id)_resultsQueueRequestsBeingRecorded;
- (void)_resultsQueue_logReceivedCallbacksForID:(long long)arg1 withIntroString:(id)arg2;
- (void)_resultsQueue_performPostprocessingForPreviewBuffer:(struct __CVBuffer { }*)arg1 metadata:(id)arg2 filters:(struct { long long x1; long long x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; long long x4; })arg3 stillImageCaptureRequestKey:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)_scheduleDelayedRecoveryCheckIfNecessary;
- (void)_scheduleDelayedSessionNonstartRecovery;
- (id)_servicesQueueCaptureServices;
- (id)_sessionQueueCachedPhotoInitiationSettings;
- (void)_sessionQueuePanoramaSetup;
- (void)_sessionQueuePanoramaTeardown;
- (void)_sessionQueue_startWithRetryCount:(unsigned long long)arg1 retryInterval:(double)arg2 logReason:(id)arg3 completion:(id /* block */)arg4;
- (void)_setAccidentalLaunchPrewarmReason:(id)arg1;
- (void)_setAccidentalLaunchPrewarmTime:(double)arg1;
- (void)_setAccidentalLaunchTimeout:(double)arg1;
- (void)_setInterrupted:(bool)arg1;
- (void)_setNumberOfRecoveryAttempts:(unsigned long long)arg1;
- (void)_setPanoramaAssertionIdentifier:(unsigned int)arg1;
- (void)_setPanoramaFirstImageQueueUpdateSemaphore:(id)arg1;
- (void)_setPanoramaImageQueue:(struct _CAImageQueue { }*)arg1;
- (void)_setPanoramaProcessor:(id)arg1;
- (void)_setPerformingRecovery:(bool)arg1;
- (void)_setResultsQueueLastCompletedVideoURL:(id)arg1;
- (void)_setResultsQueueLastCompletedVideoZoomFactor:(double)arg1;
- (bool)_shouldStartSessionOnConfigurationChanges;
- (void)_showAccidentalLaunchNotificationIfNecessary;
- (id)_signpostMutexQueue;
- (void)_subgraphQueueCreatePanoramaImageQueueIfNecessary;
- (void)_subgraphQueueCreatePanoramaProcessorIfNecessaryWithEncodingBehavior:(long long)arg1;
- (void)_subgraphQueueHandlePanoramaErrorNotification:(struct __CFString { }*)arg1;
- (void)_subgraphQueueHandlePanoramaStatusNotification:(struct __CFString { }*)arg1;
- (void)_subgraphQueueHandlePanoramaWarningNotification:(struct __CFString { }*)arg1;
- (void)_unlockAllEngineManagedDevices;
- (void)_unlockManagedCaptureDevice:(id)arg1;
- (void)_updateContext:(id)arg1;
- (void)_updateCurrentlyConfiguredObjects;
- (void)_updateEffectsSubgraph;
- (bool)_updatePanoramaSubgraphForEnteringBackground:(bool)arg1;
- (void)_updateVideoThumbnailSubgraph;
- (void)_validateSessionRecovery;
- (id)_validateVideoAtURL:(id)arg1 forCaptureRequest:(id)arg2 captureID:(long long)arg3 captureError:(id)arg4 isVideoComplement:(bool)arg5 stillImageDisplayTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg6 reportedDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg7 outActualDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg8 outVideoRecordingStoppedReason:(long long*)arg9 outSlowWriterFrameDrops:(bool*)arg10;
- (id)_videoDeviceInputFromSession:(id)arg1;
- (id)_videoPreviewLayer;
- (id)_videoThumbnailContentsDelegates;
- (id)apertureSlider;
- (bool)areManagedDevicesLockedForConfiguration;
- (id)audioCaptureDevice;
- (id)audioCaptureDeviceInput;
- (id)backCameraDevice;
- (id)backDualCameraDevice;
- (id)backSuperWideCameraDevice;
- (id)backTelephotoCameraDevice;
- (id)backTripleCameraDevice;
- (id)backWideDualCameraDevice;
- (void)cacheMomentCaptureSettings:(id)arg1 forIdentifier:(id)arg2;
- (id)cachedMomentCaptureSettingsForIdentifier:(id)arg1;
- (void)cancelAutoResumeAfterDate:(id)arg1;
- (void)captureEngineDevice:(id)arg1 didChangeLensSelectorZoomFactor:(float)arg2;
- (void)captureEngineDevice:(id)arg1 didChangeSystemExposureTargetBias:(float)arg2;
- (void)captureOutput:(id)arg1 didBeginMovieCaptureForResolvedSettings:(id)arg2;
- (void)captureOutput:(id)arg1 didCapturePhotoForResolvedSettings:(id)arg2;
- (void)captureOutput:(id)arg1 didDropSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 fromConnection:(id)arg3;
- (void)captureOutput:(id)arg1 didFinishCaptureForResolvedSettings:(id)arg2 error:(id)arg3;
- (void)captureOutput:(id)arg1 didFinishCapturingDeferredPhotoProxy:(id)arg2 error:(id)arg3;
- (void)captureOutput:(id)arg1 didFinishMovieCaptureForResolvedSettings:(id)arg2 error:(id)arg3;
- (void)captureOutput:(id)arg1 didFinishProcessingLivePhotoToMovieFileAtURL:(id)arg2 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 photoDisplayTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 metadataIdentifiers:(id)arg5 resolvedSettings:(id)arg6 error:(id)arg7;
- (void)captureOutput:(id)arg1 didFinishProcessingLivePhotoToMovieFileAtURL:(id)arg2 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 photoDisplayTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 resolvedSettings:(id)arg5 error:(id)arg6;
- (void)captureOutput:(id)arg1 didFinishProcessingPhoto:(id)arg2 error:(id)arg3;
- (void)captureOutput:(id)arg1 didFinishRecordingLivePhotoMovieForEventualFileAtURL:(id)arg2 resolvedSettings:(id)arg3;
- (void)captureOutput:(id)arg1 didFinishRecordingMovie:(id)arg2;
- (void)captureOutput:(id)arg1 didFinishRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 error:(id)arg4;
- (void)captureOutput:(id)arg1 didFinishWritingMovie:(id)arg2 error:(id)arg3;
- (void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 forMetadataObjectTypes:(id)arg3 fromConnection:(id)arg4;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 fromConnection:(id)arg3;
- (void)captureOutput:(id)arg1 didResumeRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3;
- (void)captureOutput:(id)arg1 didStartRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3;
- (void)captureOutput:(id)arg1 readyForResponsiveRequestAfterResolvedSettings:(id)arg2;
- (void)captureOutput:(id)arg1 willBeginCaptureBeforeResolvingSettingsForUniqueID:(long long)arg2;
- (void)captureOutput:(id)arg1 willBeginCaptureForResolvedSettings:(id)arg2;
- (void)captureOutput:(id)arg1 willCapturePhotoForResolvedSettings:(id)arg2;
- (void)changePanoramaEncodingBehaviorIfNeeded:(long long)arg1;
- (void)changeToPanoramaDirection:(long long)arg1;
- (void)clearCachedMomentCaptureSettingsForIdentifier:(id)arg1;
- (id)colorBiasSlider;
- (bool)controlsSupported;
- (id)creativeStylePicker;
- (id)currentCameraDevice;
- (void)currentInflightCapturesStringWithCompletionHandler:(id /* block */)arg1;
- (id)currentStillImageOutput;
- (void)dealloc;
- (id)effectsPreviewVideoDataOutput;
- (id)emulatedZoomSlider;
- (void)enqueueCommand:(id)arg1;
- (void)enqueueCommands:(id)arg1;
- (void)ensureControlsForGraphConfiguration:(id)arg1;
- (id)frontCameraDevice;
- (id)frontPearlCameraDevice;
- (id)frontSuperWideCameraDevice;
- (id)initWithPowerController:(id)arg1 captureController:(id)arg2 options:(long long)arg3;
- (id)intensitySlider;
- (bool)isInterrupted;
- (id)metadataOutput;
- (id)movieFileOutput;
- (id)overCaptureVideoPreviewLayer;
- (void)panoramaProcessor:(id)arg1 didProcessSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 withStatus:(int)arg3 forRequest:(id)arg4;
- (id)panoramaVideoDataOutput;
- (id)prewarmedAudioDeviceInput:(id)arg1 device:(id)arg2;
- (id)prewarmedCaptureSession;
- (id)prewarmedVideoDeviceInput:(id)arg1 position:(long long)arg2 device:(id)arg3;
- (void)registerCaptureService:(id)arg1;
- (void)registerEffectsPreviewSampleBufferDelegate:(id)arg1;
- (void)registerStillImageCaptureRequest:(id)arg1 withSettings:(id)arg2;
- (void)registerVideoCaptureRequest:(id)arg1;
- (void)registerVideoEndZoomFactor:(double)arg1;
- (void)registerVideoThumbnailContentsDelegate:(id)arg1;
- (void)session:(id)arg1 controlsDidChangeAutoFocusLocked:(bool)arg2;
- (void)session:(id)arg1 didChangeActiveControl:(id)arg2;
- (void)sessionControlsDidBecomeActive:(id)arg1;
- (void)sessionControlsDidBecomeInactive:(id)arg1;
- (void)sessionControlsWillEnterFullscreenAppearance:(id)arg1;
- (void)sessionControlsWillExitFullscreenAppearance:(id)arg1;
- (void)setCurrentCameraDevice:(id)arg1;
- (void)setCurrentStillImageOutput:(id)arg1;
- (void)setManagedDevicesLockedForConfiguration:(bool)arg1;
- (void)set_cameraTransitionInProcess:(bool)arg1;
- (void)set_lastTapToRadarTime:(id)arg1;
- (void)set_layoutMonitor:(id)arg1;
- (void)setupLayoutMonitor;
- (void)startPanoramaCaptureWithRequest:(id)arg1;
- (void)startWithRetryCount:(unsigned long long)arg1 retryInterval:(double)arg2 logReason:(id)arg3 completion:(id /* block */)arg4;
- (id)stillImageOutput;
- (void)stopMonitoringForAccidentalLaunch;
- (void)stopPanoramaCaptureInterrupted:(bool)arg1;
- (void)stopRecording;
- (void)stopWithCompletion:(id /* block */)arg1;
- (id)stylePickerIncludingSystemStyles:(bool)arg1 resolvedSystemStyle:(id)arg2 creativeStyles:(bool)arg3;
- (id)systemPreferredCameraDevice;
- (id)systemStylePicker;
- (id)toneBiasSlider;
- (void)unregisterCaptureService:(id)arg1;
- (void)unregisterEffectsPreviewSampleBufferDelegate:(id)arg1;
- (void)unregisterVideoThumbnailContentsDelegate:(id)arg1;
- (id)videoPreviewLayer;
- (id)videoThumbnailOutput;
- (void)videoThumbnailOutput:(id)arg1 willBeginRenderingThumbnailsWithContents:(id)arg2;
- (void)videoThumbnailOutputWillEndRenderingThumbnails:(id)arg1;

@end
