/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TITypingSession : NSObject <NSSecureCoding, TIKeyboardInteractionObserver> {
    NSString * _applicationID;
    NSMutableArray * _cachedCandidatesOffered;
    NSMutableArray * _cachedKeyboardStates;
    double  _calibratedTimeBase;
    NSString * _candidateAcceptedTrigger;
    int  _candidatesAccepted;
    int  _candidatesAcceptedWithText;
    NSString * _contextChangeTrigger;
    unsigned long long  _currentLayoutID;
    TIWordEntry * _currentWord;
    bool  _didReceiveSecureFieldEvent;
    NSDate * _endTime;
    TIFeatureUsageMetricsCache * _featureUsageMetricsCache;
    bool  _fromLegacyRecording;
    bool  _includeInputToLastDeletion;
    bool  _includeInputToLastWord;
    long long  _lastActivePathIndex;
    TIDeleteWordEvent * _lastDeletion;
    TIKeyboardInput * _lastInput;
    TIWordEntry * _lastWord;
    NSString * _layoutName;
    NSMutableArray * _layouts;
    NSLocale * _locale;
    NSArray * _originalWords;
    TIKeyboardState * _savedDeleteInputKeyboardState;
    NSUUID * _sessionId;
    TITypingSessionParams * _sessionParams;
    NSString * _startContext;
    NSDate * _startTime;
    TIKeyboardTouchEvent * _timeCalibrationTouch;
    NSMutableDictionary * _touchesHistory;
    NSMutableArray * _userActionHistory;
}

@property (nonatomic, copy) NSString *applicationID;
@property double calibratedTimeBase;
@property (nonatomic, retain) NSString *candidateAcceptedTrigger;
@property (nonatomic) int candidatesAccepted;
@property (nonatomic) int candidatesAcceptedWithText;
@property (nonatomic, retain) NSString *contextChangeTrigger;
@property (nonatomic) unsigned long long currentLayoutID;
@property (nonatomic, retain) TIWordEntry *currentWord;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didReceiveSecureFieldEvent;
@property (nonatomic, retain) NSDate *endTime;
@property (nonatomic, retain) TIFeatureUsageMetricsCache *featureUsageMetricsCache;
@property (nonatomic) bool fromLegacyRecording;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool includeInputToLastDeletion;
@property (nonatomic) bool includeInputToLastWord;
@property (nonatomic) long long lastActivePathIndex;
@property (nonatomic, retain) TIDeleteWordEvent *lastDeletion;
@property (nonatomic, retain) TIKeyboardInput *lastInput;
@property (nonatomic, retain) TIWordEntry *lastWord;
@property (nonatomic, copy) NSString *layoutName;
@property (nonatomic, retain) NSMutableArray *layouts;
@property (nonatomic, retain) NSLocale *locale;
@property (nonatomic, retain) NSArray *originalWords;
@property (nonatomic, retain) TIKeyboardState *savedDeleteInputKeyboardState;
@property (nonatomic, retain) NSUUID *sessionId;
@property (nonatomic, retain) TITypingSessionParams *sessionParams;
@property (nonatomic, copy) NSString *startContext;
@property (nonatomic, retain) NSDate *startTime;
@property (readonly) Class superclass;
@property (retain) TIKeyboardTouchEvent *timeCalibrationTouch;
@property (nonatomic, retain) NSMutableDictionary *touchesHistory;
@property (nonatomic, retain) NSMutableArray *userActionHistory;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)acceptingCandidateWithTrigger:(id)arg1;
- (void)addDrawInputWithSyllableCount:(unsigned long long)arg1 keyboardState:(id)arg2;
- (void)addKeyInput:(id)arg1 keyboardState:(id)arg2;
- (void)addTouchEvent:(id)arg1;
- (id)applicationID;
- (double)calibratedCurrentTimestamp;
- (double)calibratedTimeBase;
- (void)candidateAccepted:(id)arg1 withInput:(id)arg2 documentState:(id)arg3 inputContext:(id)arg4 inputStem:(id)arg5 predictionBarHit:(bool)arg6 useCandidateSelection:(bool)arg7 candidateIndex:(long long)arg8 keyboardState:(id)arg9;
- (id)candidateAcceptedTrigger;
- (int)candidatesAccepted;
- (int)candidatesAcceptedWithText;
- (void)candidatesOffered:(id)arg1 keyboardState:(id)arg2;
- (void)changingContextWithTrigger:(id)arg1;
- (id)committedWordDeletionWithDocumentState:(id)arg1 keyboardState:(id)arg2;
- (id)contextChangeTrigger;
- (void)contextDidChange:(id)arg1 wordDelete:(bool)arg2 cursorMoved:(bool)arg3 extendsPriorWord:(bool)arg4 inWord:(id)arg5 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6 selectionLocation:(unsigned long long)arg7 keyboardState:(id)arg8;
- (id)createContextChangeEventWithClass:(Class)arg1 documentState:(id)arg2 keyboardState:(id)arg3 extendsPriorWord:(bool)arg4 inWord:(id)arg5 inWordRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6 selectionLocation:(unsigned long long)arg7;
- (id)currentInputsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (unsigned long long)currentLayoutID;
- (id)currentLayoutsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)currentTouchesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)currentWord;
- (id)description;
- (bool)didReceiveSecureFieldEvent;
- (void)encodeWithCoder:(id)arg1;
- (void)endSessionWithTimestamp:(id)arg1;
- (id)endTime;
- (id)featureUsageMetricsCache;
- (bool)fromLegacyRecording;
- (void)handleUncommittedWord;
- (bool)includeInputToLastDeletion;
- (bool)includeInputToLastWord;
- (id)init;
- (void)initContextChangeEvent:(id)arg1 withDocumentState:(id)arg2 keyboardState:(id)arg3 extendsPriorWord:(bool)arg4 inWord:(id)arg5 inWordRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6 selectionLocation:(unsigned long long)arg7;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocale:(id)arg1 keyboardLayout:(id)arg2;
- (void)insertUncommittedUserAction:(id)arg1;
- (bool)isCurrentWordEmpty;
- (id)keyStringWithCode:(long long)arg1 fromLayoutIndex:(id)arg2;
- (long long)lastActivePathIndex;
- (id)lastDeletion;
- (id)lastInput;
- (id)lastWord;
- (void)layoutDidChange:(id)arg1 keyboardState:(id)arg2;
- (id)layoutName;
- (id)layouts;
- (id)locale;
- (id)originalWords;
- (void)removeInputsAndTouchesWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)removeInputsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)removeLayoutsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)removeTouchesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)resetCurrentWord;
- (void)resolveInputs:(id)arg1 cancelledTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2 leadingBackspaceRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3 trailingTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg4;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })safeRangeFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 fromArray:(id)arg2;
- (id)savedDeleteInputKeyboardState;
- (id)sessionId;
- (id)sessionParams;
- (void)setApplicationID:(id)arg1;
- (void)setCalibratedTimeBase:(double)arg1;
- (void)setCandidateAcceptedTrigger:(id)arg1;
- (void)setCandidatesAccepted:(int)arg1;
- (void)setCandidatesAcceptedWithText:(int)arg1;
- (void)setClientID:(id)arg1 keyboardState:(id)arg2;
- (void)setContextChangeTrigger:(id)arg1;
- (void)setCurrentLayoutID:(unsigned long long)arg1;
- (void)setCurrentWord:(id)arg1;
- (void)setDidReceiveSecureFieldEvent:(bool)arg1;
- (void)setEndTime:(id)arg1;
- (void)setFeatureUsageMetricsCache:(id)arg1;
- (void)setFromLegacyRecording:(bool)arg1;
- (void)setIncludeInputToLastDeletion:(bool)arg1;
- (void)setIncludeInputToLastWord:(bool)arg1;
- (void)setLastActivePathIndex:(long long)arg1;
- (void)setLastDeletion:(id)arg1;
- (void)setLastInput:(id)arg1;
- (void)setLastWord:(id)arg1;
- (void)setLayoutName:(id)arg1;
- (void)setLayouts:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setOriginalWords:(id)arg1;
- (void)setSavedDeleteInputKeyboardState:(id)arg1;
- (void)setSessionId:(id)arg1;
- (void)setSessionParams:(id)arg1;
- (void)setStartContext:(id)arg1;
- (void)setStartTime:(id)arg1;
- (void)setTimeCalibrationTouch:(id)arg1;
- (void)setTouchesHistory:(id)arg1;
- (void)setUserActionHistory:(id)arg1;
- (id)startContext;
- (void)startSessionWithTimestamp:(id)arg1;
- (id)startTime;
- (bool)testForRapidDeleteContextChange:(id)arg1;
- (id)timeCalibrationTouch;
- (id)touchesHistory;
- (id)uncommittedWordDeletionFromInputsWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)uncommittedWordEntryFromInputsWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 documentState:(id)arg2 cancelled:(bool)arg3;
- (void)updateCachedStateAfterLastInputWithKeyboardState:(id)arg1;
- (void)updateCachedStateBeforeFirstInputWithKeyboardState:(id)arg1;
- (id)userActionHistory;

@end