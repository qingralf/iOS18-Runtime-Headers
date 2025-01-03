/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSLanguageDetector : NSObject <CSStartOfSpeechDetectorDelegate, _EARLanguageDetectorDelegate> {
    _EARLanguageDetectorAudioBuffer * _audioBuffer;
    CSAudioCircularBuffer * _circBuffer;
    CSAsset * _currentAsset;
    long long  _currentState;
    <CSLanguageDetectorDelegate> * _delegate;
    NSString * _interactionID;
    _EARLanguageDetector * _languageDetector;
    NSString * _languageDetectorAssetHash;
    NSMutableArray * _latestDetectedLanguages;
    bool  _needsToUpdateModel;
    int  _notifyToken;
    unsigned long long  _numLatestLanguages;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _startOfSpeechDetected;
    CSStartOfSpeechDetector * _startOfSpeechDetector;
}

@property (nonatomic, retain) _EARLanguageDetectorAudioBuffer *audioBuffer;
@property (nonatomic, retain) CSAudioCircularBuffer *circBuffer;
@property (nonatomic, retain) CSAsset *currentAsset;
@property (nonatomic) long long currentState;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <CSLanguageDetectorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *interactionID;
@property (nonatomic, retain) _EARLanguageDetector *languageDetector;
@property (nonatomic, copy) NSString *languageDetectorAssetHash;
@property (nonatomic, retain) NSMutableArray *latestDetectedLanguages;
@property (nonatomic) bool needsToUpdateModel;
@property (nonatomic) int notifyToken;
@property (nonatomic) unsigned long long numLatestLanguages;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) bool startOfSpeechDetected;
@property (nonatomic, retain) CSStartOfSpeechDetector *startOfSpeechDetector;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_constructLangPriors;
- (id)_getDefaultValues;
- (void)_initializeStartOfSpeechDetector:(id)arg1 samplingRate:(float)arg2;
- (void)_logLanguageDetectorMetricsForLoggingInfo:(id)arg1;
- (void)_logSoSResult:(id)arg1 toPath:(id)arg2;
- (id)_readJsonDictionaryAt:(id)arg1;
- (void)_recordRecognitionLanguage:(id)arg1;
- (void)_resetStartOfSpeechDetector;
- (void)_setNumLatestLangFromConfigFile:(id)arg1;
- (void)_setupLanguageDetectorWithOption:(id)arg1;
- (void)_startMonitorLanguageDetectorAssetDownload;
- (void)addSamples:(id)arg1 numSamples:(unsigned long long)arg2;
- (id)audioBuffer;
- (void)cancelCurrentRequest;
- (id)circBuffer;
- (id)currentAsset;
- (long long)currentState;
- (void)dealloc;
- (id)delegate;
- (void)endAudio;
- (id)init;
- (id)initWithModelURL:(id)arg1;
- (id)interactionID;
- (id)languageDetector;
- (void)languageDetector:(id)arg1 result:(id)arg2;
- (id)languageDetectorAssetHash;
- (void)languageDetectorDidCompleteProcessing:(id)arg1 loggingInfo:(id)arg2;
- (id)latestDetectedLanguages;
- (bool)needsToUpdateModel;
- (int)notifyToken;
- (unsigned long long)numLatestLanguages;
- (id)queue;
- (void)recordRecognitionLanguage:(id)arg1;
- (void)resetForNewRequest:(id)arg1;
- (void)setAudioBuffer:(id)arg1;
- (void)setCircBuffer:(id)arg1;
- (void)setCurrentAsset:(id)arg1;
- (void)setCurrentState:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInteractionID:(id)arg1;
- (void)setInteractionIDforCurrentRequest:(id)arg1;
- (void)setLanguageDetector:(id)arg1;
- (void)setLanguageDetectorAssetHash:(id)arg1;
- (void)setLatestDetectedLanguages:(id)arg1;
- (void)setMostRecentRecognitionLanguage:(id)arg1;
- (void)setNeedsToUpdateModel:(bool)arg1;
- (void)setNotifyToken:(int)arg1;
- (void)setNumLatestLanguages:(unsigned long long)arg1;
- (void)setQueue:(id)arg1;
- (void)setStartOfSpeechDetected:(bool)arg1;
- (void)setStartOfSpeechDetector:(id)arg1;
- (bool)startOfSpeechDetected;
- (id)startOfSpeechDetector;
- (void)startOfSpeechDetector:(id)arg1 foundStartSampleAt:(unsigned long long)arg2;

@end
