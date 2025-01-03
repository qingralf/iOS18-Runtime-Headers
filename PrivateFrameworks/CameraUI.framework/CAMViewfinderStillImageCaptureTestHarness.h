/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMViewfinderStillImageCaptureTestHarness : CAMPerformanceTestHarness <CAMViewfinderActionIntervalometerDelegate, CAMViewfinderViewControllerStillImageCaptureRequestTestingDelegate> {
    bool  __capturesOnTouchDown;
    double  __delayBetweenCaptures;
    unsigned long long  __expectedNumberOfResponsesPerRequest;
    NSString * __finalRequestPersistenceUUID;
    unsigned long long  __generatedRequestsCount;
    double  __lastCaptureCompletionTime;
    unsigned long long  __maxStillImageCount;
    long long  __mode;
    bool  __performWarmupCapture;
    unsigned long long  __receivedCallbackCount;
    NSCountedSet * __requestIDs;
    CAMViewfinderViewController * __viewfinderViewController;
    bool  __waitingOnWarmupCapture;
    id /* block */  _didUpdateFinalThumbnailHandler;
    bool  _stillDuringVideo;
    CAMViewfinderActionIntervalometer * _testIntervalometer;
}

@property (nonatomic) bool _capturesOnTouchDown;
@property (nonatomic) double _delayBetweenCaptures;
@property (nonatomic) unsigned long long _expectedNumberOfResponsesPerRequest;
@property (nonatomic, retain) NSString *_finalRequestPersistenceUUID;
@property (nonatomic) unsigned long long _generatedRequestsCount;
@property (nonatomic) double _lastCaptureCompletionTime;
@property (nonatomic) unsigned long long _maxStillImageCount;
@property (nonatomic) long long _mode;
@property (nonatomic) bool _performWarmupCapture;
@property (nonatomic) unsigned long long _receivedCallbackCount;
@property (nonatomic, retain) NSCountedSet *_requestIDs;
@property (nonatomic, retain) CAMViewfinderViewController *_viewfinderViewController;
@property (nonatomic) bool _waitingOnWarmupCapture;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ didUpdateFinalThumbnailHandler;
@property (readonly) unsigned long long hash;
@property (getter=isStillDuringVideo, nonatomic) bool stillDuringVideo;
@property (readonly) Class superclass;
@property (nonatomic, retain) CAMViewfinderActionIntervalometer *testIntervalometer;

- (void).cxx_destruct;
- (bool)_allowOverlappingCaptures;
- (bool)_capturesOnTouchDown;
- (double)_delayBetweenCaptures;
- (unsigned long long)_expectedNumberOfResponsesPerRequest;
- (id)_finalRequestPersistenceUUID;
- (unsigned long long)_generatedRequestsCount;
- (double)_lastCaptureCompletionTime;
- (unsigned long long)_maxStillImageCount;
- (long long)_mode;
- (bool)_performWarmupCapture;
- (unsigned long long)_receivedCallbackCount;
- (id)_requestIDs;
- (id)_viewfinderViewController;
- (bool)_waitingOnWarmupCapture;
- (void)cancelTesting;
- (id /* block */)didUpdateFinalThumbnailHandler;
- (bool)executeAction;
- (void)failedTestWithReason:(id)arg1;
- (id)initWithTestName:(id)arg1 maxStillImageCount:(unsigned long long)arg2 expectedNumberOfCapturesPerRequest:(unsigned long long)arg3 viewfinderViewController:(id)arg4 performingWarmupCapture:(bool)arg5 forCaptureMode:(long long)arg6 delayBetweenCaptures:(double)arg7 capturesOnTouchDown:(bool)arg8;
- (bool)isStillDuringVideo;
- (void)setDidUpdateFinalThumbnailHandler:(id /* block */)arg1;
- (void)setStillDuringVideo:(bool)arg1;
- (void)setTestIntervalometer:(id)arg1;
- (void)set_capturesOnTouchDown:(bool)arg1;
- (void)set_delayBetweenCaptures:(double)arg1;
- (void)set_expectedNumberOfResponsesPerRequest:(unsigned long long)arg1;
- (void)set_finalRequestPersistenceUUID:(id)arg1;
- (void)set_generatedRequestsCount:(unsigned long long)arg1;
- (void)set_lastCaptureCompletionTime:(double)arg1;
- (void)set_maxStillImageCount:(unsigned long long)arg1;
- (void)set_mode:(long long)arg1;
- (void)set_performWarmupCapture:(bool)arg1;
- (void)set_receivedCallbackCount:(unsigned long long)arg1;
- (void)set_requestIDs:(id)arg1;
- (void)set_viewfinderViewController:(id)arg1;
- (void)set_waitingOnWarmupCapture:(bool)arg1;
- (bool)shouldAttemptAction;
- (void)startTesting;
- (void)stopTesting;
- (id)testIntervalometer;
- (void)viewfinderViewController:(id)arg1 didReceiveStillImageRequestDidCompleteCapture:(id)arg2 error:(id)arg3;
- (void)viewfinderViewController:(id)arg1 didReceiveStillImageRequestDidCompleteStillImageCapture:(id)arg2 withResponse:(id)arg3 error:(id)arg4;
- (void)viewfinderViewController:(id)arg1 didReceiveStillImageRequestDidStopCapturingStillImage:(id)arg2;
- (void)viewfinderViewController:(id)arg1 didUpdateImageWellWithRequest:(id)arg2 response:(id)arg3 error:(id)arg4;
- (void)viewfinderViewController:(id)arg1 willCaptureStillImageForRequest:(id)arg2;

@end
