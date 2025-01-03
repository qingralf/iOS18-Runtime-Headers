/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/InputAnalytics.framework/InputAnalytics
 */

@interface IASTextInputActionsAnalyzer : IASDailyGarbageCollectionAnalyzer {
    unsigned long long  _charsRemovedBeforeFirstInsertionCount;
    unsigned long long  _emojisRemovedBeforeFirstInsertionCount;
    NSMutableDictionary * _entries;
    bool  _insertionObservedInSession;
    NSDictionary * _keyboardTrialParameters;
    unsigned long long  _largestSessionDeletionLength;
    unsigned long long  _largestSessionInsertionLength;
    NSString * _mostRecentAppBundleId;
    NSString * _mostRecentProcessId;
    NSString * _name;
    bool  _sessionIsModeless;
    long long  _sessionNetCharacters;
}

@property (nonatomic, copy) NSDictionary *keyboardTrialParameters;

+ (id)analyzerWithName:(id)arg1;
+ (id)getOrInitializeArrayFromArray:(id)arg1 forKey:(unsigned long long)arg2 initCapacity:(unsigned long long)arg3;
+ (id)getOrInitializeArrayFromDictionary:(id)arg1 forKey:(id)arg2 initCapacity:(unsigned long long)arg3;
+ (id)getOrInitializeDictionaryFrom:(id)arg1 forKey:(unsigned long long)arg2 initCapacity:(long long)arg3;

- (void).cxx_destruct;
- (id)computeSessionActionsStringOnSession:(id)arg1;
- (void)consumeAction:(id)arg1;
- (id)description;
- (void)enumerateAnalytics;
- (void)enumerateTextInputActionsAnalytics:(id /* block */)arg1;
- (void)increaseCountForAppBundleId:(id)arg1 forSource:(long long)arg2 forActionType:(long long)arg3 forFlagOptions:(long long)arg4 forInputModeKey:(id)arg5 byAnalyzerEntry:(id)arg6;
- (id)initWithAnalyzerSessionId:(id)arg1 sessionManagerDelegate:(id)arg2;
- (id)initWithAnalyzerSessionId:(id)arg1 sessionManagerDelegate:(id)arg2 eventHandler:(id /* block */)arg3;
- (id)initWithEventHandler:(id /* block */)arg1;
- (id)keyboardTrialParameters;
- (void)reset;
- (void)setKeyboardTrialParameters:(id)arg1;
- (bool)shouldBeGarbageCollected;

@end
