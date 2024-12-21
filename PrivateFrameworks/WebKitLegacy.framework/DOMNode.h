/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface DOMNode : DOMObject <DOMEventTarget, UIKeyInput, UIKeyboardInput, UITextInputPrivate, UITextInputTokenizer, UITextInput_Internal>

@property (nonatomic, copy) NSIndexSet *PINEntrySeparatorIndexes; /* unknown property attribute: ? */
@property (getter=_proxyTextInput, nonatomic, readonly) UIResponder<UITextInput> *__content;
@property (nonatomic, readonly) RTIInputSystemSourceSession *_rtiSourceSession; /* unknown property attribute: ? */
@property (nonatomic) bool _systemCursorAccessoriesDisabled; /* unknown property attribute: ? */
@property (nonatomic) long long _textInputSource; /* unknown property attribute: ? */
@property (nonatomic, readonly) UIView<UITextInputPrivate> *_textSelectingContainer; /* unknown property attribute: ? */
@property (nonatomic) bool acceptsDictationSearchResults; /* unknown property attribute: ? */
@property (nonatomic) bool acceptsEmoji; /* unknown property attribute: ? */
@property (nonatomic) bool acceptsFloatingKeyboard; /* unknown property attribute: ? */
@property (nonatomic) bool acceptsInitialEmojiKeyboard; /* unknown property attribute: ? */
@property (nonatomic) bool acceptsPayloads; /* unknown property attribute: ? */
@property (nonatomic) bool acceptsSplitKeyboard; /* unknown property attribute: ? */
@property unsigned long long allowedWritingToolsResultOptions; /* unknown property attribute: ? */
@property (nonatomic) long long allowsTextAnimationsType; /* unknown property attribute: ? */
@property (readonly) DOMNamedNodeMap *attributes;
@property (nonatomic) long long autocapitalizationType; /* unknown property attribute: ? */
@property (nonatomic, copy) NSString *autocorrectionContext; /* unknown property attribute: ? */
@property (nonatomic) long long autocorrectionType; /* unknown property attribute: ? */
@property (readonly, copy) NSString *baseURI;
@property (nonatomic, readonly) UITextPosition *beginningOfDocument;
@property (readonly) DOMNodeList *childNodes;
@property (nonatomic) bool contentsIsSingleValue; /* unknown property attribute: ? */
@property (nonatomic, readonly) long long cursorBehavior; /* unknown property attribute: ? */
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
@property (readonly) DOMNode *firstChild;
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
@property (nonatomic, readonly) UITextInteractionAssistant *interactionAssistant;
@property (nonatomic) bool isCarPlayIdiom; /* unknown property attribute: ? */
@property (readonly) bool isContentEditable;
@property (nonatomic) bool isSingleLineDocument; /* unknown property attribute: ? */
@property (nonatomic) long long keyboardAppearance; /* unknown property attribute: ? */
@property (nonatomic) long long keyboardType; /* unknown property attribute: ? */
@property (readonly) DOMNode *lastChild;
@property (nonatomic) bool learnsCorrections; /* unknown property attribute: ? */
@property (nonatomic) bool loadKeyboardsForSiriLanguage; /* unknown property attribute: ? */
@property (readonly, copy) NSString *localName;
@property (nonatomic, readonly) UITextRange *markedTextRange;
@property (nonatomic, copy) NSDictionary *markedTextStyle;
@property (nonatomic) UIColor *matchHighlightColor; /* unknown property attribute: ? */
@property (nonatomic) long long mathExpressionCompletionType; /* unknown property attribute: ? */
@property (readonly, copy) NSString *namespaceURI;
@property (readonly) DOMNode *nextSibling;
@property (readonly, copy) NSString *nodeName;
@property (readonly) unsigned short nodeType;
@property (copy) NSString *nodeValue;
@property (readonly) DOMDocument *ownerDocument;
@property (readonly) DOMElement *parentElement;
@property (readonly) DOMNode *parentNode;
@property (nonatomic, copy) UITextInputPasswordRules *passwordRules; /* unknown property attribute: ? */
@property (nonatomic) bool preferOnlineDictation; /* unknown property attribute: ? */
@property (nonatomic) long long preferredKeyboardStyle; /* unknown property attribute: ? */
@property (copy) NSString *prefix;
@property (readonly) DOMNode *previousSibling;
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
@property (nonatomic) long long selectionGranularity; /* unknown property attribute: ? */
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
@property (nonatomic, readonly) bool supportsEmojiImageTextAttachments; /* unknown property attribute: ? */
@property (nonatomic, readonly) bool supportsImagePaste; /* unknown property attribute: ? */
@property (nonatomic) bool suppressReturnKeyStyling; /* unknown property attribute: ? */
@property (copy) NSString *textContent;
@property (nonatomic, copy) NSString *textContentType; /* unknown property attribute: ? */
@property (nonatomic, readonly) <UITextInputSuggestionDelegate> *textInputSuggestionDelegate; /* unknown property attribute: ? */
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
@property (nonatomic, readonly) WebArchive *webArchive;
@property unsigned long long writingToolsAllowedInputOptions; /* unknown property attribute: ? */
@property long long writingToolsBehavior; /* unknown property attribute: ? */

// Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy

+ (id)_nodeFromJSWrapper:(struct OpaqueJSValue { }*)arg1;

- (void*)_linkElement;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_renderRect:(bool*)arg1;
- (struct RootObject { }*)_rootObject;
- (struct _WKQuad { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; })absoluteQuad;
- (struct _WKQuad { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; })absoluteQuadAndInsideFixedPosition:(bool*)arg1;
- (id)absoluteQuads;
- (void)addEventListener:(id)arg1 :(id)arg2 :(bool)arg3;
- (void)addEventListener:(id)arg1 listener:(id)arg2 useCapture:(bool)arg3;
- (id)appendChild:(id)arg1;
- (id)attributes;
- (id)baseURI;
- (id)borderRadii;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingBox;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingBoxUsingTransforms;
- (id)boundingBoxes;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingFrame;
- (id)childNodes;
- (id)cloneNode:(bool)arg1;
- (unsigned short)compareDocumentPosition:(id)arg1;
- (float)computedFontSize;
- (bool)contains:(id)arg1;
- (bool)containsOnlyInlineObjects;
- (void)dealloc;
- (id)description;
- (bool)dispatchEvent:(id)arg1;
- (id)endPosition;
- (id)findExplodedTextNodeAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)firstChild;
- (void)getPreviewSnapshotImage:(struct CGImage {}**)arg1 andRects:(id*)arg2;
- (bool)hasAttributes;
- (bool)hasChildNodes;
- (void)hidePlaceholder;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })hrefFrame;
- (id)hrefLabel;
- (id)hrefTarget;
- (id)hrefTitle;
- (id)hrefURL;
- (struct _WKQuad { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; })innerFrameQuad;
- (id)insertBefore:(id)arg1 :(id)arg2;
- (id)insertBefore:(id)arg1 refChild:(id)arg2;
- (void)inspect;
- (bool)isConnected;
- (bool)isContentEditable;
- (bool)isDefaultNamespace:(id)arg1;
- (bool)isEqualNode:(id)arg1;
- (bool)isHorizontalWritingMode;
- (bool)isSameNode:(id)arg1;
- (bool)isSelectableBlock;
- (bool)isSupported:(id)arg1 :(id)arg2;
- (bool)isSupported:(id)arg1 version:(id)arg2;
- (id)lastChild;
- (id)lineBoxQuads;
- (id)lineBoxRects;
- (id)localName;
- (id)lookupNamespaceURI:(id)arg1;
- (id)lookupPrefix:(id)arg1;
- (id)markupString;
- (id)namespaceURI;
- (id)nextFocusNode;
- (id)nextSibling;
- (id)nodeName;
- (unsigned short)nodeType;
- (id)nodeValue;
- (void)normalize;
- (id)ownerDocument;
- (id)parentElement;
- (id)parentNode;
- (id)prefix;
- (id)previousFocusNode;
- (id)previousSibling;
- (id)rangeOfContainingParagraph;
- (id)rangeOfContents;
- (id)removeChild:(id)arg1;
- (void)removeEventListener:(id)arg1 :(id)arg2 :(bool)arg3;
- (void)removeEventListener:(id)arg1 listener:(id)arg2 useCapture:(bool)arg3;
- (id)replaceChild:(id)arg1 :(id)arg2;
- (id)replaceChild:(id)arg1 oldChild:(id)arg2;
- (void)setNodeValue:(id)arg1;
- (void)setPrefix:(id)arg1;
- (void)setTextContent:(id)arg1;
- (void)showPlaceholderIfNecessary;
- (id)startPosition;
- (id)textContent;
- (double)textHeight;
- (id)textRects;
- (id)webArchive;
- (id)webArchiveByFilteringSubframes:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI

- (void)dd_removeResultLinks;
- (bool)dd_searchForLinkRemovingExistingDDLinksWithEndNode:(id)arg1 didModifyDOM:(bool*)arg2;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (void)_accessoryClear;
- (unsigned int)_characterAfterCaretSelection;
- (unsigned int)_characterBeforeCaretSelection;
- (unsigned int)_characterInRelationToCaretSelection:(int)arg1;
- (unsigned int)_characterInRelationToPosition:(id)arg1 amount:(int)arg2;
- (unsigned int)_characterInRelationToRangedSelection:(int)arg1;
- (id)_clampedpositionFromPosition:(id)arg1 offset:(int)arg2;
- (void)_deleteBackwardAndNotify:(bool)arg1;
- (void)_deleteByWord;
- (void)_deleteForwardAndNotify:(bool)arg1;
- (void)_deleteForwardByWord;
- (void)_deleteTextRange:(id)arg1;
- (void)_deleteToEndOfLine;
- (void)_deleteToEndOfParagraph;
- (void)_deleteToStartOfLine;
- (void)_expandSelectionToBackwardDeletionClusterWithReinsertionOut:(id*)arg1;
- (void)_expandSelectionToStartOfWordBeforeCaretSelection;
- (void)_expandSelectionToStartOfWordsBeforeCaretSelection:(int)arg1;
- (void)_extendCurrentSelection:(int)arg1;
- (id)_findBoundaryPositionClosestToPosition:(id)arg1 withGranularity:(long long)arg2;
- (id)_findDocumentBoundaryFromPosition:(id)arg1;
- (id)_findPleasingWordBoundaryFromPosition:(id)arg1;
- (id)_fontForCaretSelection;
- (id)_fullRange;
- (id)_fullText;
- (bool)_hasMarkedText;
- (bool)_hasMarkedTextOrRangedSelection;
- (int)_indexForTextPosition:(id)arg1;
- (id)_intersectionOfRange:(id)arg1 andRange:(id)arg2;
- (bool)_isEmptySelection;
- (id)_keyInput;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_lastRectForRange:(id)arg1;
- (void)_moveCurrentSelection:(int)arg1;
- (id)_moveDown:(bool)arg1 withHistory:(id)arg2;
- (id)_moveLeft:(bool)arg1 withHistory:(id)arg2;
- (id)_moveRight:(bool)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfDocument:(bool)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfLine:(bool)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfParagraph:(bool)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfWord:(bool)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfDocument:(bool)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfLine:(bool)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfParagraph:(bool)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfWord:(bool)arg1 withHistory:(id)arg2;
- (id)_moveUp:(bool)arg1 withHistory:(id)arg2;
- (id)_nextAssistedNode;
- (id)_normalizedStringForRangeComparison:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_nsrangeForTextRange:(id)arg1;
- (long long)_opposingDirectionFromDirection:(long long)arg1;
- (id)_positionAtStartOfWords:(unsigned long long)arg1 beforePosition:(id)arg2;
- (id)_positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3 withAffinityDownstream:(bool)arg4;
- (id)_positionFromPosition:(id)arg1 pastTextUnit:(long long)arg2 inDirection:(long long)arg3;
- (id)_positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;
- (id)_previousAssistedNode;
- (id)_proxyTextInput;
- (bool)_range:(id)arg1 containsRange:(id)arg2;
- (bool)_range:(id)arg1 intersectsRange:(id)arg2;
- (bool)_range:(id)arg1 isEqualToRange:(id)arg2;
- (id)_rangeFromCurrentRangeWithDelta:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)_rangeOfEnclosingWord:(id)arg1;
- (id)_rangeOfLineEnclosingPosition:(id)arg1;
- (id)_rangeOfParagraphEnclosingPosition:(id)arg1;
- (id)_rangeOfSentenceEnclosingPosition:(id)arg1;
- (id)_rangeOfSmartSelectionIncludingRange:(id)arg1;
- (id)_rangeOfText:(id)arg1 endingAtPosition:(id)arg2;
- (id)_rangeOfTextUnit:(long long)arg1 enclosingPosition:(id)arg2;
- (id)_rangeSpanningTextUnit:(long long)arg1 andPosition:(id)arg2;
- (id)_realNode;
- (void)_replaceCurrentWordWithText:(id)arg1;
- (void)_replaceDocumentWithText:(id)arg1;
- (bool)_requiresAccessoryView;
- (bool)_requiresInputView;
- (id)_responderWindow;
- (void)_scrollRectToVisible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 animated:(bool)arg2;
- (void)_selectAll;
- (id)_selectableText;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_selectedNSRange;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_selectedRangeWithinMarkedText;
- (long long)_selectionAffinity;
- (bool)_selectionAtDocumentEnd;
- (bool)_selectionAtDocumentStart;
- (bool)_selectionAtWordStart;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_selectionClipRect;
- (id)_selectionDisplayInteraction;
- (void)_setAttributedMarkedText:(id)arg1 selectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)_setCaretSelectionAtEndOfSelection;
- (void)_setGestureRecognizers;
- (id)_setHistory:(id)arg1 withExtending:(bool)arg2 withAnchor:(int)arg3 withAffinityDownstream:(bool)arg4;
- (void)_setMarkedText:(id)arg1 selectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)_setSelectedTextRange:(id)arg1 withAffinityDownstream:(bool)arg2;
- (id)_setSelectionRangeWithHistory:(id)arg1;
- (void)_setSelectionToPosition:(id)arg1;
- (bool)_shouldPerformUICalloutBarButtonReplaceAction:(SEL)arg1 forText:(id)arg2 checkAutocorrection:(bool)arg3;
- (void)_startAssistingDocumentView:(id)arg1;
- (void)_stopAssistingDocumentView:(id)arg1;
- (bool)_supportsAccessoryClear;
- (bool)_supportsAutoFill;
- (id)_textColorForCaretSelection;
- (id)_textFormElement;
- (long long)_textInputSource;
- (id)_textInteraction;
- (id)_textRangeFromNSRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)_textSelectingContainer;
- (void)_transpose;
- (id)_underlineRectsByDocumentLineForSelectionRange:(id)arg1;
- (void)_unmarkText;
- (void)_updateSelectedRects:(id)arg1 byTrimmingWhitespaceInRange:(id)arg2 inDocument:(id)arg3;
- (void)_updateSelectionWithTextRange:(id)arg1 withAffinityDownstream:(bool)arg2;
- (bool)_usesAsynchronousProtocol;
- (id)_wordContainingCaretSelection;
- (id)absoluteQuadsAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)acceptedAutoFillWord:(id)arg1;
- (bool)alwaysAttemptToShowTapHighlight;
- (id)asyncTextInput;
- (id)automaticallySelectedOverlay;
- (long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2;
- (bool)becomesEditableWithGestures;
- (void)beginFloatingCursorAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)beginSelectionChange;
- (id)beginningOfDocument;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })caretRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })caretRectForPosition:(id)arg1;
- (unsigned short)characterAfterCaretSelection;
- (unsigned short)characterInRelationToCaretSelection:(int)arg1;
- (id)characterRangeAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2;
- (void)clearMarkedText;
- (id)closestPositionToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)closestPositionToPoint:(struct CGPoint { double x1; double x2; })arg1 withinRange:(id)arg2;
- (long long)comparePosition:(id)arg1 toPosition:(id)arg2;
- (void)confirmMarkedText:(id)arg1;
- (struct CGPoint { double x1; double x2; })constrainedPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })constrainedPoint:(struct CGPoint { double x1; double x2; })arg1 withInset:(double)arg2;
- (id)content;
- (bool)contentsIsSingleValue;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertCaretRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toView:(id)arg2;
- (id)createPeripheral;
- (id)createPickerCell;
- (id)createSelectedItem;
- (id)delegate;
- (void)deleteBackward;
- (bool)editable;
- (bool)editing;
- (void)endFloatingCursor;
- (id)endOfDocument;
- (void)endSelectionChange;
- (void)extendCurrentSelection:(int)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })firstRectForRange:(id)arg1;
- (id)fontForCaretSelection;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForDictationResultPlaceholder:(id)arg1;
- (void)handleKeyWebEvent:(id)arg1;
- (bool)hasContent;
- (bool)hasSelection;
- (bool)hasText;
- (int)initialSelectionBehavior;
- (id)inputAssistantItem;
- (id)inputDelegate;
- (void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (id)insertDictationResultPlaceholder;
- (void)insertText:(id)arg1;
- (id)insertTextPlaceholderWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)interactionAssistant;
- (bool)isAutoFillMode;
- (bool)isEditable;
- (bool)isEditing;
- (bool)isLikelyToBeginPageLoad;
- (bool)isPosition:(id)arg1 atBoundary:(long long)arg2 inDirection:(long long)arg3;
- (bool)isPosition:(id)arg1 withinTextUnit:(long long)arg2 inDirection:(long long)arg3;
- (bool)isSecure;
- (bool)isShowingPlaceholder;
- (bool)isSingleLineDocument;
- (bool)isTextControl;
- (id)itemTitle;
- (long long)keyboardType;
- (id)markedTextRange;
- (id)markedTextStyle;
- (id)metadataDictionariesForDictationResults;
- (void)moveDown;
- (void)moveLeft;
- (void)moveRight;
- (void)moveUp;
- (bool)nodeCanBecomeFirstResponder;
- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (void)populateCell:(id)arg1;
- (id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3;
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;
- (id)positionFromPosition:(id)arg1 toBoundary:(long long)arg2 inDirection:(long long)arg3;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;
- (id)rangeByExtendingCurrentSelection:(int)arg1;
- (id)rangeByMovingCurrentSelection:(int)arg1;
- (id)rangeEnclosingPosition:(id)arg1 withGranularity:(long long)arg2 inDirection:(long long)arg3;
- (id)rangeOfEnclosingWord:(id)arg1;
- (id)rectsForNSRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(bool)arg2;
- (void)removeTextPlaceholder:(id)arg1;
- (void)replaceCurrentWordWithText:(id)arg1;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (void)replaceRange:(id)arg1 withText:(id)arg2 closeTyping:(bool)arg3;
- (void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2;
- (bool)requiresKeyEvents;
- (long long)returnKeyType;
- (void)selectAll;
- (id)selectedTextRange;
- (long long)selectionAffinity;
- (bool)selectionAtDocumentStart;
- (bool)selectionAtWordStart;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })selectionRange;
- (id)selectionRectsForRange:(id)arg1;
- (int)selectionState;
- (void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;
- (void)setBecomesEditableWithGestures:(bool)arg1;
- (void)setContentsIsSingleValue:(bool)arg1;
- (void)setInitialSelectionBehavior:(int)arg1;
- (void)setInputDelegate:(id)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setMarkedTextStyle:(id)arg1;
- (void)setReturnKeyType:(long long)arg1;
- (void)setSecure:(bool)arg1;
- (void)setSelectedTextRange:(id)arg1;
- (void)setSelectedTextRange:(id)arg1 withAffinityDownstream:(bool)arg2;
- (void)setSelectionAffinity:(long long)arg1;
- (void)setSelectionWithPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setSelectionWithPoint:(struct CGPoint { double x1; double x2; })arg1 inset:(double)arg2;
- (void)setText:(id)arg1;
- (void)setTextLoupeVisibility:(int)arg1;
- (void)setTextSuggestionDelegate:(id)arg1;
- (void)setTextTrimmingSet:(struct __CFCharacterSet { }*)arg1;
- (void)set_textInputSource:(long long)arg1;
- (void)setupPlaceholderTextIfNeeded;
- (bool)showsTapHighlight;
- (id)tagName;
- (void)takeTraitsFrom:(id)arg1;
- (id)tapHighlightColor;
- (id)text;
- (id)textColorForCaretSelection;
- (id)textDocument;
- (id)textInRange:(id)arg1;
- (id)textInputSuggestionDelegate;
- (id)textInputTraits;
- (id)textInputView;
- (int)textLoupeVisibility;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (id)textSuggestionDelegate;
- (struct __CFCharacterSet { }*)textTrimmingSet;
- (id)tokenizer;
- (bool)touchCalloutEnabled;
- (id)uiWebDocumentView;
- (void)unmarkText;
- (void)updateAutoscroll:(id)arg1;
- (void)updateFloatingCursorAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)updateFloatingCursorAtPoint:(struct CGPoint { double x1; double x2; })arg1 animated:(bool)arg2;
- (void)updateSelection;
- (id)urlScheme;
- (int)wordOffsetInRange:(id)arg1;

@end