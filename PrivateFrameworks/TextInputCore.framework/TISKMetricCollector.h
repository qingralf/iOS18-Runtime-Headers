/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TISKMetricCollector : NSObject <TITypingSessionAggregatedEventObserver> {
    bool  _accentedLanguage;
    NSMutableArray * _accentedLayoutsMap;
    unsigned long long  _aggregatedWordThreshold;
    NSMutableArray * _currentSessionStatsArray;
    long long  _currentWordPosition;
    <TISensorWriterWrapper> * _dataWriter;
    NSDictionary * _emojiBuckets;
    long long  _eventOrder;
    NSMutableArray * _events;
    NSString * _identifier;
    TIInputMode * _inputMode;
    bool  _isLoaded;
    bool  _isTCCAuthorized;
    TIKeyboardInput * _lastInput;
    NSMutableArray * _layoutIDs;
    NSString * _previousWord;
    NSMutableArray * _savedSessionStatsArray;
    bool  _skipTCCAuthorization;
    NSArray * _sortedEvents;
    NLTagger * _tagger;
    NSMutableArray * _taps;
    int  _tccNotifyToken;
    NSMutableDictionary * _touchToEventMap;
    NSMutableArray * _touches;
    TITypingSession * _typingSession;
    TIUserModelDataStore * _userModelDataStore;
    unsigned long long  _wordAccumulationThreshold;
    NSDictionary * _wordBucketDictionary;
    long long  _wordPosition;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) NSMutableArray *currentSessionStatsArray;
@property (nonatomic, retain) <TISensorWriterWrapper> *dataWriter;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isLoaded;
@property (nonatomic, retain) NSMutableArray *savedSessionStatsArray;
@property (readonly) Class superclass;
@property (nonatomic, retain) TITypingSession *typingSession;
@property (nonatomic) unsigned long long wordAccumulationThreshold;

+ (bool)isSensorKitSupported:(id)arg1;
+ (id)makeMetricCollector:(id)arg1 wordsThreshold:(unsigned long long)arg2 isTesting:(bool)arg3;

- (void).cxx_destruct;
- (void)_clear;
- (void)_coalesceTaps;
- (void)_consumeDeleteWordEvent:(id)arg1;
- (void)_consumeInputsAndTouches:(id)arg1 occurenceTime:(double)arg2 emojiSearchMode:(bool)arg3;
- (void)_consumePathsAndPredictions:(id)arg1 emojiSearchMode:(bool)arg2;
- (id)_consumeTypingSession:(id)arg1;
- (void)_consumeUserAction:(id)arg1;
- (void)_consumeWordEntry:(id)arg1;
- (void)_haltSessionTypingTimer:(id)arg1 event:(id)arg2;
- (id)_insertEmojiSwitchEvents:(id)arg1;
- (void)_loadStatsFromDataStore;
- (id)_mapIDToLayout:(unsigned long long)arg1;
- (void)_mapTapsToEvents;
- (void)_metricWalk;
- (void)_persistSavedSessionStatsArray;
- (void)_processEvents;
- (void)_resetConsumeState;
- (id)_retrieveSavedSessionSampleArray;
- (void)_setupTCCAuthNotification;
- (id)consumeTypingSession:(id)arg1;
- (id)currentSessionStatsArray;
- (id)dataWriter;
- (void)dealloc;
- (id)eventsDescription;
- (id)eventsDescription:(bool)arg1;
- (long long)findIndexSessionStatsFromArray:(id)arg1 thatHasLayout:(id)arg2;
- (id)getWordBucketCategoryForWord:(id)arg1;
- (void)handleTypingSession:(id)arg1;
- (id)init:(id)arg1;
- (id)init:(id)arg1 wordsThreshold:(unsigned long long)arg2;
- (id)init:(id)arg1 wordsThreshold:(unsigned long long)arg2 accentedLanguage:(bool)arg3;
- (id)init:(id)arg1 wordsThreshold:(unsigned long long)arg2 accentedLanguage:(bool)arg3 skipTCCAuthorization:(bool)arg4;
- (bool)isLoaded;
- (id)lemmatizeWord:(id)arg1;
- (id)loadDataWithFilename:(id)arg1;
- (void)loadEmojiBucketDictionaryIfNecessary;
- (void)loadWordBucketDictionaryIfNecessary;
- (void)placeTaskOnWorkQueue:(id /* block */)arg1;
- (id)privateEventsDescription;
- (void)processNewSessionStatsArray:(id)arg1;
- (bool)publishIfSessionStatsHasWordCountMoreThanThreshold:(id)arg1 withSessionStartTime:(bool)arg2;
- (void)removeSessionStatsWithNegativeDurationFromArray:(id)arg1 ForTypingSession:(id)arg2;
- (id)savedSessionStatsArray;
- (void)sessionDidEnd:(id)arg1 aligned:(id)arg2;
- (void)setCurrentSessionStatsArray:(id)arg1;
- (void)setDataWriter:(id)arg1;
- (void)setIsLoaded:(bool)arg1;
- (void)setSavedSessionStatsArray:(id)arg1;
- (void)setTypingSession:(id)arg1;
- (void)setWordAccumulationThreshold:(unsigned long long)arg1;
- (void)setupSessionStatsForLayouts;
- (void)testTCCAuthorization;
- (double)totalTimeSpan;
- (double)totalTimeSpanFromLastTap;
- (id)typingSession;
- (unsigned long long)wordAccumulationThreshold;

@end