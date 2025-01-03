/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSVoiceTriggerFirstPassJarvis : NSObject <CSAudioStreamProvidingDelegate, CSDeviceActivationEventNotificationHandlerDelegate, CSKeywordAnalyzerNDEAPIScoreDelegate, CSSPGEndpointAnalyzerDelegate, CSSiriClientBehaviorMonitorDelegate> {
    unsigned long long  _activeChannel;
    NSMutableArray * _assetConfigWaitingBuffer;
    CSPlainAudioFileWriter * _audioFileWriter;
    CSAudioProvider * _audioProvider;
    CSAudioStream * _audioStream;
    CSAudioStreamHolding * _audioStreamHolding;
    CSAsset * _currentAsset;
    <CSVoiceTriggerDelegate> * _delegate;
    NSString * _deviceId;
    unsigned long long  _earlyDetectFiredMachTime;
    CSSPGEndpointAnalyzer * _endpointAnalyzer;
    bool  _firstTimeAssetConfigured;
    CSVoiceTriggerFirstPassMetrics * _firstpassMetrics;
    bool  _hasReceivedNDEAPIResult;
    bool  _hasTriggerCandidate;
    bool  _isSecondPassRunning;
    bool  _isSiriClientListening;
    CSKeywordAnalyzerNDEAPIResult * _jarvisTriggerResult;
    unsigned long long  _jarvisVoiceTriggerTimeout;
    CSKeywordAnalyzerNDEAPI * _keywordAnalyzerNDEAPI;
    long long  _latestTriggerMode;
    CSVoiceTriggerUserSelectedPhrase * _multiPhraseSelectedStatus;
    unsigned long long  _numProcessedSamples;
    CSOtherAppRecordingStateMonitor * _otherAppRecordingStateMonitor;
    NSObject<OS_dispatch_queue> * _queue;
    CSVoiceTriggerRTModel * _rtModel;
    CSVoiceTriggerSecondChanceContext * _secondChanceContext;
    CSSpeechManager * _speechManager;
    CSVoiceTriggerSecondPass * _voiceTriggerSecondPass;
}

@property (nonatomic) unsigned long long activeChannel;
@property (nonatomic, retain) NSMutableArray *assetConfigWaitingBuffer;
@property (nonatomic, retain) CSPlainAudioFileWriter *audioFileWriter;
@property (nonatomic, retain) CSAudioProvider *audioProvider;
@property (nonatomic, retain) CSAudioStream *audioStream;
@property (nonatomic, retain) CSAudioStreamHolding *audioStreamHolding;
@property (nonatomic, retain) CSAsset *currentAsset;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <CSVoiceTriggerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *deviceId;
@property (nonatomic) unsigned long long earlyDetectFiredMachTime;
@property (nonatomic, retain) CSSPGEndpointAnalyzer *endpointAnalyzer;
@property (nonatomic) bool firstTimeAssetConfigured;
@property (nonatomic, retain) CSVoiceTriggerFirstPassMetrics *firstpassMetrics;
@property (nonatomic) bool hasReceivedNDEAPIResult;
@property (nonatomic) bool hasTriggerCandidate;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isSecondPassRunning;
@property (nonatomic) bool isSiriClientListening;
@property (nonatomic, retain) CSKeywordAnalyzerNDEAPIResult *jarvisTriggerResult;
@property (nonatomic) unsigned long long jarvisVoiceTriggerTimeout;
@property (nonatomic, retain) CSKeywordAnalyzerNDEAPI *keywordAnalyzerNDEAPI;
@property (nonatomic) long long latestTriggerMode;
@property (nonatomic, retain) CSVoiceTriggerUserSelectedPhrase *multiPhraseSelectedStatus;
@property (nonatomic) unsigned long long numProcessedSamples;
@property (nonatomic, retain) CSOtherAppRecordingStateMonitor *otherAppRecordingStateMonitor;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) CSVoiceTriggerRTModel *rtModel;
@property (nonatomic, retain) CSVoiceTriggerSecondChanceContext *secondChanceContext;
@property (nonatomic, retain) CSSpeechManager *speechManager;
@property (readonly) Class superclass;
@property (nonatomic, retain) CSVoiceTriggerSecondPass *voiceTriggerSecondPass;

+ (id)jarvisAudioLogDirectory;
+ (id)jarvisAudioLoggingFilePath;
+ (id)timeStampString;

- (void).cxx_destruct;
- (void)_cancelAudioStreamHold;
- (void)_clearTriggerCandidate;
- (void)_createSecondPassIfNeeded;
- (void)_didDetectKeywordFromDeviceId:(id)arg1 activationInfo:(id)arg2 triggerHostTime:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)_didStartAudioStream;
- (void)_didStopAudioStream;
- (void)_handleAudioChunk:(id)arg1;
- (void)_handleJarvisVoiceTriggerFromDeviceId:(id)arg1 activationInfo:(id)arg2 triggerHostTime:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)_handleSecondPassResult:(id)arg1 deviceId:(id)arg2 error:(id)arg3;
- (void)_holdAudioStreamWithTimeout:(double)arg1;
- (void)_notifyJarvisVoiceTriggerReject;
- (void)_reportJarvisVoiceTriggerFire;
- (void)_requestStartAudioStreamWitContext:(id)arg1 startStreamOption:(id)arg2 completion:(id /* block */)arg3;
- (void)_reset;
- (void)_setAsset:(id)arg1;
- (void)_teardownSecondPass;
- (void)activationEventNotificationHandler:(id)arg1 event:(id)arg2 completion:(id /* block */)arg3;
- (unsigned long long)activeChannel;
- (id)assetConfigWaitingBuffer;
- (id)audioFileWriter;
- (id)audioProvider;
- (id)audioStream;
- (id)audioStreamHolding;
- (void)audioStreamProvider:(id)arg1 audioBufferAvailable:(id)arg2;
- (void)audioStreamProvider:(id)arg1 audioChunkForTVAvailable:(id)arg2;
- (void)audioStreamProvider:(id)arg1 didStopStreamUnexpectedly:(long long)arg2;
- (id)currentAsset;
- (id)delegate;
- (id)deviceId;
- (unsigned long long)earlyDetectFiredMachTime;
- (id)endpointAnalyzer;
- (bool)firstTimeAssetConfigured;
- (id)firstpassMetrics;
- (bool)hasReceivedNDEAPIResult;
- (bool)hasTriggerCandidate;
- (id)init;
- (id)initWithSpeechManager:(id)arg1 otherAppRecordingStateMonitor:(id)arg2;
- (bool)isSecondPassRunning;
- (bool)isSiriClientListening;
- (id)jarvisTriggerResult;
- (unsigned long long)jarvisVoiceTriggerTimeout;
- (id)keywordAnalyzerNDEAPI;
- (void)keywordAnalyzerNDEAPI:(id)arg1 hasResultAvailable:(id)arg2 forChannel:(unsigned long long)arg3;
- (long long)latestTriggerMode;
- (id)multiPhraseSelectedStatus;
- (unsigned long long)numProcessedSamples;
- (id)otherAppRecordingStateMonitor;
- (id)queue;
- (void)reset;
- (id)rtModel;
- (id)secondChanceContext;
- (void)setActiveChannel:(unsigned long long)arg1;
- (void)setAsset:(id)arg1;
- (void)setAssetConfigWaitingBuffer:(id)arg1;
- (void)setAudioFileWriter:(id)arg1;
- (void)setAudioProvider:(id)arg1;
- (void)setAudioStream:(id)arg1;
- (void)setAudioStreamHolding:(id)arg1;
- (void)setCurrentAsset:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeviceId:(id)arg1;
- (void)setEarlyDetectFiredMachTime:(unsigned long long)arg1;
- (void)setEndpointAnalyzer:(id)arg1;
- (void)setFirstTimeAssetConfigured:(bool)arg1;
- (void)setFirstpassMetrics:(id)arg1;
- (void)setHasReceivedNDEAPIResult:(bool)arg1;
- (void)setHasTriggerCandidate:(bool)arg1;
- (void)setIsSecondPassRunning:(bool)arg1;
- (void)setIsSiriClientListening:(bool)arg1;
- (void)setJarvisTriggerResult:(id)arg1;
- (void)setJarvisVoiceTriggerTimeout:(unsigned long long)arg1;
- (void)setKeywordAnalyzerNDEAPI:(id)arg1;
- (void)setLatestTriggerMode:(long long)arg1;
- (void)setMultiPhraseSelectedStatus:(id)arg1;
- (void)setNumProcessedSamples:(unsigned long long)arg1;
- (void)setOtherAppRecordingStateMonitor:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setRtModel:(id)arg1;
- (void)setSecondChanceContext:(id)arg1;
- (void)setSpeechManager:(id)arg1;
- (void)setVoiceTriggerSecondPass:(id)arg1;
- (void)siriClientBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 successfully:(bool)arg3 option:(id)arg4 withEventUUID:(id)arg5;
- (void)siriClientBehaviorMonitor:(id)arg1 didStopStream:(id)arg2 withEventUUID:(id)arg3;
- (void)siriClientBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 option:(id)arg3;
- (void)siriClientBehaviorMonitor:(id)arg1 willStopStream:(id)arg2 reason:(unsigned long long)arg3;
- (id)speechManager;
- (void)spgEndpointAnalyzerDidDetectEndpoint:(id)arg1;
- (void)start;
- (id)voiceTriggerSecondPass;

@end
