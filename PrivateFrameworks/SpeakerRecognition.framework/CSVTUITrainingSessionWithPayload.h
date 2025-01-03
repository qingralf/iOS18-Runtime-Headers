/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
 */

@interface CSVTUITrainingSessionWithPayload : CSVTUITrainingSession <CSVTUIAudioSessionDelegate, CSVTUIEndPointDelegate, SFSpeechRecognitionTaskDelegate> {
    bool  _ASRResultReceived;
    unsigned long long  _bestTriggerSampleStart;
    bool  _detectBOS;
    unsigned long long  _extraSamplesAtStart;
    unsigned long long  _numSamplesFed;
    bool  _reportedStopListening;
    bool  _utteranceStored;
    NSDictionary * _voiceTriggerEventInfo;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSDictionary *voiceTriggerEventInfo;

- (void).cxx_destruct;
- (void)_firedEndPointTimeout;
- (void)_firedVoiceTriggerTimeout;
- (float)_getSessionEOSTimeout;
- (void)_registerEndPointTimeout;
- (void)_registerForceEndPointTimeout;
- (void)_registerVoiceTriggerTimeout;
- (void)_reportStopListening;
- (void)audioSessionDidStartRecording:(bool)arg1 error:(id)arg2;
- (void)audioSessionDidStopRecording:(long long)arg1;
- (void)audioSessionErrorDidOccur:(id)arg1;
- (void)audioSessionRecordBufferAvailable:(id)arg1;
- (void)audioSessionUnsupportedAudioRoute;
- (void)closeSessionWithStatus:(int)arg1 successfully:(bool)arg2;
- (void)didDetectBeginOfSpeech;
- (void)didDetectEndOfSpeech:(long long)arg1;
- (void)handleAudioInput:(id)arg1;
- (void)matchRecognitionResult:(id)arg1 withMatchedBlock:(id /* block */)arg2 withNonMatchedBlock:(id /* block */)arg3;
- (void)setVoiceTriggerEventInfo:(id)arg1;
- (bool)shouldHandleSession;
- (bool)shouldMatchPayload;
- (void)speechRecognitionTask:(id)arg1 didFinishRecognition:(id)arg2;
- (void)speechRecognitionTask:(id)arg1 didFinishSuccessfully:(bool)arg2;
- (void)speechRecognitionTask:(id)arg1 didHypothesizeTranscription:(id)arg2;
- (void)startTraining;
- (id)voiceTriggerEventInfo;

@end
