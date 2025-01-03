/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIFindNavigatorResponder : UIResponder <UITextInput, UITextInputTraits_Private> {
    bool  _canBecomeFirstResponder;
    UIView * _collapsedInputView;
    _UIFindNavigatorViewController * _findNavigatorViewController;
    bool  _isChangingInputModes;
    bool  _showsCollapsedInputView;
    UITextPosition * beginningOfDocument;
    UITextPosition * endOfDocument;
    <UITextInputDelegate> * inputDelegate;
    UITextRange * markedTextRange;
    NSDictionary * markedTextStyle;
    UITextRange * selectedTextRange;
    <UITextInputTokenizer> * tokenizer;
}

@property (nonatomic, copy) NSIndexSet *PINEntrySeparatorIndexes; /* unknown property attribute: ? */
@property (nonatomic) bool acceptsDictationSearchResults; /* unknown property attribute: ? */
@property (nonatomic) bool acceptsEmoji; /* unknown property attribute: ? */
@property (nonatomic) bool acceptsFloatingKeyboard; /* unknown property attribute: ? */
@property (nonatomic) bool acceptsInitialEmojiKeyboard; /* unknown property attribute: ? */
@property (nonatomic) bool acceptsPayloads; /* unknown property attribute: ? */
@property (nonatomic) bool acceptsSplitKeyboard; /* unknown property attribute: ? */
@property unsigned long long allowedWritingToolsResultOptions; /* unknown property attribute: ? */
@property (nonatomic) long long allowsTextAnimationsType; /* unknown property attribute: ? */
@property (nonatomic) long long autocapitalizationType; /* unknown property attribute: ? */
@property (nonatomic, copy) NSString *autocorrectionContext; /* unknown property attribute: ? */
@property (nonatomic) long long autocorrectionType; /* unknown property attribute: ? */
@property (nonatomic, readonly) UITextPosition *beginningOfDocument;
@property (nonatomic) bool canBecomeFirstResponder;
@property (nonatomic) bool contentsIsSingleValue; /* unknown property attribute: ? */
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) bool deferBecomingResponder; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (getter=isDevicePasscodeEntry, nonatomic) bool devicePasscodeEntry; /* unknown property attribute: ? */
@property (nonatomic) bool disableHandwritingKeyboard; /* unknown property attribute: ? */
@property (nonatomic) bool disableInputBars; /* unknown property attribute: ? */
@property (nonatomic) bool disablePrediction; /* unknown property attribute: ? */
@property (nonatomic) bool displaySecureEditsUsingPlainText; /* unknown property attribute: ? */
@property (nonatomic) bool displaySecureTextUsingPlainText; /* unknown property attribute: ? */
@property (getter=isEditable, nonatomic, readonly) bool editable; /* unknown property attribute: ? */
@property (nonatomic) int emptyContentReturnKeyType; /* unknown property attribute: ? */
@property (nonatomic) bool enablesReturnKeyAutomatically; /* unknown property attribute: ? */
@property (nonatomic) bool enablesReturnKeyOnNonWhiteSpaceContent; /* unknown property attribute: ? */
@property (nonatomic, readonly) UITextPosition *endOfDocument;
@property (nonatomic, retain) _UIFindNavigatorViewController *findNavigatorViewController;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } floatingKeyboardEdgeInsets; /* unknown property attribute: ? */
@property (nonatomic) bool forceDefaultDictationInfo; /* unknown property attribute: ? */
@property (nonatomic) long long forceDictationKeyboardType; /* unknown property attribute: ? */
@property (nonatomic) bool forceDisableDictation; /* unknown property attribute: ? */
@property (nonatomic) bool forceEnableDictation; /* unknown property attribute: ? */
@property (nonatomic) bool forceFloatingKeyboard; /* unknown property attribute: ? */
@property (nonatomic) bool forceSpellingDictation; /* unknown property attribute: ? */
@property (nonatomic) bool hasDefaultContents; /* unknown property attribute: ? */
@property (nonatomic, readonly) bool hasText;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hidePrediction; /* unknown property attribute: ? */
@property (nonatomic) long long inlineCompletionType; /* unknown property attribute: ? */
@property (nonatomic) long long inlinePredictionType; /* unknown property attribute: ? */
@property (nonatomic, retain) UIInputContextHistory *inputContextHistory; /* unknown property attribute: ? */
@property (nonatomic) <UITextInputDelegate> *inputDelegate;
@property (nonatomic, readonly) id insertDictationResultPlaceholder; /* unknown property attribute: ? */
@property (nonatomic, retain) UIColor *insertionPointColor; /* unknown property attribute: ? */
@property (nonatomic) unsigned long long insertionPointWidth; /* unknown property attribute: ? */
@property (nonatomic) bool isCarPlayIdiom; /* unknown property attribute: ? */
@property (nonatomic, readonly) bool isChangingInputModes;
@property (nonatomic) bool isSingleLineDocument; /* unknown property attribute: ? */
@property (nonatomic) long long keyboardAppearance; /* unknown property attribute: ? */
@property (nonatomic) long long keyboardType; /* unknown property attribute: ? */
@property (nonatomic) bool learnsCorrections; /* unknown property attribute: ? */
@property (nonatomic) bool loadKeyboardsForSiriLanguage; /* unknown property attribute: ? */
@property (nonatomic, readonly) UITextRange *markedTextRange;
@property (nonatomic, copy) NSDictionary *markedTextStyle;
@property (nonatomic, retain) UIColor *matchHighlightColor; /* unknown property attribute: ? */
@property (nonatomic) long long mathExpressionCompletionType; /* unknown property attribute: ? */
@property (nonatomic, copy) UITextInputPasswordRules *passwordRules; /* unknown property attribute: ? */
@property (nonatomic) bool preferOnlineDictation; /* unknown property attribute: ? */
@property (nonatomic) long long preferredKeyboardStyle; /* unknown property attribute: ? */
@property (nonatomic, copy) NSString *recentInputIdentifier; /* unknown property attribute: ? */
@property (nonatomic, copy) NSString *responseContext; /* unknown property attribute: ? */
@property (nonatomic) bool returnKeyGoesToNextResponder; /* unknown property attribute: ? */
@property (nonatomic) long long returnKeyType; /* unknown property attribute: ? */
@property (getter=isSecureTextEntry, nonatomic) bool secureTextEntry; /* unknown property attribute: ? */
@property (copy) UITextRange *selectedTextRange;
@property (nonatomic) long long selectionAffinity; /* unknown property attribute: ? */
@property (nonatomic, retain) UIColor *selectionBarColor; /* unknown property attribute: ? */
@property (nonatomic, retain) UIColor *selectionBorderColor; /* unknown property attribute: ? */
@property (nonatomic) double selectionBorderWidth; /* unknown property attribute: ? */
@property (nonatomic) double selectionCornerRadius; /* unknown property attribute: ? */
@property (nonatomic, retain) UIImage *selectionDragDotImage; /* unknown property attribute: ? */
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } selectionEdgeInsets; /* unknown property attribute: ? */
@property (nonatomic, retain) UIColor *selectionHighlightColor; /* unknown property attribute: ? */
@property (nonatomic) int shortcutConversionType; /* unknown property attribute: ? */
@property (nonatomic) bool showDictationButton; /* unknown property attribute: ? */
@property (nonatomic) long long smartDashesType; /* unknown property attribute: ? */
@property (nonatomic) long long smartInsertDeleteType; /* unknown property attribute: ? */
@property (nonatomic) long long smartQuotesType; /* unknown property attribute: ? */
@property (nonatomic) long long spellCheckingType; /* unknown property attribute: ? */
@property (readonly) Class superclass;
@property (nonatomic, retain) _UISupplementalLexicon *supplementalLexicon; /* unknown property attribute: ? */
@property (nonatomic, retain) UIImage *supplementalLexiconAmbiguousItemIcon; /* unknown property attribute: ? */
@property (nonatomic) bool supportsAdaptiveImageGlyph; /* unknown property attribute: ? */
@property (nonatomic) bool suppressReturnKeyStyling; /* unknown property attribute: ? */
@property (nonatomic, copy) NSString *textContentType; /* unknown property attribute: ? */
@property (nonatomic, readonly) UIView *textInputView; /* unknown property attribute: ? */
@property (nonatomic) int textLoupeVisibility; /* unknown property attribute: ? */
@property (nonatomic, readonly) UITextRange *textRangeForServicesInteraction; /* unknown property attribute: ? */
@property (nonatomic) long long textScriptType; /* unknown property attribute: ? */
@property (nonatomic) int textSelectionBehavior; /* unknown property attribute: ? */
@property (nonatomic) id textSuggestionDelegate; /* unknown property attribute: ? */
@property (nonatomic) struct __CFCharacterSet { }*textTrimmingSet; /* unknown property attribute: ? */
@property (nonatomic, readonly) <UITextInputTokenizer> *tokenizer;
@property (nonatomic) bool typingAdaptationDisabled; /* unknown property attribute: ? */
@property (nonatomic, retain) UIColor *underlineColorForSpelling; /* unknown property attribute: ? */
@property (nonatomic, retain) UIColor *underlineColorForTextAlternatives; /* unknown property attribute: ? */
@property (nonatomic) bool useAutomaticEndpointing; /* unknown property attribute: ? */
@property (nonatomic) bool useInterfaceLanguageForLocalization; /* unknown property attribute: ? */
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } validTextRange; /* unknown property attribute: ? */
@property (nonatomic, readonly) bool wasEverSecureTextEntry; /* unknown property attribute: ? */
@property unsigned long long writingToolsAllowedInputOptions; /* unknown property attribute: ? */
@property long long writingToolsBehavior; /* unknown property attribute: ? */

- (void).cxx_destruct;
- (bool)_alwaysRequireInlineCandidateView;
- (void)_didPersistFindUI:(id)arg1;
- (bool)_disallowsPresentationOfKeyboardShortcutHUD;
- (id)_ui_findNavigatorResponder;
- (void)_willPersistFindUI:(id)arg1;
- (bool)acceptsInitialEmojiKeyboard;
- (long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2;
- (void)becomeFirstResponderAndFocusFindField;
- (id)beginningOfDocument;
- (bool)canBecomeFirstResponder;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })caretRectForPosition:(id)arg1;
- (id)characterRangeAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2;
- (id)closestPositionToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)closestPositionToPoint:(struct CGPoint { double x1; double x2; })arg1 withinRange:(id)arg2;
- (long long)comparePosition:(id)arg1 toPosition:(id)arg2;
- (void)deleteBackward;
- (id)endOfDocument;
- (id)findNavigatorViewController;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })firstRectForRange:(id)arg1;
- (bool)forceDisableDictation;
- (bool)hasText;
- (unsigned long long)hostingTypeForTraitCollection:(id)arg1;
- (id)initWithFindNavigatorViewController:(id)arg1;
- (id)inputAccessoryView;
- (id)inputAccessoryViewController;
- (id)inputDashboardViewController;
- (id)inputDelegate;
- (id)inputView;
- (void)insertText:(id)arg1;
- (bool)isChangingInputModes;
- (long long)keyboardAppearance;
- (id)markedTextRange;
- (id)markedTextStyle;
- (id)nextFirstResponder;
- (id)nextResponder;
- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3;
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (id)selectedTextRange;
- (id)selectionRectsForRange:(id)arg1;
- (void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;
- (void)setCanBecomeFirstResponder:(bool)arg1;
- (void)setFindNavigatorViewController:(id)arg1;
- (void)setInputDelegate:(id)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setMarkedTextStyle:(id)arg1;
- (void)setSelectedTextRange:(id)arg1;
- (void)takeTraitsFrom:(id)arg1;
- (id)textInRange:(id)arg1;
- (id)textInputContextIdentifier;
- (id)textInputMode;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (id)tokenizer;
- (void)unmarkText;

@end
