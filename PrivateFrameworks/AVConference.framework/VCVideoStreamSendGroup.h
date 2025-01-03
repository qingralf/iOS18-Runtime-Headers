/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCVideoStreamSendGroup : VCMediaStreamSendGroup <VCMediaCaptureController, VCMediaStreamDelegate, VCMediaStreamSendSyncSourceDelegate, VCRedundancyControllerDelegate, VCSessionUplinkVideoStreamControllerDelegate, VCVideoCaptureClient, VCVideoSink> {
    unsigned int  _activeTemporalTierBitmap;
    bool  _allowSuspendProvisionedStreams;
    int  _captureFrameRate;
    int  _captureSource;
    VCVideoRule * _captureVideoRule;
    id  _clientCaptureController;
    double  _fecRatio;
    bool  _hasPeerSubscribedStreams;
    bool  _initTime;
    bool  _isStreamInputCaptureSource;
    unsigned char  _lastVideoPriority;
    struct CGSize { 
        double width; 
        double height; 
    }  _maxScreenCaptureSize;
    int  _maxSupportedCaptureFrameRate;
    long long  _maxSupportedMultiwayVideoResolution;
    unsigned int  _mediaQueueSize;
    NSMutableDictionary * _pendingActiveUplinkStreams;
    NSMutableArray * _temporalStreamsIDs;
    unsigned int  _totalNumFramesProcessed;
    unsigned int  _totalNumFramesReceived;
    VCSessionUplinkVideoStreamController * _uplinkVideoStreamController;
    NSMutableSet * _videoPayloadTypes;
    _Atomic unsigned char  _videoPriority;
    bool  _videoPriorityEnabled;
    struct opaqueCMSimpleQueue { } * _videoRedundancyChangeEventQueue;
    struct tagVCMemoryPool { struct { void *x_1_1_1; long long x_1_1_2; } x1; unsigned long long x2; } * _videoRedundancyPool;
    id  _videoSinkDelegate;
}

@property (nonatomic) int captureFrameRate;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned int mediaQueueSize;
@property (readonly) Class superclass;

- (id)activeStreamKeys;
- (void)avConferencePreviewError:(id)arg1;
- (void)cameraAvailabilityDidChange:(bool)arg1;
- (id)captureConfigForScreenShare;
- (int)captureFrameRate;
- (void)cleanupRedundancySettings;
- (id)clientCaptureRule;
- (void)collectAndLogChannelMetrics:(struct { unsigned int x1; unsigned int x2[5]; unsigned int x3; double x4; struct CGSize { double x_5_1_1; double x_5_1_2; } x5; double x6; unsigned int x7; double x8; unsigned int x9; unsigned int x10; }*)arg1;
- (void)computeMaxScreenCaptureSize;
- (void)controller:(id)arg1 didChangeActiveVideoStreams:(id)arg2;
- (id /* block */)copyOnVideoFrameBlock;
- (void)dealloc;
- (void)deregisterClientForScreenShare;
- (void)deregisterForScreenCapture;
- (void)deregisterForVideoCapture;
- (bool)dispatchedEnableRedundancy:(bool)arg1;
- (void)dispatchedSetCaptureVideoRule:(id)arg1;
- (void)dispatchedUpdateActiveMediaStreamIDs:(id)arg1 withTargetBitrate:(unsigned int)arg2 mediaBitrates:(id)arg3 rateChangeCounter:(unsigned int)arg4;
- (void)flushVideoRedundancyEventQueue;
- (void)frameRateIsBeingThrottled:(int)arg1 thermalLevelDidChange:(bool)arg2 powerLevelDidChange:(bool)arg3;
- (bool)generateKeyFrameWithStreamID:(id)arg1 firType:(int)arg2;
- (struct CGSize { double x1; double x2; })getCaptureEncodingSize;
- (unsigned int)getPixelFormat;
- (id)initWithConfig:(id)arg1;
- (int)maxCaptureCameraFrameRateForMode:(unsigned int)arg1;
- (int)maxCaptureFrameRateForMode:(unsigned int)arg1;
- (long long)maxCaptureResolution;
- (unsigned long long)maxStreamFrameRate;
- (unsigned int)mediaQueueSize;
- (bool)onVideoFrame:(struct opaqueCMSampleBuffer { }*)arg1 frameTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 attribute:(struct { bool x1; bool x2; int x3; bool x4; bool x5; int x6; unsigned char x7; })arg3;
- (void)reactionDidStart:(id)arg1;
- (void)redundancyController:(id)arg1 redundancyIntervalDidChange:(double)arg2;
- (void)redundancyController:(id)arg1 redundancyPercentageDidChange:(unsigned int)arg2;
- (void)redundancyController:(id)arg1 redundancyVectorDidChange:(struct { unsigned short x1; struct { unsigned char x_2_1_1; unsigned char x_2_1_2; } x2[32]; })arg2;
- (void)registerClientForScreenShare;
- (void)registerConfigForScreenShare;
- (id)registerForScreenCapture;
- (void)registerForVideoCapture:(int)arg1;
- (void)setActiveConnection:(id)arg1 uplinkBitrateCap:(unsigned int)arg2 activeMediaStreamIDs:(id)arg3 mediaBitrates:(id)arg4 rateChangeCounter:(unsigned int)arg5;
- (void)setCaptureFrameRate:(int)arg1;
- (void)setMediaQueueSize:(unsigned int)arg1;
- (void)setupPayloadTypes;
- (id)setupRedundancyControllerForMode:(unsigned int)arg1;
- (bool)setupRedundancySettings;
- (bool)setupStreamGroupWithConfig:(id)arg1;
- (void)setupVideoPriority;
- (bool)shouldCompoundListIgnoreStream:(id)arg1 streamConfig:(id)arg2 activeStreamIds:(id)arg3;
- (bool)shouldSubscribeToStreamID:(id)arg1 peerSubscribedStreams:(id)arg2;
- (void)sourceFrameRateDidChange:(unsigned int)arg1;
- (id)startCapture;
- (id)stopCapture;
- (id)streamDescriptionForMediaStreamConfig:(id)arg1;
- (void)thermalLevelDidChange:(int)arg1;
- (void)updateEnabledState;
- (void)updateSendSampleRTPTimestamp:(unsigned int)arg1 sampleRate:(double)arg2 systemTime:(double)arg3;
- (void)updateSuspendedState;
- (void)updateUplinkBitrateCapCell:(unsigned int)arg1 activeStreamIDs:(id)arg2;
- (void)updateUplinkBitrateCapWifi:(unsigned int)arg1 activeStreamIDs:(id)arg2;
- (bool)updateUplinkStreamsForPeerSubscribedStreams:(id)arg1;
- (id)uplinkVideoStreamControllerForMode:(unsigned int)arg1;
- (void)vcMediaStreamDidDecryptionTimeOut:(id)arg1;
- (void)vcMediaStreamDidRTCPTimeOut:(id)arg1;
- (void)vcMediaStreamDidRTPTimeOut:(id)arg1;
- (id)willStart;

@end
