/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
 */

@interface TUIKeyboardBackendController : NSObject {
    NSMutableSet * _activePaths;
    bool  _applicationIsInBackground;
    TUIKeyboardCandidateMultiplexer * _candidateMultiplexer;
    <TUIKeyboardCandidateReceiver> * _candidateReceiver;
    TUIKeyboardInputManagerMux * _inputManager;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _needsRestoreSupplementalLexicons;
    NSObject<OS_dispatch_source> * _supplementalLexiconWatchdog;
    NSHashTable * _supplementalLexicons;
    bool  _waitingForContinuousPathCandidates;
}

@property (nonatomic, readonly) NSMutableSet *activePaths;
@property (retain) TUIKeyboardCandidateMultiplexer *candidateMultiplexer;
@property (nonatomic) <TUIKeyboardCandidateReceiver> *candidateReceiver;
@property (nonatomic, retain) TUIKeyboardInputManagerMux *inputManager;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *supplementalLexiconWatchdog;
@property (nonatomic, readonly) NSHashTable *supplementalLexicons;

+ (bool)_isSmartReplyEnabled;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_restoreSupplementalLexiconsIfNeeded;
- (void)acceptingCandidateWithTrigger:(id)arg1;
- (id)activePaths;
- (void)addUISupplementalLexicon:(id)arg1;
- (void)adjustPhraseBoundaryInForwardDirection:(bool)arg1 granularity:(int)arg2 keyboardState:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (void)candidateAccepted:(id)arg1 keyboardState:(id)arg2 candidateRquestToken:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)candidateMultiplexer;
- (id)candidateReceiver;
- (void)candidateRejected:(id)arg1;
- (void)changingContextWithTrigger:(id)arg1;
- (id)configuredMultiplexer;
- (void)generateAutocorrectionsWithKeyboardState:(id)arg1 candidateRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 requestToken:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)generateAutocorrectionsWithKeyboardState:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)generateCandidatesWithKeyboardState:(id)arg1 candidateRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 requestToken:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)generateReplacementsForString:(id)arg1 keyLayout:(id)arg2 continuation:(id /* block */)arg3;
- (void)handleAcceptedCandidate:(id)arg1 keyboardState:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)handleKeyboardInput:(id)arg1 keyboardState:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)hasActivePaths;
- (id)init;
- (id)initWithInputManagerMux:(id)arg1;
- (id)initWithInputManagerMux:(id)arg1 candidateMux:(id)arg2;
- (id)inputManager;
- (void)lastAcceptedCandidateCorrected;
- (void)logDiscoverabilityEvent:(int)arg1 userInfo:(id)arg2;
- (void)performHitTestForTouchEvents:(id)arg1 keyboardState:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)removeUISupplementalLexicon:(id)arg1;
- (void)resetPathState;
- (void)setCandidateMultiplexer:(id)arg1;
- (void)setCandidateReceiver:(id)arg1;
- (void)setInputManager:(id)arg1;
- (void)setOriginalInput:(id)arg1;
- (void)setSupplementalLexiconWatchdog:(id)arg1;
- (void)setWaitingForContinuousPathCandidates:(bool)arg1;
- (bool)shouldQueryCandidateMultiplexerForKeyboardState:(id)arg1;
- (void)skipHitTestForTouchEvents:(id)arg1 keyboardState:(id)arg2;
- (void)smartSelectionForTextInDocument:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 language:(id)arg3 tokenizedRanges:(id)arg4 options:(unsigned long long)arg5 completion:(id /* block */)arg6;
- (void)stickerWithIdentifier:(id)arg1 stickerRoles:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)supplementalLexiconWatchdog;
- (id)supplementalLexicons;
- (void)syncToKeyboardState:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)textAccepted:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updatePathStateWithTouchEvents:(id)arg1;
- (bool)waitingForContinuousPathCandidates;
- (void)writeTypologyLogWithCompletionHandler:(id /* block */)arg1;

@end
