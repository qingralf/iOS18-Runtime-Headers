/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMContinuityCaptureCore.framework/CMContinuityCaptureCore
 */

@interface CMContinuityCaptureVideoDevice : CMContinuityCaptureDeviceBase <AVCStreamOutputDelegate, AVCVideoStreamDelegate> {
    NSString * _avcStreamCallID;
    AVCStreamOutput * _avcStreamOutput;
    bool  _avcStreamOutputActive;
    AVCVideoStream * _avcVideoStream;
    NSObject<OS_dispatch_source> * _blackFrameDispatchTimer;
    struct opaqueCMSampleBuffer { } * _blackFrameSampleBuffer;
    NSObject<OS_dispatch_source> * _blurredFrameDispatchTimer;
    bool  _blurredFrameTimerActive;
    struct opaqueCMSampleBuffer { } * _blurredSampleBuffer;
    bool  _canIssueStateMismatchEvent;
    bool  _centerStageForcefullySwitchedToSuperWide;
    NSMutableArray * _centerStageStateRestorationDataArray;
    CMContinuityCaptureCMIOVideoDevice * _cmioCaptureDevice;
    CMContinuityCaptureVideoDevice * _companionDevice;
    unsigned int  _failedBufferCountDueToMismatchState;
    bool  _lastBufferNetworkTimeClockSynchronized;
    struct opaqueCMSampleBuffer { } * _lastDispatchedSampleBuffer;
    bool  _manualFramingEnabled;
    unsigned long long  _numberOfFramesDispatched;
    NSMutableArray * _pendingReactionRequests;
    NSObject<OS_dispatch_group> * _stillImageCaptureGroup;
    NSMutableArray * _stillImageRequestsQueue;
    id /* block */  _stopCompletionBlock;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _streamStartsTime;
}

@property CMContinuityCaptureVideoDevice *companionDevice;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) bool isCenterStageForceEnableSupported;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct opaqueCMSampleBuffer { }*)_createStillImageDataBufferFromRequest:(id)arg1 timestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)_didCaptureStillImage:(id)arg1 entity:(long long)arg2;
- (void)_observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)companionDevice;
- (void)completeImageCaptureRequest:(id)arg1;
- (id)controls;
- (id)createAVCVideoStream;
- (struct opaqueCMSampleBuffer { }*)createBlackSampleBuffer;
- (struct opaqueCMSampleBuffer { }*)createBlurredSampleBuffer;
- (void)dealloc;
- (id)debugInfo;
- (id)deviceID;
- (void)didCaptureStillImage:(id)arg1 entity:(long long)arg2;
- (void)dispatchFrame:(struct opaqueCMSampleBuffer { }*)arg1 entity:(long long)arg2 completion:(id /* block */)arg3;
- (void)forceDeviceRemoval;
- (id)initWithCapabilities:(id)arg1 compositeDelegate:(id)arg2;
- (bool)isCenterStageForceEnableSupported;
- (id)newVideoStreamCurrentConfiguration;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)postAVCStreamInterruption;
- (void)postActionCompletionForEventName:(id)arg1 eventData:(id)arg2 error:(id)arg3;
- (void)postActionOfType:(unsigned long long)arg1 forEvent:(id)arg2 option:(unsigned long long)arg3;
- (void)postEvent:(id)arg1 entity:(long long)arg2 data:(id)arg3;
- (void)recordClientsAffectedByForceCenterStageEnablement;
- (void)resetTransportDevice:(id)arg1;
- (void)restartSendingInvalidFramesIfApplicable;
- (void)restoreAffectedClientsCenterStageState;
- (void)scheduleDeviceBusyNotification:(bool)arg1;
- (void)scheduleResumeUserNotification:(bool)arg1;
- (void)setCompanionDevice:(id)arg1;
- (void)setValueForControl:(id)arg1 completion:(id /* block */)arg2;
- (bool)startAVConferenceStack:(unsigned long long)arg1;
- (void)startSendingInvalidFrames;
- (void)stateMachineEnqueueReactionEffect;
- (void)stateMachineImageCapture;
- (void)stateMachineStartSendingBlurredFrames;
- (void)stateMachineStopSendingBlurredFrames;
- (bool)stopAVConferenceStack;
- (void)stopCaptureStack:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)stopSendingInvalidFrames;
- (void)stream:(id)arg1 didStart:(bool)arg2 error:(id)arg3;
- (void)streamDidRTCPTimeOut:(id)arg1;
- (void)streamDidRTPTimeOut:(id)arg1;
- (void)streamDidServerDie:(id)arg1;
- (void)streamDidStop:(id)arg1;
- (void)streamOutput:(id)arg1 didReceiveSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2;
- (void)streamOutputDidBecomeInvalid:(id)arg1;
- (void)streamOutputServerDidDie:(id)arg1;
- (void)terminateComplete:(id /* block */)arg1;
- (void)updateCameraHiddenControlIfApplicable;
- (void)updateForcefulCenterStageEnablementStateIfNeededWithCenterStageEnabled:(bool)arg1;
- (void)updateForcefulCenterStageEnablementStateIfNeededWithCenterStageRestrictedToWide:(bool)arg1;

@end