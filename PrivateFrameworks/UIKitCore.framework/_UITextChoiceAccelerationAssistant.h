/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UITextChoiceAccelerationAssistant : NSObject <_UITextChoiceAccelerationPassthroughDelegate, _UITextChoiceInteractionDelegate> {
    TIKeyboardCandidate * _candidate;
    <_UITextChoicesAssistantDelegate> * _delegate;
    <_UIAssertion> * _dictationDisambiguationUIAssertion;
    NSTimer * _dictationPromptAutoUpdateTimer;
    NSTimer * _dictationUnderlineDisplayTimer;
    NSMutableArray * _dictationVoiceEditingPrompts;
    NSString * _documentTextToReplace;
    <_UIAssertion> * _grabberSuppressionAssertion;
    UITextInteractionAssistant * _interactionAssistant;
    bool  _keepPromptActive;
    UITextPosition * _lastAddedPosition;
    TIAutocorrectionList * _lastList;
    UITextRange * _lastRange;
    bool  _needsUpdate;
    _UITextChoiceAccelerationPassthroughView * _passthroughContainer;
    _UITextChoiceAccelerationBubble * _prompt;
    NSTimer * _promptDisplayTimer;
    NSMutableDictionary * _savedLists;
    NSArray * _secureCandidateHashes;
    _UITextUnderlineView * _selectionHighlightView;
    _UIReplacementCandidate * _stashedReplacement;
    _UITextChoiceInteraction * _textChoiceInteraction;
    <_UIAssertion> * _textChoiceInteractionGrabberSuppressionAssertion;
    UIResponder<UITextInput> * _textInputResponder;
    NSMutableArray * _underlinedRanges;
    NSMutableDictionary * _underlinedWordData;
    NSMutableDictionary * _underlinedWordDataForDictation;
    bool  _usingCustomInteraction;
}

@property (nonatomic, readonly) TIKeyboardCandidate *candidate;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <_UITextChoicesAssistantDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <_UIAssertion> *dictationDisambiguationUIAssertion;
@property (nonatomic, retain) NSTimer *dictationPromptAutoUpdateTimer;
@property (nonatomic, retain) NSTimer *dictationUnderlineDisplayTimer;
@property (nonatomic, retain) NSMutableArray *dictationVoiceEditingPrompts;
@property (nonatomic, retain) NSString *documentTextToReplace;
@property (nonatomic) <_UIAssertion> *grabberSuppressionAssertion;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UITextInteractionAssistant *interactionAssistant;
@property (nonatomic) bool keepPromptActive;
@property (nonatomic, retain) UITextPosition *lastAddedPosition;
@property (nonatomic, retain) TIAutocorrectionList *lastList;
@property (nonatomic, retain) UITextRange *lastRange;
@property (nonatomic) bool needsUpdate;
@property (nonatomic, retain) _UITextChoiceAccelerationPassthroughView *passthroughContainer;
@property (nonatomic, retain) _UITextChoiceAccelerationBubble *prompt;
@property (nonatomic, retain) NSTimer *promptDisplayTimer;
@property (nonatomic, retain) NSMutableDictionary *savedLists;
@property (nonatomic, retain) _UITextUnderlineView *selectionHighlightView;
@property (readonly) Class superclass;
@property (nonatomic, retain) _UITextChoiceInteraction *textChoiceInteraction;
@property (nonatomic, retain) <_UIAssertion> *textChoiceInteractionGrabberSuppressionAssertion;
@property (nonatomic, readonly) UIResponder<UITextInput> *textInputResponder;
@property (nonatomic, retain) NSMutableArray *underlinedRanges;
@property (nonatomic, retain) NSMutableDictionary *underlinedWordData;
@property (nonatomic, retain) NSMutableDictionary *underlinedWordDataForDictation;
@property (nonatomic) bool usingCustomInteraction;

- (void).cxx_destruct;
- (void)_addUnderlineView;
- (id)_document;
- (id)_existingUnderlineView;
- (id)_rangeOfText:(id)arg1 endingAtPosition:(id)arg2;
- (void)_removeUnderlinesRelativeToPosition:(id)arg1 compare:(long long)arg2;
- (id)_underlineView;
- (void)activateUnderlineViewIfNeeded;
- (id)activeSelectedRange;
- (void)addList:(id)arg1 forCandidate:(id)arg2;
- (void)addUnderlineForCandidate:(id)arg1 range:(id)arg2;
- (void)addUnderlinesForCandidate:(id)arg1 range:(id)arg2;
- (void)adjustRangesAfterPosition:(id)arg1 byOffset:(long long)arg2;
- (id)alternateCorrectionsForList:(id)arg1;
- (id)anchorRangeForText:(id)arg1;
- (bool)autocorrectInlinePromptIsVisible;
- (id)autocorrectionForList:(id)arg1;
- (void)cancelPendingDictationPromptDisplay;
- (void)cancelPromptDisplay;
- (id)candidate;
- (id)candidateForFinalString:(id)arg1;
- (void)clearSecureCandidateHashes;
- (void)clearUnderlineForPosition:(id)arg1;
- (void)clearUnderlinesIfNeededBeforePosition:(id)arg1;
- (void)clearUnderlinesInRange:(id)arg1 animated:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertedSelectionRect:(id)arg1;
- (id)createPromptWithCompletionHandler:(id /* block */)arg1;
- (id)currentKeyboardSceneDelegate;
- (void)dealloc;
- (void)decorateTextInRanges:(id)arg1 replacementText:(id)arg2 allowAutomaticReplacement:(bool)arg3 autoHide:(bool)arg4 voiceCommandTrackingUUID:(id)arg5 withCompletionHandler:(id /* block */)arg6;
- (void)decorateTextInRects:(id)arg1 targetTextArray:(id)arg2 replacementText:(id)arg3 deltaRanges:(id)arg4 originalSelectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg5 allowAutomaticReplacement:(bool)arg6 autoHide:(bool)arg7 voiceCommandUUID:(id)arg8 withCompletionHandler:(id /* block */)arg9;
- (id)defaultUnderlineColor;
- (id)delegate;
- (id)dictationDisambiguationUIAssertion;
- (id)dictationPromptAutoUpdateTimer;
- (id)dictationUnderlineDisplayTimer;
- (id)dictationVoiceEditingPrompts;
- (void)didRecognizeDismissal;
- (bool)dismissIfPresented;
- (void)dismissWithoutSelection;
- (void)displayDidChange:(id)arg1;
- (id)documentTextToReplace;
- (void)fullAutocorrectionForWord:(id)arg1 atPosition:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)grabberSuppressionAssertion;
- (void)informAnalyticsOfCompletedCandidateReplacement;
- (void)informAnalyticsOfUpcomingCandidateReplacement;
- (id)init;
- (id)initWithInteractionAssistant:(id)arg1;
- (id)initWithTextInputResponder:(id)arg1;
- (id)interactionAssistant;
- (bool)keepPromptActive;
- (id)keyFromRange:(id)arg1;
- (id)lastAddedPosition;
- (id)lastList;
- (id)lastRange;
- (id)listForFinalString:(id)arg1;
- (bool)needsUpdate;
- (id)parentViewForPrompt;
- (id)passthroughContainer;
- (void)passthruViewDidChangeSize;
- (bool)positionIsAtDocumentStart:(id)arg1;
- (void)presentIfNeededForRange:(id)arg1;
- (bool)presentTextChoicePromptForText:(id)arg1 delay:(double)arg2 autocorrectionRects:(id)arg3;
- (id)prompt;
- (id)promptDisplayTimer;
- (bool)promptIsVisible;
- (id)rangeForTextChoicesAtPosition:(id)arg1;
- (id)rangeOfAutocorrectionForString:(id)arg1 atPosition:(id)arg2 inDocument:(id)arg3;
- (void)refreshExistingUnderlines;
- (void)releaseSelectionGrabberAssertion;
- (void)removeActivePromptAndUnderline;
- (void)removeAllUnderlines;
- (void)removeAllUnderlinesAnimated:(bool)arg1;
- (void)removePassthroughContainer;
- (void)removeUnderlinesAfterPosition:(id)arg1;
- (void)removeUnderlinesBeforePosition:(id)arg1;
- (void)removeWordForRange:(id)arg1;
- (void)removeWordForRange:(id)arg1 animated:(bool)arg2;
- (void)resetDictationChoices;
- (void)resetDictationUnderlines;
- (void)restoreInsertionPointPositionWithDocument:(id)arg1 originalPositionRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 targetRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 payloadRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 contextBefore:(bool)arg5;
- (id)savedLists;
- (void)selectionDidChange;
- (id)selectionHighlightView;
- (id)selectionRectsForRange:(id)arg1;
- (id)selectionViewManager;
- (void)setDelegate:(id)arg1;
- (void)setDictationDisambiguationUIAssertion:(id)arg1;
- (void)setDictationPromptAutoUpdateTimer:(id)arg1;
- (void)setDictationUnderlineDisplayTimer:(id)arg1;
- (void)setDictationVoiceEditingPrompts:(id)arg1;
- (void)setDocumentTextToReplace:(id)arg1;
- (void)setGrabberSuppressionAssertion:(id)arg1;
- (void)setKeepPromptActive:(bool)arg1;
- (void)setLastAddedPosition:(id)arg1;
- (void)setLastList:(id)arg1;
- (void)setLastRange:(id)arg1;
- (void)setNeedsUnderlineUpdate;
- (void)setNeedsUpdate:(bool)arg1;
- (void)setPassthroughContainer:(id)arg1;
- (void)setPrompt:(id)arg1;
- (void)setPromptDisplayTimer:(id)arg1;
- (void)setSavedLists:(id)arg1;
- (void)setSelectionHighlightView:(id)arg1;
- (void)setTextChoiceInteraction:(id)arg1;
- (void)setTextChoiceInteractionGrabberSuppressionAssertion:(id)arg1;
- (void)setUnderlinedRanges:(id)arg1;
- (void)setUnderlinedWordData:(id)arg1;
- (void)setUnderlinedWordDataForDictation:(id)arg1;
- (void)setUsingCustomInteraction:(bool)arg1;
- (void)setupPassthroughContainer;
- (void)shouldShowPromptForWebKitText:(id)arg1 atPosition:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)showAutocorrectReplacementChoicesIfNeeded:(id)arg1 forRange:(id)arg2;
- (bool)showChoicesForAutocorrectionCandidate:(id)arg1 range:(id)arg2;
- (bool)showChoicesForAutocorrectionCandidate:(id)arg1 range:(id)arg2 delay:(double)arg3;
- (bool)showChoicesForCandidates:(id)arg1;
- (bool)showChoicesForTextInRange:(id)arg1;
- (bool)showChoicesForTextInRange:(id)arg1 withReplacements:(id)arg2 delay:(double)arg3;
- (bool)showDictationChoicesForTextInRange:(id)arg1;
- (bool)showPromptForReplacementCandidate:(id)arg1;
- (bool)showPromptForReplacementCandidate:(id)arg1 delay:(double)arg2;
- (bool)showPromptForReplacementCandidate:(id)arg1 originalCandidate:(id)arg2 delay:(double)arg3;
- (bool)showingAutocorrectInlinePrompt;
- (bool)showingPrompt;
- (bool)showingPromptsIncludingDictationChoices;
- (id)sourceView;
- (id)textChoiceInteraction;
- (void)textChoiceInteraction:(id)arg1 receivedTapAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (bool)textChoiceInteraction:(id)arg1 shouldRespondToTapAtPoint:(struct CGPoint { double x1; double x2; })arg2;
- (id)textChoiceInteractionGrabberSuppressionAssertion;
- (void)textDidEndScrolling;
- (id)textHighlightColor;
- (id)textInputResponder;
- (id)textInputView;
- (void)textWillBeginScrolling;
- (void)trackUnderlineForWebKitCandidate:(id)arg1;
- (id)underlineRectForTextSelectionRect:(id)arg1 forCandidate:(id)arg2;
- (id)underlineRectFromDocumentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)underlineRectsForCandidate:(id)arg1 range:(id)arg2;
- (id)underlineRectsForCandidate:(id)arg1 selectionRects:(id)arg2;
- (id)underlineRectsForInput:(id)arg1;
- (void)underlineTextInRange:(id)arg1 revertText:(id)arg2;
- (void)underlineTextInRange:(id)arg1 revertText:(id)arg2 textChoices:(id)arg3 isActiveEditingSession:(bool)arg4;
- (id)underlinedRanges;
- (id)underlinedWordData;
- (id)underlinedWordDataForDictation;
- (void)updateActivePromptForCandidate:(id)arg1 displayRects:(id)arg2 highlightOnly:(bool)arg3;
- (void)updateDictationChoicesFromPromptIndex:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)updateDocumentFromPrompt:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updatePrompt:(id)arg1 forReplacementCandidate:(id)arg2;
- (void)updatePromptLocation:(id)arg1;
- (void)updateReplacements:(id)arg1 forCandidate:(id)arg2;
- (void)updateReplacementsForSavedCandidate:(id)arg1;
- (void)updateSelectionHighlights;
- (void)updateUnderlineGeometryIfNeeded;
- (id)updateUnderlineRects:(id)arg1 forRange:(id)arg2;
- (void)updateUnderlinesForAddedRange:(id)arg1;
- (void)updateUnderlinesIfNeededAfterPosition:(id)arg1;
- (bool)usingCustomInteraction;

@end