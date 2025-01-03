/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

@interface CACSpokenCommand : NSObject <NSCopying> {
    SEL  _action;
    CACCommandRecognizer * _commandRecognizer;
    NSMutableDictionary * _contextEvaluation;
    double  _exectutionStartTime;
    bool  _executedIndirectly;
    id /* block */  _executionCompletionBlock;
    bool  _executionCompletionDeterminedManually;
    NSString * _identifier;
    CACLanguageModel * _languageModelCache;
    NSDictionary * _recognizedParameters;
    NSArray * _strings;
}

@property SEL action;
@property CACCommandRecognizer *commandRecognizer;
@property (retain) NSMutableDictionary *contextEvaluation;
@property bool executedIndirectly;
@property (retain) NSString *identifier;
@property (readonly) bool isCustomCommand;
@property (nonatomic, readonly) bool isRestrictedForAAC;
@property (readonly) CACLanguageModel *languageModel;
@property (readonly) CACLanguageModel *languageModelCache;
@property (retain) NSDictionary *recognizedParameters;
@property (retain) NSArray *strings;

+ (id)attributedStringFromRecognizedCommandParameters:(id)arg1 variantOverrides:(id)arg2;
+ (double)defaultDelayBetweenCommands;
+ (void)displayRecognizedMessageUsingAttributedString:(id)arg1;
+ (id)languageModelFromCommandDictionary:(id)arg1 tokenResolution:(id)arg2 containsBuiltInIdentifier:(bool*)arg3 error:(id*)arg4;
+ (id)stringFromContextEvaluationDictionary:(id)arg1 isCustom:(bool)arg2;

- (void).cxx_destruct;
- (void)_activateKeyboardReturnKey:(id)arg1;
- (id)_axActionOfType:(long long)arg1 forElement:(id)arg2;
- (void)_didShowOverlayWithHintIdentifier:(id)arg1 hint:(id)arg2;
- (void)_displayNumberedGridAtCurrentNumberOfColumnsAndRows;
- (id)_dragActionForLabeledElement:(id)arg1;
- (id)_dropActionForLabeledElement:(id)arg1;
- (id)_elementActionManager;
- (bool)_endDragForLabeledElement:(id)arg1;
- (unsigned int)_getModifierFlag;
- (bool)_handleDisambiguationIfNeededWithBlock:(id /* block */)arg1;
- (void)_handleGestureWithBlock:(id /* block */)arg1;
- (void)_handleTwoPointGestureWithBlock:(id /* block */)arg1;
- (id)_markerRangeForTextSegment;
- (id)_markerRangeForTextSegmentRange;
- (id)_nBestListFromPreviousTextInsertionForAXElement:(id)arg1;
- (bool)_performActionOnTextSegment:(id /* block */)arg1;
- (bool)_performActionOnTextSegmentRange:(id /* block */)arg1;
- (bool)_performScrollingAction:(int)arg1;
- (bool)_performUncheckedScrollAction:(int)arg1 forScrollAreaSupportingAction:(int)arg2;
- (void)_postKeyboardEventsForModifierFlags:(unsigned int)arg1 isKeyDown:(bool)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeFromPreviousTextInsertionForAXElement:(id)arg1;
- (id)_scrollAncestorsFromTopLevelElementsForAction:(int)arg1 categorizedElements:(id*)arg2;
- (void)_scrollWithCount:(unsigned long long)arg1 forAction:(int)arg2;
- (void)_selectTextSegment:(id)arg1 insertionString:(id)arg2 commandIdentifier:(id)arg3;
- (void)_selectTextSegmentRange:(id)arg1 insertionString:(id)arg2 commandIdentifier:(id)arg3;
- (bool)_startDragForLabeledElement:(id)arg1;
- (id)_strippedPhraseStringsFromStrings:(id)arg1;
- (long long)_textSegmentCardinalNumber;
- (long long)_textSegmentCardinalNumberEnd;
- (long long)_textSegmentCardinalNumberStart;
- (bool)_updateGridWithNumberOfColumnsAndRows:(bool)arg1;
- (void)_updateGridWithNumberOfRows:(bool)arg1;
- (SEL)action;
- (void)activateAppLibrary;
- (void)activateAppSwitcher;
- (void)activateApplePay;
- (void)activateControlCenter;
- (void)activateDock;
- (void)activateHomeButton;
- (void)activateLockButton;
- (void)activateNotificationCenter;
- (void)activateSOS;
- (void)activateScreenItem;
- (void)activateSiri;
- (void)activateSpeakScreen;
- (void)activateSpotlight;
- (void)activateSysdiagnose;
- (void)activateTripleClick;
- (void)addSelectionToVocabulary:(id)arg1;
- (void)alwaysShowOverlayGrid;
- (void)alwaysShowOverlayGridWithNumberOfColumns;
- (void)alwaysShowOverlayGridWithNumberOfRows;
- (void)alwaysShowOverlayNames;
- (void)alwaysShowOverlayNumbers;
- (void)applyFormat:(id)arg1;
- (void)armApplePay;
- (void)boldTextSegment:(id)arg1;
- (void)boldTextSegmentRange:(id)arg1;
- (void)cancelGesture;
- (void)capitalizeTextSegment:(id)arg1;
- (void)capitalizeTextSegmentRange:(id)arg1;
- (void)changeTextSegment:(id)arg1;
- (void)changeTextSegmentRange:(id)arg1;
- (void)chooseAllOverlayItems;
- (void)chooseOverlayItem;
- (void)closeApplication;
- (void)closeFrontApplication;
- (id)commandRecognizer;
- (void)completeEditing:(id)arg1;
- (id)contextEvaluation;
- (void)copyTextSegment:(id)arg1;
- (void)copyTextSegmentRange:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)correctSelection:(id)arg1;
- (void)correctTextSegment:(id)arg1;
- (void)correctTextSegmentRange:(id)arg1;
- (void)createCustomCommand;
- (void)cutTextSegment:(id)arg1;
- (void)cutTextSegmentRange:(id)arg1;
- (void)decreaseVolume;
- (void)decreaseZoomLevel;
- (void)decrementItem;
- (void)delete:(id)arg1;
- (void)deleteAll:(id)arg1;
- (void)deleteCurrentCharacter:(id)arg1;
- (void)deleteCurrentLine:(id)arg1;
- (void)deleteCurrentParagraph:(id)arg1;
- (void)deleteCurrentSentence:(id)arg1;
- (void)deleteCurrentWord:(id)arg1;
- (void)deleteNextCharacter:(id)arg1;
- (void)deleteNextLine:(id)arg1;
- (void)deleteNextParagraph:(id)arg1;
- (void)deleteNextSentence:(id)arg1;
- (void)deleteNextWord:(id)arg1;
- (void)deletePreviousCharacter:(id)arg1;
- (void)deletePreviousLine:(id)arg1;
- (void)deletePreviousParagraph:(id)arg1;
- (void)deletePreviousSentence:(id)arg1;
- (void)deletePreviousWord:(id)arg1;
- (void)deleteTextSegment:(id)arg1;
- (void)deleteTextSegmentRange:(id)arg1;
- (id)description;
- (void)disableAssistiveTouch;
- (void)disableAttentionAwareness;
- (void)disableClassicInvertColors;
- (void)disableColorFilters;
- (void)disableCommandAndControl;
- (void)disableFullKeyboardAccess;
- (void)disableReduceWhitePoint;
- (void)disableSmartInvertColors;
- (void)disableSwitchControl;
- (void)disableVoiceOver;
- (void)disableWatchMirroring;
- (void)disableWatchRemoteControl;
- (void)disableZoom;
- (void)doubleTap;
- (void)dragFromPointToPoint;
- (void)enableAssistiveTouch;
- (void)enableAttentionAwareness;
- (void)enableClassicInvertColors;
- (void)enableColorFilters;
- (void)enableFullKeyboardAccess;
- (void)enableReduceWhitePoint;
- (void)enableSmartInvertColors;
- (void)enableSwitchControl;
- (void)enableVoiceOver;
- (void)enableWatchMirroring;
- (void)enableWatchRemoteControl;
- (void)enableZoom;
- (void)endDrag;
- (bool)executedIndirectly;
- (void)extendSelectionBackwardCharactersUsingCardinalNumber:(id)arg1;
- (void)extendSelectionBackwardLinesUsingCardinalNumber:(id)arg1;
- (void)extendSelectionBackwardParagraphsUsingCardinalNumber:(id)arg1;
- (void)extendSelectionBackwardSentencesUsingCardinalNumber:(id)arg1;
- (void)extendSelectionBackwardWordsUsingCardinalNumber:(id)arg1;
- (void)extendSelectionForwardCharactersUsingCardinalNumber:(id)arg1;
- (void)extendSelectionForwardLinesUsingCardinalNumber:(id)arg1;
- (void)extendSelectionForwardParagraphsUsingCardinalNumber:(id)arg1;
- (void)extendSelectionForwardSentencesUsingCardinalNumber:(id)arg1;
- (void)extendSelectionForwardWordsUsingCardinalNumber:(id)arg1;
- (void)extendSelectionToBeginning:(id)arg1;
- (void)extendSelectionToEnd:(id)arg1;
- (void)extendSelectionToTextSegment:(id)arg1;
- (void)goBack;
- (void)goToEndOfDocument:(id)arg1;
- (void)goToEndOfLine:(id)arg1;
- (void)goToEndOfParagraph:(id)arg1;
- (void)goToEndOfSelection:(id)arg1;
- (void)goToEndOfSentence:(id)arg1;
- (void)goToEndOfWord:(id)arg1;
- (void)goToStartOfDocument:(id)arg1;
- (void)goToStartOfLine:(id)arg1;
- (void)goToStartOfParagraph:(id)arg1;
- (void)goToStartOfSelection:(id)arg1;
- (void)goToStartOfSentence:(id)arg1;
- (void)goToStartOfWord:(id)arg1;
- (void)handleLabeledElementFromNameOrNumberWithBlock:(id /* block */)arg1;
- (void)handleLabeledElementsFromTwoNumbersWithBlock:(id /* block */)arg1;
- (void)handleSleepListening;
- (void)handleSpokenCommand:(id)arg1;
- (void)handleWakeListening;
- (void)hangUp;
- (void)hideControlCenter;
- (void)hideElementNames;
- (void)hideNotificationCenter;
- (void)hideNumberedElements;
- (void)hideNumberedGrid;
- (void)hideSearch;
- (void)hideVirtualKeyboard;
- (id)identifier;
- (void)increaseVolume;
- (void)increaseZoomLevel;
- (void)incrementItem;
- (id)initWithProperties:(id)arg1;
- (id)initWithSpokenCommand:(id)arg1;
- (void)insertDate:(id)arg1;
- (void)insertEmoji:(id)arg1;
- (void)insertPhraseAfterTextSegment:(id)arg1;
- (void)insertPhraseBeforeTextSegment:(id)arg1;
- (bool)isCompletionDeterminedManually;
- (bool)isCustomCommand;
- (bool)isExectuting;
- (bool)isListening;
- (bool)isRestrictedForAAC;
- (void)italicizeTextSegment:(id)arg1;
- (void)italicizeTextSegmentRange:(id)arg1;
- (id)languageModel;
- (id)languageModelCache;
- (void)lockScreen;
- (void)longPress;
- (void)lowercaseTextSegment:(id)arg1;
- (void)lowercaseTextSegmentRange:(id)arg1;
- (void)maximize3DTouch;
- (void)maximizeZoomLevel;
- (void)minimizeZoomLevel;
- (void)moveBackwardCharactersUsingCardinalNumber:(id)arg1;
- (void)moveBackwardLinesUsingCardinalNumber:(id)arg1;
- (void)moveBackwardParagraphsUsingCardinalNumber:(id)arg1;
- (void)moveBackwardSentencesUsingCardinalNumber:(id)arg1;
- (void)moveBackwardWordsUsingCardinalNumber:(id)arg1;
- (void)moveDown:(id)arg1;
- (void)moveDownLinesUsingCardinalNumber:(id)arg1;
- (void)moveDownParagraphsUsingCardinalNumber:(id)arg1;
- (void)moveForwardCharactersUsingCardinalNumber:(id)arg1;
- (void)moveForwardLinesUsingCardinalNumber:(id)arg1;
- (void)moveForwardParagraphsUsingCardinalNumber:(id)arg1;
- (void)moveForwardSentencesUsingCardinalNumber:(id)arg1;
- (void)moveForwardWordsUsingCardinalNumber:(id)arg1;
- (void)moveLeft:(id)arg1;
- (void)moveLeftCharactersUsingCardinalNumber:(id)arg1;
- (void)moveLeftSentencesUsingCardinalNumber:(id)arg1;
- (void)moveLeftWordsUsingCardinalNumber:(id)arg1;
- (void)moveRight:(id)arg1;
- (void)moveRightCharactersUsingCardinalNumber:(id)arg1;
- (void)moveRightSentencesUsingCardinalNumber:(id)arg1;
- (void)moveRightWordsUsingCardinalNumber:(id)arg1;
- (void)moveToEndOfTextSegment:(id)arg1;
- (void)moveToStartOfTextSegment:(id)arg1;
- (void)moveUp:(id)arg1;
- (void)moveUpLinesUsingCardinalNumber:(id)arg1;
- (void)moveUpParagraphsUsingCardinalNumber:(id)arg1;
- (void)openApplication;
- (void)panDown;
- (void)panLeft;
- (void)panRight;
- (void)panUp;
- (void)panZoomDown;
- (void)panZoomLeft;
- (void)panZoomRight;
- (void)panZoomUp;
- (void)pasteboardCopy:(id)arg1;
- (void)pasteboardCut:(id)arg1;
- (void)pasteboardPaste:(id)arg1;
- (void)performAction;
- (void)postKeyboardEventWithKeyCode:(unsigned short)arg1 modifierFlags:(unsigned int)arg2 isKeyDown:(bool)arg3;
- (void)pressKeyboardKey;
- (void)pressOverlayItem;
- (void)putCurlyBracesAroundTextSegment:(id)arg1;
- (void)putCurlyBracesAroundTextSegmentRange:(id)arg1;
- (void)putDoubleCurlyQuotesAroundTextSegment:(id)arg1;
- (void)putDoubleCurlyQuotesAroundTextSegmentRange:(id)arg1;
- (void)putDoubleQuotesAroundTextSegment:(id)arg1;
- (void)putDoubleQuotesAroundTextSegmentRange:(id)arg1;
- (void)putParenthesesAroundTextSegment:(id)arg1;
- (void)putParenthesesAroundTextSegmentRange:(id)arg1;
- (void)putSingleCurlyQuotesAroundTextSegment:(id)arg1;
- (void)putSingleCurlyQuotesAroundTextSegmentRange:(id)arg1;
- (void)putSingleQuotesAroundTextSegment:(id)arg1;
- (void)putSingleQuotesAroundTextSegmentRange:(id)arg1;
- (void)putSquareBracketsAroundTextSegment:(id)arg1;
- (void)putSquareBracketsAroundTextSegmentRange:(id)arg1;
- (void)reboot;
- (id)recognizedParameters;
- (void)repeatPreviousCommand;
- (void)rotateLeft;
- (void)rotateRight;
- (void)rotateToLandscape;
- (void)rotateToPortrait;
- (void)scrollPageDown;
- (void)scrollPageLeft;
- (void)scrollPageRight;
- (void)scrollPageUp;
- (void)scrollToBottom;
- (bool)scrollToLandmark;
- (void)scrollToLeftEdge;
- (void)scrollToRightEdge;
- (void)scrollToTop;
- (void)searchSpotlight;
- (void)searchWeb;
- (void)selectAll:(id)arg1;
- (void)selectCurrentCharacter:(id)arg1;
- (void)selectCurrentLine:(id)arg1;
- (void)selectCurrentParagraph:(id)arg1;
- (void)selectCurrentSentence:(id)arg1;
- (void)selectCurrentWord:(id)arg1;
- (void)selectNext:(id)arg1;
- (void)selectNextCharacter:(id)arg1;
- (void)selectNextLine:(id)arg1;
- (void)selectNextParagraph:(id)arg1;
- (void)selectNextSentence:(id)arg1;
- (void)selectNextWord:(id)arg1;
- (void)selectPhrase:(id)arg1;
- (void)selectPhraseThroughPhrase:(id)arg1;
- (void)selectPrevious:(id)arg1;
- (void)selectPreviousCharacter:(id)arg1;
- (void)selectPreviousLine:(id)arg1;
- (void)selectPreviousParagraph:(id)arg1;
- (void)selectPreviousSentence:(id)arg1;
- (void)selectPreviousTextInsertion:(id)arg1;
- (void)selectPreviousWord:(id)arg1;
- (void)selectTextSegment:(id)arg1;
- (void)selectTextSegment:(id)arg1 postAction:(id /* block */)arg2;
- (void)selectTextSegmentRange:(id)arg1;
- (void)selectTextSegmentRange:(id)arg1 postAction:(id /* block */)arg2;
- (void)setAction:(SEL)arg1;
- (void)setCommandRecognizer:(id)arg1;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setCompletionDeterminedManually:(bool)arg1;
- (void)setContextEvaluation:(id)arg1;
- (void)setExecutedIndirectly:(bool)arg1;
- (void)setExecuting:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setRecognizedParameters:(id)arg1;
- (void)setStrings:(id)arg1;
- (void)shake;
- (void)showAccessibilityActions;
- (void)showActiveCommands;
- (void)showCharacters;
- (void)showCommands;
- (void)showElementNames;
- (void)showGridWithNumberOfColumns;
- (void)showLines;
- (void)showNumberedCharacters;
- (void)showNumberedElements;
- (void)showNumberedGrid;
- (void)showNumberedLines;
- (void)showNumberedParagraphs;
- (void)showNumberedSentences;
- (void)showNumberedWords;
- (void)showParagraphs;
- (void)showSentences;
- (void)showTraining;
- (void)showVirtualKeyboard;
- (void)showVocabulary;
- (void)showWords;
- (void)sleepCarPlay;
- (void)start3DTouch;
- (void)startCommandMode;
- (void)startDictationMode;
- (void)startDrag;
- (void)startHoldAndDrag;
- (void)startNumberMode;
- (void)startRecordingGesture;
- (void)startRecordingUserActions;
- (void)startSpellingMode;
- (void)stopRecordingGesture;
- (void)stopRecordingUserActions;
- (id)strings;
- (void)surroundSelectionWithPunctuation:(id)arg1;
- (void)swipeDown;
- (void)swipeLeft;
- (void)swipeRight;
- (void)swipeUp;
- (void)systemDoubleLightPressCameraButton;
- (void)systemLightPressCameraButton;
- (void)systemLongPressCameraButton;
- (void)systemPressCameraButton;
- (void)takeScreenshot;
- (void)tap;
- (void)toggleDock;
- (void)toggleMute;
- (void)toggleRingerSwitchOff;
- (void)toggleRingerSwitchOn;
- (void)tripleClick;
- (void)twoFingerDoubleTap;
- (void)twoFingerLongPress;
- (void)twoFingerPanDown;
- (void)twoFingerPanLeft;
- (void)twoFingerPanRight;
- (void)twoFingerPanUp;
- (void)twoFingerSwipeDown;
- (void)twoFingerSwipeLeft;
- (void)twoFingerSwipeRight;
- (void)twoFingerSwipeUp;
- (void)twoFingerTap;
- (void)underlineTextSegment:(id)arg1;
- (void)underlineTextSegmentRange:(id)arg1;
- (void)unselect:(id)arg1;
- (void)uppercaseTextSegment:(id)arg1;
- (void)uppercaseTextSegmentRange:(id)arg1;
- (void)voActivate;
- (void)voMagicTap;
- (void)voReadAll;
- (void)voSelect;
- (void)voSelectFirstItem;
- (void)voSelectLastItem;
- (void)voSelectNextApp;
- (void)voSelectNextItem;
- (void)voSelectNextRotor;
- (void)voSelectNextRotorOption;
- (void)voSelectPreviousApp;
- (void)voSelectPreviousItem;
- (void)voSelectPreviousRotor;
- (void)voSelectPreviousRotorOption;
- (void)voSelectStatusBar;
- (void)voShowItemChooser;
- (void)voSpeakSummary;
- (void)voStopSpeaking;
- (void)voToggleScreenCurtain;
- (void)wakeCarPlay;
- (void)zoomIn;
- (void)zoomOut;

@end
