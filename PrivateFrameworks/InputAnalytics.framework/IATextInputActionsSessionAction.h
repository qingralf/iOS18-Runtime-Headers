/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/InputAnalytics.framework/InputAnalytics
 */

@interface IATextInputActionsSessionAction : IAXPCObject {
    long long  _flagOptions;
    long long  _inputActionCountFromMergedActions;
    IATextInputActionsInputMode * _inputMode;
    unsigned long long  _insertedEmojiCount;
    unsigned long long  _insertedPunctuationCount;
    unsigned long long  _insertedTextLength;
    unsigned long long  _largestSingleDeletionLength;
    unsigned long long  _largestSingleInsertionLength;
    NSString * _processBundleId;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _relativeRangeBefore;
    unsigned long long  _removedEmojiCount;
    unsigned long long  _removedPunctuationCount;
    unsigned long long  _removedTextLength;
    long long  _source;
    long long  _textInputActionsType;
}

@property (nonatomic, readonly) IATextInputActionsSessionBeganAction *asBegan;
@property (nonatomic, readonly) IATextInputActionsSessionCopyAction *asCopy;
@property (nonatomic, readonly) IATextInputActionsSessionCutAction *asCut;
@property (nonatomic, readonly) IATextInputActionsSessionDeletionAction *asDeletion;
@property (nonatomic, readonly) IATextInputActionsSessionDictationBeganAction *asDictationBegan;
@property (nonatomic, readonly) IATextInputActionsSessionDictationEndedAction *asDictationEnded;
@property (nonatomic, readonly) IATextInputActionsSessionEndAction *asEnd;
@property (nonatomic, readonly) IATextInputActionsSessionGlomojiTapAction *asGlomojiTap;
@property (nonatomic, readonly) IATextInputActionsSessionInsertionAction *asInsertion;
@property (nonatomic, readonly) IATextInputActionsSessionKBMenuAppearAction *asKBMenuAppear;
@property (nonatomic, readonly) IATextInputActionsSessionKBMenuDismissAction *asKBMenuDismiss;
@property (nonatomic, readonly) IATextInputActionsSessionKBMenuInteractionAction *asKBMenuInteraction;
@property (nonatomic, readonly) IATextInputActionsSessionKeyboardDockItemButtonPressAction *asKeyboardDockItemButtonPress;
@property (nonatomic, readonly) IATextInputActionsSessionPasteAction *asPaste;
@property (nonatomic, readonly) IATextInputActionsSessionRedoAction *asRedo;
@property (nonatomic, readonly) IATextInputActionsSessionReplaceTextAction *asReplaceText;
@property (nonatomic, readonly) IATextInputActionsSessionReplaceWithCandidateAction *asReplaceWithCandidate;
@property (nonatomic, readonly) IATextInputActionsSessionSelectionAction *asSelection;
@property (nonatomic, readonly) IATextInputActionsSessionUndoAction *asUndo;
@property (nonatomic, readonly) bool changedContent;
@property (nonatomic) long long flagOptions;
@property (nonatomic, readonly) long long inputActionCount;
@property (nonatomic) long long inputActionCountFromMergedActions;
@property (nonatomic, copy) IATextInputActionsInputMode *inputMode;
@property (nonatomic) unsigned long long insertedEmojiCount;
@property (nonatomic) unsigned long long insertedPunctuationCount;
@property (nonatomic) unsigned long long insertedTextLength;
@property (nonatomic, readonly) bool isCapableOfTextInsertion;
@property (nonatomic) unsigned long long largestSingleDeletionLength;
@property (nonatomic) unsigned long long largestSingleInsertionLength;
@property (nonatomic, readonly) long long netCharacterCount;
@property (nonatomic, copy) NSString *processBundleId;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } relativeRangeBefore;
@property (nonatomic) unsigned long long removedEmojiCount;
@property (nonatomic) unsigned long long removedPunctuationCount;
@property (nonatomic) unsigned long long removedTextLength;
@property (nonatomic) long long source;
@property (nonatomic) long long textInputActionsType;

+ (bool)shouldSeparatelyTrackKeystrokesForSource:(long long)arg1 type:(long long)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)asBegan;
- (id)asCopy;
- (id)asCut;
- (id)asDeletion;
- (id)asDictationBegan;
- (id)asDictationEnded;
- (id)asEnd;
- (id)asGlomojiTap;
- (id)asInsertion;
- (id)asKBMenuAppear;
- (id)asKBMenuDismiss;
- (id)asKBMenuInteraction;
- (id)asKeyboardDockItemButtonPress;
- (id)asPaste;
- (id)asRedo;
- (id)asReplaceText;
- (id)asReplaceWithCandidate;
- (id)asSelection;
- (id)asUndo;
- (bool)changedContent;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)flagOptions;
- (id)initWithCoder:(id)arg1;
- (long long)inputActionCount;
- (long long)inputActionCountFromMergedActions;
- (id)inputMode;
- (unsigned long long)insertedEmojiCount;
- (unsigned long long)insertedPunctuationCount;
- (unsigned long long)insertedTextLength;
- (bool)isCapableOfTextInsertion;
- (bool)isMergeableWith:(id)arg1;
- (unsigned long long)largestSingleDeletionLength;
- (unsigned long long)largestSingleInsertionLength;
- (long long)mergeActionIfPossible:(id)arg1;
- (long long)netCharacterCount;
- (id)processBundleId;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })relativeRangeBefore;
- (unsigned long long)removedEmojiCount;
- (unsigned long long)removedPunctuationCount;
- (unsigned long long)removedTextLength;
- (void)setFlagOptions:(long long)arg1;
- (void)setInputActionCountFromMergedActions:(long long)arg1;
- (void)setInputMode:(id)arg1;
- (void)setInsertedEmojiCount:(unsigned long long)arg1;
- (void)setInsertedPunctuationCount:(unsigned long long)arg1;
- (void)setInsertedTextLength:(unsigned long long)arg1;
- (void)setInsertedTextLengthWithoutTracking:(unsigned long long)arg1;
- (void)setLargestSingleDeletionLength:(unsigned long long)arg1;
- (void)setLargestSingleInsertionLength:(unsigned long long)arg1;
- (void)setProcessBundleId:(id)arg1;
- (void)setRelativeRangeBefore:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setRemovedEmojiCount:(unsigned long long)arg1;
- (void)setRemovedPunctuationCount:(unsigned long long)arg1;
- (void)setRemovedTextLength:(unsigned long long)arg1;
- (void)setRemovedTextLengthWithoutTracking:(unsigned long long)arg1;
- (void)setSource:(long long)arg1;
- (void)setTextInputActionsType:(long long)arg1;
- (long long)source;
- (long long)textInputActionsType;

@end
