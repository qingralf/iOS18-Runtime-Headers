/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LocalSpeechRecognitionBridge.framework/LocalSpeechRecognitionBridge
 */

@interface LBLocalSpeechRecognizerClient : NSObject <LBLocalSpeechServiceDelegate> {
    LBAudioCapture * _audioCapture;
    <LBLocalSpeechRecognizerClientDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _requestId;
    bool  _shouldEnableAudioCapture;
    NSString * _uuidString;
    NSXPCConnection * _xpcConnection;
    NSString * _xpcConnectionUUIDString;
    NSXPCListenerEndpoint * _xpcListenerEndpoint;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <LBLocalSpeechRecognizerClientDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *requestId;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *uuidString;
@property (nonatomic, retain) NSString *xpcConnectionUUIDString;

+ (bool)isInstalledFromStatusString:(id)arg1;

- (void).cxx_destruct;
- (id)_connection;
- (void)_invalidate;
- (id)_newConnection;
- (id)_service;
- (bool)_shouldSetSpeechEventForRecordType:(long long)arg1;
- (void)_stopSpeechRecognitionTaskWithReason:(unsigned long long)arg1 requestId:(id)arg2 shouldInvalidateAfterStop:(bool)arg3 completion:(id /* block */)arg4;
- (void)connectToServiceIfNeeded;
- (void)dealloc;
- (id)delegate;
- (void)disableLocalSpeechRecognitionForRequestId:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 xpcListenerEndpoint:(id)arg2 audioCapture:(id)arg3;
- (void)invalidate;
- (oneway void)localSpeechServiceDidCompletionRecognitionWithStatistics:(id)arg1 requestId:(id)arg2 endpointMode:(long long)arg3 error:(id)arg4;
- (oneway void)localSpeechServiceDidDetectedFinalEndpointAtTime:(double)arg1;
- (oneway void)localSpeechServiceDidReceiveContinuityEndDetected:(id)arg1;
- (oneway void)localSpeechServiceDidReceiveMultiUserTRPCandidatePackage:(id)arg1;
- (oneway void)localSpeechServiceDidReceiveTCUStateUpdate:(id)arg1;
- (oneway void)localSpeechServiceDidReceiveTRPCandidatePackage:(id)arg1;
- (oneway void)localSpeechServiceDidReceiveTRPDetected:(id)arg1;
- (oneway void)localSpeechServiceDidReceivedEagerRecognitionCandidateWithRequestId:(id)arg1 rcId:(unsigned long long)arg2 speechPackage:(id)arg3 duration:(double)arg4;
- (oneway void)localSpeechServiceDidReceivedEagerRecognitionCandidateWithRequestId:(id)arg1 rcId:(unsigned long long)arg2 speechPackage:(id)arg3 duration:(double)arg4 metadata:(id)arg5;
- (oneway void)localSpeechServiceDidReceivedEagerResultWithRequestId:(id)arg1 rcId:(unsigned long long)arg2 shouldAccept:(bool)arg3 mitigationSignal:(bool)arg4 featuresToLog:(id)arg5;
- (oneway void)localSpeechServiceDidReceivedFinalResultCandidateWithRequestId:(id)arg1 speechPackage:(id)arg2;
- (oneway void)localSpeechServiceDidReceivedFinalResultWithRequestId:(id)arg1 speechPackage:(id)arg2;
- (oneway void)localSpeechServiceDidReceivedFinalResultWithRequestId:(id)arg1 speechPackage:(id)arg2 metadata:(id)arg3;
- (oneway void)localSpeechServiceDidReceivedPartialResultWithRequestId:(id)arg1 language:(id)arg2 speechPackage:(id)arg3 metadata:(id)arg4;
- (oneway void)localSpeechServiceDidReceivedPartialResultWithRequestId:(id)arg1 language:(id)arg2 tokens:(id)arg3;
- (oneway void)localSpeechServiceDidReceivedPartialResultWithRequestId:(id)arg1 language:(id)arg2 tokens:(id)arg3 metadata:(id)arg4;
- (oneway void)localSpeechServiceDidReceivedVoiceCommandCandidateWithRequestId:(id)arg1 speechPackage:(id)arg2 metadata:(id)arg3;
- (oneway void)localSpeechServiceDidReceivedVoiceIdScoreCard:(id)arg1;
- (oneway void)localSpeechServiceRequestAttentionAssetDownload;
- (void)pauseLocalSpeechRecognitionForRequestId:(id)arg1;
- (void)preheatLocalSpeechRecognitionWithLanguage:(id)arg1 source:(unsigned long long)arg2;
- (id)requestId;
- (void)resetCacheAndCompileAllAssets;
- (void)resumeLocalRecognitionWithRequestId:(id)arg1 prefixText:(id)arg2 postfixText:(id)arg3 selectedText:(id)arg4;
- (void)sendSpeechCorrectionInfo:(id)arg1 interactionIdentifier:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setLocalSpeechRecognizerClientDelegate:(id)arg1;
- (void)setRequestId:(id)arg1;
- (void)setUuidString:(id)arg1;
- (void)setXpcConnectionUUIDString:(id)arg1;
- (void)startDeliverLocalSpeechRecognitionResultsWithSettings:(id)arg1;
- (void)startSpeechRecognitionResultsWithSettings:(id)arg1;
- (void)stopLocalSpeechRecognitionTaskWithReason:(unsigned long long)arg1;
- (void)stopLocalSpeechRecognitionTaskWithReason:(unsigned long long)arg1 requestId:(id)arg2;
- (void)stopSpeechRecognitionTaskAndInvalidateWithReason:(unsigned long long)arg1 requestId:(id)arg2 completion:(id /* block */)arg3;
- (void)stopSpeechRecognitionTaskWithReason:(unsigned long long)arg1 requestId:(id)arg2;
- (void)stopSpeechRecognitionTaskWithReason:(unsigned long long)arg1 requestId:(id)arg2 completion:(id /* block */)arg3;
- (void)trpCandidateReadyForExecutionForRequestId:(id)arg1 withTrpId:(id)arg2;
- (void)updateTCUState:(id)arg1;
- (void)updateVoiceCommandContextWithRequestId:(id)arg1 prefixText:(id)arg2 postfixText:(id)arg3 selectedText:(id)arg4 disambiguationActive:(id)arg5 cursorInVisibleText:(id)arg6 favorCommandSuppression:(id)arg7 abortCommandSuppression:(id)arg8 undoEvent:(id)arg9;
- (id)uuidString;
- (id)xpcConnectionUUIDString;

@end
