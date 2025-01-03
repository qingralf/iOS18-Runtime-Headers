/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriUIFoundation.framework/SiriUIFoundation
 */

@interface SRUIFSpeechSynthesizer : NSObject <AFQueueDelegate, SRUIFSpeechSynthesisTaskDelegate, SRUIFSpeechSynthesizing> {
    NSMutableArray * _activeTasks;
    unsigned int  _audioSessionID;
    NSMutableDictionary * _availableVoicesForLanguage;
    <SRUIFSpeechSynthesizerClientStateManagerDelegate> * _clientStateManagerDelegate;
    NSMutableDictionary * _delayedTasks;
    <SRUIFSpeechSynthesizerDelegate> * _delegate;
    AFVoiceInfo * _outputVoice;
    NSObject<OS_dispatch_group> * _pendingTasksGroup;
    NSObject<OS_dispatch_queue> * _pendingTasksQueue;
    NSObject<OS_dispatch_queue> * _processingTasksQueue;
    AFQueue * _taskQueue;
    SiriTTSDaemonSession * _ttsSession;
}

@property (getter=_activeTasks, nonatomic, readonly) NSMutableArray *activeTasks;
@property (nonatomic) unsigned int audioSessionID;
@property (nonatomic) <SRUIFSpeechSynthesizerClientStateManagerDelegate> *clientStateManagerDelegate;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (getter=_delayedTasks, nonatomic, readonly) NSMutableDictionary *delayedTasks;
@property (nonatomic) <SRUIFSpeechSynthesizerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (getter=_taskQueue, nonatomic, readonly) AFQueue *taskQueue;
@property (nonatomic, retain) SiriTTSDaemonSession *ttsSession;

- (void).cxx_destruct;
- (id)_activeTaskWithTTSRequest:(id)arg1;
- (id)_activeTasks;
- (void)_cancelByCancellingActiveTasksOnly:(bool)arg1;
- (id)_delayedTasks;
- (void)_duckTTSVolumeTo:(float)arg1 rampTime:(double)arg2 completion:(id /* block */)arg3;
- (void)_enqueueText:(id)arg1 audioData:(id)arg2 identifier:(id)arg3 sessionId:(id)arg4 preferredVoice:(id)arg5 language:(id)arg6 gender:(id)arg7 isPhonetic:(bool)arg8 provisionally:(bool)arg9 eligibleAfterDuration:(double)arg10 delayed:(bool)arg11 canUseServerTTS:(bool)arg12 preparationIdentifier:(id)arg13 shouldCache:(bool)arg14 completion:(id /* block */)arg15 analyticsContext:(id)arg16 speakableContextInfo:(id)arg17;
- (id)_filterVoices:(id)arg1 gender:(id)arg2;
- (void)_findVoiceForLanguage:(id)arg1 gender:(id)arg2 completion:(id /* block */)arg3;
- (long long)_genderForString:(id)arg1;
- (void)_handleAudioData:(id)arg1 completion:(id /* block */)arg2;
- (void)_handleText:(id)arg1 completion:(id /* block */)arg2;
- (bool)_isSynthesisQueueEmpty;
- (void)_processProvisionalTasks;
- (void)_processTaskQueue;
- (long long)_speechFootPrintForVoice:(id)arg1;
- (id)_taskQueue;
- (unsigned int)audioSessionID;
- (void)cancel;
- (id)clientStateManagerDelegate;
- (void)dealloc;
- (id)delegate;
- (void)didFinishAudioTask:(id)arg1 withError:(id)arg2;
- (void)didFinishSpeakTask:(id)arg1 withError:(id)arg2;
- (void)didStartAudioTask:(id)arg1;
- (void)didStartSpeakTask:(id)arg1;
- (void)duckTTSVolumeTo:(float)arg1 rampTime:(double)arg2 completion:(id /* block */)arg3;
- (void)enqueueAudioData:(id)arg1 identifier:(id)arg2 sessionId:(id)arg3 provisionally:(bool)arg4 eligibleAfterDuration:(double)arg5 completion:(id /* block */)arg6;
- (void)enqueuePhaticWithCompletion:(id /* block */)arg1;
- (void)enqueueSpeechSynthesisRequest:(id)arg1;
- (void)enqueueText:(id)arg1 identifier:(id)arg2 sessionId:(id)arg3 completion:(id /* block */)arg4;
- (void)enqueueText:(id)arg1 identifier:(id)arg2 sessionId:(id)arg3 language:(id)arg4 gender:(id)arg5 isPhonetic:(bool)arg6 provisionally:(bool)arg7 eligibleAfterDuration:(double)arg8 delayed:(bool)arg9 canUseServerTTS:(bool)arg10 preparationIdentifier:(id)arg11 completion:(id /* block */)arg12 analyticsContext:(id)arg13 speakableContextInfo:(id)arg14;
- (void)enqueueText:(id)arg1 identifier:(id)arg2 sessionId:(id)arg3 preferredVoice:(id)arg4 language:(id)arg5 gender:(id)arg6 isPhonetic:(bool)arg7 provisionally:(bool)arg8 eligibleAfterDuration:(double)arg9 delayed:(bool)arg10 canUseServerTTS:(bool)arg11 preparationIdentifier:(id)arg12 completion:(id /* block */)arg13 analyticsContext:(id)arg14 speakableContextInfo:(id)arg15;
- (id)init;
- (void)invalidate;
- (void)invalidateOnMainThread;
- (bool)isSpeaking;
- (void)isSynthesisQueueEmpty:(id /* block */)arg1;
- (void)prewarmIfNeeded;
- (void)processDelayedItem:(id)arg1;
- (void)queue:(id)arg1 didEnqueueObjects:(id)arg2;
- (void)setAudioSessionID:(unsigned int)arg1;
- (void)setClientStateManagerDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setOutputVoice:(id)arg1;
- (void)setTtsSession:(id)arg1;
- (void)skipCurrentSynthesis;
- (void)speakTask:(id)arg1 didGenerateMetrics:(id)arg2;
- (void)speakTask:(id)arg1 didGenerateWordTimingInfo:(id)arg2;
- (void)taskEligibilityDidChange:(id)arg1;
- (id)ttsSession;

@end
